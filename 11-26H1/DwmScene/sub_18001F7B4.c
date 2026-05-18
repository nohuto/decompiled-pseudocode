/*
 * XREFs of sub_18001F7B4 @ 0x18001F7B4
 * Callers:
 *     sub_18007B100 @ 0x18007B100 (sub_18007B100.c)
 *     sub_1800879C4 @ 0x1800879C4 (sub_1800879C4.c)
 *     sub_1800977D4 @ 0x1800977D4 (sub_1800977D4.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 */

__int64 __fastcall sub_18001F7B4(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    sub_18000E26C(v6, (*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFFCuLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 4 * a3;
  result = a2 + 4 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
