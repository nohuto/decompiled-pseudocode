/*
 * XREFs of sub_14002F6D0 @ 0x14002F6D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14002F6D0(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  __int64 v7; // rbx

  if ( a4 )
  {
    if ( *(_BYTE *)(a1 + 16) )
    {
      v7 = *(_QWORD *)(a1 + 40);
      if ( GetTickCount64() - v7 > *(_QWORD *)(a1 + 32) )
      {
        if ( *(_QWORD *)(a1 + 32) )
          sub_1400B6010(a1);
      }
    }
  }
  return sub_14002F760(a1, a2, a3);
}
