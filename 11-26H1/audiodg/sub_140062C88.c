/*
 * XREFs of sub_140062C88 @ 0x140062C88
 * Callers:
 *     sub_140062B74 @ 0x140062B74 (sub_140062B74.c)
 * Callees:
 *     sub_140017CB0 @ 0x140017CB0 (sub_140017CB0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140062C88(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = off_1400BA890;
  if ( qword_1400E84B8 )
    sub_1400B6010(qword_1400E84B8);
  *(_QWORD *)a1 = off_1400B8678;
  *(_QWORD *)(a1 + 16) = a2;
  if ( a2 )
    sub_140017CB0((volatile signed __int32 *)(a2 + 12));
  *(_QWORD *)(a1 + 24) = a3;
  *(_QWORD *)(a1 + 32) = a4;
  *(_DWORD *)(a1 + 40) = a5;
  return a1;
}
