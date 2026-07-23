/*
 * XREFs of SepCompareSidValuesBlocks @ 0x140B67214
 * Callers:
 *     SepSetTokenUserAndGroups @ 0x140A86164 (SepSetTokenUserAndGroups.c)
 * Callees:
 *     RtlEqualSid @ 0x140406680 (RtlEqualSid.c)
 */

char __fastcall SepCompareSidValuesBlocks(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  unsigned __int8 *v4; // rdi
  unsigned int v5; // ebp
  unsigned __int8 *v6; // rsi

  if ( a1 == a2 )
    return 1;
  if ( a1 )
  {
    if ( a2 )
    {
      v3 = *(_DWORD *)(a1 + 16);
      if ( v3 == *(_DWORD *)(a2 + 16) )
      {
        v4 = (unsigned __int8 *)(a1 + 24);
        v5 = 0;
        v6 = (unsigned __int8 *)(a2 + 24);
        while ( v5 < v3 )
        {
          if ( !RtlEqualSid(v4, v6) )
            return 0;
          v4 += (4LL * v4[1] + 11) & 0xFFFFFFFCLL;
          v6 += (4LL * v6[1] + 11) & 0xFFFFFFFCLL;
          ++v5;
        }
        return 1;
      }
    }
  }
  return 0;
}
