/*
 * XREFs of sub_140011E48 @ 0x140011E48
 * Callers:
 *     sub_140011CD4 @ 0x140011CD4 (sub_140011CD4.c)
 *     sub_140012604 @ 0x140012604 (sub_140012604.c)
 *     sub_1400625D8 @ 0x1400625D8 (sub_1400625D8.c)
 * Callees:
 *     sub_140007FAC @ 0x140007FAC (sub_140007FAC.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_1400499AC @ 0x1400499AC (sub_1400499AC.c)
 *     memset @ 0x14004A6AC (memset.c)
 */

// Hidden C++ exception states: #try_helpers=1
char __fastcall sub_140011E48(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v4; // rsi
  void *v6; // rcx
  __int64 v7; // rax

  v4 = (unsigned int)a2;
  v6 = *(void **)a1;
  if ( v6 )
  {
    j_j__o_free(v6, a2);
    *(_QWORD *)a1 = 0LL;
  }
  if ( a3 )
  {
    v7 = 8 * v4;
    if ( !is_mul_ok(v4, 8uLL) )
      v7 = -1LL;
    *(_QWORD *)a1 = sub_1400499AC(v7);
    if ( !*(_QWORD *)a1 )
      return 0;
    memset(*(void **)a1, 0, 8 * v4);
  }
  *(_DWORD *)(a1 + 16) = v4;
  sub_140007FAC(a1);
  return 1;
}
