/*
 * XREFs of ?ExpandStorage@AllocatedStorage@CSparseStorage@@SAXPEAPEAV12@_K@Z @ 0x1801121F8
 * Callers:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1801107DC (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 *     ?SetOpacityInternal@CVisual@@QEAAXM@Z @ 0x18011096C (-SetOpacityInternal@CVisual@@QEAAXM@Z.c)
 * Callees:
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x1801555A0 (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 */

void __fastcall CSparseStorage::AllocatedStorage::ExpandStorage(
        struct CSparseStorage::AllocatedStorage **a1,
        size_t a2)
{
  unsigned int *v4; // rcx
  __int64 v5; // rsi
  struct CSparseStorage::AllocatedStorage *v6; // rax

  v4 = (unsigned int *)*a1;
  v5 = *v4;
  v6 = (struct CSparseStorage::AllocatedStorage *)DefaultHeap::Realloc(v4, a2);
  *a1 = v6;
  if ( !v6 )
    RaiseFailFastException(0LL, 0LL, 0);
  memset_0((char *)*a1 + v5, 0, a2 - v5);
  *(_DWORD *)*a1 = a2;
}
