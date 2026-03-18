/*
 * XREFs of ?GetLightInfo@CAmbientLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x180269710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAmbientLight::GetLightInfo(
        CAmbientLight *this,
        const struct CDrawingContext *a2,
        const struct CMILMatrix *a3,
        struct LightInfo *a4)
{
  float *v4; // r8
  __int64 v5; // rcx
  float *v6; // rax
  __int64 v7; // rdx

  v4 = (float *)((char *)this + 248);
  *(_DWORD *)a4 = 0;
  v5 = this - a4;
  v6 = (float *)((char *)a4 + 4);
  v7 = 4LL;
  do
  {
    *v6 = *(float *)((char *)v6 + v5 + 228) * *v4;
    ++v6;
    --v7;
  }
  while ( v7 );
  return 0LL;
}
