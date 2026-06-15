/*
 * XREFs of ??1?$unique_ptr@U_TOKEN_USER@@U?$default_delete@U_TOKEN_USER@@@std@@@std@@QEAA@XZ @ 0x180043334
 * Callers:
 *     ?RpcTryInitializeUserSettings@@YAJPEAVTSSession@@@Z @ 0x180018F64 (-RpcTryInitializeUserSettings@@YAJPEAVTSSession@@@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002FCE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<_TOKEN_USER>::~unique_ptr<_TOKEN_USER>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1, (const struct std::nothrow_t *)0x10);
}
