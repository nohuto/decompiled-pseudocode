/*
 * XREFs of ?HampHostIdStoreInvalidateForPackage@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_PACKAGE@@@Z @ 0x18006654C
 * Callers:
 *     ?HampClientPkgEnableServicing@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@PEAPEAPEAXPEAK@Z @ 0x180066340 (-HampClientPkgEnableServicing@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@PEAP.c)
 * Callees:
 *     ?HampHostIdStoreAcquireLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x180033D2C (-HampHostIdStoreAcquireLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     ?HampHostIdStoreReleaseLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x180033D9C (-HampHostIdStoreReleaseLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     ?HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM_KEY@@P6AKPEAU_HAM_HOSTID_ENTRY@@PEAX@Z5@Z @ 0x180036228 (-HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM.c)
 */

void __fastcall HampHostIdStoreInvalidateForPackage(struct _HAM_HOSTID_STORE *a1, struct _HAM_PACKAGE *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdi
  _QWORD v5[3]; // [rsp+30h] [rbp-18h] BYREF

  v2 = *((_QWORD *)a2 + 11);
  v4 = *(_QWORD *)(v2 + 160);
  v5[1] = 0LL;
  v5[0] = a2;
  HampHostIdStoreAcquireLockExclusive(a1);
  HampHostIdStoreEnumerateMatchingEntries(
    a1,
    (unsigned int *)(v4 + 88),
    (union _RM_SID *)(v2 + 88),
    0LL,
    (unsigned int (*)(struct _HAM_HOSTID_ENTRY *, void *))HampHostIdStoreInvalidatePackageEntriesCallback,
    v5);
  HampHostIdStoreReleaseLockExclusive(a1);
}
