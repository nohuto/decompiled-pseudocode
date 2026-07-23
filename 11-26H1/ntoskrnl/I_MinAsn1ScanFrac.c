/*
 * XREFs of I_MinAsn1ScanFrac @ 0x1408AA5F0
 * Callers:
 *     I_MinAsn1CalculateTimeOffset @ 0x1408AA21C (I_MinAsn1CalculateTimeOffset.c)
 *     I_MinAsn1DecodeGeneralizedTimeFraction @ 0x1408AA3B0 (I_MinAsn1DecodeGeneralizedTimeFraction.c)
 * Callees:
 *     isdigit @ 0x140539020 (isdigit.c)
 */

char __fastcall I_MinAsn1ScanFrac(__int64 a1, unsigned int a2, char a3, int *a4, int *a5, _DWORD *a6)
{
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  char result; // al

  *a4 = 0;
  v10 = 0LL;
  *a5 = 0;
  while ( (unsigned int)v10 < a2 )
  {
    if ( isdigit(*(unsigned __int8 *)(a1 + v10)) )
    {
      if ( (unsigned __int64)(*a5 + 2147483649LL) > 0xFFFFFFFF )
      {
        *a5 = -1;
        return 0;
      }
      v11 = *a4;
      ++*a5;
      if ( (unsigned __int64)(10 * v11 + 0x80000000LL) > 0xFFFFFFFF
        || (v12 = *(unsigned __int8 *)(v10 + a1) + 10 * (int)v11 - 48LL,
            (unsigned __int64)(v12 + 0x80000000LL) > 0xFFFFFFFF) )
      {
        *a4 = -1;
        return 0;
      }
      *a4 = v12;
    }
    else if ( *(_BYTE *)(a1 + v10) != 58 || !a3 )
    {
      break;
    }
    v10 = (unsigned int)(v10 + 1);
  }
  result = 1;
  *a6 = v10;
  return result;
}
