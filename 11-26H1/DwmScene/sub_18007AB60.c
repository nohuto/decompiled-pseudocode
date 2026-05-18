/*
 * XREFs of sub_18007AB60 @ 0x18007AB60
 * Callers:
 *     sub_1800422A0 @ 0x1800422A0 (sub_1800422A0.c)
 *     sub_180048E50 @ 0x180048E50 (sub_180048E50.c)
 *     sub_18004A530 @ 0x18004A530 (sub_18004A530.c)
 *     sub_18004B180 @ 0x18004B180 (sub_18004B180.c)
 *     sub_18004F598 @ 0x18004F598 (sub_18004F598.c)
 *     sub_18004FEA0 @ 0x18004FEA0 (sub_18004FEA0.c)
 *     sub_180057C70 @ 0x180057C70 (sub_180057C70.c)
 *     sub_18005921C @ 0x18005921C (sub_18005921C.c)
 *     sub_180059AA0 @ 0x180059AA0 (sub_180059AA0.c)
 *     sub_18005A220 @ 0x18005A220 (sub_18005A220.c)
 *     sub_18005A4A4 @ 0x18005A4A4 (sub_18005A4A4.c)
 *     sub_18007A86C @ 0x18007A86C (sub_18007A86C.c)
 *     sub_180086020 @ 0x180086020 (sub_180086020.c)
 *     sub_180086A80 @ 0x180086A80 (sub_180086A80.c)
 *     sub_1800870B0 @ 0x1800870B0 (sub_1800870B0.c)
 *     sub_180087164 @ 0x180087164 (sub_180087164.c)
 *     sub_18008720C @ 0x18008720C (sub_18008720C.c)
 *     sub_1800872F0 @ 0x1800872F0 (sub_1800872F0.c)
 *     sub_18008819C @ 0x18008819C (sub_18008819C.c)
 *     sub_18008B370 @ 0x18008B370 (sub_18008B370.c)
 *     sub_18008B500 @ 0x18008B500 (sub_18008B500.c)
 *     sub_18008EAF0 @ 0x18008EAF0 (sub_18008EAF0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180042248 @ 0x180042248 (sub_180042248.c)
 */

__int64 __fastcall sub_18007AB60(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  __int64 v4; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD *)(*sub_180042248(a1, &v3) + 24LL);
  if ( v4 )
    sub_180010EC8(v4);
  return v1;
}
