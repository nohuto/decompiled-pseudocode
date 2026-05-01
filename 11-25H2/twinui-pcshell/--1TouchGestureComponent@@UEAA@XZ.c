/*
 * XREFs of ??1TouchGestureComponent@@UEAA@XZ @ 0x180567328
 * Callers:
 *     ??_G?$heap_implements@VTouchGestureComponent@@@impl@winrt@@UEAAPEAXI@Z @ 0x18056745C (--_G-$heap_implements@VTouchGestureComponent@@@impl@winrt@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??1SmartCookie@@QEAA@XZ @ 0x1800E1A08 (--1SmartCookie@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@AEAAXXZ @ 0x18028F8E4 (-unconditional_release_ref@-$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@A.c)
 *     ??1?$unique_ptr@VTouchGestureProcessor@@U?$default_delete@VTouchGestureProcessor@@@std@@@std@@QEAA@XZ @ 0x1802CF604 (--1-$unique_ptr@VTouchGestureProcessor@@U-$default_delete@VTouchGestureProcessor@@@std@@@std@@QE.c)
 */

void __fastcall TouchGestureComponent::~TouchGestureComponent(TouchGestureComponent *this)
{
  SmartCookie::~SmartCookie((TouchGestureComponent *)((char *)this + 280));
  if ( *((_QWORD *)this + 34) )
    winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref((__int64 *)this + 34);
  SmartCookie::~SmartCookie((TouchGestureComponent *)((char *)this + 144));
  if ( *((_QWORD *)this + 17) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 17);
  if ( *((_QWORD *)this + 16) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 16);
  if ( *((_QWORD *)this + 15) )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)this + 15);
  if ( *((_QWORD *)this + 14) )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)this + 14);
  std::unique_ptr<TouchGestureProcessor>::~unique_ptr<TouchGestureProcessor>((_QWORD *)this + 13);
  winrt::immersive_shell_component::~immersive_shell_component((TouchGestureComponent *)((char *)this + 16));
}
