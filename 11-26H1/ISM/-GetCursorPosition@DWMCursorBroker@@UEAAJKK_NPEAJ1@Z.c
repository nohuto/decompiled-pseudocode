/*
 * XREFs of ?GetCursorPosition@DWMCursorBroker@@UEAAJKK_NPEAJ1@Z @ 0x1801CC020
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180010150 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMCursorBroker::GetCursorPosition(
        DWMCursorBroker *this,
        unsigned int a2,
        unsigned int a3,
        char a4,
        int *a5,
        int *a6)
{
  int *v10; // r15
  int *v11; // r12
  __int64 (__fastcall *v12)(DWMCursorBroker *, _QWORD, _QWORD, __int64, __int64 *); // rbx
  __int64 v13; // r9
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v19; // [rsp+70h] [rbp+8h] BYREF

  std::_Mutex_base::lock((std::_Mutex_base *)&DWMCursorBroker::s_lock);
  v10 = a5;
  *a5 = 0;
  v11 = a6;
  *a6 = 0;
  v19 = 0LL;
  v12 = *(__int64 (__fastcall **)(DWMCursorBroker *, _QWORD, _QWORD, __int64, __int64 *))(*(_QWORD *)this + 56LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
  LOBYTE(v13) = a4;
  v14 = v12(this, a2, a3, v13, &v19);
  v15 = v14;
  if ( v14 >= 0 )
  {
    v14 = (*(__int64 (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v19 + 40LL))(v19, v10, v11);
    v15 = v14;
    if ( v14 >= 0 )
    {
      v15 = 0;
      goto LABEL_7;
    }
    v16 = 827LL;
  }
  else
  {
    v16 = 826LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
    (const char *)(unsigned int)v14);
LABEL_7:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
  _Mtx_unlock((_Mtx_t)&DWMCursorBroker::s_lock);
  return v15;
}
