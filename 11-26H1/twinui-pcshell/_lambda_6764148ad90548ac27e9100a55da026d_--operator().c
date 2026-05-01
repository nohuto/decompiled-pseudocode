/*
 * XREFs of _lambda_6764148ad90548ac27e9100a55da026d_::operator() @ 0x180552040
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_9ed7a7ced0673f3c48cd8392bfbd9d70___::Run @ 0x180554AB0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_9ed7a7ced0673f3c48cd8392_ea_180554AB0.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_6764148ad90548ac27e9100a55da026d_::operator()(HSTRING **a1)
{
  HRESULT v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  PCWSTR StringRawBuffer; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  UINT32 length; // [rsp+48h] [rbp+10h] BYREF
  LPVOID v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = 0LL;
  v2 = CoCreateInstance(&CLSID_DesktopWallpaper, 0LL, 4u, &GUID_c182461f_dfac_4375_ab6e_4cc45aa7f9cc, &v9);
  v3 = v2;
  if ( v2 >= 0 )
  {
    length = 0;
    StringRawBuffer = WindowsGetStringRawBuffer(**a1, &length);
    v2 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, PCWSTR))(*(_QWORD *)v9 + 24LL))(v9, 0LL, StringRawBuffer);
    v3 = v2;
    if ( v2 >= 0 )
    {
      v2 = (*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)v9 + 184LL))(v9);
      v3 = v2;
      if ( v2 >= 0 )
      {
        v3 = 0;
        goto LABEL_9;
      }
      v4 = 1241LL;
    }
    else
    {
      v4 = 1231LL;
    }
  }
  else
  {
    v4 = 1225LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
    (const char *)(unsigned int)v2);
LABEL_9:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v9);
  return v3;
}
