/*
 * XREFs of ?GetTargetWithFocus@MPCInputRouter@@MEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800138B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800132CC (-OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuf.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1800BC6F8 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall MPCInputRouter::GetTargetWithFocus(
        MPCInputRouter *this,
        struct DeviceInfo *a2,
        struct InputContext *a3,
        struct IInputBuffer *a4,
        struct IInputTarget **a5)
{
  unsigned int v9; // edi
  __int64 v10; // r8
  char v11; // r10
  struct IInputTarget **v12; // rsi
  struct IInputTarget **v13; // rbx
  struct IInputTarget **v14; // r14
  struct IInputTarget *v15; // rbx
  struct IInputTarget *v16; // rcx
  ContextualProcessorManager *v17; // rbx
  struct IInputTarget *v18; // rcx
  int v20; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct IInputTarget *v22; // [rsp+60h] [rbp+8h] BYREF

  v9 = 0;
  if ( (unsigned __int8)std::_Atomic_storage<bool,1>::load((char *)this + 728) && v11 )
    return (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IInputTarget **))this + 82))(
             *((_QWORD *)this + 82),
             &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3,
             a5);
  v12 = a5;
  if ( a5 )
  {
    v13 = (struct IInputTarget **)((char *)this + 272);
    if ( a2 )
    {
      v22 = 0LL;
      v14 = (struct IInputTarget **)(v10 + 16);
      v15 = *v13;
      if ( *(struct IInputTarget **)(v10 + 16) != v15 )
      {
        if ( v15 )
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v15 + 8LL))(v15);
        v16 = *v14;
        *v14 = v15;
        if ( v16 )
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v16 + 16LL))(v16);
      }
      v17 = (ContextualProcessorManager *)*((_QWORD *)this + 32);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
      if ( (int)ContextualProcessorManager::OnFocusRequest(v17, a2, a3, a4, &v22) < 0 )
      {
        wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v14);
        *v12 = *v14;
        v18 = v22;
      }
      else
      {
        v18 = v22;
        if ( v22 )
        {
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v22 + 8LL))(v22);
          v18 = v22;
        }
        *v12 = v18;
      }
      if ( v18 )
      {
        v22 = 0LL;
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v18 + 16LL))(v18);
      }
    }
    else
    {
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((char *)this + 272);
      *v12 = *v13;
    }
  }
  else
  {
    v9 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6EF,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)0x80004003LL,
      v20);
  }
  return v9;
}
