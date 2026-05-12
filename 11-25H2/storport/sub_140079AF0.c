/*
 * XREFs of sub_140079AF0 @ 0x140079AF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140020090 @ 0x140020090 (sub_140020090.c)
 *     sub_140076210 @ 0x140076210 (sub_140076210.c)
 *     sub_140077BF8 @ 0x140077BF8 (sub_140077BF8.c)
 *     sub_140079C30 @ 0x140079C30 (sub_140079C30.c)
 */

__int64 __fastcall sub_140079AF0(__int64 Context, __int64 a2, int a3)
{
  int v5; // [rsp+20h] [rbp-28h]

  if ( byte_140168DAA && (byte_1401694F2 & 0x10) != 0 )
  {
    v5 = *(_DWORD *)(Context + 56);
    sub_140076210(Context, &stru_14014A0F8, a3, **(_QWORD **)(Context + 4960), v5);
  }
  *(_DWORD *)(*(_QWORD *)(Context + 4960) + 20LL) &= ~2u;
  if ( sub_140020090(Context + 376, 7) )
    sub_140077BF8(Context);
  return sub_140079C30((PVOID)Context);
}
