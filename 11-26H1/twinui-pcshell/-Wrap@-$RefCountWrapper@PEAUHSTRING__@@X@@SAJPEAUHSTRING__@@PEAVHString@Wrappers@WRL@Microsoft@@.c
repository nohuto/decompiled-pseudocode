/*
 * XREFs of ?Wrap@?$RefCountWrapper@PEAUHSTRING__@@X@@SAJPEAUHSTRING__@@PEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x18054D248
 * Callers:
 *     ??$?RAEAPEAUIVirtualDesktop@@AEAPEAUHSTRING__@@@_lambda_78c825b2fa9af9c0786f7d639af72e8c_@@QEBA?A_PAEAPEAUIVirtualDesktop@@AEAPEAUHSTRING__@@@Z @ 0x18054B9C4 (--$-RAEAPEAUIVirtualDesktop@@AEAPEAUHSTRING__@@@_lambda_78c825b2fa9af9c0786f7d639af72e8c_@@QEBA-.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x180172954 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall RefCountWrapper<HSTRING__ *,void>::Wrap(HSTRING a1, HSTRING *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HSTRING v7; // [rsp+30h] [rbp+8h] BYREF
  HSTRING string; // [rsp+40h] [rbp+18h] BYREF

  v7 = a1;
  string = 0LL;
  v3 = Microsoft::WRL::Wrappers::HString::Set(&string, &v7);
  v4 = v3;
  if ( v3 >= 0 )
  {
    WindowsDeleteString(*a2);
    *a2 = string;
    string = 0LL;
    WindowsDeleteString(0LL);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB3,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
      (const char *)(unsigned int)v3);
    WindowsDeleteString(string);
    return v4;
  }
}
