/*
 * XREFs of ?VidSchiValidateAllocationNotDisplayed@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC_NONPAGED@@@Z @ 0x140042F98
 * Callers:
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400D51C0 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1400E3CE8 (-UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z.c)
 *     ?CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14012500C (-CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x140007A40 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x140007FB0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiValidateAllocationNotDisplayed(
        struct _VIDSCH_GLOBAL *a1,
        struct VIDMM_GLOBAL_ALLOC_NONPAGED *a2)
{
  unsigned int i; // r8d
  __int64 v5; // r10
  int v6; // r9d
  char v7; // dl
  bool v8; // zf
  unsigned int v9; // ecx
  char v10; // al
  unsigned int v11; // ecx
  _QWORD v12[4]; // [rsp+30h] [rbp-48h] BYREF
  __int16 v13; // [rsp+50h] [rbp-28h]

  v12[0] = (char *)a1 + 2016;
  v13 = 0;
  AcquireSpinLock::Acquire((Acquire *)v12);
  for ( i = 0; i < *((_DWORD *)a1 + 12); ++i )
  {
    v5 = *((_QWORD *)a1 + i + 431);
    if ( v5 )
    {
      LOWORD(v6) = *(_WORD *)(v5 + 44296);
      while ( (_WORD)v6 )
      {
        v7 = -1;
        v8 = !_BitScanForward(&v9, (unsigned __int16)v6);
        v10 = v9;
        v11 = 0;
        if ( !v8 )
          v7 = v10;
        while ( v11 < *(unsigned __int16 *)(v5 + 44298) )
        {
          if ( *(struct VIDMM_GLOBAL_ALLOC_NONPAGED **)(((v11 + ((unsigned __int64)(unsigned int)v7 << 6)) << 6)
                                                      + v5
                                                      + 3344) == a2 )
          {
            g_DxgMmsBugcheckExportIndex = 1;
            WdLogSingleEntry5(0LL, 281LL, 257LL, a2, (unsigned int)v7, v11);
            WdLogGlobalForLineNumber = 916;
            JUMPOUT(0x1400430AFLL);
          }
          ++v11;
        }
        v6 = (unsigned __int16)v6 & ~(1 << v7);
      }
    }
  }
  AcquireSpinLock::Release((AcquireSpinLock *)v12);
}
