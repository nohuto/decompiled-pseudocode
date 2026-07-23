/*
 * XREFs of MiReferenceExistingControlArea @ 0x14049E0E0
 * Callers:
 *     MiCreateImageOrDataSection @ 0x14098BFCC (MiCreateImageOrDataSection.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     MiReleaseControlAreaWaiters @ 0x140272950 (MiReleaseControlAreaWaiters.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReferenceActiveControlArea @ 0x1402EDCE4 (MiReferenceActiveControlArea.c)
 *     MiLockSectionControlArea @ 0x140447C00 (MiLockSectionControlArea.c)
 *     MiValidateControlAreaPartition @ 0x140491A04 (MiValidateControlAreaPartition.c)
 */

__int64 __fastcall MiReferenceExistingControlArea(__int64 a1)
{
  char v1; // dl
  __int64 v3; // rax
  __int64 v4; // rbx
  int v5; // esi
  volatile LONG *v6; // rcx
  volatile LONG *v8; // rcx
  __int64 active; // rax
  volatile LONG *v10; // rcx
  _QWORD *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  volatile LONG *v14; // rcx
  KIRQL OldIrql; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_BYTE *)(a1 + 19);
  OldIrql = 0;
  v3 = MiLockSectionControlArea(*(__int64 **)(*(_QWORD *)(a1 + 48) + 40LL), (v1 & 1) == 0, &OldIrql);
  v4 = v3;
  if ( !v3 )
    return 3221225473LL;
  if ( (*(_DWORD *)(v3 + 56) & 3) != 0 )
  {
    v14 = (volatile LONG *)(v3 + 72);
    if ( OldIrql == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v14);
    else
      ExReleaseSpinLockExclusive(v14, OldIrql);
    return 3221225473LL;
  }
  v5 = MiValidateControlAreaPartition(a1, v3);
  if ( v5 >= 0 )
  {
    if ( (*(_DWORD *)a1 & 0x1000000) != 0 && (*(_DWORD *)(v4 + 56) & 0x30000000) == 0x10000000 )
    {
      v8 = (volatile LONG *)(v4 + 72);
      if ( OldIrql == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v8);
      else
        ExReleaseSpinLockExclusive(v8, OldIrql);
      return 3221227793LL;
    }
    else
    {
      active = MiReferenceActiveControlArea((_DWORD *)a1, v4);
      v10 = (volatile LONG *)(v4 + 72);
      v11 = (_QWORD *)active;
      if ( OldIrql == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v10);
      else
        ExReleaseSpinLockExclusive(v10, OldIrql);
      MiReleaseControlAreaWaiters(v11, v12, v13);
      return 0LL;
    }
  }
  else
  {
    v6 = (volatile LONG *)(v4 + 72);
    if ( OldIrql == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v6);
    else
      ExReleaseSpinLockExclusive(v6, OldIrql);
    return (unsigned int)v5;
  }
}
