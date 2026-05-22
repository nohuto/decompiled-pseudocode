/*
 * XREFs of ?SetCursorPosition@DWMCursorBroker@@UEAAJKK_NJJ@Z @ 0x1801CC770
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180010150 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMCursorBroker::SetCursorPosition(
        DWMCursorBroker *this,
        unsigned int a2,
        unsigned int a3,
        char a4,
        unsigned int a5,
        unsigned int a6)
{
  __int64 (__fastcall *v10)(DWMCursorBroker *, _QWORD, _QWORD, __int64, __int64 *); // rbx
  __int64 v11; // r9
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF

  std::_Mutex_base::lock((std::_Mutex_base *)&DWMCursorBroker::s_lock);
  v17 = 0LL;
  v10 = *(__int64 (__fastcall **)(DWMCursorBroker *, _QWORD, _QWORD, __int64, __int64 *))(*(_QWORD *)this + 56LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
  LOBYTE(v11) = a4;
  v12 = v10(this, a2, a3, v11, &v17);
  v13 = v12;
  if ( v12 < 0 )
  {
    if ( a3 != 1 )
    {
      v14 = 808LL;
      goto LABEL_9;
    }
    v12 = (*(__int64 (__fastcall **)(DWMCursorBroker *, _QWORD, _QWORD))(*(_QWORD *)this + 48LL))(this, a5, a6);
    v13 = v12;
    if ( v12 < 0 )
    {
      v14 = 803LL;
      goto LABEL_9;
    }
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v17 + 24LL))(v17, a5, a6);
    v13 = v12;
    if ( v12 < 0 )
    {
      v14 = 797LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
        (const char *)(unsigned int)v12);
      goto LABEL_10;
    }
  }
  v13 = 0;
LABEL_10:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
  _Mtx_unlock((_Mtx_t)&DWMCursorBroker::s_lock);
  return v13;
}
