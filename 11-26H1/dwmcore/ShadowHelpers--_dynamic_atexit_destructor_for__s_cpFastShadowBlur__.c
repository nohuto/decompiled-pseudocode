/*
 * XREFs of ShadowHelpers::_dynamic_atexit_destructor_for__s_cpFastShadowBlur__ @ 0x1802B9AC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 ShadowHelpers::_dynamic_atexit_destructor_for__s_cpFastShadowBlur__()
{
  __int64 result; // rax

  if ( ShadowHelpers::s_cpFastShadowBlur )
    return (*(__int64 (__fastcall **)(struct IBitmapResource *))(*(_QWORD *)ShadowHelpers::s_cpFastShadowBlur + 16LL))(ShadowHelpers::s_cpFastShadowBlur);
  return result;
}
