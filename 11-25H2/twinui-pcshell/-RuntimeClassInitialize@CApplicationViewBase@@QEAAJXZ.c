/*
 * XREFs of ?RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ @ 0x1800535CC
 * Callers:
 *     ?RuntimeClassInitialize@CWin32ApplicationView@@QEAAJXZ @ 0x180039DF0 (-RuntimeClassInitialize@CWin32ApplicationView@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@CWinRTApplicationView@@QEAAJXZ @ 0x1800E92A4 (-RuntimeClassInitialize@CWinRTApplicationView@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_1b0c182535871ea6c5139e310f080a01___ @ 0x180053694 (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_1b0c182535871ea6c5139.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewBase::RuntimeClassInitialize(CApplicationViewBase *this)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // edi
  _QWORD v7[2]; // [rsp+20h] [rbp-38h] BYREF
  LPVOID pv[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  pv[0] = 0LL;
  v2 = (__int64 *)((char *)this + 16);
  v3 = *v2;
  pv[1] = (LPVOID)-1LL;
  pv[2] = (LPVOID)-1LL;
  v4 = (*(__int64 (__fastcall **)(__int64 *, LPVOID *))(v3 + 32))(v2, pv);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
      (const char *)(unsigned int)v4);
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
    return v5;
  }
  else
  {
    v7[0] = pv;
    v7[1] = this;
    GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_1b0c182535871ea6c5139e310f080a01___(v7);
    if ( (unsigned int)EdpGetIsManaged() )
      *((_BYTE *)this + 56) = 1;
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
    return 0LL;
  }
}
