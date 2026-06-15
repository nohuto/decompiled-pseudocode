/*
 * XREFs of sub_140049AD8 @ 0x140049AD8
 * Callers:
 *     __GSHandlerCheck @ 0x140049AB4 (__GSHandlerCheck.c)
 *     __GSHandlerCheck_EH4 @ 0x1400ADE14 (__GSHandlerCheck_EH4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140049AD8(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(unsigned int *)(*(_QWORD *)(a2 + 16) + 8LL);
  result = *(_QWORD *)(a2 + 8);
  if ( (*(_BYTE *)(v2 + result + 3) & 0xF) != 0 )
    return *(_BYTE *)(v2 + result + 3) & 0xF0;
  return result;
}
