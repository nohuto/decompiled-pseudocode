/*
 * XREFs of ?HampUserLogoff@@YAJPEAU_HAM_USER@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18007F2AC
 * Callers:
 *     ?HamSrvLogoffUser@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAEKK@Z @ 0x18007A570 (-HamSrvLogoffUser@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAEKK@Z.c)
 * Callees:
 *     ?HampHostIdStoreAcquireLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x180033D2C (-HampHostIdStoreAcquireLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     ?HampHostIdStoreReleaseLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x180033D9C (-HampHostIdStoreReleaseLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     ?HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM_KEY@@P6AKPEAU_HAM_HOSTID_ENTRY@@PEAX@Z5@Z @ 0x180036228 (-HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM.c)
 *     ?HampUserAcquireLockExclusive@@YAXPEAU_HAM_USER@@@Z @ 0x1800465F0 (-HampUserAcquireLockExclusive@@YAXPEAU_HAM_USER@@@Z.c)
 *     ?HampUserReleaseLockExclusive@@YAXPEAU_HAM_USER@@@Z @ 0x180046624 (-HampUserReleaseLockExclusive@@YAXPEAU_HAM_USER@@@Z.c)
 *     ?HampUserTerminate@@YAJPEAU_HAM_USER@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18007F3B4 (-HampUserTerminate@@YAJPEAU_HAM_USER@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_C.c)
 */

__int64 __fastcall HampUserLogoff(struct _HAM_USER *a1, struct _HAM_CLIENT_CONTEXT *a2, int a3)
{
  __int64 v6; // rdx
  int v7; // eax
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // rdi
  __int64 v12; // rbx
  struct _HAM_HOSTID_STORE *v13; // rdi
  __int64 v14; // rdx

  HampUserAcquireLockExclusive(a1);
  v7 = *((_DWORD *)a1 + 48);
  if ( (v7 & 1) != 0 )
  {
    v8 = -1073740682;
  }
  else
  {
    *((_DWORD *)a1 + 48) = v7 | 1;
    v8 = 0;
  }
  HampUserReleaseLockExclusive(a1, v6);
  if ( v8 >= 0 )
  {
    v11 = *(_QWORD *)(*((_QWORD *)a1 + 20) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL;
    v8 = HampUserTerminate(a1, v9, v10, a2, a3);
    if ( v8 >= 0 )
    {
      v12 = *((_QWORD *)a1 + 20);
      v13 = (struct _HAM_HOSTID_STORE *)(v11 + 400);
      HampHostIdStoreAcquireLockExclusive(v13);
      HampHostIdStoreEnumerateMatchingEntries(
        v13,
        (unsigned int *)(v12 + 88),
        (struct _HAM_USER *)((char *)a1 + 88),
        0LL,
        (unsigned int (*)(struct _HAM_HOSTID_ENTRY *, void *))HampHostIdStoreInvalidateEntryCallback,
        0LL);
      HampHostIdStoreReleaseLockExclusive(v13);
      v8 = 0;
    }
    HampUserAcquireLockExclusive(a1);
    *((_DWORD *)a1 + 48) &= 0xFFFFFFFC;
    *((_QWORD *)a1 + 23) = 0LL;
    HampUserReleaseLockExclusive(a1, v14);
  }
  return (unsigned int)v8;
}
