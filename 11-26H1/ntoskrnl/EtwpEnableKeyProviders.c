/*
 * XREFs of EtwpEnableKeyProviders @ 0x140833B0C
 * Callers:
 *     EtwStartAutoLogger @ 0x140B44338 (EtwStartAutoLogger.c)
 *     EtwpEnableBootLoggerRegistryProviders @ 0x140CE803C (EtwpEnableBootLoggerRegistryProviders.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x140488F70 (RtlInitializeGenericTableAvl.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     EtwpFreeKeyNameList @ 0x140833EEC (EtwpFreeKeyNameList.c)
 *     EtwpEnumerateKeyProviders @ 0x140B40078 (EtwpEnumerateKeyProviders.c)
 */

__int64 __fastcall EtwpEnableKeyProviders(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  _RTL_AVL_TABLE Table; // [rsp+40h] [rbp-1C8h] BYREF
  _BYTE v10[288]; // [rsp+B0h] [rbp-158h] BYREF

  memset_0(&Table, 0, sizeof(Table));
  memset_0(v10, 0, sizeof(v10));
  RtlInitializeGenericTableAvl(
    &Table,
    (PRTL_AVL_COMPARE_ROUTINE)EtwpAvlCompareKeyNames,
    (PRTL_AVL_ALLOCATE_ROUTINE)EtwpAllocateKeyNameEntry,
    (PRTL_AVL_FREE_ROUTINE)EtwpFreeKeyNameEntry,
    0LL);
  EtwpEnumerateKeyProviders(a1, a2, a3, a4, v10);
  if ( a4 )
    EtwpEnumerateKeyProviders(a1, a2, a4, 0LL, v10);
  return EtwpFreeKeyNameList(&Table);
}
