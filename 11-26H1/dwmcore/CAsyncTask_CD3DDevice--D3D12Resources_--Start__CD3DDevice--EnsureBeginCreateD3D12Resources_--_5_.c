/*
 * XREFs of CAsyncTask_CD3DDevice::D3D12Resources_::Start__CD3DDevice::EnsureBeginCreateD3D12Resources_::_5_::_lambda_1___ @ 0x180295C04
 * Callers:
 *     ?EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ @ 0x1801D13B8 (-EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802015DC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??1?$unique_ptr@V?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@U?$default_delete@V?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@@std@@@std@@QEAA@XZ @ 0x18021F1DC (--1-$unique_ptr@V-$CAsyncTask@UD3D12Resources@CD3DDevice@@@@U-$default_delete@V-$CAsyncTask@UD3D.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     std::_Func_impl_no_alloc__CD3DDevice::EnsureBeginCreateD3D12Resources_::_5_::_lambda_1__long_CD3DDevice::D3D12Resources___::_Func_impl_no_alloc__CD3DDevice::EnsureBeginCreateD3D12Resources_::_5_::_lambda_1__long_CD3DDevice::D3D12Resources_____CD3DDevice::EnsureBeginCreateD3D12Resources_::_5_::_lambda_1__const_&_0_ @ 0x180295BB4 (std--_Func_impl_no_alloc__CD3DDevice--EnsureBeginCreateD3D12Resources_--_5_--_lambda_1__long_CD3.c)
 *     ??0?$atomic@_N@std@@QEAA@_N@Z @ 0x18029624C (--0-$atomic@_N@std@@QEAA@_N@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWork@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_WORK@@@Z @ 0x18029842C (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThreadP.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAsyncTask_CD3DDevice::D3D12Resources_::Start__CD3DDevice::EnsureBeginCreateD3D12Resources_::_5_::_lambda_1___(
        __int64 *a1,
        _QWORD *a2)
{
  char v2; // di
  _QWORD *v5; // rbx
  _QWORD *v6; // rdx
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // r9
  PTP_WORK ThreadpoolWork; // rax
  const char *v11; // r9
  int LastError; // eax
  int v14[4]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v15[7]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD *v16; // [rsp+68h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v2 = 0;
  v14[0] = 0;
  v5 = MIDL_user_allocate(0x68uLL);
  if ( v5 )
  {
    v16 = 0LL;
    v16 = std::_Func_impl_no_alloc__CD3DDevice::EnsureBeginCreateD3D12Resources_::_5_::_lambda_1__long_CD3DDevice::D3D12Resources___::_Func_impl_no_alloc__CD3DDevice::EnsureBeginCreateD3D12Resources_::_5_::_lambda_1__long_CD3DDevice::D3D12Resources_____CD3DDevice::EnsureBeginCreateD3D12Resources_::_5_::_lambda_1__const___0_(
            v15,
            a1);
    *v5 = 0LL;
    v5[8] = 0LL;
    if ( v16 )
      v5[8] = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *))*v16)(v16, v5 + 1);
    v5[9] = 0LL;
    v5[10] = 0LL;
    v5[11] = 0LL;
    *((_DWORD *)v5 + 24) = 0;
    std::atomic<bool>::atomic<bool>((char *)v5 + 100);
    v2 = 1;
  }
  else
  {
    v5 = 0LL;
  }
  *(_QWORD *)v14 = v5;
  if ( (v2 & 1) != 0 && v16 )
  {
    v6 = v15;
    LOBYTE(v6) = v16 != v15;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v16 + 32LL))(v16, v6);
  }
  if ( v5 )
  {
    ThreadpoolWork = CreateThreadpoolWork(
                       (PTP_WORK_CALLBACK)`CAsyncTask<CD3DDevice::D3D12Resources>::StartThreadpoolWork'::`2'::_lambda_1_::_lambda_invoker_cdecl_,
                       v5,
                       0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_WORK *,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<0>::Destroy(_TP_WORK *),wistd::integral_constant<unsigned __int64,0>,_TP_WORK *,_TP_WORK *,0,std::nullptr_t>>::reset(
      v5,
      ThreadpoolWork);
    if ( *v5 )
    {
      SubmitThreadpoolWork((PTP_WORK)*v5);
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x51,
                    (int)"onecoreuap\\windows\\DWM\\dwmcore\\hw\\AsyncTask.h",
                    v11);
      v7 = LastError;
      if ( LastError < 0 )
      {
        v9 = (unsigned int)LastError;
        v8 = 54LL;
        goto LABEL_14;
      }
    }
    *(_QWORD *)v14 = 0LL;
    v7 = 0;
    *a2 = v5;
    goto LABEL_17;
  }
  v7 = -2147024882;
  v8 = 52LL;
  v9 = 2147942414LL;
LABEL_14:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"onecoreuap\\windows\\DWM\\dwmcore\\hw\\AsyncTask.h",
    (const char *)v9);
LABEL_17:
  std::unique_ptr<CAsyncTask<CD3DDevice::D3D12Resources>>::~unique_ptr<CAsyncTask<CD3DDevice::D3D12Resources>>(v14);
  return v7;
}
