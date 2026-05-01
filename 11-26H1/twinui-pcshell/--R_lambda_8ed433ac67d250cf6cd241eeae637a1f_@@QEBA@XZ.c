/*
 * XREFs of ??R_lambda_8ed433ac67d250cf6cd241eeae637a1f_@@QEBA@XZ @ 0x1806233EC
 * Callers:
 *     ?CreateHiddenOwnerHwnd@CopilotHotkeyManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x180623BC0 (-CreateHiddenOwnerHwnd@CopilotHotkeyManager@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource.c)
 * Callees:
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 */

ATOM _lambda_8ed433ac67d250cf6cd241eeae637a1f_::operator()()
{
  WNDCLASSW WndClass; // [rsp+20h] [rbp-58h] BYREF

  memset_0(&WndClass, 0, sizeof(WndClass));
  WndClass.lpfnWndProc = DefWindowProcW;
  WndClass.hInstance = GetModuleHandleW(0LL);
  WndClass.lpszClassName = L"CopilotHiddenOwner";
  return RegisterClassW(&WndClass);
}
