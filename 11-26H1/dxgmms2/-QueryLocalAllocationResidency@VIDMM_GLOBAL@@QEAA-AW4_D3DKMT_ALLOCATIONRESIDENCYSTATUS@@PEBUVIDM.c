/*
 * XREFs of ?QueryLocalAllocationResidency@VIDMM_GLOBAL@@QEAA?AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEBUVIDMM_LOCAL_ALLOC@@@Z @ 0x14011B07C
 * Callers:
 *     ?QueryAllocationResidency@VIDMM_GLOBAL@@QEAA?AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEBUVIDMM_MULTI_ALLOC@@@Z @ 0x1400A20E4 (-QueryAllocationResidency@VIDMM_GLOBAL@@QEAA-AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEBUVIDMM_MUL.c)
 *     ?IsAllocationRepurposed@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010DFB8 (-IsAllocationRepurposed@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14002FF98 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::QueryLocalAllocationResidency(VIDMM_GLOBAL *this, const struct VIDMM_LOCAL_ALLOC *a2)
{
  _DWORD **v2; // r8
  char *v4; // r14
  char *v5; // rdi
  __int64 v6; // rsi
  unsigned int v7; // ebx
  unsigned int v8; // ebx
  _QWORD *v9; // rax
  void *v10; // rdx
  __int64 v11; // rcx
  unsigned int i; // ecx
  __int64 v13; // rcx
  ULONG_PTR ReturnLength; // [rsp+78h] [rbp+10h] BYREF

  v2 = *(_DWORD ***)a2;
  if ( *(_DWORD *)(*(_QWORD *)a2 + 72LL) )
  {
    return 1;
  }
  else if ( (*v2[46] & 0x40000028) != 0 )
  {
    return 3;
  }
  else
  {
    v4 = (char *)this + 39880;
    v5 = (char *)*((_QWORD *)a2 + 2);
    v6 = *((_QWORD *)*v2 + 2) >> 12;
    DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)this + 39880));
    while ( 1 )
    {
      v7 = 2;
      if ( !(_DWORD)v6 )
        break;
      v8 = 2000;
      ReturnLength = 0LL;
      v9 = (_QWORD *)((char *)this + 7888);
      v10 = v5;
      if ( (unsigned int)v6 < 0x7D0 )
        v8 = v6;
      LODWORD(v6) = v6 - v8;
      v11 = v8;
      do
      {
        *(v9 - 1) = v5;
        v5 += 4096;
        *v9 = 0LL;
        v9 += 2;
        --v11;
      }
      while ( v11 );
      if ( ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             v10,
             MemoryWorkingSetExList,
             (char *)this + 7880,
             16LL * v8,
             &ReturnLength) < 0
        || ReturnLength != 16LL * v8 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 6086;
        DxgkLogInternalTriageEvent(v13, 0x40000LL);
LABEL_17:
        v7 = 3;
        break;
      }
      for ( i = 0; i < v8; ++i )
      {
        if ( (*((_QWORD *)this + 2 * i + 986) & 1) == 0 && (*((_QWORD *)this + 2 * i + 986) & 0xC00000LL) != 0x400000 )
          goto LABEL_17;
        v5 += 4096;
      }
    }
    *((_QWORD *)v4 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v4, 0LL);
    KeLeaveCriticalRegion();
  }
  return v7;
}
