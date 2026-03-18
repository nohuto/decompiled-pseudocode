/*
 * XREFs of MmIsDriverVerifyingByAddress @ 0x140C43F40
 * Callers:
 *     <none>
 * Callees:
 *     MiLockLoadedDataTableEntryIfNecessary @ 0x1404ABD44 (MiLockLoadedDataTableEntryIfNecessary.c)
 *     MmUnlockLoadedDataTableEntry @ 0x14051E3A8 (MmUnlockLoadedDataTableEntry.c)
 */

LOGICAL __stdcall MmIsDriverVerifyingByAddress(PVOID AddressWithinSection)
{
  LOGICAL v2; // ebx
  struct _LIST_ENTRY *v3; // rax
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  if ( !(_DWORD)VfRuleClasses )
    return 0;
  v2 = 0;
  v3 = MiLockLoadedDataTableEntryIfNecessary((unsigned __int64)AddressWithinSection, &v4);
  if ( v3 )
  {
    v2 = (LODWORD(v3[6].Blink) >> 25) & 1;
    if ( v4 )
      MmUnlockLoadedDataTableEntry((__int64)v3);
  }
  return v2;
}
