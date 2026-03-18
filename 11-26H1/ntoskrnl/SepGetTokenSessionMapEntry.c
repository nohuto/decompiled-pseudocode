/*
 * XREFs of SepGetTokenSessionMapEntry @ 0x1404B8110
 * Callers:
 *     SepIsParentOfChildAppContainer @ 0x140816B9C (SepIsParentOfChildAppContainer.c)
 *     SepSetTokenLowboxNumber @ 0x140A2C4A4 (SepSetTokenLowboxNumber.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140A2C9E4 (SepDereferenceLowBoxNumberEntry.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall SepGetTokenSessionMapEntry(int a1, char a2, __int64 *a3)
{
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *i; // rcx
  __int64 p_Blink; // rcx
  __int64 Pool2; // rax
  struct _LIST_ENTRY *v11; // rdx
  struct _LIST_ENTRY *v12; // r8

  Flink = SepRmCapTableLock.MutantListHead.Flink;
  *a3 = 0LL;
  if ( Flink )
  {
LABEL_2:
    for ( i = Flink->Flink; i != Flink; i = i->Flink )
    {
      if ( LODWORD(i[1].Flink) == a1 )
      {
        p_Blink = (__int64)&i[1].Blink;
LABEL_6:
        *a3 = p_Blink;
        return 0LL;
      }
    }
    if ( !a2 )
      return 3221226021LL;
    Pool2 = ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      v11 = SepRmCapTableLock.MutantListHead.Flink;
      p_Blink = Pool2 + 24;
      *(_BYTE *)(Pool2 + 56) = 0;
      *(_DWORD *)(Pool2 + 16) = a1;
      *(_QWORD *)(Pool2 + 24) = 0LL;
      v12 = v11->Flink;
      if ( v11->Flink->Blink != v11 )
        __fastfail(3u);
      *(_QWORD *)Pool2 = v12;
      *(_QWORD *)(Pool2 + 8) = v11;
      v12->Blink = (struct _LIST_ENTRY *)Pool2;
      v11->Flink = (struct _LIST_ENTRY *)Pool2;
      goto LABEL_6;
    }
    return 3221225626LL;
  }
  if ( !a2 )
    return 3221226021LL;
  Flink = (struct _LIST_ENTRY *)ExAllocatePool2(0x100uLL);
  SepRmCapTableLock.MutantListHead.Flink = Flink;
  if ( Flink )
  {
    Flink->Blink = Flink;
    Flink->Flink = Flink;
    goto LABEL_2;
  }
  return 3221225626LL;
}
