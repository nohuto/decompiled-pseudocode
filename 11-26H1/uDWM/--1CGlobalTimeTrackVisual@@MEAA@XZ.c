/*
 * XREFs of ??1CGlobalTimeTrackVisual@@MEAA@XZ @ 0x1800DA6F0
 * Callers:
 *     ??_GCGlobalTimeTrackVisual@@MEAAPEAXI@Z @ 0x1800DA8B0 (--_GCGlobalTimeTrackVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x18001E990 (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 */

void __fastcall CGlobalTimeTrackVisual::~CGlobalTimeTrackVisual(CBaseObject **this)
{
  __int64 *v2; // rcx

  v2 = (__int64 *)(this + 26);
  if ( *v2 )
    winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref(v2);
  CRectangleVisual::~CRectangleVisual(this);
}
