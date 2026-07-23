/*
 * XREFs of FsRtlLookupLastBaseMcbEntry @ 0x140467DC0
 * Callers:
 *     FsRtlLookupLastLargeMcbEntry @ 0x1405B7C90 (FsRtlLookupLastLargeMcbEntry.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlLookupLastBaseMcbEntry(PBASE_MCB Mcb, PLONGLONG Vbn, PLONGLONG Lbn)
{
  ULONG PairCount; // r9d
  _DWORD *Mapping; // r11
  _DWORD *v5; // rbx
  int v6; // edi
  LONGLONG v7; // rax
  int v8; // eax

  PairCount = Mcb->PairCount;
  if ( !PairCount )
    return 0;
  Mapping = Mcb->Mapping;
  v5 = &Mapping[2 * PairCount - 2];
  v6 = v5[1];
  v7 = 0xFFFFFFFFLL;
  if ( v6 != -1 )
  {
    if ( PairCount == 1 )
      v8 = 0;
    else
      v8 = Mapping[2 * PairCount - 4];
    v7 = (unsigned int)(*v5 + v6 + ~v8);
  }
  *Lbn = v7;
  *Vbn = (unsigned int)(*((_DWORD *)Mcb->Mapping + 2 * (Mcb->PairCount - 1)) - 1);
  return 1;
}
