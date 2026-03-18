/*
 * XREFs of ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x14019BAF0
 * Callers:
 *     MultiUserNtGreCleanup @ 0x14006DBA4 (MultiUserNtGreCleanup.c)
 * Callees:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x14006E3A0 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?InitializeClientReferenceCount@PDEV@@QEAAXXZ @ 0x1400749F8 (-InitializeClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     ldevUnloadImage @ 0x140101E40 (ldevUnloadImage.c)
 *     ?MultiUserDrvReleaseRemoteAdapters@@YAXXZ @ 0x14019BB88 (-MultiUserDrvReleaseRemoteAdapters@@YAXXZ.c)
 */

void __fastcall MultiUserGreCleanupDrivers(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  char *Buffer; // [rsp+30h] [rbp+8h]
  PDEV *v4; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  while ( 1 )
  {
    v2 = *(_QWORD *)(v1 + 3848);
    if ( !v2 )
      break;
    v4 = *(PDEV **)(v1 + 3848);
    PDEV::InitializeClientReferenceCount(v4);
    *(_DWORD *)(v2 + 12) = 1;
    PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v4);
  }
  MultiUserDrvReleaseRemoteAdapters();
  DxDdCleanupDxGraphics();
  while ( 1 )
  {
    Buffer = *(char **)(v1 + 1728);
    if ( !Buffer )
      break;
    *((_DWORD *)Buffer + 9) = 1;
    ldevUnloadImage(Buffer);
  }
}
