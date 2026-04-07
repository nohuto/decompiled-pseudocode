/*
 * XREFs of ??1CGlobalTimeTrackVisual@@MEAA@XZ @ 0x1800E11AC
 * Callers:
 *     ??_GCGlobalTimeTrackVisual@@MEAAPEAXI@Z @ 0x1800E11F0 (--_GCGlobalTimeTrackVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x180094A2C (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 */

void __fastcall CGlobalTimeTrackVisual::~CGlobalTimeTrackVisual(void **this)
{
  __int64 *v2; // rcx

  *this = &CGlobalTimeTrackVisual::`vftable';
  v2 = (__int64 *)(this + 30);
  if ( *v2 )
    winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref(v2);
  CRenderDataVisual::~CRenderDataVisual(this);
}
