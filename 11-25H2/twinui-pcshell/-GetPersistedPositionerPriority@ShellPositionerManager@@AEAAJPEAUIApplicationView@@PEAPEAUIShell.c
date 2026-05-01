/*
 * XREFs of ?GetPersistedPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x1800547BC
 * Callers:
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x18012CFF0 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18005556C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?PositionerPriority_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z @ 0x1804EC6A0 (-PositionerPriority_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall ShellPositionerManager::GetPersistedPositionerPriority(
        ShellPositionerManager *this,
        struct IApplicationView *a2,
        struct IShellPositionerPriority **a3)
{
  HWND WindowForView; // rax
  unsigned int PropW; // eax
  const struct _GUID *v6; // rdx
  int Instance; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = 0LL;
  WindowForView = ApplicationViewHelpers::GetWindowForView(a2, a2);
  if ( !WindowForView )
    return 2147943568LL;
  PropW = (unsigned int)GetPropW(WindowForView, L"ShellPositionerManager:PriorityList");
  if ( !PropW )
    return 2147943568LL;
  Instance = PositionerPriority_CreateInstance(PropW, v6, (void **)a3);
  v9 = Instance;
  if ( Instance < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x590,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)Instance);
  return v9;
}
