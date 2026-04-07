/*
 * XREFs of ?Release@CAnimationResource@@UEAAKXZ @ 0x1800756E0
 * Callers:
 *     ?OnPositionAnimationComplete@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18002AF08 (-OnPositionAnimationComplete@WindowMoveResizeCrossfadeTransition@implementation@Private@Transiti.c)
 *     ?Create@CAnimationResource@@SAJPEAPEAV1@@Z @ 0x180061E74 (-Create@CAnimationResource@@SAJPEAPEAV1@@Z.c)
 *     ?StartCrossfadeAnimation@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x180062510 (-StartCrossfadeAnimation@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@.c)
 *     ??1CAnimatedTransitionVisual@@MEAA@XZ @ 0x18007546C (--1CAnimatedTransitionVisual@@MEAA@XZ.c)
 *     ??1?$com_ptr_t@VCAnimationResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800D8D58 (--1-$com_ptr_t@VCAnimationResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 * Callees:
 *     ??1CAnimationResource@@IEAA@XZ @ 0x180075724 (--1CAnimationResource@@IEAA@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

__int64 __fastcall CAnimationResource::Release(CAnimationResource *this)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 4);
  if ( !v2 && this )
  {
    CAnimationResource::~CAnimationResource(this);
    DefaultHeap::Free(this);
  }
  return v2;
}
