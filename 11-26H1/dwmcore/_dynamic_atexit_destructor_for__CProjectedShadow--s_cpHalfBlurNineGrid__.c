/*
 * XREFs of _dynamic_atexit_destructor_for__CProjectedShadow::s_cpHalfBlurNineGrid__ @ 0x1802B9BC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 dynamic_atexit_destructor_for__CProjectedShadow::s_cpHalfBlurNineGrid__()
{
  __int64 result; // rax

  if ( CProjectedShadow::s_cpHalfBlurNineGrid )
    return (*(__int64 (__fastcall **)(struct CBrush *))(*(_QWORD *)CProjectedShadow::s_cpHalfBlurNineGrid + 16LL))(CProjectedShadow::s_cpHalfBlurNineGrid);
  return result;
}
