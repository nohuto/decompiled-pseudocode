/*
 * XREFs of ??1TouchGestureComponent@@UEAA@XZ @ 0x18058B584
 * Callers:
 *     ??_G?$heap_implements@VTouchGestureComponent@@@impl@winrt@@UEAAPEAXI@Z @ 0x18058B6BC (--_G-$heap_implements@VTouchGestureComponent@@@impl@winrt@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1SmartCookie@@QEAA@XZ @ 0x1800DB40C (--1SmartCookie@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@AEAAXXZ @ 0x18028D400 (-unconditional_release_ref@-$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@A.c)
 *     ??1?$unique_ptr@VTouchGestureProcessor@@U?$default_delete@VTouchGestureProcessor@@@std@@@std@@QEAA@XZ @ 0x1802C6920 (--1-$unique_ptr@VTouchGestureProcessor@@U-$default_delete@VTouchGestureProcessor@@@std@@@std@@QE.c)
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
