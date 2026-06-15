/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_aefdc4d25f99d355ae0f211589b2486e_@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18014FFE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall _lambda_aefdc4d25f99d355ae0f211589b2486e_::_lambda_invoker_cdecl_(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        _QWORD *a4,
        const void *a5,
        unsigned int a6)
{
  __int64 v6; // rcx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  const void *v9; // [rsp+28h] [rbp-10h] BYREF

  v6 = a4[16];
  v8 = a6;
  v9 = a5;
  if ( !v6 )
    __fastfail(7u);
  (*(void (__fastcall **)(__int64, const void **, __int64 *))(*(_QWORD *)v6 + 32LL))(v6, &v9, &v8);
  return 0LL;
}
