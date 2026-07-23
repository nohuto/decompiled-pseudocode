/*
 * XREFs of ExpFastResourceLegacyConvertExclusiveToShared @ 0x14041E9E8
 * Callers:
 *     ExConvertExclusiveToSharedLite @ 0x14041E930 (ExConvertExclusiveToSharedLite.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x1402FD38C (ExpAllocateOwnerEntryForLegacyShim.c)
 *     ExpConvertFastResourceExclusiveToShared @ 0x14041EBC4 (ExpConvertFastResourceExclusiveToShared.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpFastResourceLegacyConvertExclusiveToShared(_QWORD *BugCheckParameter1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  _QWORD *v3; // rbx
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 *i; // rcx
  __int64 OwnerEntryForLegacyShim; // rax
  __int64 v7; // r8
  char v9; // dl

  CurrentThread = KeGetCurrentThread();
  v3 = BugCheckParameter1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    LOBYTE(BugCheckParameter1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(BugCheckParameter1, a2);
  }
  if ( (*v3 & 1) == 0 || (i = v3 + 8, (struct _KTHREAD *)v3[10] != CurrentThread) )
  {
    for ( i = (unsigned __int64 *)CurrentThread[1].WaitBlock[3].SparePtr;
          i != &CurrentThread[1].LastXStateSaveDebugInfo;
          i = (unsigned __int64 *)*i )
    {
      v9 = *((_BYTE *)i + 37);
      if ( (v9 & 2) == 0 && (_QWORD *)i[3] == v3 && (v9 & 1) != 0 )
        goto LABEL_7;
    }
LABEL_19:
    KeBugCheckEx(0xE3u, (ULONG_PTR)v3, (ULONG_PTR)CurrentThread, 0LL, 0LL);
  }
LABEL_7:
  if ( !i )
    goto LABEL_19;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( (*v3 & 1) == 0 )
    KeBugCheckEx(0x1C6u, 0x16uLL, (ULONG_PTR)v3, (ULONG_PTR)CurrentThread, 0LL);
  OwnerEntryForLegacyShim = ExpAllocateOwnerEntryForLegacyShim();
  return ExpConvertFastResourceExclusiveToShared(v3, OwnerEntryForLegacyShim, v7);
}
