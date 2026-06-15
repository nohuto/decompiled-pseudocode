/*
 * XREFs of sub_14005D3D4 @ 0x14005D3D4
 * Callers:
 *     sub_14005D2AC @ 0x14005D2AC (sub_14005D2AC.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14005D3D4(__int64 a1)
{
  *(_DWORD *)(a1 + 20) = 1;
  *(_QWORD *)a1 = off_1400BC050;
  *(_QWORD *)(a1 + 8) = off_1400BC140;
  if ( qword_1400E84B8 )
    sub_1400B6010(qword_1400E84B8);
  *(_QWORD *)a1 = off_1400BC0B8;
  *(_QWORD *)(a1 + 8) = off_1400BC120;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  return a1;
}
