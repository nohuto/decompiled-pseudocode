/*
 * XREFs of _anonymous_namespace_::TransformAndNormalize @ 0x18017D4B8
 * Callers:
 *     ??$CalculateDetectedInteractions@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@PEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH23@Z @ 0x18017F098 (--$CalculateDetectedInteractions@UDwmMousewheelInteractionConfigurationPrimitive@@U-$TMILFlagsEn.c)
 * Callees:
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18017B44C (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z @ 0x18017DCF0 (-D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z.c)
 *     ?D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z @ 0x1801A0164 (-D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z.c)
 */

struct D2DVector3 *__fastcall anonymous_namespace_::TransformAndNormalize(
        struct D2DVector3 *a1,
        __int64 a2,
        const struct D2DMatrix *a3)
{
  const struct D2DVector3 *v4; // rdx
  const struct D2DMatrix *v5; // r8
  const struct D2DVector3 *v7; // rax
  struct D2DVector3 *v8; // rcx

  *(_QWORD *)a1 = *(_QWORD *)a2;
  *((_DWORD *)a1 + 2) = *(_DWORD *)(a2 + 8);
  if ( !(unsigned int)D2DMatrixIsIdentity(a3) )
  {
    v7 = D3DXVec3TransformCoord(a1, v4, v5);
    D3DXVec3Normalize(v8, v7);
  }
  return a1;
}
