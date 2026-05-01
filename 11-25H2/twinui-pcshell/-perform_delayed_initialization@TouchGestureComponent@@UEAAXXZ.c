/*
 * XREFs of ?perform_delayed_initialization@TouchGestureComponent@@UEAAXXZ @ 0x180568280
 * Callers:
 *     <none>
 * Callees:
 *     ?DelayInitialize@TouchEdgeGestureManager@@QEAAXXZ @ 0x1800FB118 (-DelayInitialize@TouchEdgeGestureManager@@QEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenEdgeAnimations@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801F9878 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenEdgeAnimations@@@details@wil@@.c)
 *     ??0TouchGestureProcessor@@QEAA@AEBU?$com_ptr@VTouchGestureSettings@@@winrt@@@Z @ 0x18021D4BC (--0TouchGestureProcessor@@QEAA@AEBU-$com_ptr@VTouchGestureSettings@@@winrt@@@Z.c)
 *     ?Initialize@TouchGestureProcessor@@QEAAXXZ @ 0x18026FD5C (-Initialize@TouchGestureProcessor@@QEAAXXZ.c)
 *     ??1?$unique_ptr@VTouchGestureProcessor@@U?$default_delete@VTouchGestureProcessor@@@std@@@std@@QEAA@XZ @ 0x1802CF604 (--1-$unique_ptr@VTouchGestureProcessor@@U-$default_delete@VTouchGestureProcessor@@@std@@@std@@QE.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     ??R?$default_delete@VTouchGestureProcessor@@@std@@QEBAXPEAVTouchGestureProcessor@@@Z @ 0x1805673BC (--R-$default_delete@VTouchGestureProcessor@@@std@@QEBAXPEAVTouchGestureProcessor@@@Z.c)
 *     ?UpdateSuppressionRegions@TouchGestureComponent@@AEAAXXZ @ 0x180567F9C (-UpdateSuppressionRegions@TouchGestureComponent@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SuppressTouchGestures@@@details@wil@@QEAA_NXZ @ 0x180568164 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SuppressTouchGestures@@@details@w.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TouchGestureComponent::perform_delayed_initialization(TouchGestureComponent *this)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  TouchGestureProcessor *v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = operator new(0x128uLL);
  v2 = TouchGestureProcessor::TouchGestureProcessor((__int64)v7, (__int64 *)this + 12);
  v7 = 0LL;
  v4 = (TouchGestureProcessor *)*((_QWORD *)this + 11);
  *((_QWORD *)this + 11) = v2;
  if ( v4 )
    std::default_delete<TouchGestureProcessor>::operator()(v3, v4);
  std::unique_ptr<TouchGestureProcessor>::~unique_ptr<TouchGestureProcessor>(&v7);
  TouchGestureProcessor::Initialize(*((TouchGestureProcessor **)this + 11));
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputDrivenEdgeAnimations>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_InputDrivenEdgeAnimations>::GetImpl'::`2'::impl,
    1u,
    v5,
    v6);
  TouchEdgeGestureManager::DelayInitialize(*((TouchEdgeGestureManager **)this + 13));
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_SuppressTouchGestures>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_SuppressTouchGestures>::GetImpl'::`2'::impl) )
  {
    *((_BYTE *)this + 392) = 1;
    TouchGestureComponent::UpdateSuppressionRegions((TouchGestureComponent *)((char *)this - 16));
  }
}
