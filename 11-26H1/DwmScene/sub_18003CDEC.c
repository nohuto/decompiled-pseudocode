/*
 * XREFs of sub_18003CDEC @ 0x18003CDEC
 * Callers:
 *     sub_18003AFB0 @ 0x18003AFB0 (sub_18003AFB0.c)
 *     sub_18003CE80 @ 0x18003CE80 (sub_18003CE80.c)
 * Callees:
 *     sub_180013E60 @ 0x180013E60 (sub_180013E60.c)
 *     sub_18003CD04 @ 0x18003CD04 (sub_18003CD04.c)
 *     sub_18003CD7C @ 0x18003CD7C (sub_18003CD7C.c)
 *     sub_18003D758 @ 0x18003D758 (sub_18003D758.c)
 */

unsigned __int64 __fastcall sub_18003CDEC(__int64 a1, __int64 a2, __int128 *a3, __int64 a4)
{
  int v8; // eax
  int v9; // eax
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF

  sub_18003D758();
  v8 = *(_DWORD *)(a2 + 8);
  *(_QWORD *)&v11 = *(_QWORD *)a2;
  DWORD2(v11) = v8;
  sub_180013E60(a1, &v11);
  v11 = *a3;
  sub_18003CD04(a1, &v11);
  v9 = *(_DWORD *)(a4 + 8);
  *(_QWORD *)&v11 = *(_QWORD *)a4;
  DWORD2(v11) = v9;
  return sub_18003CD7C(a1, &v11);
}
