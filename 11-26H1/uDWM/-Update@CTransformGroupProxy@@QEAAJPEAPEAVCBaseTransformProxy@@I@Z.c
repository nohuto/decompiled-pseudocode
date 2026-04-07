/*
 * XREFs of ?Update@CTransformGroupProxy@@QEAAJPEAPEAVCBaseTransformProxy@@I@Z @ 0x18008BCD4
 * Callers:
 *     ?EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ @ 0x18004F520 (-EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTransformGroupProxy::Update(
        CTransformGroupProxy *this,
        struct CBaseTransformProxy **a2,
        unsigned int a3)
{
  __int64 *v4; // r9
  __int64 v5; // r10
  __int64 v6; // rax
  __int64 v7; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+38h] [rbp-20h]

  v7 = 0LL;
  v8 = 0;
  if ( a3 > 3 )
    return 2147942487LL;
  if ( a3 )
  {
    v4 = &v7;
    v5 = a3;
    do
    {
      v6 = (__int64)*a2++;
      *(_DWORD *)v4 = *(_DWORD *)(v6 + 24);
      v4 = (__int64 *)((char *)v4 + 4);
      --v5;
    }
    while ( v5 );
  }
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *, _QWORD))(**((_QWORD **)this + 2) + 440LL))(
           *((_QWORD *)this + 2),
           *((unsigned int *)this + 6),
           &v7,
           a3);
}
