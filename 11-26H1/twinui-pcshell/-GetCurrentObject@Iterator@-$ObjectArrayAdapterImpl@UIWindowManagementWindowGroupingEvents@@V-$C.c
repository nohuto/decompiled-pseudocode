/*
 * XREFs of ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIWindowManagementWindowGroupingEvents@@V?$ComPtr@UIWindowManagementWindowGroupingEvents@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18029EED8
 * Callers:
 *     ?OnGroupWindowTemplateApplied@ViewPresentationMediator@@UEAAXPEAUHWND__@@KKUtagRECT@@1K@Z @ 0x18021C300 (-OnGroupWindowTemplateApplied@ViewPresentationMediator@@UEAAXPEAUHWND__@@KKUtagRECT@@1K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall details::ObjectArrayAdapterImpl<IWindowManagementWindowGroupingEvents,Microsoft::WRL::ComPtr<IWindowManagementWindowGroupingEvents>>::Iterator::GetCurrentObject(
        unsigned int *a1)
{
  __int64 *v1; // rbp
  unsigned int *v3; // rcx
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, _QWORD, GUID *, __int64 *); // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (__int64 *)(a1 + 2);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a1 + 1);
  v3 = (unsigned int *)*((_QWORD *)a1 + 2);
  result = v3[2];
  if ( *a1 < (unsigned int)result )
  {
    do
    {
      v5 = *(_QWORD *)v3;
      v6 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(**(_QWORD **)v3 + 32LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v1);
      result = v6(v5, *a1, &GUID_9ade62a4_f8bb_4b95_ba4f_9d2b05faafa2, v1);
      if ( (int)result >= 0 )
        break;
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x35,
        (int)"desktop\\internal\\shell\\inc\\private\\ObjectArrayAdapter.h",
        (const char *)(unsigned int)result);
      ++*a1;
      v3 = (unsigned int *)*((_QWORD *)a1 + 2);
      result = *a1;
    }
    while ( (unsigned int)result < v3[2] );
  }
  return result;
}
