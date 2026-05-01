/*
 * XREFs of ?AddWndRef@CImpWorkerWndProc@@AEAAXXZ @ 0x1804B707C
 * Callers:
 *     ?CreateWorkerWindow@CImpWorkerWndProc@@IEAAPEAUHWND__@@PEAU2@KKPEAUHMENU__@@@Z @ 0x1804B7164 (-CreateWorkerWindow@CImpWorkerWndProc@@IEAAPEAUHWND__@@PEAU2@KKPEAUHMENU__@@@Z.c)
 *     ?s_WndProc@CImpWorkerWndProc@@KA_JPEAUHWND__@@I_K_J@Z @ 0x1804B7670 (-s_WndProc@CImpWorkerWndProc@@KA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_2701868344@@@details@wil@@QEAA_NXZ @ 0x1804B7634 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_2701868344@@@details@wil@@QEAA_NX.c)
 */

void __fastcall CImpWorkerWndProc::AddWndRef(HANDLE *this)
{
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_2701868344>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_2701868344>::GetImpl'::`2'::impl)
    && *((_BYTE *)this + 16)
    && ++*((_DWORD *)this + 5) == 1 )
  {
    ResetEvent(this[3]);
  }
}
