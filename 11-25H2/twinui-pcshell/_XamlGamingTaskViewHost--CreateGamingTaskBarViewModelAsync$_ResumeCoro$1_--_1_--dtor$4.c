/*
 * XREFs of _XamlGamingTaskViewHost::CreateGamingTaskBarViewModelAsync$_ResumeCoro$1_::_1_::dtor$4 @ 0x1806DDA64
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_winrt_ptrto_string_dtor@@YAXQE$ADVString@Platform@@@Z @ 0x1802BC454 (-__abi_winrt_ptrto_string_dtor@@YAXQE$ADVString@Platform@@@Z.c)
 */

HRESULT __fastcall XamlGamingTaskViewHost::CreateGamingTaskBarViewModelAsync__ResumeCoro_1_::_1_::dtor_4(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx

  *(_QWORD *)(a2 + 72) = *(_QWORD *)(a2 + 208) + 96LL;
  v2 = **(_QWORD **)(a2 + 72);
  *(_QWORD *)(a2 + 80) = *(_QWORD *)(a2 + 208) + 96LL;
  *(_QWORD *)(a2 + 88) = v2;
  **(_QWORD **)(a2 + 80) = *(_QWORD *)(a2 + 88);
  *(_QWORD *)(a2 + 96) = *(_QWORD *)(a2 + 208) + 96LL;
  *(_QWORD *)(a2 + 104) = **(_QWORD **)(a2 + 96);
  return __abi_winrt_ptrto_string_dtor(*(HSTRING *)(a2 + 104));
}
