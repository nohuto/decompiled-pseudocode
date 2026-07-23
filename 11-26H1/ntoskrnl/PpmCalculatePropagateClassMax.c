/*
 * XREFs of PpmCalculatePropagateClassMax @ 0x140B0C2AC
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x1409FB634 (PpmSetProfilePolicySetting.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmCalculatePropagateClassMax(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // r10d
  __int64 i; // r8
  __int64 v7; // rax

  v4 = a3;
  if ( (*(_BYTE *)(a1 + 37) & 4) != 0 )
  {
    for ( i = a3 + 1; (unsigned int)i <= a4; i = (unsigned int)(i + 1) )
    {
      v7 = *(_QWORD *)(a2 + 8 * (((unsigned __int64)*(unsigned __int8 *)(a1 + 36) >> 6) + 2 * i));
      if ( _bittest64(&v7, *(_BYTE *)(a1 + 36) & 0x3F) )
        break;
      v4 = i;
    }
  }
  return v4;
}
