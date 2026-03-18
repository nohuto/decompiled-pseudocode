/*
 * XREFs of ?GetLightInfo@CEnvironmentLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x18028BE10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEnvironmentLight::GetLightInfo(
        CEnvironmentLight *this,
        const struct CDrawingContext *a2,
        const struct CMILMatrix *a3,
        struct LightInfo *a4)
{
  *(_DWORD *)a4 = 4;
  return 0LL;
}
