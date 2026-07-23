/*
 * XREFs of KiCommitGroupSubNodeAssignments @ 0x1405F1F20
 * Callers:
 *     KiAllocateProcessorNumber @ 0x1405F1B14 (KiAllocateProcessorNumber.c)
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

void __fastcall KiCommitGroupSubNodeAssignments(__int16 a1)
{
  __int16 v1; // dx
  __int64 v3; // r10
  __int16 *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rax

  v1 = word_140E66930;
  if ( a1 != word_140E66930 && KiSubNodeCount )
  {
    v3 = (unsigned __int16)KiSubNodeCount;
    v4 = (__int16 *)(KiSubNodeConfigBlock + 6);
    do
    {
      if ( (*((_BYTE *)v4 - 1) & 1) != 0 )
      {
        if ( *v4 == a1 )
        {
          *v4 = v1;
        }
        else if ( *v4 == v1 )
        {
          *v4 = a1;
        }
      }
      v4 += 12;
      --v3;
    }
    while ( v3 );
  }
  if ( KiSubNodeCount )
  {
    v5 = (unsigned __int16)KiSubNodeCount;
    v6 = KiSubNodeConfigBlock + 5;
    do
    {
      if ( (*(_BYTE *)v6 & 1) != 0 && *(_WORD *)(v6 + 1) == v1 )
        *(_BYTE *)v6 |= 2u;
      v6 += 24LL;
      --v5;
    }
    while ( v5 );
  }
  word_140E66930 = v1 + 1;
}
