/*
 * XREFs of PspRemoveProperty @ 0x1404610F0
 * Callers:
 *     PspSetPropertyHelper @ 0x140460FE8 (PspSetPropertyHelper.c)
 *     PspEmptyPropertySet @ 0x140955BE8 (PspEmptyPropertySet.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     PspFindPropertySetEntry @ 0x1404611B0 (PspFindPropertySetEntry.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspRemoveProperty(__int64 a1, __int64 a2, _QWORD *a3)
{
  PVOID *PropertySetEntry; // rax
  KIRQL v7; // r8
  PVOID *v8; // rbx
  PVOID *v9; // rcx
  PVOID **v10; // rax

  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
  PropertySetEntry = (PVOID *)PspFindPropertySetEntry(a1, a2);
  v8 = PropertySetEntry;
  if ( PropertySetEntry )
  {
    if ( a3 )
      *a3 = PropertySetEntry[3];
    v9 = (PVOID *)*PropertySetEntry;
    if ( *((PVOID **)*PropertySetEntry + 1) != PropertySetEntry || (v10 = (PVOID **)PropertySetEntry[1], *v10 != v8) )
      __fastfail(3u);
    *v10 = v9;
    v9[1] = v10;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 16), v7);
  if ( v8 )
  {
    ObfDereferenceObjectWithTag(v8[3], 0x72507350u);
    ExFreePoolWithTag(v8, 0x50737050u);
  }
  return 0LL;
}
