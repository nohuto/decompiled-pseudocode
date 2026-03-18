/*
 * XREFs of ?ReleaseD2DResources@CD2DEffect@@UEAAXXZ @ 0x1802A94D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CD2DEffect::ReleaseD2DResources(CD2DEffect *this)
{
  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 9);
}
