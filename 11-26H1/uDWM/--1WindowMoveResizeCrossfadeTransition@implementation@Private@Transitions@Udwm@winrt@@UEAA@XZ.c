/*
 * XREFs of ??1WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800D5E0C
 * Callers:
 *     ??_E?$heap_implements@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x1800D5ED0 (--_E-$heap_implements@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Ud.c)
 * Callees:
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x18001EBF8 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ?Cancel@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180040C90 (-Cancel@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAX.c)
 *     ??1?$com_ptr_t@VCAnimationResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800D5DEC (--1-$com_ptr_t@VCAnimationResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::~WindowMoveResizeCrossfadeTransition(
        winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition *this)
{
  *(_QWORD *)this = &winrt::impl::heap_implements<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition>::`vftable';
  winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::Cancel(this);
  wil::com_ptr_t<CAnimationResource,wil::err_returncode_policy>::~com_ptr_t<CAnimationResource,wil::err_returncode_policy>((CAnimationResource **)this + 8);
  wil::com_ptr_t<CAnimationResource,wil::err_returncode_policy>::~com_ptr_t<CAnimationResource,wil::err_returncode_policy>((CAnimationResource **)this + 7);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)this + 5);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)this + 4);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)this + 3);
  winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition,winrt::Udwm::Transitions::Private::WindowMoveResizeCrossfadeTransition>::~root_implements<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition,winrt::Udwm::Transitions::Private::WindowMoveResizeCrossfadeTransition>((__int64)this);
}
