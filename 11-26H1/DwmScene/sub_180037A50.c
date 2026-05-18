/*
 * XREFs of sub_180037A50 @ 0x180037A50
 * Callers:
 *     sub_18002E168 @ 0x18002E168 (sub_18002E168.c)
 *     sub_180039B18 @ 0x180039B18 (sub_180039B18.c)
 *     sub_180054534 @ 0x180054534 (sub_180054534.c)
 *     sub_18005FF1C @ 0x18005FF1C (sub_18005FF1C.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_18002DD68 @ 0x18002DD68 (sub_18002DD68.c)
 */

__int64 __fastcall sub_180037A50(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
  {
    sub_18002DD68((__int64)v6, *(_QWORD *)(a1 + 8));
    result = sub_18000E26C(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 16 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 16 * a4;
  return result;
}
