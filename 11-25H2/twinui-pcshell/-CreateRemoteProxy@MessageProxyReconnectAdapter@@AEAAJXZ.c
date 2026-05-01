/*
 * XREFs of ?CreateRemoteProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x1801C31E0
 * Callers:
 *     ?AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x18064F82C (-AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall MessageProxyReconnectAdapter::CreateRemoteProxy(MessageProxyReconnectAdapter *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, PCWSTR, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, char *)); // rsi
  __int64 (__fastcall ***v7)(_QWORD, _QWORD, _QWORD); // rcx
  unsigned int v8; // ebx
  PCWSTR StringRawBuffer; // rax
  int v10; // r15d
  __int64 (__fastcall ***v11)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v12)(_QWORD, GUID *, char *); // rdi
  __int64 (__fastcall ***v14)(_QWORD, _QWORD, _QWORD); // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  unsigned int v16; // [rsp+60h] [rbp+30h] BYREF
  __int64 (__fastcall ***v17)(_QWORD, GUID *, char *); // [rsp+68h] [rbp+38h] BYREF

  v16 = 0;
  v17 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, char *, unsigned int *))(**((_QWORD **)this + 7) + 24LL))(
         *((_QWORD *)this + 7),
         (char *)this + 24,
         &v16);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 270LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"shellcommondesktopbase\\textinput\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
      (const char *)(unsigned int)v2);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
    return v3;
  }
  v5 = *((_QWORD *)this + 7);
  v6 = *(__int64 (__fastcall **)(__int64, PCWSTR, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, char *)))(*(_QWORD *)v5 + 40LL);
  v7 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v17;
  if ( v17 )
  {
    v17 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v7)[2])(v7);
  }
  v8 = v16;
  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 11), 0LL);
  v10 = v6(v5, StringRawBuffer, v8, &v17);
  if ( v10 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, __int64 (__fastcall ***)(_QWORD, GUID *, char *)))(**((_QWORD **)this + 6) + 24LL))(
      *((_QWORD *)this + 6),
      v17);
    v11 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v17;
    v12 = **v17;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 8);
    v2 = v12(v11, &GUID_6fcecfed_9cb3_47cc_8b3a_e08908965d08, (char *)this + 64);
    v3 = v2;
    if ( v2 < 0 )
    {
      v4 = 281LL;
      goto LABEL_10;
    }
    v2 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, char *), unsigned __int64))(*v17)[7])(
           v17,
           ((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
    v3 = v2;
    if ( v2 < 0 )
    {
      v4 = 282LL;
      goto LABEL_10;
    }
  }
  v14 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v17;
  if ( v17 )
  {
    v17 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v14)[2])(v14);
  }
  return (unsigned int)v10;
}
