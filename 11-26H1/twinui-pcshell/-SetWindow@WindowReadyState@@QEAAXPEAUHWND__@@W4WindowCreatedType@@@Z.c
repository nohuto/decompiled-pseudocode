/*
 * XREFs of ?SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x180441148
 * Callers:
 *     _lambda_6f5c8d202924fda7a69e2b5dcc1ebd4e_::operator() @ 0x18043956C (_lambda_6f5c8d202924fda7a69e2b5dcc1ebd4e_--operator().c)
 *     ?SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x18043F194 (-SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Window.c)
 * Callees:
 *     ?IsReadyForPresentation@WindowReadyState@@QEAA_NXZ @ 0x18018F044 (-IsReadyForPresentation@WindowReadyState@@QEAA_NXZ.c)
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x1801C36EC (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 *     ?GetShouldWaitForLayoutCompletion@LayoutCompletedHelper@@YA_NPEAUHWND__@@@Z @ 0x18020BC5C (-GetShouldWaitForLayoutCompletion@LayoutCompletedHelper@@YA_NPEAUHWND__@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?Clear@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z @ 0x180440FDC (-Clear@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z.c)
 *     ?Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z @ 0x180441118 (-Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z.c)
 *     ?_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ @ 0x1804412CC (-_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ.c)
 */

char __fastcall WindowReadyState::SetWindow(__int64 a1, LayoutCompletedHelper *a2, int a3)
{
  bool IsReadyForPresentation; // al
  __int64 v7; // rdx
  __int64 v8; // rcx
  char v9; // r14
  HWND v10; // rdx
  bool ShouldWaitForLayoutCompletion; // al
  char result; // al
  struct tagRECT Rect; // [rsp+20h] [rbp-38h] BYREF

  IsReadyForPresentation = WindowReadyState::IsReadyForPresentation((WindowReadyState *)a1);
  *(_QWORD *)v8 = v7;
  v9 = IsReadyForPresentation;
  WindowReadyState::WaitFlags::Clear((int *)(v8 + 8), (__int64 *)v8, 6);
  if ( a2 )
  {
    ShouldWaitForLayoutCompletion = LayoutCompletedHelper::GetShouldWaitForLayoutCompletion(a2, v10);
    *(_BYTE *)(a1 + 12) = ShouldWaitForLayoutCompletion;
    if ( ShouldWaitForLayoutCompletion && a3 != 1 )
      WindowReadyState::WaitFlags::Set((int *)(a1 + 8), (__int64 *)a1, 2);
    Rect = 0LL;
    GetWindowRect((HWND)a2, &Rect);
    *(_DWORD *)(a1 + 16) = Rect.right - Rect.left;
    *(_DWORD *)(a1 + 20) = Rect.bottom - Rect.top;
    WindowReadyState::_WaitForUnfreezeIfNecessary((WindowReadyState *)a1);
  }
  result = WindowReadyState::IsReadyForPresentation((WindowReadyState *)a1);
  if ( result != v9 )
    return std::_Func_class<void,bool>::operator()(a1 + 24, result);
  return result;
}
