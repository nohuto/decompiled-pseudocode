/*
 * XREFs of ?GetDragOffsetAmount@CDragVisual@@UEAAHXZ @ 0x180540F10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDragVisualScaledSize@AppLayoutHelpers@@YAXAEBUCRect@Geometry@@W4DEVICE_SCALE_FACTOR@@1AEBUtagSIZE@@PEAU5@@Z @ 0x1806C93FC (-GetDragVisualScaledSize@AppLayoutHelpers@@YAXAEBUCRect@Geometry@@W4DEVICE_SCALE_FACTOR@@1AEBUta.c)
 */

int __fastcall CDragVisual::GetDragOffsetAmount(CDragVisual *this)
{
  enum DEVICE_SCALE_FACTOR v2; // r8d
  const struct Geometry::CRect *v3; // rdx
  struct tagSIZE *v5; // [rsp+28h] [rbp-10h]
  struct tagSIZE v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+48h] [rbp+10h] BYREF
  int v8; // [rsp+4Ch] [rbp+14h]

  v7 = *((_DWORD *)this + 52) - *((_DWORD *)this + 50);
  v2 = *((_DWORD *)this + 80);
  v3 = (const struct Geometry::CRect *)*((unsigned int *)this + 65);
  v8 = *((_DWORD *)this + 53) - *((_DWORD *)this + 51);
  v6 = 0LL;
  AppLayoutHelpers::GetDragVisualScaledSize(
    (CDragVisual *)((char *)this + 168),
    v3,
    v2,
    (enum DEVICE_SCALE_FACTOR)&v7,
    &v6,
    v5);
  return MulDiv(v6.cx, 100 - *((_DWORD *)this + 77), 100);
}
