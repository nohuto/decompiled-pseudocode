/*
 * XREFs of IvtUpdateSingleTargetExtendedDestination @ 0x1405AA5D4
 * Callers:
 *     IvtUpdateExtendedDestination @ 0x1405AA46C (IvtUpdateExtendedDestination.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IvtUpdateSingleTargetExtendedDestination(
        unsigned int a1,
        char a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  unsigned int v5; // r10d
  __int64 i; // rax

  v5 = a1;
  if ( a2 )
    v5 = __popcnt((unsigned int)(unsigned __int16)a1 - 1) | (a1 >> 12) & 0xFFFF0;
  for ( i = 0LL; (unsigned int)i < a5; i = (unsigned int)(i + 1) )
  {
    if ( v5 == *(_DWORD *)(a3 + 4 * i) )
    {
      v5 = *(_DWORD *)(a4 + 4 * i);
      break;
    }
  }
  if ( a2 )
    return ((v5 & 0xFFFFFFF0) << 12) | (1 << (v5 & 0xF));
  return v5;
}
