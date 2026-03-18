/*
 * XREFs of _dynamic_atexit_destructor_for__CProjectedShadow::s_cp1xBlurAsset__ @ 0x1802B9B60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 dynamic_atexit_destructor_for__CProjectedShadow::s_cp1xBlurAsset__()
{
  __int64 result; // rax

  if ( CProjectedShadow::s_cp1xBlurAsset )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)CProjectedShadow::s_cp1xBlurAsset + 16LL))(CProjectedShadow::s_cp1xBlurAsset);
  return result;
}
