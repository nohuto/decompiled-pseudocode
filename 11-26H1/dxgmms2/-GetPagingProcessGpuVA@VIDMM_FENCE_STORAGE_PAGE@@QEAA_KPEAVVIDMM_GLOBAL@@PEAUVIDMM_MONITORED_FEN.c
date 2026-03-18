/*
 * XREFs of ?GetPagingProcessGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAA_KPEAVVIDMM_GLOBAL@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I@Z @ 0x1400A539C
 * Callers:
 *     ?SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z @ 0x1401267F0 (-SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x140031E00 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035970 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_FENCE_STORAGE_PAGE::GetPagingProcessGpuVA(
        VIDMM_FENCE_STORAGE_PAGE *this,
        struct VIDMM_GLOBAL *a2,
        struct VIDMM_MONITORED_FENCE_STORAGE *a3,
        char a4)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 ***v12; // rsi
  __int64 **i; // rax
  __int64 *j; // rdx
  _BYTE v15[16]; // [rsp+50h] [rbp-18h] BYREF

  if ( (*((_BYTE *)a3 + 40) & 4) != 0 )
  {
    v8 = 0LL;
    if ( (*(_BYTE *)(**((_QWORD **)a2 + 5065) + 41064LL) & 2) != 0 )
    {
      v9 = *((_QWORD *)this + 19);
      if ( v9 )
      {
        return *(_QWORD *)(v9 + 40);
      }
      else
      {
        WdLogSingleEntry1(1LL, *((_QWORD *)a2 + 5065));
        WdLogGlobalForLineNumber = 1393;
        DxgkLogInternalTriageEvent(v10, 0x40000LL);
      }
    }
  }
  else
  {
    if ( (*((_BYTE *)a2 + 41064) & 2) == 0 )
      return 0LL;
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
      (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v15,
      (VIDMM_FENCE_STORAGE_PAGE *)((char *)this + 80),
      1);
    v12 = (__int64 ***)((char *)this + 64);
    for ( i = *v12; i != (__int64 **)v12; i = (__int64 **)*i )
    {
      if ( a2 == (struct VIDMM_GLOBAL *)i[6] )
      {
        for ( j = i[4]; j != (__int64 *)(i + 4); j = (__int64 *)*j )
        {
          if ( *((_QWORD *)a2 + 5064) == *(j - 1) && *((_DWORD *)j + 5) == 1 << a4 )
          {
            v8 = *(j - 5) + *((unsigned int *)a3 + 4);
            goto LABEL_19;
          }
        }
        break;
      }
    }
    v8 = 0LL;
LABEL_19:
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v15);
  }
  return v8;
}
