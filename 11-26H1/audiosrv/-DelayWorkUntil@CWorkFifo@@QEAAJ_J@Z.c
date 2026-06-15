/*
 * XREFs of ?DelayWorkUntil@CWorkFifo@@QEAAJ_J@Z @ 0x180124D84
 * Callers:
 *     ?HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z @ 0x1801254A4 (-HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z.c)
 *     ?RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x180126A34 (-RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180013110 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x18001BEB0 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     ?Initialize@CWorkFifo@@AEAAJXZ @ 0x1801256D8 (-Initialize@CWorkFifo@@AEAAJXZ.c)
 */

__int64 __fastcall CWorkFifo::DelayWorkUntil(PTP_TIMER *this, __int64 a2)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  int v5; // eax
  unsigned int v6; // edi
  double v7; // xmm0_8
  __int64 v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp+8h] BYREF
  struct _FILETIME pftDueTime; // [rsp+50h] [rbp+18h] BYREF

  v2 = (struct _Mtx_internal_imp_t *)(this + 18);
  std::_Mutex_base::lock((std::_Mutex_base *)(this + 18));
  if ( std::_Atomic_storage<bool,1>::load((__int64)(this + 17)) )
  {
LABEL_9:
    v6 = 0;
    goto LABEL_10;
  }
  v5 = CWorkFifo::Initialize((CWorkFifo *)this);
  v6 = v5;
  if ( v5 >= 0 )
  {
    PerformanceCount.QuadPart = 0LL;
    QueryPerformanceCounter(&PerformanceCount);
    if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
      v7 = (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1))
         + (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1));
    else
      v7 = (double)(int)g_u64QPCFrequency;
    v8 = (unsigned int)(int)((double)(int)PerformanceCount.LowPart * 10000000.0 / v7);
    if ( v8 < a2 )
    {
      PerformanceCount.QuadPart = v8 - a2;
      pftDueTime = (struct _FILETIME)(v8 - a2);
      *((_BYTE *)this + 137) = 1;
      SetThreadpoolTimer(this[1], &pftDueTime, 0, 0);
    }
    goto LABEL_9;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x89,
    (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\WorkFifo.h",
    (const char *)(unsigned int)v5);
LABEL_10:
  _Mtx_unlock(v2);
  return v6;
}
