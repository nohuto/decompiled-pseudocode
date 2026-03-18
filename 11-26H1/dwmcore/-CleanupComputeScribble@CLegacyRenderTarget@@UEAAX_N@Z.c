/*
 * XREFs of ?CleanupComputeScribble@CLegacyRenderTarget@@UEAAX_N@Z @ 0x180247220
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CLegacyRenderTarget::CleanupComputeScribble(CLegacyRenderTarget *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 5);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v1 + 256) + 48LL))(v1 + 256);
}
