/*
 * XREFs of sub_1400A62C8 @ 0x1400A62C8
 * Callers:
 *     sub_1400A64B8 @ 0x1400A64B8 (sub_1400A64B8.c)
 *     sub_1400A6800 @ 0x1400A6800 (sub_1400A6800.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140019444 @ 0x140019444 (sub_140019444.c)
 *     sub_140039BB8 @ 0x140039BB8 (sub_140039BB8.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

void __fastcall sub_1400A62C8(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  void *v6; // rcx

  *a1 = off_1400C1038;
  a1[1] = off_1400C0308;
  a1[2] = off_1400C0FC0;
  a1[3] = off_1400C0488;
  a1[168] = off_1400C0450;
  a1[169] = off_1400C0430;
  a1[170] = off_1400C0890;
  v4 = a1[180];
  if ( v4 )
  {
    j_j__o_free(v4);
    a1[180] = 0LL;
  }
  v5 = a1[14];
  if ( v5 )
  {
    sub_140039BB8(v5, a2, a3);
    a1[14] = 0LL;
  }
  a1[173] = 0LL;
  sub_140019444(a1 + 172);
  v6 = (void *)a1[174];
  if ( v6 && v6 != (void *)-1LL )
  {
    CloseHandle(v6);
    a1[174] = 0LL;
  }
  sub_140003238(a1 + 172);
  sub_1400A60D0((__int64)a1);
}
