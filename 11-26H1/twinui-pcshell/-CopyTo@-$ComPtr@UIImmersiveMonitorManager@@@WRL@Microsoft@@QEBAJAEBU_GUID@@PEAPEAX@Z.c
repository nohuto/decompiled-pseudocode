/*
 * XREFs of ?CopyTo@?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180024C50
 * Callers:
 *     ?SubscribeToServices@VoiceAssistantPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x180024950 (-SubscribeToServices@VoiceAssistantPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?UnsubscribeFromServices@VoiceAssistantPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x180024E70 (-UnsubscribeFromServices@VoiceAssistantPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180092E50 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x180255130 (-SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?UnsubscribeFromServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x180511FD0 (-UnsubscribeFromServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::CopyTo(_QWORD *a1)
{
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *))*a1)(*a1, &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83);
}
