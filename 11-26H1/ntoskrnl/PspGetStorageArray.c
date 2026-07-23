/*
 * XREFs of PspGetStorageArray @ 0x140A4C160
 * Callers:
 *     PspStorageReplaceObject @ 0x140805770 (PspStorageReplaceObject.c)
 *     PspStorageMakeSlotReadOnly @ 0x140A4BE8C (PspStorageMakeSlotReadOnly.c)
 *     PspStorageInsertObject @ 0x140A4C044 (PspStorageInsertObject.c)
 * Callees:
 *     PspGetStorageArrayIfPossible @ 0x140446F60 (PspGetStorageArrayIfPossible.c)
 *     PspLazyInitializeStorageExpansion @ 0x140A4C41C (PspLazyInitializeStorageExpansion.c)
 */

__int64 __fastcall PspGetStorageArray(__int64 a1, unsigned int a2, unsigned int *a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v9; // rcx
  const signed __int64 *StackLimit; // rcx

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
    StackLimit = (const signed __int64 *)KiSystemServiceTraceCallbackLock.StackLimit;
    if ( a2 >= 0x20 )
      StackLimit = (const signed __int64 *)KiSystemServiceTraceCallbackLock.ThreadLock;
    if ( !_bittest64(StackLimit, *a3) )
      __fastfail(5u);
    return 0LL;
  }
  return result;
}
