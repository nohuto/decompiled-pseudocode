/*
 * XREFs of ?OnAnimationComplete@CDisplayAnimatedVisual@@UEAAJI@Z @ 0x1800AF260
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x18008CCCC (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDisplayAnimatedVisual::OnAnimationComplete(CDisplayAnimatedVisual *this)
{
  __int64 *v1; // rbx
  int v2; // edi

  v1 = (__int64 *)((char *)this - 208);
  v2 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 26) + 200LL))((char *)this - 208);
  if ( v2 < 0 )
    CDisplayAnimatedVisual::Stop(v1, 0);
  return (unsigned int)v2;
}
