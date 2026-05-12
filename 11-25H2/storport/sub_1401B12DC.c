/*
 * XREFs of sub_1401B12DC @ 0x1401B12DC
 * Callers:
 *     sub_14003C2CC @ 0x14003C2CC (sub_14003C2CC.c)
 *     sub_140054FB0 @ 0x140054FB0 (sub_140054FB0.c)
 *     sub_1400CB5C0 @ 0x1400CB5C0 (sub_1400CB5C0.c)
 * Callees:
 *     sub_14003E60C @ 0x14003E60C (sub_14003E60C.c)
 */

__int64 __fastcall sub_1401B12DC(bool *a1, struct _DEVICE_OBJECT *a2)
{
  __int64 result; // rax

  result = sub_14003E60C(a2, (ULONG_PTR)&unk_1401494B8, 0x40u, 1u, (__int64)(a1 + 8));
  *a1 = (int)result >= 0;
  return result;
}
