/*
 * XREFs of ?SetCloak@CApplicationViewBase@@UEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z @ 0x1801A1A70
 * Callers:
 *     ?ApplyOperation@CWin32ApplicationView@@UEAAJPEAUIApplicationViewOperation@@@Z @ 0x18021AF20 (-ApplyOperation@CWin32ApplicationView@@UEAAJPEAUIApplicationViewOperation@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewBase::SetCloak(RTL_SRWLOCK *a1, unsigned int a2, unsigned int a3)
{
  RTL_SRWLOCK *v7; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 && ((a2 - 1LL) & a2) == 0 )
  {
    v7 = a1 + 5;
    AcquireSRWLockExclusive(a1 + 5);
    (*((void (__fastcall **)(RTL_SRWLOCK *, _QWORD, _QWORD))a1->Ptr + 62))(a1, a2, a3);
    if ( v7 )
      ReleaseSRWLockExclusive(v7);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x30,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
