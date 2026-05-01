/*
 * XREFs of _wil::MakeAndInitializeOrThrow_AppViewIconLoader_Windows::Internal::ComposableShell::Multitasking::IconProperties_&_IApplicationView___Windows::UI::Xaml::Media::Imaging::IWriteableBitmap___IApplicationViewIconLoader____::_1_::dtor$0 @ 0x1806DFA63
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VIInputHostLayoutChangesHandler@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1802BE330 (--1-$ComPtr@VIInputHostLayoutChangesHandler@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall wil::MakeAndInitializeOrThrow_AppViewIconLoader_Windows::Internal::ComposableShell::Multitasking::IconProperties___IApplicationView___Windows::UI::Xaml::Media::Imaging::IWriteableBitmap___IApplicationViewIconLoader____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return Microsoft::WRL::ComPtr<Windows::Internal::Shell::IInputHostLayoutChangesHandler>::~ComPtr<Windows::Internal::Shell::IInputHostLayoutChangesHandler>(*(__int64 **)(a2 + 80));
  }
  return result;
}
