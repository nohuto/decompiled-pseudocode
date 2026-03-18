/*
 * XREFs of ?GrepRemoveFontResource@@YAHPEBGKKKKPEAUtagDESIGNVECTOR@@K@Z @ 0x1401062B4
 * Callers:
 *     NtGdiRemoveFontResourceW @ 0x1401060F0 (NtGdiRemoveFontResourceW.c)
 * Callees:
 *     ??$GreAcquireSemaphore@$0BB@$$V@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400FE100 (--$GreAcquireSemaphore@$0BB@$$V@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KAEAIH@Z @ 0x140106418 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KAEAIH@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140166AC8 (--$GreReleaseSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@IK@Z @ 0x14028B4D4 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@IK@Z.c)
 */

__int64 __fastcall GrepRemoveFontResource(
        const unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        struct tagDESIGNVECTOR *a6,
        unsigned int a7)
{
  unsigned int v7; // esi
  unsigned int v9; // ebp
  unsigned int v10; // r14d
  __int64 v12; // rbx
  struct PFF *v13; // rax
  _QWORD v15[2]; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v16; // [rsp+88h] [rbp+20h] BYREF

  v7 = 0;
  v9 = a3;
  v10 = a2;
  if ( (a4 & 4) != 0 && a5 != (unsigned int)PsGetCurrentThreadId() )
    return 0LL;
  if ( (a4 & 8) != 0 && a5 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    return 0LL;
  v12 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96);
  v15[0] = *(_QWORD *)((-(__int64)((a4 & 0x1C) != 0) & 0xFFFFFFFFFFFFFFF8uLL) + v12 + 20392);
  if ( !v15[0] )
    return 0LL;
  GreAcquireSemaphore<17,>(v12 + 4864);
  v16 = 0;
  v13 = PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)v15, a1, v10, v9, a6, a7, &v16, 0);
  if ( v13 )
  {
    v7 = PFTOBJ::bUnloadWorkhorse((PFTOBJ *)v15, v13, v16, a4);
    if ( v7 )
      GreQuerySystemTime(v12 + 20408);
  }
  else
  {
    GreReleaseSemaphoreCommon<17,void (*)(HSEMAPHORE__ *)>(
      GreReleaseSemaphoreExclusiveInternal,
      *(_QWORD *)(v12 + 20320));
  }
  return v7;
}
