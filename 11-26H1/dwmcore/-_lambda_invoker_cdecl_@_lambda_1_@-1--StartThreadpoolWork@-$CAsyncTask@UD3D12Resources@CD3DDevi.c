/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_1_@?1??StartThreadpoolWork@?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@AEAAJXZ@SA@PEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180295B60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall `CAsyncTask<CD3DDevice::D3D12Resources>::StartThreadpoolWork'::`2'::_lambda_1_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        _QWORD *Context,
        PTP_WORK Work)
{
  __int64 v3; // rcx
  char *v5; // [rsp+38h] [rbp+10h] BYREF

  v3 = Context[8];
  v5 = (char *)(Context + 9);
  if ( !v3 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  *((_DWORD *)Context + 24) = (*(__int64 (__fastcall **)(__int64, char **, PTP_WORK))(*(_QWORD *)v3 + 16LL))(
                                v3,
                                &v5,
                                Work);
  *((_BYTE *)Context + 100) = 1;
}
