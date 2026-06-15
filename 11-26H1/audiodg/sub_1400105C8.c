/*
 * XREFs of sub_1400105C8 @ 0x1400105C8
 * Callers:
 *     sub_140010460 @ 0x140010460 (sub_140010460.c)
 *     sub_140038450 @ 0x140038450 (sub_140038450.c)
 * Callees:
 *     sub_140010A34 @ 0x140010A34 (sub_140010A34.c)
 */

__int64 __fastcall sub_1400105C8(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 result; // rax

  v5 = a2 % *(_DWORD *)(a1 + 16);
  if ( *(_QWORD *)a1 )
  {
    for ( result = *(_QWORD *)(*(_QWORD *)a1 + 8 * v5); result; result = *(_QWORD *)(result + 32) )
    {
      if ( *(_DWORD *)(result + 40) == a2 && *(_DWORD *)result == a2 )
      {
        *(_OWORD *)(result + 8) = *(_OWORD *)a3;
        *(_QWORD *)(result + 24) = *(_QWORD *)(a3 + 16);
        return result;
      }
    }
  }
  result = sub_140010A34(a1, a2, (unsigned int)v5, a2);
  *(_OWORD *)(result + 8) = *(_OWORD *)a3;
  *(_QWORD *)(result + 24) = *(_QWORD *)(a3 + 16);
  return result;
}
