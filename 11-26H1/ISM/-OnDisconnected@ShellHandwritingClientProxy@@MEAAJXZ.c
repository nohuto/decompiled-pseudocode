/*
 * XREFs of ?OnDisconnected@ShellHandwritingClientProxy@@MEAAJXZ @ 0x18015EC60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180073DA4 (-InternalRelease@-$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ShellHandwritingClientProxy::OnDisconnected(ShellHandwritingClientProxy *this)
{
  __int64 *v1; // rbx
  __int64 v3; // rcx

  v1 = (__int64 *)((char *)this + 48);
  v3 = *(_QWORD *)(*((_QWORD *)this + 6) + 56LL);
  if ( v3 )
    (*(void (__fastcall **)(__int64, ShellHandwritingClientProxy *))(*(_QWORD *)v3 + 32LL))(v3, this);
  Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease(v1);
  return 0LL;
}
