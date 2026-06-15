/*
 * XREFs of sub_14001D990 @ 0x14001D990
 * Callers:
 *     sub_14001D774 @ 0x14001D774 (sub_14001D774.c)
 * Callees:
 *     sub_14000E334 @ 0x14000E334 (sub_14000E334.c)
 *     sub_14001DA2C @ 0x14001DA2C (sub_14001DA2C.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_14001D990(__int64 a1)
{
  _QWORD *v2; // rbx

  sub_1400B6010(a1);
  v2 = *(_QWORD **)(a1 + 120);
  if ( v2 )
  {
    *v2 = off_1400BB1E8;
    sub_14000E334(v2 + 2);
    j_j__o_free(v2, 72LL);
  }
  *(_QWORD *)(a1 + 120) = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 216));
  sub_14001DA2C(a1 + 168);
  if ( a1 != -216 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 216));
}
