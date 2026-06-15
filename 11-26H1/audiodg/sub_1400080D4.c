/*
 * XREFs of sub_1400080D4 @ 0x1400080D4
 * Callers:
 *     sub_140007F0C @ 0x140007F0C (sub_140007F0C.c)
 *     sub_14005BEA4 @ 0x14005BEA4 (sub_14005BEA4.c)
 *     sub_14005C130 @ 0x14005C130 (sub_14005C130.c)
 *     sub_14005C2EC @ 0x14005C2EC (sub_14005C2EC.c)
 *     sub_140062380 @ 0x140062380 (sub_140062380.c)
 *     sub_140062720 @ 0x140062720 (sub_140062720.c)
 *     sub_140062830 @ 0x140062830 (sub_140062830.c)
 *     sub_1400628DC @ 0x1400628DC (sub_1400628DC.c)
 *     sub_14006315C @ 0x14006315C (sub_14006315C.c)
 *     sub_1400640E8 @ 0x1400640E8 (sub_1400640E8.c)
 * Callees:
 *     sub_140007FAC @ 0x140007FAC (sub_140007FAC.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_1400499AC @ 0x1400499AC (sub_1400499AC.c)
 *     memset @ 0x14004A6AC (memset.c)
 */

char __fastcall sub_1400080D4(__int64 *a1, __int64 a2, char a3)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rcx
  unsigned __int64 v7; // rdi
  __int64 v8; // rax
  int v11; // [rsp+48h] [rbp+10h]
  unsigned __int64 v12; // [rsp+58h] [rbp+20h]

  v11 = a2;
  v4 = (unsigned int)a2;
  v5 = (__int64)a1;
  v6 = *a1;
  if ( v6 )
  {
    j_j__o_free(v6, a2);
    *(_QWORD *)v5 = 0LL;
  }
  if ( a3 )
  {
    v7 = v4;
    v12 = v4;
    v8 = 8 * v4;
    if ( !is_mul_ok(v4, 8uLL) )
      v8 = -1LL;
    try
    {
      *(_QWORD *)v5 = sub_1400499AC(v8);
    }
    catch ( ... )
    {
      v5 = (__int64)a1;
      LODWORD(v4) = v11;
      v7 = v12;
    }
    if ( !*(_QWORD *)v5 )
      return 0;
    memset(*(void **)v5, 0, 8 * v7);
  }
  *(_DWORD *)(v5 + 16) = v4;
  sub_140007FAC(v5);
  return 1;
}
