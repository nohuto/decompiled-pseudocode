/*
 * XREFs of ?OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180107440
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z @ 0x1801085C4 (-SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z.c)
 *     ?AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18040A4F0 (-AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?FocusApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@_N@Z @ 0x18040B120 (-FocusApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     ?RemovedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18040D3B8 (-RemovedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall PeoplePaneViewManager::OnApplicationViewChanged(
        __int64 a1,
        struct IApplicationView *a2,
        int a3,
        unsigned int a4)
{
  __int64 (__fastcall *v7)(struct IApplicationView *, const WCHAR *, _DWORD *); // rbp
  int v8; // eax
  const WCHAR *v9; // rdx
  __int64 result; // rax
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  __int64 v16; // rdx
  _DWORD v17[6]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v19; // [rsp+58h] [rbp+10h] BYREF

  v17[0] = 0;
  v7 = *(__int64 (__fastcall **)(struct IApplicationView *, const WCHAR *, _DWORD *))(*(_QWORD *)a2 + 152LL);
  v8 = dword_1808DC64C;
  if ( !dword_1808DC64C )
  {
    v19 = 0;
    SHRegGetBOOLWithREGSAM(
      HKEY_LOCAL_MACHINE,
      L"Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell",
      L"PrereleaseExperience",
      a4,
      &v19);
    v8 = 2 - (v19 != 0);
    dword_1808DC64C = v8;
  }
  v9 = L"PeopleExperienceHostVS_ccv6fwk6gx0xp!App";
  if ( v8 != 1 )
    v9 = L"Microsoft.Windows.PeopleExperienceHost_cw5n1h2txyewy!App";
  result = v7(a2, v9, v17);
  if ( (int)result >= 0 )
  {
    if ( !v17[0] )
      return 0LL;
    if ( !a3 )
    {
      v15 = PeoplePaneViewManager::AddedApplicationView((PeoplePaneViewManager *)(a1 - 104), a2);
      if ( v15 >= 0 )
        return 0LL;
      v16 = 545LL;
      goto LABEL_23;
    }
    v11 = a3 - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = v12 - 5;
        if ( !v13 )
        {
          v15 = PeoplePaneViewManager::FocusApplicationView((PeoplePaneViewManager *)(a1 - 104), a2, 1);
          if ( v15 >= 0 )
            return 0LL;
          v16 = 553LL;
          goto LABEL_23;
        }
        v14 = v13 - 2;
        if ( !v14 )
        {
          v15 = PeoplePaneViewManager::FocusApplicationView((PeoplePaneViewManager *)(a1 - 104), a2, 0);
          if ( v15 >= 0 )
            return 0LL;
          v16 = 556LL;
          goto LABEL_23;
        }
        if ( v14 != 2 )
          return 0LL;
      }
    }
    v15 = PeoplePaneViewManager::RemovedApplicationView((PeoplePaneViewManager *)(a1 - 104), a2);
    if ( v15 >= 0 )
      return 0LL;
    v16 = 550LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v15);
    return (unsigned int)v15;
  }
  return result;
}
