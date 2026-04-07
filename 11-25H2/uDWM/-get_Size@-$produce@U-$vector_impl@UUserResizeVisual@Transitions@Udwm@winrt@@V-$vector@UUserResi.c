/*
 * XREFs of ?get_Size@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAI@Z @ 0x1800DFE40
 * Callers:
 *     <none>
 * Callees:
 *     ??$detach_from@I@impl@winrt@@YA?A_P$$QEAI@Z @ 0x1800DD1EC (--$detach_from@I@impl@winrt@@YA-A_P$$QEAI@Z.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>>::get_Size(
        __int64 a1)
{
  __int64 v1; // r9
  int v2; // eax
  _DWORD *v3; // r10
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = (a1 - 16) & -(__int64)(a1 != 0);
  v5 = (__int64)(*(_QWORD *)((v1 & -(__int64)(v1 != -40)) + 0x38) - *(_QWORD *)((v1 & -(__int64)(v1 != -40)) + 0x30)) >> 3;
  v2 = winrt::impl::detach_from<unsigned int>(&v5);
  *v3 = v2;
  return 0LL;
}
