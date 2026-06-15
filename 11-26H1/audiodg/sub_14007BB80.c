/*
 * XREFs of sub_14007BB80 @ 0x14007BB80
 * Callers:
 *     <none>
 * Callees:
 *     sub_140076AE4 @ 0x140076AE4 (sub_140076AE4.c)
 *     sub_140077348 @ 0x140077348 (sub_140077348.c)
 */

__int64 __fastcall sub_14007BB80(__int64 a1, _BYTE *a2)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE **v6; // [rsp+50h] [rbp+8h] BYREF
  _BYTE *v7; // [rsp+58h] [rbp+10h] BYREF

  v7 = a2;
  *a2 = 0;
  v6 = &v7;
  v2 = sub_140077348(v5, a1, (__int64)&v7, (__int64)&v6);
  return sub_140076AE4((unsigned int *)(v3 + 48), *(_QWORD *)(v3 + 32), v2, &v6);
}
