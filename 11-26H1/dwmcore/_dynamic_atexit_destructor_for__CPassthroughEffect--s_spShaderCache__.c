/*
 * XREFs of _dynamic_atexit_destructor_for__CPassthroughEffect::s_spShaderCache__ @ 0x1802B9C80
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCShaderCache@@QEAAPEAXI@Z @ 0x180175B78 (--_GCShaderCache@@QEAAPEAXI@Z.c)
 */

CShaderCache *dynamic_atexit_destructor_for__CPassthroughEffect::s_spShaderCache__()
{
  CShaderCache *result; // rax

  if ( CPassthroughEffect::s_spShaderCache )
    return CShaderCache::`scalar deleting destructor'(CPassthroughEffect::s_spShaderCache);
  return result;
}
