/*
 * XREFs of ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1401B5D90
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1401C0C3C (MultiUserNtGreCleanup.c)
 * Callees:
 *     ldevUnloadImage @ 0x14000D750 (ldevUnloadImage.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C97A0 (-vUnreferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?InitializeClientReferenceCount@PDEV@@QEAAXXZ @ 0x1400C985C (-InitializeClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     ?MultiUserDrvReleaseRemoteAdapters@@YAXXZ @ 0x1401B5E2C (-MultiUserDrvReleaseRemoteAdapters@@YAXXZ.c)
 */

void __fastcall MultiUserGreCleanupDrivers(__int64 a1)
{
  __int64 i; // rbx
  __int64 v2; // rdi
  __int64 *v3; // rcx
  PVOID Buffer; // [rsp+30h] [rbp+8h] BYREF

  for ( i = *(_QWORD *)(W32GetSessionState(a1) + 88);
        ;
        PDEVOBJ::vUnreferencePdev((HDEV *)&Buffer, (struct Gre::Base::SESSION_GLOBALS *)i) )
  {
    v2 = *(_QWORD *)(i + 3952);
    if ( !v2 )
      break;
    Buffer = *(PVOID *)(i + 3952);
    PDEV::InitializeClientReferenceCount((PDEV *)Buffer);
    *(_DWORD *)(v2 + 12) = 1;
  }
  MultiUserDrvReleaseRemoteAdapters();
  DxDdCleanupDxGraphics();
  while ( 1 )
  {
    Buffer = *(PVOID *)(i + 1816);
    if ( !Buffer )
      break;
    v3 = (__int64 *)Buffer;
    *((_DWORD *)Buffer + 9) = 1;
    ldevUnloadImage(v3);
  }
}
