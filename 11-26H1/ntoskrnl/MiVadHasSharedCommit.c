/*
 * XREFs of MiVadHasSharedCommit @ 0x140A07C44
 * Callers:
 *     MiDeletePartialCloneVads @ 0x140A076D8 (MiDeletePartialCloneVads.c)
 *     MiCloneAncillaryVadInfo @ 0x140A07A00 (MiCloneAncillaryVadInfo.c)
 * Callees:
 *     MiIncludeSharedCommit @ 0x140447760 (MiIncludeSharedCommit.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 */

__int64 __fastcall MiVadHasSharedCommit(__int64 a1)
{
  int VadFlags; // eax
  __int64 v2; // rcx
  __int64 *v3; // rcx
  unsigned int v4; // r9d

  VadFlags = MiReadVadFlags(a1);
  if ( (VadFlags & 0x1C) == 8 )
    return 1LL;
  if ( (VadFlags & 0x80000) != 0 )
    return 0LL;
  if ( *(__int64 *)(v2 + 128) < 0 )
    return 0LL;
  v3 = *(__int64 **)(v2 + 80);
  if ( !v3 )
    return 0LL;
  LOBYTE(v4) = (unsigned int)MiIncludeSharedCommit(*v3) != 0;
  return v4;
}
