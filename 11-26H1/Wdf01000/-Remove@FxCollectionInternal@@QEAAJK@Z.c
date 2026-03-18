/*
 * XREFs of ?Remove@FxCollectionInternal@@QEAAJK@Z @ 0x14003B3A0
 * Callers:
 *     ?Clear@FxCollectionInternal@@QEAAXXZ @ 0x14003B36C (-Clear@FxCollectionInternal@@QEAAXXZ.c)
 *     imp_WdfRegistryQueryMultiString @ 0x14003C530 (imp_WdfRegistryQueryMultiString.c)
 * Callees:
 *     ?FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z @ 0x14003BA20 (-FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z.c)
 *     ?RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z @ 0x14003BB54 (-RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z.c)
 */

int __fastcall FxCollectionInternal::Remove(FxCollectionInternal *this, unsigned int Index)
{
  FxCollectionEntry *Entry; // rax
  FxCollectionInternal *v3; // r9

  Entry = FxCollectionInternal::FindEntry(this, Index);
  if ( Entry )
    return FxCollectionInternal::RemoveEntry(v3, Entry);
  else
    return -1073741275;
}
