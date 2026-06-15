/*
 * XREFs of sub_140031360 @ 0x140031360
 * Callers:
 *     <none>
 * Callees:
 *     sub_140020480 @ 0x140020480 (sub_140020480.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140031360(__int64 a1, __int64 a2, _DWORD *a3, _QWORD *a4)
{
  __int64 v4; // r10
  __int64 result; // rax

  v4 = a2;
  result = 2147500035LL;
  if ( a4 )
  {
    *a4 = 0LL;
    if ( !a2 || (unsigned int)sub_140020480(a3) )
      return sub_1400B6010(v4);
    else
      return 2147746064LL;
  }
  return result;
}
