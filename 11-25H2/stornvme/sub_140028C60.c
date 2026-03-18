/*
 * XREFs of sub_140028C60 @ 0x140028C60
 * Callers:
 *     <none>
 * Callees:
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 */

__int64 __fastcall sub_140028C60(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // r14
  __int64 v7; // r8
  unsigned __int8 v8; // cl

  result = sub_140005000(a2);
  v6 = result;
  if ( v7 )
  {
    if ( *(_BYTE *)(v5 + 3) != 1 )
    {
      if ( *(_BYTE *)(a2 + 2) == 40 )
      {
        result = *(unsigned int *)(a2 + 52);
        v8 = *(_BYTE *)(result + a2 + 10);
      }
      else
      {
        v8 = *(_BYTE *)(a2 + 7);
      }
      if ( (*(_BYTE *)(a1 + 21) & 8) != 0 )
        result = StorPortExtendedFunction(87LL, a1, *(_QWORD *)(a1 + 8LL * v8 + 1672), 0LL);
    }
    *(_BYTE *)(v6 + 4225) |= 8u;
  }
  return result;
}
