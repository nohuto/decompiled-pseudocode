/*
 * XREFs of _dynamic_atexit_destructor_for__CRadialGradientEffect::s_spNonCenteredShaderCache__ @ 0x1802B9DB0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCShaderCache@@QEAAPEAXI@Z @ 0x180175B78 (--_GCShaderCache@@QEAAPEAXI@Z.c)
 */

CShaderCache *dynamic_atexit_destructor_for__CRadialGradientEffect::s_spNonCenteredShaderCache__()
{
  CShaderCache *result; // rax

  if ( CRadialGradientEffect::s_spNonCenteredShaderCache )
    return CShaderCache::`scalar deleting destructor'(CRadialGradientEffect::s_spNonCenteredShaderCache);
  return result;
}
