/*
 * XREFs of _dynamic_atexit_destructor_for__CRadialGradientEffect::s_spCenteredShaderCache__ @ 0x1802B9D80
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCShaderCache@@QEAAPEAXI@Z @ 0x180175B78 (--_GCShaderCache@@QEAAPEAXI@Z.c)
 */

CShaderCache *dynamic_atexit_destructor_for__CRadialGradientEffect::s_spCenteredShaderCache__()
{
  CShaderCache *result; // rax

  if ( CRadialGradientEffect::s_spCenteredShaderCache )
    return CShaderCache::`scalar deleting destructor'(CRadialGradientEffect::s_spCenteredShaderCache);
  return result;
}
