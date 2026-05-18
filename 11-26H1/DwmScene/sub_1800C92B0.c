/*
 * XREFs of sub_1800C92B0 @ 0x1800C92B0
 * Callers:
 *     sub_1800C9B50 @ 0x1800C9B50 (sub_1800C9B50.c)
 *     sub_1800E4E09 @ 0x1800E4E09 (sub_1800E4E09.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 */

__int64 __fastcall sub_1800C92B0(__int64 a1)
{
  __int64 result; // rax

  result = sub_1800129D0(a1 + 24);
  if ( *(_QWORD *)a1 )
  {
    result = sub_18000E26C(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFE0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
