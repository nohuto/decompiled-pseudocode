/*
 * XREFs of HalpAcpiPmRegisterReadPort @ 0x14044CDA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpAcpiPmRegisterReadPort(unsigned __int16 a1, int a2, _BYTE *a3)
{
  unsigned __int8 v3; // al
  unsigned __int16 v5; // ax
  unsigned __int32 v6; // eax

  switch ( a2 )
  {
    case 1:
      v3 = __inbyte(a1);
      *a3 = v3;
      return 0LL;
    case 2:
      v5 = __inword(a1);
      *(_WORD *)a3 = v5;
      return 0LL;
    case 4:
      v6 = __indword(a1);
      *(_DWORD *)a3 = v6;
      return 0LL;
    default:
      return 3221225473LL;
  }
}
