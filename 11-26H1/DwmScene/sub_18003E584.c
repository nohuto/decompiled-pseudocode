/*
 * XREFs of sub_18003E584 @ 0x18003E584
 * Callers:
 *     sub_18003FC1C @ 0x18003FC1C (sub_18003FC1C.c)
 * Callees:
 *     sub_180013440 @ 0x180013440 (sub_180013440.c)
 *     sub_18003F138 @ 0x18003F138 (sub_18003F138.c)
 */

__int64 __fastcall sub_18003E584(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v5; // rax
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  v5 = sub_180013440(v7, a2);
  return sub_18003F138(a1, v5, a3);
}
