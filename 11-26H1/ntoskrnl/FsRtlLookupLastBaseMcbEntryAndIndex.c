/*
 * XREFs of FsRtlLookupLastBaseMcbEntryAndIndex @ 0x1404AD300
 * Callers:
 *     FsRtlLookupLastLargeMcbEntryAndIndex @ 0x1404AD290 (FsRtlLookupLastLargeMcbEntryAndIndex.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlLookupLastBaseMcbEntryAndIndex(
        PBASE_MCB OpaqueMcb,
        PLONGLONG LargeVbn,
        PLONGLONG LargeLbn,
        PULONG Index)
{
  int v4; // r10d
  ULONG PairCount; // ecx
  BOOLEAN result; // al
  _DWORD *Mapping; // rdx
  int v10; // edi
  int v11; // eax
  int v12; // eax

  v4 = 0;
  PairCount = OpaqueMcb->PairCount;
  result = 0;
  if ( PairCount )
  {
    Mapping = OpaqueMcb->Mapping;
    v10 = Mapping[2 * PairCount - 1];
    if ( v10 == -1 )
    {
      v12 = -1;
    }
    else
    {
      if ( PairCount == 1 )
        v11 = 0;
      else
        v11 = Mapping[2 * PairCount - 4];
      v12 = v10 + Mapping[2 * PairCount - 2] + ~v11;
    }
    *(_DWORD *)LargeLbn = v12;
    *(_DWORD *)LargeVbn = *((_DWORD *)OpaqueMcb->Mapping + 2 * (OpaqueMcb->PairCount - 1)) - 1;
    *Index = OpaqueMcb->PairCount - 1;
    result = 1;
  }
  *((_DWORD *)LargeVbn + 1) = (*(_DWORD *)LargeVbn != -1) - 1;
  LOBYTE(v4) = *(_DWORD *)LargeLbn != -1;
  *((_DWORD *)LargeLbn + 1) = v4 - 1;
  return result;
}
