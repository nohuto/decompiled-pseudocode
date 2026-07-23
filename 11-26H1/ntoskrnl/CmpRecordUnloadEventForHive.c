/*
 * XREFs of CmpRecordUnloadEventForHive @ 0x140A41774
 * Callers:
 *     CmpLinkHiveToMaster @ 0x14093E12C (CmpLinkHiveToMaster.c)
 *     CmpFreezeHive @ 0x140A416D8 (CmpFreezeHive.c)
 *     CmpResolveHiveLoadConflict @ 0x140ADF3F4 (CmpResolveHiveLoadConflict.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpRecordUnloadEventForHive(__int64 a1, void *a2)
{
  void *Pool2; // rsi
  __int64 v6; // rax
  const void **v7; // rdi
  __int64 v8; // rax

  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    return 3221225626LL;
  v6 = *(unsigned int *)(a1 + 2928);
  v7 = (const void **)(a1 + 2936);
  if ( (_DWORD)v6 )
  {
    memmove(Pool2, *v7, 8 * v6);
    ExFreePoolWithTag((PVOID)*v7, 0);
  }
  v8 = *(unsigned int *)(a1 + 2928);
  *v7 = Pool2;
  *((_QWORD *)Pool2 + v8) = a2;
  ++*(_DWORD *)(a1 + 2928);
  PsReferenceSiloContext(a2);
  return 0LL;
}
