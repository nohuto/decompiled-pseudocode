/*
 * XREFs of ?GetDragOffsetAmount@CDragVisual@@UEAAHXZ @ 0x18051E040
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDragVisualScaledSize@AppLayoutHelpers@@YAXAEBUCRect@Geometry@@W4DEVICE_SCALE_FACTOR@@1AEBUtagSIZE@@PEAU5@@Z @ 0x1806A14BC (-GetDragVisualScaledSize@AppLayoutHelpers@@YAXAEBUCRect@Geometry@@W4DEVICE_SCALE_FACTOR@@1AEBUta.c)
 */

int __fastcall CDragVisual::GetDragOffsetAmount(CDragVisual *this)
{
  enum DEVICE_SCALE_FACTOR v1; // eax
  enum DEVICE_SCALE_FACTOR v3; // r8d
  const struct Geometry::CRect *v4; // rdx
  struct tagSIZE *v6; // [rsp+28h] [rbp-10h]
  struct tagSIZE v7; // [rsp+40h] [rbp+8h] BYREF
  enum DEVICE_SCALE_FACTOR v8; // [rsp+48h] [rbp+10h] BYREF
  int v9; // [rsp+4Ch] [rbp+14h]

  v1 = *((_DWORD *)this + 52) - *((_DWORD *)this + 50);
  v7.cx = 0;
  v7.cy = 0;
  v8 = v1;
  v3 = *((_DWORD *)this + 80);
  v4 = (const struct Geometry::CRect *)*((unsigned int *)this + 65);
  v9 = *((_DWORD *)this + 53) - *((_DWORD *)this + 51);
  AppLayoutHelpers::GetDragVisualScaledSize(
    (CDragVisual *)((char *)this + 168),
    v4,
    v3,
    (enum DEVICE_SCALE_FACTOR)&v8,
    &v7,
    v6);
  return MulDiv(v7.cx, 100 - *((_DWORD *)this + 77), 100);
}
