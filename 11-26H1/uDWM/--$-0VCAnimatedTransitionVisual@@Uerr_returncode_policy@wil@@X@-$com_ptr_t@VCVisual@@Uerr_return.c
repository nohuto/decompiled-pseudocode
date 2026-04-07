/*
 * XREFs of ??$?0VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@X@?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@1@@Z @ 0x1800D973C
 * Callers:
 *     ?TransferScreenVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@PEAPEAVCAnimatedTransitionVisual@@_N@Z @ 0x1800DC210 (-TransferScreenVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobal.c)
 *     ?TransferScreenVisualLive@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800DC570 (-TransferScreenVisualLive@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGl.c)
 * Callees:
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 */

CBaseObject **__fastcall wil::com_ptr_t<CVisual,wil::err_returncode_policy>::com_ptr_t<CVisual,wil::err_returncode_policy>(
        CBaseObject **a1,
        _QWORD *a2)
{
  CBaseObject **v2; // r8
  CBaseObject *v3; // rcx

  v2 = a1;
  v3 = (CBaseObject *)((*a2 + 8LL) & -(__int64)(*a2 != 0LL));
  *v2 = v3;
  if ( v3 )
    CBaseObject::AddRef(v3);
  return v2;
}
