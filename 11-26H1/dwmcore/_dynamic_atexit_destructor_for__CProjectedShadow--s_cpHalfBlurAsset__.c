/*
 * XREFs of _dynamic_atexit_destructor_for__CProjectedShadow::s_cpHalfBlurAsset__ @ 0x1802B9AF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 dynamic_atexit_destructor_for__CProjectedShadow::s_cpHalfBlurAsset__()
{
  __int64 result; // rax

  if ( CProjectedShadow::s_cpHalfBlurAsset )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)CProjectedShadow::s_cpHalfBlurAsset + 16LL))(CProjectedShadow::s_cpHalfBlurAsset);
  return result;
}
