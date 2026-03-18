/*
 * XREFs of VidMmInitDmaPool @ 0x1400A47A0
 * Callers:
 *     ?InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ @ 0x14009A9A8 (-InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     AddDmaBufferToPool @ 0x1400ED250 (AddDmaBufferToPool.c)
 *     UpdateFairResourceUsage @ 0x1400EDCD0 (UpdateFairResourceUsage.c)
 *     LockAllPoolForAddRemove @ 0x140115344 (LockAllPoolForAddRemove.c)
 */

__int64 __fastcall VidMmInitDmaPool(__int64 a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx
  int v8; // esi
  __int64 v9; // rcx
  int v10; // ebp
  _QWORD *v11; // rdx
  _QWORD *v12; // rcx

  if ( (*(_DWORD *)(a1 + 36) & 1) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      v2 = WdLogNewEntry5_WdTrace();
      *(_QWORD *)(v2 + 24) = a1;
      *(_QWORD *)(v2 + 32) = 2LL;
      WdLogGlobalForLineNumber = 2088;
    }
  }
  else if ( g_IsInternalReleaseOrDbg )
  {
    v3 = (_QWORD *)WdLogNewEntry5_WdTrace();
    v3[3] = a1;
    v3[4] = *(_QWORD *)(a1 + 8);
    v3[5] = 2LL;
    WdLogGlobalForLineNumber = 2096;
  }
  v4 = *(unsigned int *)(a1 + 40);
  if ( (_DWORD)v4 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    if ( ((unsigned int)v4 & *(_DWORD *)(v5 + 80)) == 0 )
    {
      WdLogSingleEntry1(1LL, v4);
      WdLogGlobalForLineNumber = 2107;
LABEL_9:
      DxgkLogInternalTriageEvent(v6, 0x40000LL);
      return 3221225485LL;
    }
    if ( (~*(_DWORD *)(v5 + 96) & (unsigned int)v4) != 0 )
    {
      WdLogSingleEntry1(1LL, v4);
      WdLogGlobalForLineNumber = 2114;
      goto LABEL_9;
    }
  }
  v8 = 0;
  while ( 1 )
  {
    v10 = AddDmaBufferToPool(a1, *(unsigned int *)(a1 + 44), *(unsigned int *)(a1 + 56), *(unsigned int *)(a1 + 68));
    if ( v10 < 0 )
      break;
    if ( (unsigned int)++v8 >= 2 )
    {
      LOBYTE(v9) = 1;
      LockAllPoolForAddRemove(v9);
      v11 = (_QWORD *)qword_14008A9C8;
      v12 = (_QWORD *)(a1 + 104);
      if ( *(__int64 **)qword_14008A9C8 != &qword_14008A9C0 )
        __fastfail(3u);
      *v12 = &qword_14008A9C0;
      *(_QWORD *)(a1 + 112) = v11;
      *v11 = v12;
      qword_14008A9C8 = a1 + 104;
      _InterlockedIncrement(&dword_14008AA80);
      UpdateFairResourceUsage();
      ExReleaseResourceLite(Resource);
      *(_DWORD *)(a1 + 36) |= 0xAu;
      return (unsigned int)v10;
    }
  }
  return (unsigned int)v10;
}
