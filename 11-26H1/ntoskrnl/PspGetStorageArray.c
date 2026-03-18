/*
 * XREFs of PspGetStorageArray @ 0x140A31200
 * Callers:
 *     PspStorageReplaceObject @ 0x1407FFD40 (PspStorageReplaceObject.c)
 *     PspStorageMakeSlotReadOnly @ 0x140A30F2C (PspStorageMakeSlotReadOnly.c)
 *     PspStorageInsertObject @ 0x140A310E4 (PspStorageInsertObject.c)
 * Callees:
 *     PspGetStorageArrayIfPossible @ 0x14044EE30 (PspGetStorageArrayIfPossible.c)
 *     PspLazyInitializeStorageExpansion @ 0x140A314BC (PspLazyInitializeStorageExpansion.c)
 */

__int64 __fastcall PspGetStorageArray(__int64 a1, unsigned int a2, unsigned int *a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v9; // rcx
  const signed __int64 *ThreadLock; // rcx

  result = PspGetStorageArrayIfPossible(a1, a2, a3, a4);
  if ( (_DWORD)result == -1073741275 )
  {
    if ( *(_QWORD *)(v9 + 512) )
      return result;
    result = PspLazyInitializeStorageExpansion();
    if ( (int)result < 0 )
      return result;
    result = PspGetStorageArrayIfPossible(a1, a2, a3, a4);
  }
  if ( (int)result >= 0 )
  {
    ThreadLock = (const signed __int64 *)KiSystemServiceTraceCallbackLock.ThreadLock;
    if ( a2 >= 0x20 )
      ThreadLock = (const signed __int64 *)KiSystemServiceTraceCallbackLock.StackLimit;
    if ( !_bittest64(ThreadLock, *a3) )
      __fastfail(5u);
    return 0LL;
  }
  return result;
}
