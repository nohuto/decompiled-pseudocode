/*
 * XREFs of sub_14007F5A0 @ 0x14007F5A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140052748 @ 0x140052748 (sub_140052748.c)
 *     sub_140077290 @ 0x140077290 (sub_140077290.c)
 */

__int64 __fastcall sub_14007F5A0(__int64 a1, _BYTE *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r9
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  _BYTE *v6; // [rsp+48h] [rbp+10h] BYREF
  _BYTE **v7; // [rsp+50h] [rbp+18h] BYREF

  v6 = a2;
  *a2 = 0;
  v7 = &v6;
  v2 = sub_140052748(v5, (__int64)&v6, a1);
  return sub_140077290(v3, (__int64)v2, &v7);
}
