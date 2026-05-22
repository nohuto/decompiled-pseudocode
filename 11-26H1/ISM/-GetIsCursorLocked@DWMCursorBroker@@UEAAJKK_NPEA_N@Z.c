/*
 * XREFs of ?GetIsCursorLocked@DWMCursorBroker@@UEAAJKK_NPEA_N@Z @ 0x1801CC1D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180010150 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMCursorBroker::GetIsCursorLocked(
        DWMCursorBroker *this,
        unsigned int a2,
        unsigned int a3,
        char a4,
        bool *a5)
{
  bool *v9; // r15
  __int64 (__fastcall *v10)(DWMCursorBroker *, _QWORD, _QWORD, __int64, __int64 *); // rbx
  __int64 v11; // r9
  int v12; // eax
  unsigned int v13; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v16; // [rsp+70h] [rbp+8h] BYREF

  std::_Mutex_base::lock((std::_Mutex_base *)&DWMCursorBroker::s_lock);
  v9 = a5;
  *a5 = 0;
  v16 = 0LL;
  v10 = *(__int64 (__fastcall **)(DWMCursorBroker *, _QWORD, _QWORD, __int64, __int64 *))(*(_QWORD *)this + 56LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
  LOBYTE(v11) = a4;
  v12 = v10(this, a2, a3, v11, &v16);
  v13 = v12;
  if ( v12 >= 0 )
  {
    *v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 88LL))(v16);
    v13 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x35D,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)(unsigned int)v12);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
  _Mtx_unlock((_Mtx_t)&DWMCursorBroker::s_lock);
  return v13;
}
