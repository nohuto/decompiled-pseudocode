/*
 * XREFs of ?SetBackgroundColor@CFrameApplicationPresentation@@UEAAJK@Z @ 0x180305B20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_7c0ea6bcd92fa0f22b391c2e3237e792_::_lambda_7c0ea6bcd92fa0f22b391c2e3237e792_ @ 0x180298204 (_lambda_7c0ea6bcd92fa0f22b391c2e3237e792_--_lambda_7c0ea6bcd92fa0f22b391c2e3237e792_.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_53fb1c4a60a47562c448770c0c0ac62e___ @ 0x180303940 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_53fb1c4a60a47562c448770c0c0ac62e___.c)
 */

__int64 __fastcall CFrameApplicationPresentation::SetBackgroundColor(CFrameApplicationPresentation *this, int a2)
{
  _DWORD *v2; // r9
  int v3; // eax
  unsigned int v4; // ebx
  int v6[4]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v7[24]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = a2;
  *(_OWORD *)v6 = *(_OWORD *)lambda_7c0ea6bcd92fa0f22b391c2e3237e792_::_lambda_7c0ea6bcd92fa0f22b391c2e3237e792_(
                               (__int64)v7,
                               (__int64)this,
                               &v9);
  v3 = CFrameApplicationPresentation::_AddTaskToQueue__lambda_53fb1c4a60a47562c448770c0c0ac62e___(v2, (__int128 *)v6);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6EE,
      (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
