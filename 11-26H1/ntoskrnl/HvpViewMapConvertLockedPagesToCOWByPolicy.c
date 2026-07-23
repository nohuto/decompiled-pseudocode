/*
 * XREFs of HvpViewMapConvertLockedPagesToCOWByPolicy @ 0x1408B7688
 * Callers:
 *     CmpDoLocalizeNextHive @ 0x1408B76E0 (CmpDoLocalizeNextHive.c)
 * Callees:
 *     HvpMappedViewConvertLockedPagesToCOWByPolicy @ 0x1408B5AC8 (HvpMappedViewConvertLockedPagesToCOWByPolicy.c)
 *     HvpViewMapFindViewForFileOffset @ 0x1408BFACC (HvpViewMapFindViewForFileOffset.c)
 */

__int64 __fastcall HvpViewMapConvertLockedPagesToCOWByPolicy(__int64 a1)
{
  __int64 i; // rdx
  _QWORD *ViewForFileOffset; // rdi
  __int64 result; // rax

  for ( i = 4096LL; i < *(_QWORD *)(a1 + 8); i = ViewForFileOffset[6] )
  {
    ViewForFileOffset = (_QWORD *)HvpViewMapFindViewForFileOffset(a1, i);
    result = HvpMappedViewConvertLockedPagesToCOWByPolicy(a1, ViewForFileOffset);
    if ( (int)result < 0 )
      return result;
  }
  *(_DWORD *)(a1 + 32) &= ~4u;
  return 0LL;
}
