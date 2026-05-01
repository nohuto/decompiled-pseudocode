/*
 * XREFs of ??1?$ComPtr@VIInputHostLayoutChangesHandler@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1802C7450
 * Callers:
 *     _AppViewIconFactory::CreateImageSource_::_1_::dtor$3 @ 0x1806B248A (_AppViewIconFactory--CreateImageSource_--_1_--dtor$3.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_AppViewIconLoader_AppViewIconLoader_Windows::Internal::ComposableShell::Multitasking::IconProperties_&_IApplicationView___Windows::UI::Xaml::Media::Imaging::IWriteableBitmap___IApplicationViewIconLoader____::_1_::dtor$1 @ 0x1806B24ED (_Microsoft--WRL--Details--MakeAndInitialize_AppViewIconLoader_AppViewIconLoader_Win_ea_1806B24ED.c)
 *     _UndockedSearchAppExperienceManager::RegisterTouchKeyboardEventHandlers_::_1_::dtor$0 @ 0x1806B359F (_UndockedSearchAppExperienceManager--RegisterTouchKeyboardEventHandlers_--_1_--dtor$0.c)
 *     _wil::MakeAndInitializeOrThrow_AppViewIconLoader_Windows::Internal::ComposableShell::Multitasking::IconProperties_&_IApplicationView___Windows::UI::Xaml::Media::Imaging::IWriteableBitmap___IApplicationViewIconLoader____::_1_::dtor$0 @ 0x1806B8929 (_wil--MakeAndInitializeOrThrow_AppViewIconLoader_Windows--Internal--ComposableShell--Multitaskin.c)
 *     _SearchAppExperienceManager::_RegisterMessages_::_1_::dtor$1 @ 0x1806BEB20 (_SearchAppExperienceManager--_RegisterMessages_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Internal::Shell::IInputHostLayoutChangesHandler>::~ComPtr<Windows::Internal::Shell::IInputHostLayoutChangesHandler>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<Windows::Internal::Shell::IInputHostLayoutChangesHandler>::InternalRelease(a1);
}
