/*
 * XREFs of ?GetCursorAppClipRect@DWMCursorBroker@@UEAAJKK_NPEAUtagRECT@@@Z @ 0x1801CBF20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180010150 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMCursorBroker::GetCursorAppClipRect(
        DWMCursorBroker *this,
        unsigned int a2,
        unsigned int a3,
        char a4,
        struct tagRECT *a5)
{
  struct tagRECT *v9; // r15
  __int64 (__fastcall *v10)(DWMCursorBroker *, _QWORD, _QWORD, __int64, __int64 *); // rbx
  __int64 v11; // r9
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v17; // [rsp+70h] [rbp+8h] BYREF

  std::_Mutex_base::lock((std::_Mutex_base *)&DWMCursorBroker::s_lock);
  v9 = a5;
  *a5 = 0LL;
  v17 = 0LL;
  v10 = *(__int64 (__fastcall **)(DWMCursorBroker *, _QWORD, _QWORD, __int64, __int64 *))(*(_QWORD *)this + 56LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
  LOBYTE(v11) = a4;
  v12 = v10(this, a2, a3, v11, &v17);
  v13 = v12;
  if ( v12 >= 0 )
  {
    v12 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v17 + 104LL))(v17, v9);
    v13 = v12;
    if ( v12 >= 0 )
    {
      v13 = 0;
      goto LABEL_7;
    }
    v14 = 878LL;
  }
  else
  {
    v14 = 877LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
    (const char *)(unsigned int)v12);
LABEL_7:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
  _Mtx_unlock((_Mtx_t)&DWMCursorBroker::s_lock);
  return v13;
}
