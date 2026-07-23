/*
 * XREFs of MmChangeSectionBackingFile @ 0x14047B03C
 * Callers:
 *     FsRtlChangeBackingFileObject @ 0x14047AFF0 (FsRtlChangeBackingFileObject.c)
 *     MiShareExistingControlArea @ 0x140A63F80 (MiShareExistingControlArea.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14027BDE0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiLockSectionControlArea @ 0x140447C00 (MiLockSectionControlArea.c)
 *     ObFastReplaceObject @ 0x14047B348 (ObFastReplaceObject.c)
 */

__int64 __fastcall MmChangeSectionBackingFile(__int64 **a1, __int64 **a2, int a3)
{
  void *v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rbx
  _QWORD *v8; // rcx
  volatile LONG *v9; // rcx
  KIRQL OldIrql; // [rsp+40h] [rbp+18h] BYREF

  OldIrql = 0;
  v4 = a1;
  if ( (a3 & 0xFFFFFFFC) == 0 && a3 != 3 )
  {
    if ( a1 && a1[5] != a2[5] )
      return 3221225712LL;
    v6 = MiLockSectionControlArea(a2[5], a3 & 1, &OldIrql);
    v7 = v6;
    if ( !v6 )
      return 0LL;
    if ( (*(_DWORD *)(v6 + 56) & 1) == 0 )
    {
      v8 = (_QWORD *)(v6 + 64);
      if ( v4 )
      {
        if ( (void *)(*v8 & 0xFFFFFFFFFFFFFFF0uLL) != v4 )
          goto LABEL_13;
      }
      else
      {
        v4 = (void *)(*v8 & 0xFFFFFFFFFFFFFFF0uLL);
        if ( !v4 )
          goto LABEL_13;
      }
      ObFastReplaceObject(v8, a2);
      ObfReferenceObjectWithTag(a2, 0x43536D4Du);
      ObDereferenceObjectDeferDeleteWithTag(v4, 0x43536D4Du);
    }
LABEL_13:
    if ( (*(_DWORD *)(v7 + 56) & 0x200) != 0
      && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x2000000) == 0 )
    {
      *(_DWORD *)(v7 + 56) &= ~0x200u;
    }
    v9 = (volatile LONG *)(v7 + 72);
    if ( OldIrql == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v9);
    else
      ExReleaseSpinLockExclusive(v9, OldIrql);
    return 0LL;
  }
  return 3221225713LL;
}
