/*
 * XREFs of sub_140031C90 @ 0x140031C90
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140031C90(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx

  v2 = 0;
  if ( a2 )
  {
    *a2 = *(_QWORD *)(a1 + 8);
    v3 = *(_QWORD *)(a1 + 8);
    if ( v3 )
      sub_1400B6010(v3);
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v2;
}
