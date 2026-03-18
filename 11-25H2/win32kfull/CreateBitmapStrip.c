/*
 * XREFs of CreateBitmapStrip @ 0x1400C0830
 * Callers:
 *     xxxSetWindowNCMetrics @ 0x140149304 (xxxSetWindowNCMetrics.c)
 *     xxxSystemParametersInfoWorker @ 0x140197AB8 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x140054630 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     GreTextInitialized @ 0x1400C006C (GreTextInitialized.c)
 *     CleanupOEMBitmaps @ 0x140203110 (CleanupOEMBitmaps.c)
 */

__int64 __fastcall CreateBitmapStrip(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rbx
  int i; // edi

  if ( !(unsigned int)GreTextInitialized(a1, a2, a3) )
    return 1LL;
  CleanupOEMBitmaps();
  v6 = 0;
  v8 = W32GetUserSessionState(v5, v4) + 43160;
  v9 = v8;
  for ( i = 29; i < 39; i += 2 )
  {
    if ( *(_QWORD *)v9 )
      HMAssignmentUnlock(v8 + 16LL * v6);
    *(_DWORD *)(v9 + 8) = i;
    ++v6;
    v9 += 16LL;
  }
  return CreateDPIBitmapStrip(0LL, v7);
}
