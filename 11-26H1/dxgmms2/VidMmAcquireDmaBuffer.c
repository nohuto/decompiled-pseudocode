/*
 * XREFs of VidMmAcquireDmaBuffer @ 0x1400EB3D0
 * Callers:
 *     ?InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ @ 0x14009A9A8 (-InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400E78B8 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 * Callees:
 *     WaitDmaBufferNotBusy @ 0x1400EB03C (WaitDmaBufferNotBusy.c)
 *     RemoveDmaBufferFromPool @ 0x1400EB6EC (RemoveDmaBufferFromPool.c)
 *     IsAllowedToGrow @ 0x1400EB97C (IsAllowedToGrow.c)
 *     AddDmaBufferToPool @ 0x1400ED250 (AddDmaBufferToPool.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidMmAcquireDmaBuffer(__int64 a1, char a2, char a3, __int64 *a4)
{
  __int64 *i; // r14
  __int64 v9; // rbx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned int v15; // esi
  struct _ERESOURCE *v16; // rcx
  __int64 v17; // rdx
  signed __int64 v18; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  char v22; // [rsp+60h] [rbp+8h] BYREF

  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = a1;
    WdLogGlobalForLineNumber = 2366;
  }
  *a4 = 0LL;
  for ( i = (__int64 *)(a1 + 88); ; RemoveDmaBufferFromPool(a1, *i) )
  {
    while ( 1 )
    {
      v9 = *i;
      if ( !*(_BYTE *)(*i + 24) )
        break;
      if ( (unsigned __int8)IsAllowedToGrow(
                              a1,
                              *(unsigned int *)(a1 + 44),
                              *(unsigned int *)(a1 + 56),
                              *(unsigned int *)(a1 + 68)) )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          WdLogNewEntry5_WdTrace(v13);
          WdLogGlobalForLineNumber = 2493;
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v21) + 24) = *(unsigned int *)(a1 + 84);
          WdLogGlobalForLineNumber = 2495;
        }
        if ( (int)AddDmaBufferToPool(
                    a1,
                    *(unsigned int *)(a1 + 44),
                    *(unsigned int *)(a1 + 56),
                    *(unsigned int *)(a1 + 68)) < 0 )
        {
          if ( a2 )
            return 3223191810LL;
          v22 = 0;
          WaitDmaBufferNotBusy((_QWORD *)a1, v9, a3 ^ 1, &v22);
          if ( v22 )
          {
            WdLogSingleEntry1(4LL, v9);
            WdLogGlobalForLineNumber = 2522;
            return (unsigned int)-1073741130;
          }
        }
      }
      else
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          WdLogNewEntry5_WdTrace(v13);
          WdLogGlobalForLineNumber = 2530;
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v14) + 24) = v9;
          WdLogGlobalForLineNumber = 2532;
        }
        if ( a2 )
          return 3223191810LL;
        v22 = 0;
        WaitDmaBufferNotBusy((_QWORD *)a1, v9, a3 ^ 1, &v22);
        if ( v22 )
        {
          WdLogSingleEntry1(4LL, v9);
          WdLogGlobalForLineNumber = 2549;
          return (unsigned int)-1073741130;
        }
      }
    }
    if ( *(_BYTE *)(v9 + 25) != 1 )
      break;
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = v9;
    WdLogGlobalForLineNumber = 2426;
  }
  ExAcquireResourceSharedLite(Resource, 1u);
  v10 = *(_QWORD *)v9;
  if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9
    || (v11 = *(_QWORD **)(v9 + 8), *v11 != v9)
    || (*v11 = v10, *(_QWORD *)(v10 + 8) = v11, v12 = *(__int64 **)(a1 + 96), (__int64 *)*v12 != i) )
  {
    __fastfail(3u);
  }
  v16 = Resource;
  *(_QWORD *)v9 = i;
  *(_QWORD *)(v9 + 8) = v12;
  *v12 = v9;
  *(_QWORD *)(a1 + 96) = v9;
  ExReleaseResourceLite(v16);
  v17 = *(unsigned int *)(a1 + 52);
  if ( __PAIR64__(*(_DWORD *)(a1 + 64), v17) == *(_QWORD *)(v9 + 36) && *(_DWORD *)(a1 + 76) == *(_DWORD *)(v9 + 44) )
  {
    *(_OWORD *)(v9 + 16) = 0LL;
    v18 = _InterlockedIncrement64(&qword_14008A140);
    *(_BYTE *)(v9 + 24) = 1;
    *(_DWORD *)(v9 + 28) |= 1u;
    v15 = 0;
    *(_QWORD *)(v9 + 152) = v18;
    *a4 = v9;
    return v15;
  }
  v20 = *(unsigned int *)(a1 + 64);
  g_DxgMmsBugcheckExportIndex = 1;
  WdLogSingleEntry5(0LL, 270LL, 22LL, v9, v17, v20);
  WdLogGlobalForLineNumber = 213;
  return 3223191810LL;
}
