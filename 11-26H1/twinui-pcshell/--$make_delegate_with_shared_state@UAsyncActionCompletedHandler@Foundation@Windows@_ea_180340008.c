/*
 * XREFs of ??$make_delegate_with_shared_state@UAsyncActionCompletedHandler@Foundation@Windows@winrt@@Ushared_type@?1???$when_any@UIAsyncAction@Foundation@Windows@winrt@@U1234@U1234@@4@YA?AUIAsyncAction@234@AEBU6234@00@Z@@impl@winrt@@YA?AU?$pair@UAsyncActionCompletedHandler@Foundation@Windows@winrt@@PEAUshared_type@?1???$when_any@UIAsyncAction@Foundation@Windows@winrt@@U1234@U1234@@4@YA?AUIAsyncAction@234@AEBU6234@00@Z@@std@@$$QEAUshared_type@?1???$when_any@UIAsyncAction@Foundation@Windows@winrt@@U1234@U1234@@1@YA?AUIAsyncAction@Foundation@Windows@1@AEBU5671@00@Z@@Z @ 0x180340008
 * Callers:
 *     winrt::when_any$_ResumeCoro$1_winrt::Windows::Foundation::IAsyncAction_winrt::Windows::Foundation::IAsyncAction_ @ 0x1803403F0 (winrt--when_any$_ResumeCoro$1_winrt--Windows--Foundation--IAsyncAction_winrt--Windows--Foundatio.c)
 *     winrt::when_any$_ResumeCoro$1_winrt::Windows::Foundation::IAsyncAction_winrt::Windows::Foundation::IAsyncAction_winrt::Windows::Foundation::IAsyncAction_ @ 0x180340680 (winrt--when_any$_ResumeCoro$1_winrt--Windows--Foundation--IAsyncAction_winrt--Windo_ea_180340680.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall ___make_delegate_with_shared_state_UAsyncActionCompletedHandler_Foundation_Windows_winrt__Ushared_type__1____when_any_UIAsyncAction_Foundation_Windows_winrt__U1234_U1234__4_YA_AUIAsyncAction_234_AEBU6234_00_Z__impl_winrt__YA_AU__pair_UAsyncActionCompletedHandler_Foundation_Windows_winrt__PEAUshared_type__1____when_any_UIAsyncAction_Foundation_Windows_winrt__U1234_U1234__4_YA_AUIAsyncAction_234_AEBU6234_00_Z__std____QEAUshared_type__1____when_any_UIAsyncAction_Foundation_Windows_winrt__U1234_U1234__1_YA_AUIAsyncAction_Foundation_Windows_1_AEBU5671_00_Z__Z(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // r8
  __int64 v5; // rcx
  _QWORD *result; // rax
  _DWORD *v7; // [rsp+40h] [rbp+8h]

  v7 = operator new(0x28uLL);
  v7[2] = 1;
  v4 = *a2;
  *a2 = 0LL;
  *((_QWORD *)v7 + 2) = v4;
  v7[6] = *((_DWORD *)a2 + 2);
  v5 = a2[2];
  a2[2] = 0LL;
  *((_QWORD *)v7 + 4) = v5;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v7 = ___7__delegate_UAsyncActionCompletedHandler_Foundation_Windows_winrt__Ushared_type__1____when_any_UIAsyncAction_Foundation_Windows_winrt__U1234_U1234__4_YA_AUIAsyncAction_234_AEBU6234_00_Z__impl_winrt__6B_;
  *a1 = v7;
  result = a1;
  a1[1] = v7 + 4;
  return result;
}
