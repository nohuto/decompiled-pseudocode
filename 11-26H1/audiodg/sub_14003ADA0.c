/*
 * XREFs of sub_14003ADA0 @ 0x14003ADA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

BOOL __fastcall sub_14003ADA0(__int64 a1, __int64 a2)
{
  BOOL result; // eax

  if ( *(_QWORD *)(a2 + 8) )
    sub_1400B6010(*(_QWORD *)(a1 + 280));
  result = CloseHandle(*(HANDLE *)a2);
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  return result;
}
