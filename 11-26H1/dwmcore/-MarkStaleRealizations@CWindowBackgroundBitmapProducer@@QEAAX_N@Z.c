/*
 * XREFs of ?MarkStaleRealizations@CWindowBackgroundBitmapProducer@@QEAAX_N@Z @ 0x1800456B4
 * Callers:
 *     ?InvalidateBitmapContent@CWindowBackgroundTreatment@@QEAAXXZ @ 0x180057A88 (-InvalidateBitmapContent@CWindowBackgroundTreatment@@QEAAXXZ.c)
 * Callees:
 *     ?GetFrameTargetTime@CComposition@@QEBA_KXZ @ 0x180046630 (-GetFrameTargetTime@CComposition@@QEBA_KXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CWindowBackgroundBitmapProducer::MarkStaleRealizations(CWindowBackgroundBitmapProducer *this, char a2)
{
  _QWORD **v2; // rbx
  _QWORD **v4; // rdi
  __int64 v5; // rsi

  v2 = (_QWORD **)*((_QWORD *)this + 4);
  v4 = (_QWORD **)*((_QWORD *)this + 5);
  while ( v2 != v4 )
  {
    v5 = (__int64)*v2;
    if ( (*(int (__fastcall **)(_QWORD))(*(_QWORD *)**v2 + 24LL))(**v2) >= 0
      && (!a2
       || CComposition::GetFrameTargetTime(g_pComposition) - *(_QWORD *)(v5 + 8) >= CCommonRegistryData::m_backdropBlurCachingThrottleQPCTimeDelta) )
    {
      *(_QWORD *)(v5 + 8) = 0LL;
    }
    ++v2;
  }
}
