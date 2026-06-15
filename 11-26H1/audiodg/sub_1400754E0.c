/*
 * XREFs of sub_1400754E0 @ 0x1400754E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

LPVOID __fastcall sub_1400754E0(__int64 a1, void *a2, SIZE_T a3)
{
  if ( !a2 )
    return (LPVOID)sub_1400B6010(a1);
  if ( a3 )
    return HeapReAlloc(*(HANDLE *)(a1 + 8), 0, a2, a3);
  sub_1400B6010(a1);
  return 0LL;
}
