/*
 * XREFs of sub_1400762BC @ 0x1400762BC
 * Callers:
 *     sub_140076AE4 @ 0x140076AE4 (sub_140076AE4.c)
 * Callees:
 *     sub_140078384 @ 0x140078384 (sub_140078384.c)
 */

__int64 __fastcall sub_1400762BC(volatile signed __int32 *a1, __int64 a2, _BYTE ***a3)
{
  unsigned __int32 v3; // ebx
  bool v7; // zf
  signed __int32 v8; // eax
  int v9; // r9d
  signed __int32 v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  while ( 1 )
  {
    v11 = 0;
    v9 = sub_140078384(a2, v3, &v11);
    if ( v9 < 0 )
      break;
    v8 = _InterlockedCompareExchange(a1, v11, v3);
    v7 = v3 == v8;
    v3 = v8;
    if ( v7 )
      break;
    ***a3 = 0;
  }
  return (unsigned int)v9;
}
