/*
 * XREFs of ACPIConvertWideStringToUpperCaseHelper @ 0x14006AB4C
 * Callers:
 *     ACPIDeviceIdMutiStringMatchCallback @ 0x140061920 (ACPIDeviceIdMutiStringMatchCallback.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ACPIConvertWideStringToUpperCaseHelper(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v4; // rdx
  unsigned __int16 v5; // cx

  result = 0LL;
  if ( a1 )
  {
    if ( a2 >= 2 )
    {
      v4 = a2 >> 1;
      if ( v4 )
      {
        do
        {
          v5 = *(_WORD *)(a1 + 2 * result);
          if ( v5 >= 0x61u && v5 <= 0x7Au )
            *(_WORD *)(a1 + 2 * result) = v5 - 32;
          ++result;
        }
        while ( result < v4 );
      }
    }
  }
  return result;
}
