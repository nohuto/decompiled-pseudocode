/*
 * XREFs of ?RegisterSchLog@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_SCH_LOG@@@Z @ 0x14004B33C
 * Callers:
 *     ?CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_KPEAVVIDMM_PROCESS@@W4VIDMM_SCH_LOG_TYPE@@@Z @ 0x140047988 (-CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_KPEAVVIDMM_PROCESS@@W4V.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035970 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     ?VidMmiGetLogicalAddress@@YA_KPEAX_K@Z @ 0x1400D8DB4 (-VidMmiGetLogicalAddress@@YA_KPEAX_K@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::RegisterSchLog(VIDMM_GLOBAL *this, struct VIDMM_SCH_LOG *a2)
{
  char *v2; // rdi
  bool v5; // zf
  __int64 v6; // rbx
  unsigned __int64 LogicalAddress; // rax
  int v8; // eax
  unsigned int v9; // ebx
  VIDMM_GLOBAL **v11; // rdx
  VIDMM_GLOBAL *v12; // rax
  char v13; // [rsp+20h] [rbp-38h]
  char *v14; // [rsp+40h] [rbp-18h] BYREF
  char v15; // [rsp+48h] [rbp-10h]

  v2 = (char *)this + 3768;
  v14 = (char *)this + 3768;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2, 0LL);
  *((_QWORD *)v2 + 1) = KeGetCurrentThread();
  v5 = *((_BYTE *)this + 40100) == 0;
  v15 = 1;
  if ( v5
    || (v6 = *((_QWORD *)a2 + 9),
        LogicalAddress = VidMmiGetLogicalAddress(*((void **)a2 + 10), 0LL),
        v13 = 0,
        v8 = SysMmMapPagesToIommu(
               *(_QWORD *)(*((_QWORD *)this + 3) + 224LL),
               LogicalAddress,
               v6 + 48,
               (unsigned __int64)*(unsigned int *)(v6 + 40) >> 12,
               v13,
               5,
               a2),
        v9 = v8,
        v8 >= 0) )
  {
    v11 = (VIDMM_GLOBAL **)*((_QWORD *)this + 470);
    v12 = (struct VIDMM_SCH_LOG *)((char *)a2 + 8);
    if ( *v11 != (VIDMM_GLOBAL *)((char *)this + 3752) )
      __fastfail(3u);
    *(_QWORD *)v12 = (char *)this + 3752;
    *((_QWORD *)a2 + 2) = v11;
    *v11 = v12;
    *((_QWORD *)this + 470) = v12;
    *((_QWORD *)v2 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(3LL, v8);
    WdLogGlobalForLineNumber = 485;
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v14);
    return v9;
  }
}
