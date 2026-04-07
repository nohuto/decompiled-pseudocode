/*
 * XREFs of ??0CImmersiveWindowIconic@@IEAA@XZ @ 0x1800B7A4C
 * Callers:
 *     ?Create@CImmersiveWindowIconic@@SAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_NPEAPEAV1@@Z @ 0x1800B7B4C (-Create@CImmersiveWindowIconic@@SAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_NPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CContainerVisual@@IEAA@XZ @ 0x1800212BC (--0CContainerVisual@@IEAA@XZ.c)
 */

CImmersiveWindowIconic *__fastcall CImmersiveWindowIconic::CImmersiveWindowIconic(CImmersiveWindowIconic *this)
{
  __int64 v1; // r9
  CImmersiveWindowIconic *result; // rax

  CContainerVisual::CContainerVisual(this);
  *(_QWORD *)v1 = &CImmersiveWindowIconic::`vftable';
  *(_QWORD *)(v1 + 192) = 0LL;
  *(_QWORD *)(v1 + 184) = 0LL;
  *(_QWORD *)(v1 + 200) = 0LL;
  *(_QWORD *)(v1 + 208) = 0LL;
  *(_BYTE *)(v1 + 232) = 0;
  result = (CImmersiveWindowIconic *)v1;
  *(_DWORD *)(v1 + 228) = 100;
  return result;
}
