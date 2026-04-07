/*
 * XREFs of ?reset@?$com_ptr_t@VCAnimationResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041818
 * Callers:
 *     ?OnPositionAnimationComplete@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18004194C (-OnPositionAnimationComplete@WindowMoveResizeCrossfadeTransition@implementation@Private@Transiti.c)
 *     ?StartCrossfadeAnimation@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x180050CAC (-StartCrossfadeAnimation@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@.c)
 * Callees:
 *     ?Release@CAnimationResource@@UEAAKXZ @ 0x180077970 (-Release@CAnimationResource@@UEAAKXZ.c)
 */

int __fastcall wil::com_ptr_t<CAnimationResource,wil::err_returncode_policy>::reset(CAnimationResource **a1)
{
  CAnimationResource *v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    LODWORD(v1) = CAnimationResource::Release(v1);
  return (int)v1;
}
