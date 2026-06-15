/*
 * XREFs of sub_140076248 @ 0x140076248
 * Callers:
 *     sub_1400768B4 @ 0x1400768B4 (sub_1400768B4.c)
 * Callees:
 *     sub_1400782D4 @ 0x1400782D4 (sub_1400782D4.c)
 *     sub_140078348 @ 0x140078348 (sub_140078348.c)
 */

__int64 __fastcall sub_140076248(volatile signed __int32 *a1, __int64 a2, __int64 a3)
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
    v9 = sub_1400782D4(a2, v3, &v11);
    if ( v9 < 0 )
      break;
    v8 = _InterlockedCompareExchange(a1, v11, v3);
    v7 = v3 == v8;
    v3 = v8;
    if ( v7 )
      break;
    sub_140078348(a3);
  }
  return (unsigned int)v9;
}
