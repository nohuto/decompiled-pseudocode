/*
 * XREFs of sub_1400A63C0 @ 0x1400A63C0
 * Callers:
 *     sub_1400A64E0 @ 0x1400A64E0 (sub_1400A64E0.c)
 *     sub_1400A6840 @ 0x1400A6840 (sub_1400A6840.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140019444 @ 0x140019444 (sub_140019444.c)
 *     sub_140039BB8 @ 0x140039BB8 (sub_140039BB8.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

void __fastcall sub_1400A63C0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  void *v6; // rcx

  *a1 = off_1400C0F58;
  a1[1] = off_1400C0308;
  a1[2] = off_1400C0EE0;
  a1[3] = off_1400C0748;
  a1[172] = off_1400C0710;
  a1[173] = off_1400C03E0;
  a1[174] = off_1400C0890;
  v4 = a1[184];
  if ( v4 )
  {
    j_j__o_free(v4);
    a1[184] = 0LL;
  }
  v5 = a1[14];
  if ( v5 )
  {
    sub_140039BB8(v5, a2, a3);
    a1[14] = 0LL;
  }
  a1[177] = 0LL;
  sub_140019444(a1 + 176);
  v6 = (void *)a1[178];
  if ( v6 && v6 != (void *)-1LL )
  {
    CloseHandle(v6);
    a1[178] = 0LL;
  }
  sub_140003238(a1 + 176);
  sub_1400A61CC((__int64)a1);
}
