/*
 * XREFs of _dynamic_atexit_destructor_for__g_spProjectedShadowShaderCache__ @ 0x1801DD120
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCShaderCache@@QEAAPEAXI@Z @ 0x180175B78 (--_GCShaderCache@@QEAAPEAXI@Z.c)
 */

CShaderCache *dynamic_atexit_destructor_for__g_spProjectedShadowShaderCache__()
{
  CShaderCache *result; // rax

  if ( g_spProjectedShadowShaderCache )
    return CShaderCache::`scalar deleting destructor'(g_spProjectedShadowShaderCache);
  return result;
}
