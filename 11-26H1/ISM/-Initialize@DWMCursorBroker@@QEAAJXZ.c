/*
 * XREFs of ?Initialize@DWMCursorBroker@@QEAAJXZ @ 0x180043C0C
 * Callers:
 *     ?Create@DWMCursorBroker@@SAJPEAUISystemInputRouter@@PEAPEAUICursorBroker@@@Z @ 0x1800776D0 (-Create@DWMCursorBroker@@SAJPEAUISystemInputRouter@@PEAPEAUICursorBroker@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180010150 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18004453C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     ?GetInstance@InputConfigContextProvider@@SAPEAV1@XZ @ 0x1800445D8 (-GetInstance@InputConfigContextProvider@@SAPEAV1@XZ.c)
 *     ?_Destroy@?$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAXXZ @ 0x180076500 (-_Destroy@-$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMe.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x18007AFA0 (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?4VInputConfigContextProvider@@@?$ComPtr@UISystemContextProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputConfigContextProvider@@@Z @ 0x18009604C (--$-4VInputConfigContextProvider@@@-$ComPtr@UISystemContextProvider@@@WRL@Microsoft@@QEAAAEAV012.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall DWMCursorBroker::Initialize(DWMCursorBroker *this)
{
  __int64 v2; // rdx
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, HLOCAL, const wchar_t *, char *); // rbx
  int v8; // eax
  _QWORD *v9; // rsi
  int v10; // eax
  int v11; // eax
  __int64 v12; // rsi
  __int64 (__fastcall *v13)(__int64, unsigned __int64, _QWORD, _QWORD); // rdi
  int v14; // eax
  _QWORD *v15; // rsi
  struct InputConfigContextProvider *Instance; // rax
  int v17; // eax
  int v19; // eax
  int v20; // [rsp+20h] [rbp-50h]
  HLOCAL hMem; // [rsp+40h] [rbp-30h] BYREF
  char v22; // [rsp+48h] [rbp-28h]
  _BYTE v23[32]; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  unsigned int v25; // [rsp+B8h] [rbp+48h] BYREF
  void *v26; // [rsp+C0h] [rbp+50h]
  __int64 v27; // [rsp+C8h] [rbp+58h]

  v26 = &DWMCursorBroker::s_lock;
  std::_Mutex_base::lock((std::_Mutex_base *)&DWMCursorBroker::s_lock);
  hMem = 0LL;
  v22 = 0;
  v25 = 0;
  v27 = 0LL;
  v3 = InputSecurityDescriptor::QueryDescriptor(&hMem, v2, L"System\\Input\\CursorBrokerPort");
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x44,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)(unsigned int)v3,
      v20);
LABEL_9:
    if ( hMem )
    {
      if ( v22 )
        FreeTransientObjectSecurityDescriptor();
      else
        LocalFree(hMem);
      hMem = 0LL;
    }
    goto LABEL_13;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 22);
  v5 = CoreUICreate((char *)this + 176);
  v4 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x46,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)(unsigned int)v5,
      v20);
LABEL_24:
    InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&hMem);
LABEL_13:
    _Mtx_unlock((_Mtx_t)&DWMCursorBroker::s_lock);
    return v4;
  }
  v6 = *((_QWORD *)this + 22);
  v7 = *(__int64 (__fastcall **)(__int64, HLOCAL, const wchar_t *, char *))(*(_QWORD *)v6 + 56LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 25);
  v8 = v7(v6, hMem, L"System\\Input\\CursorBrokerPort", (char *)this + 200);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4B,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)(unsigned int)v8,
      v20);
  v9 = (_QWORD *)((char *)this + 184);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 23);
  v10 = CoreUIFactoryCreate((char *)this + 184);
  v4 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4D,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)(unsigned int)v10,
      v20);
    goto LABEL_24;
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned int *))(*(_QWORD *)*v9 + 24LL))(
          *v9,
          &GUID_5f9adcb2_65c8_40db_988f_dffbe437aa7a,
          &v25);
  if ( v11 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x51,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)(unsigned int)v11,
      v20);
  v12 = *v9;
  v13 = *(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD, _QWORD))(*(_QWORD *)v12 + 32LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 24);
  v14 = v13(v12, ((unsigned __int64)this + 8) & -(__int64)(this != 0LL), 0LL, v25);
  if ( v14 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x59,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)(unsigned int)v14,
      (int)L"System\\Input\\CursorBrokerEndpoint");
  v15 = (_QWORD *)((char *)this + 472);
  Instance = InputConfigContextProvider::GetInstance();
  Microsoft::WRL::ComPtr<ISystemContextProvider>::operator=<InputConfigContextProvider>((char *)this + 472, Instance);
  v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v15 + 24LL))(
          *v15,
          ((unsigned __int64)this + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
  v4 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5D,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)(unsigned int)v17,
      (int)L"System\\Input\\CursorBrokerEndpoint");
    goto LABEL_9;
  }
  v23[24] = 0;
  if ( (*(int (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*v15 + 40LL))(*v15, v23) >= 0 )
  {
    v19 = (*(__int64 (__fastcall **)(char *, _BYTE *))(*((_QWORD *)this + 2) + 24LL))((char *)this + 16, v23);
    v4 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x63,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
        (const char *)(unsigned int)v19,
        (int)L"System\\Input\\CursorBrokerEndpoint");
      std::_Variant_base<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::_Destroy(v23);
      goto LABEL_24;
    }
  }
  *((_DWORD *)this + 114) = 3;
  std::_Variant_base<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::_Destroy(v23);
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&hMem);
  _Mtx_unlock((_Mtx_t)&DWMCursorBroker::s_lock);
  return 0LL;
}
