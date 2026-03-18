/*
 * XREFs of powf_0 @ 0x1802B975C
 * Callers:
 *     ?CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z @ 0x1800CFDCC (-CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z.c)
 *     ?Pow@CExpressionValueStack@@QEAAJXZ @ 0x1801BD1FC (-Pow@CExpressionValueStack@@QEAAJXZ.c)
 *     ?UnboundedInertiaPanningAtTime@CPositionMotion@@AEBAMM@Z @ 0x1801CE8F8 (-UnboundedInertiaPanningAtTime@CPositionMotion@@AEBAMM@Z.c)
 *     ?CurrentInertiaPanningVelocity@CPositionMotion@@AEBAMXZ @ 0x1801D10A0 (-CurrentInertiaPanningVelocity@CPositionMotion@@AEBAMXZ.c)
 *     ?CurrentInertiaVelocity@CScaleMotion@@MEBAMXZ @ 0x1801DBF50 (-CurrentInertiaVelocity@CScaleMotion@@MEBAMXZ.c)
 *     ?UnboundedValueAtTime@CScaleMotion@@AEBAMM@Z @ 0x180209C20 (-UnboundedValueAtTime@CScaleMotion@@AEBAMM@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl powf_0(float X, float Y)
{
  return powf(X, Y);
}
