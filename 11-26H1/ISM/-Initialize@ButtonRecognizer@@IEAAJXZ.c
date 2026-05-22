/*
 * XREFs of ?Initialize@ButtonRecognizer@@IEAAJXZ @ 0x1801AAA5C
 * Callers:
 *     ?Create@ButtonRecognizer@@SAJPEAPEAV1@@Z @ 0x1801AA560 (-Create@ButtonRecognizer@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x18004274C (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18004453C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x18007AFA0 (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ButtonRecognizer::Initialize(ButtonRecognizer *this)
{
  wil::details **v2; // rsi
  int v3; // ebx
  unsigned __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v7; // rdx
  __int64 v8; // r9
  int Descriptor; // eax
  __int64 v10; // rdx
  wil::details *v11; // rdi
  __int64 (__fastcall *v12)(wil::details *, __int64, char *); // rbx
  unsigned __int64 v13; // r8
  wil::details *v14; // rdi
  __int64 (__fastcall *v15)(wil::details *, __int64 (__fastcall *)(void *, const void *, int), ButtonRecognizer *, _QWORD, char *); // rbx
  wil::details *v16; // rdi
  __int64 (__fastcall *v17)(wil::details *, __int64 *); // rbx
  int v18; // eax
  __int64 v19; // rdx
  wil::details *v20; // rsi
  __int64 (__fastcall *v21)(wil::details *, __int64 (__fastcall *)(__int64), ButtonRecognizer *, char *); // rdi
  int v22; // [rsp+20h] [rbp-20h]
  __int64 v23; // [rsp+30h] [rbp-10h] BYREF
  char v24; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v26; // [rsp+70h] [rbp+30h] BYREF

  *((_DWORD *)this + 6) = 1;
  *((_DWORD *)this + 5) = 0;
  *(_WORD *)((char *)this + 17) = 0;
  *((_BYTE *)this + 16) = 0;
  v2 = (wil::details **)((char *)this + 160);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 20);
  v3 = CoreUICreate(v2);
  if ( v3 < 0 )
  {
    v5 = 124LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\combobutton\\system\\lib\\buttonrecognizer.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (wil::details **)this + 21,
    *v2,
    v4);
  v23 = 0LL;
  v24 = 0;
  Descriptor = InputSecurityDescriptor::QueryDescriptor((__int64)&v23, v7, (__int64)c_wszMessagePortNames, v8, v22);
  v3 = Descriptor;
  if ( Descriptor < 0 )
  {
    v10 = 131LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\combobutton\\system\\lib\\buttonrecognizer.cpp",
      (const char *)(unsigned int)Descriptor);
    InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v23);
    return (unsigned int)v3;
  }
  v11 = *v2;
  v12 = *(__int64 (__fastcall **)(wil::details *, __int64, char *))(*(_QWORD *)*v2 + 64LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 23);
  Descriptor = v12(v11, v23, (char *)this + 184);
  v3 = Descriptor;
  if ( Descriptor < 0 )
  {
    v10 = 135LL;
    goto LABEL_13;
  }
  v14 = *v2;
  v15 = *(__int64 (__fastcall **)(wil::details *, __int64 (__fastcall *)(void *, const void *, int), ButtonRecognizer *, _QWORD, char *))(*(_QWORD *)*v2 + 104LL);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (wil::details **)this + 21,
    *((wil::details **)this + 21),
    v13);
  Descriptor = v15(v14, ButtonRecognizer::MessageProc, this, *((_QWORD *)this + 23), (char *)this + 176);
  v3 = Descriptor;
  if ( Descriptor < 0 )
  {
    v10 = 141LL;
    goto LABEL_13;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 25);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 24);
  Descriptor = CoreUICallCreateEndpointHost(*v2, (char *)this + 192, (char *)this + 200);
  v3 = Descriptor;
  if ( Descriptor < 0 )
  {
    v10 = 146LL;
    goto LABEL_13;
  }
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v23);
  v26 = 0LL;
  v16 = *v2;
  v17 = *(__int64 (__fastcall **)(wil::details *, __int64 *))(*(_QWORD *)*v2 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
  v18 = v17(v16, &v26);
  v3 = v18;
  if ( v18 < 0 )
  {
    v19 = 155LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\combobutton\\system\\lib\\buttonrecognizer.cpp",
      (const char *)(unsigned int)v18);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
    return (unsigned int)v3;
  }
  v18 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, __int64))(*(_QWORD *)v26 + 40LL))(
          v26,
          L"System\\Input\\ComboButton",
          *((_QWORD *)this + 22),
          1LL);
  v3 = v18;
  if ( v18 < 0 )
  {
    v19 = 160LL;
    goto LABEL_18;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
  v20 = *v2;
  v21 = *(__int64 (__fastcall **)(wil::details *, __int64 (__fastcall *)(__int64), ButtonRecognizer *, char *))(*(_QWORD *)v20 + 144LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 19);
  v3 = v21(v20, lambda_f1854fe2ac21130f928d03576a8a1bbe_::_lambda_invoker_cdecl_, this, (char *)this + 152);
  if ( v3 < 0 )
  {
    v5 = 172LL;
    goto LABEL_3;
  }
  return 0LL;
}
