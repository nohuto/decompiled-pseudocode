/*
 * XREFs of HalpApicConvertId @ 0x1405A3990
 * Callers:
 *     HalpApicConvertToRte @ 0x140491C84 (HalpApicConvertToRte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpApicConvertId(__int64 a1, _DWORD *a2, _DWORD *a3, char a4)
{
  if ( a4 )
  {
    *a3 = 6;
    a3[2] = (unsigned __int16)(*a2 >> 4);
    a3[3] = 1 << (*(_BYTE *)a2 & 0xF);
  }
  else
  {
    if ( *a3 != 6 )
      return 3221225659LL;
    *a2 = (16 * a3[2]) | __popcnt((unsigned int)(a3[3] - 1));
  }
  return 0LL;
}
