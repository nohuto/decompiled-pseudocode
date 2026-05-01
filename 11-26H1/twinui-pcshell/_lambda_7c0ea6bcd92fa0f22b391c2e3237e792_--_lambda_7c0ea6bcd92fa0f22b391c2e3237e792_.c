/*
 * XREFs of _lambda_7c0ea6bcd92fa0f22b391c2e3237e792_::_lambda_7c0ea6bcd92fa0f22b391c2e3237e792_ @ 0x180298204
 * Callers:
 *     ?_SetFrameCloakSerialized@CFrameApplicationPresentation@@AEAAXW4__MIDL___MIDL_itf_privilegedoperations_0000_0002_0001@@@Z @ 0x1801F00B0 (-_SetFrameCloakSerialized@CFrameApplicationPresentation@@AEAAXW4__MIDL___MIDL_itf_privilegedoper.c)
 *     wistd::__invoke_void_return_wrapper_void_::__call__lambda_cfd27ea05118e91876b01966f7f941a5__&_enum_Windows::Internal::Shell::Holographic::ShellState_const_&_ @ 0x180298190 (wistd--__invoke_void_return_wrapper_void_--__call__lambda_cfd27ea05118e91876b01966f7f941a5__-_en.c)
 *     ?DropForeground@CFrameApplicationPresentation@@UEAAXW4DropForegroundOptions@@@Z @ 0x180305480 (-DropForeground@CFrameApplicationPresentation@@UEAAXW4DropForegroundOptions@@@Z.c)
 *     ?SetBackgroundColor@CFrameApplicationPresentation@@UEAAJK@Z @ 0x180305B20 (-SetBackgroundColor@CFrameApplicationPresentation@@UEAAJK@Z.c)
 *     ?SetSystemVisualAnimation@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL_ANIMATION@@@Z @ 0x180305CE0 (-SetSystemVisualAnimation@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL_ANIMATION@@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_7c0ea6bcd92fa0f22b391c2e3237e792_::_lambda_7c0ea6bcd92fa0f22b391c2e3237e792_(
        __int64 a1,
        __int64 a2,
        _DWORD *a3)
{
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = *a3;
  return a1;
}
