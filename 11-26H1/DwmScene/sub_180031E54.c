/*
 * XREFs of sub_180031E54 @ 0x180031E54
 * Callers:
 *     sub_18002E168 @ 0x18002E168 (sub_18002E168.c)
 *     sub_180039B18 @ 0x180039B18 (sub_180039B18.c)
 *     sub_180054534 @ 0x180054534 (sub_180054534.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_18002DD68 @ 0x18002DD68 (sub_18002DD68.c)
 */

__int64 __fastcall sub_180031E54(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
  {
    sub_18002DD68(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32));
    return sub_18000E26C(*(void **)(a1 + 8), 16LL * *(_QWORD *)(a1 + 16));
  }
  return result;
}
