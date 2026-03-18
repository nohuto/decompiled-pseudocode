/*
 * XREFs of ?CleanupAllocationCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400D3884
 * Callers:
 *     ?VidMmOpCloseAllocationCommand@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@AEAE@Z @ 0x1400D198C (-VidMmOpCloseAllocationCommand@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@AEAE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14002FF98 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?HasAnyResidencyReferences@VIDMM_ALLOC@@QEBA_NXZ @ 0x14003797C (-HasAnyResidencyReferences@VIDMM_ALLOC@@QEBA_NXZ.c)
 *     ?CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1400E573C (-CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_DEVICE::CleanupAllocationCommitment(VIDMM_DEVICE *this, __int64 ***a2)
{
  DXGPUSHLOCK *v4; // rsi
  __int64 v5; // rcx
  __int64 *v6; // r10
  int v7; // r8d
  __int64 v8; // r11
  __int64 v9; // r9
  __int64 v10; // r8
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  VIDMM_DEVICE *v13; // rax
  struct VIDMM_ALLOC **v14; // rcx
  VIDMM_DEVICE **v15; // rdx
  VIDMM_DEVICE **v16; // rdx
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  _QWORD *v20; // r8
  unsigned int i; // r9d
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx

  if ( a2 == *((__int64 ****)this + 31) )
    *((_QWORD *)this + 31) = 0LL;
  v4 = (DXGPUSHLOCK *)(*((_QWORD *)this + 2) + 144LL);
  if ( *((_QWORD *)this + 2) != -144LL && *(struct _KTHREAD **)(*((_QWORD *)this + 2) + 152LL) == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1495;
    DxgkLogInternalTriageEvent(v5, 262146LL);
  }
  DXGPUSHLOCK::AcquireExclusive(v4);
  if ( VIDMM_ALLOC::HasAnyResidencyReferences((VIDMM_ALLOC *)a2) )
  {
    if ( (byte_14008A201 & 0x20) != 0 )
    {
      v20 = (_QWORD *)*((_QWORD *)this + 2);
      for ( i = 0; i < *(_DWORD *)(*v20 + 6952LL); *(_QWORD *)(v24 + v22 + 184) = *(_QWORD *)(304 * v23 + v22 + 160) )
      {
        v22 = v20[1];
        v23 = (unsigned __int16)i++;
        v24 = 304 * v23;
        *(_QWORD *)(v24 + v22 + 168) = *(_QWORD *)(304 * v23 + v22 + 144);
        *(_QWORD *)(v24 + v22 + 176) = *(_QWORD *)(304 * v23 + v22 + 152);
      }
    }
    v6 = **a2;
    v7 = *((_DWORD *)v6 + 6);
    if ( (v7 & 1) == 0 || a2[1][1][42] == *(_QWORD *)v6[41] )
    {
      v8 = *v6;
      v9 = 304LL * ((*(_DWORD *)(*v6 + 52) >> 2) & 0x3F) + *(_QWORD *)(*((_QWORD *)this + 2) + 8LL) + 8LL;
      if ( (*((_BYTE *)a2 + 36) & 1) != 0 && (v6[3] & 0xF000) == 0x2000 )
        v10 = 0LL;
      else
        v10 = (unsigned __int16)v7 >> 12;
      v11 = *(_QWORD *)(v8 + 16);
      v12 = *(_QWORD *)(v9 + 8 * v10 + 72);
      if ( v11 <= v12 )
      {
        *(_QWORD *)(v9 + 8 * v10 + 72) = v12 - v11;
        v17 = *(_QWORD *)(v8 + 16);
        v18 = (*((_DWORD *)v6 + 6) >> 8) & 0xF;
        v19 = *(_QWORD *)(v9 + 8 * v18 + 136);
        if ( v17 > v19 )
        {
          g_DxgMmsBugcheckExportIndex = 1;
          v18 = WdLogSingleEntry5(0LL, 270LL, 68LL, v9, v19, v17);
          WdLogGlobalForLineNumber = 213;
        }
        *(_QWORD *)(v9 + 8 * v18 + 136) = v19 - v17;
      }
      else
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 68LL, v9, v12, v11);
        WdLogGlobalForLineNumber = 213;
      }
    }
    v13 = (VIDMM_DEVICE *)(a2 + 79);
    v14 = (struct VIDMM_ALLOC **)a2[79];
    if ( v14[1] != (struct VIDMM_ALLOC *)(a2 + 79)
      || (v15 = (VIDMM_DEVICE **)a2[80], *v15 != v13)
      || (*v15 = (VIDMM_DEVICE *)v14,
          v14[1] = (struct VIDMM_ALLOC *)v15,
          v16 = (VIDMM_DEVICE **)*((_QWORD *)this + 22),
          *v16 != (VIDMM_DEVICE *)((char *)this + 168)) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)v13 = (char *)this + 168;
    a2[80] = (__int64 **)v16;
    *v16 = v13;
    *((_QWORD *)this + 22) = v13;
    VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange(*((VIDMM_PROCESS_ADAPTER_INFO **)this + 2));
  }
  *((_DWORD *)a2 + 172) = 0;
  *((_QWORD *)v4 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v4, 0LL);
  KeLeaveCriticalRegion();
}
