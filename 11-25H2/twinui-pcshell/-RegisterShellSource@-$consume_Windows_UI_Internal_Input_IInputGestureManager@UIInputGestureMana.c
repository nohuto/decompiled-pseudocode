/*
 * XREFs of ?RegisterShellSource@?$consume_Windows_UI_Internal_Input_IInputGestureManager@UIInputGestureManager@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@_KAEBW4InputGestureSourceType@Input@Internal@UI@Windows@3@AEBW4InputType@56783@@Z @ 0x1800FC618
 * Callers:
 *     ?UpdateTouchEdgeGestureRegistration@TouchEdgeGestureProcessor@@AEAAXW4TouchEdgeGestureType@@@Z @ 0x1800FC364 (-UpdateTouchEdgeGestureRegistration@TouchEdgeGestureProcessor@@AEAAXW4TouchEdgeGestureType@@@Z.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureManager<winrt::Windows::UI::Internal::Input::IInputGestureManager>::RegisterShellSource(
        __int64 **a1,
        __int64 a2,
        unsigned int *a3,
        unsigned int *a4)
{
  __int64 *v4; // rcx
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // rax
  unsigned int v8; // eax
  int v10; // [rsp+30h] [rbp-28h] BYREF
  __int128 v11; // [rsp+38h] [rbp-20h]
  char v12; // [rsp+60h] [rbp+8h] BYREF

  v4 = *a1;
  v5 = *a4;
  v6 = *a3;
  v10 = 0;
  v7 = *v4;
  v11 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64))(v7 + 96))(v4, a2, v6, v5);
  return winrt::check_hresult(&v12, v8, &v10);
}
