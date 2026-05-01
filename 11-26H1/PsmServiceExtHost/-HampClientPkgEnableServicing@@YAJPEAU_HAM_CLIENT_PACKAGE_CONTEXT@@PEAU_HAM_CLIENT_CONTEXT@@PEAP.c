/*
 * XREFs of ?HampClientPkgEnableServicing@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@PEAPEAPEAXPEAK@Z @ 0x180066340
 * Callers:
 *     ?HamSrvEnableServicing@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAXPEAK@Z @ 0x180067390 (-HamSrvEnableServicing@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAXPEAK@Z.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000D420 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18003F27C (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18003F30C (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampProcessSnapshotCleanup@@YAXPEAU_HAM_PROCESS_SNAPSHOT@@PEAPEAPEAX@Z @ 0x180055AB0 (-HampProcessSnapshotCleanup@@YAXPEAU_HAM_PROCESS_SNAPSHOT@@PEAPEAPEAX@Z.c)
 *     ?HampHostIdStoreInvalidateForPackage@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_PACKAGE@@@Z @ 0x18006654C (-HampHostIdStoreInvalidateForPackage@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgTerminate@@YAJPEAU_HAM_PACKAGE@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@KPEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x18006DDEC (-HampPkgTerminate@@YAJPEAU_HAM_PACKAGE@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM.c)
 */

__int64 __fastcall HampClientPkgEnableServicing(
        struct _HAM_CLIENT_PACKAGE_CONTEXT *a1,
        struct _HAM_CLIENT_CONTEXT *a2,
        void ***a3,
        unsigned int *a4)
{
  __int64 v4; // rsi
  unsigned int v6; // r14d
  unsigned int v9; // r12d
  int v10; // ebx
  unsigned int v11; // r13d
  int *v12; // rdi
  int v13; // eax
  void *v14; // rdi
  HANDLE *v15; // rsi
  __int64 v16; // rbp
  void *v18[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v19; // [rsp+40h] [rbp-38h]

  v4 = *((_QWORD *)a1 + 7);
  v6 = 0;
  v19 = 0LL;
  *(_OWORD *)v18 = 0LL;
  HampPkgAcquireLockExclusive((struct _HAM_PACKAGE *)v4);
  v9 = *((_DWORD *)a1 + 16);
  if ( (v9 & 4) != 0 )
  {
    v10 = -1073741431;
LABEL_9:
    HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v4);
    goto LABEL_18;
  }
  v11 = v9 >> 3;
  if ( (v9 & 1) == 0 )
  {
    v12 = (int *)(v4 + 340);
    v13 = *(_DWORD *)(v4 + 340);
    if ( (v13 & 1) == 0 )
    {
      *v12 = v13 | 1;
      *((_DWORD *)a1 + 16) |= 1u;
      if ( a4 )
      {
        *v12 |= 2u;
        *((_DWORD *)a1 + 16) |= 8u;
      }
      goto LABEL_12;
    }
LABEL_8:
    v10 = -1073700861;
    goto LABEL_9;
  }
  if ( (v9 & 8) == 0 || a4 )
    goto LABEL_8;
  v12 = (int *)(v4 + 340);
  *((_DWORD *)a1 + 16) = v9 & 0xFFFFFFF7;
LABEL_12:
  HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v4);
  v10 = HampPkgTerminate(v4, 1LL, 1024LL, a2, -(a4 == 0LL), (unsigned __int64)v18 & -(__int64)(a4 != 0LL));
  if ( v10 >= 0 )
  {
    HampHostIdStoreInvalidateForPackage(
      (struct _HAM_HOSTID_STORE *)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(v4 + 32) & 0xFFFFFFFFFFFFFFFCuLL) + 120) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                 + 400),
      (struct _HAM_PACKAGE *)v4);
    if ( a4 )
    {
      *a4 = v19;
      HampProcessSnapshotCleanup((struct _HAM_PROCESS_SNAPSHOT *)v18, a3);
      *(_OWORD *)v18 = 0LL;
    }
    else
    {
      v6 = v19;
    }
    v10 = 0;
  }
  else
  {
    HampPkgAcquireLockExclusive((struct _HAM_PACKAGE *)v4);
    *((_DWORD *)a1 + 16) ^= (*((_DWORD *)a1 + 16) ^ (8 * v11)) & 8;
    *v12 ^= (*v12 ^ (2 * v11)) & 2;
    *((_DWORD *)a1 + 16) ^= ((unsigned __int8)v9 ^ (unsigned __int8)*((_DWORD *)a1 + 16)) & 1;
    *v12 ^= ((unsigned __int8)v9 ^ (unsigned __int8)*v12) & 1;
    HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v4);
    v6 = v19;
  }
LABEL_18:
  v14 = v18[0];
  if ( v6 )
  {
    v15 = (HANDLE *)v18[0];
    v16 = v6;
    do
    {
      NtClose(*v15++);
      --v16;
    }
    while ( v16 );
  }
  if ( v14 )
    HampFreeHeap(v14);
  if ( v18[1] )
    HampFreeHeap(v18[1]);
  return (unsigned int)v10;
}
