/*
 * XREFs of HvpViewMapConvertLockedPagesToCOWByPolicy @ 0x140AD64C4
 * Callers:
 *     CmpDoLocalizeNextHive @ 0x140AD63C0 (CmpDoLocalizeNextHive.c)
 * Callees:
 *     HvpViewMapFindViewForFileOffset @ 0x1408B94FC (HvpViewMapFindViewForFileOffset.c)
 *     HvpMappedViewConvertLockedPagesToCOWByPolicy @ 0x140AD6514 (HvpMappedViewConvertLockedPagesToCOWByPolicy.c)
 */

__int64 __fastcall HvpViewMapConvertLockedPagesToCOWByPolicy(__int64 a1)
{
  __int64 i; // rdx
  unsigned __int64 ViewForFileOffset; // rdi
  __int64 result; // rax

  for ( i = 4096LL; i < *(_QWORD *)(a1 + 8); i = *(_QWORD *)(ViewForFileOffset + 48) )
  {
    ViewForFileOffset = HvpViewMapFindViewForFileOffset(a1, i);
    result = HvpMappedViewConvertLockedPagesToCOWByPolicy(a1, ViewForFileOffset);
    if ( (int)result < 0 )
      return result;
  }
  *(_DWORD *)(a1 + 32) &= ~4u;
  return 0LL;
}
