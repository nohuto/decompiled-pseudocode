/*
 * XREFs of ?GetClosestInteractiveBounds@DWMCursorBroker@@UEAAJKK_NPEAUtagRECT@@@Z @ 0x1801CBDB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180010150 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall DWMCursorBroker::GetClosestInteractiveBounds(
        DWMCursorBroker *this,
        unsigned int a2,
        unsigned int a3,
        char a4,
        struct tagRECT *a5)
{
  __int64 (__fastcall *v9)(DWMCursorBroker *, _QWORD, _QWORD, __int64, int *); // rbx
  __int64 v10; // r9
  int v11; // eax
  unsigned int v12; // ebx
  __int64 (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall *v14)(_QWORD, GUID *, __int64 *); // rdi
  int v15; // eax
  __int64 v17; // [rsp+30h] [rbp-38h] BYREF
  int v18[2]; // [rsp+38h] [rbp-30h] BYREF
  void *v19; // [rsp+40h] [rbp-28h]
  _BYTE v20[16]; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+40h]

  v19 = &DWMCursorBroker::s_lock;
  std::_Mutex_base::lock((std::_Mutex_base *)&DWMCursorBroker::s_lock);
  *a5 = 0LL;
  *(_QWORD *)v18 = 0LL;
  v9 = *(__int64 (__fastcall **)(DWMCursorBroker *, _QWORD, _QWORD, __int64, int *))(*(_QWORD *)this + 56LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v18);
  LOBYTE(v10) = a4;
  v11 = v9(this, a2, a3, v10, v18);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v17 = 0LL;
    v13 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v18;
    v14 = ***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v18;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
    v15 = v14(v13, &GUID_925481d1_82a9_4761_95ea_d779b9de7e6b, &v17);
    v12 = v15;
    if ( v15 >= 0 )
    {
      *a5 = *(struct tagRECT *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v17 + 24LL))(v17, v20);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
      v12 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x34D,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
        (const char *)(unsigned int)v15);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x34A,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)(unsigned int)v11);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v18);
  _Mtx_unlock((_Mtx_t)&DWMCursorBroker::s_lock);
  return v12;
}
