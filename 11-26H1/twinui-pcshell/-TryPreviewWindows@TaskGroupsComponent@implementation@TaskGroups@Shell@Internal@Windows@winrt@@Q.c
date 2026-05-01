/*
 * XREFs of ?TryPreviewWindows@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA_NU?$array_view@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@7@W4PreviewOption@34567@I@Z @ 0x180589938
 * Callers:
 *     ?TryPreviewWindows@?$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupHost@34567@@impl@winrt@@UEAAHIPEAUstruct_Windows_Internal_ApplicationModel_WindowManagement_WindowId@23@HIPEA_N@Z @ 0x1805898F0 (-TryPreviewWindows@-$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windo.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Emplace_one_at_back@PEAUHWND__@@@?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@AEAAAEAPEAUHWND__@@$$QEAPEAU2@@Z @ 0x1802C3428 (--$_Emplace_one_at_back@PEAUHWND__@@@-$vector@PEAUHWND__@@V-$allocator@PEAUHWND__@@@std@@@std@@A.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::TryPreviewWindows(
        LPARAM a1,
        unsigned int **a2,
        int a3,
        int a4)
{
  BOOL v5; // esi
  unsigned int *v6; // rbx
  __int64 v7; // rdi
  int v8; // eax
  int v9; // ebx
  bool v10; // bl
  __int128 v12; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  LPARAM lParam; // [rsp+70h] [rbp+20h] BYREF

  lParam = a1;
  v5 = a3 == 0;
  v12 = 0LL;
  v13 = 0LL;
  v6 = *a2;
  v7 = (__int64)&(*a2)[*((unsigned int *)a2 + 2)];
  while ( v6 != (unsigned int *)v7 )
  {
    lParam = *v6;
    std::vector<HWND__ *>::_Emplace_one_at_back<HWND__ *>((__int64 *)&v12, &lParam);
    ++v6;
  }
  lParam = 0LL;
  EnumWindows((WNDENUMPROC)lambda_1ecc7178456967fe182458c6abef720a_::_lambda_invoker_cdecl_, (LPARAM)&lParam);
  v8 = DwmpActivateLivePreviewEx(v5, v12, (__int64)(*((_QWORD *)&v12 + 1) - v12) >> 3, lParam, a4, 0LL);
  v9 = v8;
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1C5,
      (int)"pcshell\\twinui\\taskgroups\\lib\\taskgroupscomponent.cpp",
      (const char *)(unsigned int)v8);
  v10 = v9 >= 0;
  if ( (_QWORD)v12 )
    std::_Deallocate<16>((void *)v12, (struct std::nothrow_t *)((v13 - v12) & 0xFFFFFFFFFFFFFFF8uLL));
  return v10;
}
