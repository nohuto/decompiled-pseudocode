/*
 * XREFs of sub_1800232C0 @ 0x1800232C0
 * Callers:
 *     sub_180023298 @ 0x180023298 (sub_180023298.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_1800232C0(__int64 a1)
{
  unsigned __int64 result; // rax
  unsigned __int64 v2; // rdx
  signed __int64 v3; // rdx

  while ( 1 )
  {
    result = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 144), 0LL);
    if ( (unsigned int)result == 0x7FFFFFFFLL )
      break;
    v2 = HIDWORD(result);
    if ( (unsigned int)result == 9LL
      || (unsigned int)result == 99LL
      || (unsigned int)result == 999LL
      || (unsigned int)result == 9999LL
      || (unsigned int)result == 99999LL
      || (unsigned int)result == 999999LL
      || (unsigned int)result == 9999999LL
      || (unsigned int)result == 99999999LL
      || (unsigned int)result == 999999999LL )
    {
      ++v2;
    }
    if ( v2 > *(_QWORD *)(a1 + 152) )
      break;
    v3 = ((unsigned int)result + 1LL) | (v2 << 32);
    if ( result == _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 144), v3, result) )
      return v3;
  }
  return result;
}
