/*
 * XREFs of HalpMcaReadErrorUncorrectedAMD @ 0x140580D68
 * Callers:
 *     HalpMcaReadError @ 0x14044BC70 (HalpMcaReadError.c)
 * Callees:
 *     HalpWheaWriteMsrStatus @ 0x14044B2BC (HalpWheaWriteMsrStatus.c)
 */

__int64 __fastcall HalpMcaReadErrorUncorrectedAMD(__int64 a1, _BYTE *a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = *(_QWORD *)a1;
  result = *(_QWORD *)a1 & 0x2000100000000000LL;
  if ( result == 0x2000000000000000LL )
  {
    if ( (v2 & 0x1000000000000000LL) != 0 )
    {
      *a2 = 1;
      if ( (v2 & 0x200000000000000LL) == 0 )
      {
        if ( *(_BYTE *)(a1 + 8) )
          a2[1] = 1;
      }
    }
    else
    {
      return HalpWheaWriteMsrStatus(*(_QWORD *)(a1 + 16), *(unsigned int *)(a1 + 12), v2);
    }
  }
  return result;
}
