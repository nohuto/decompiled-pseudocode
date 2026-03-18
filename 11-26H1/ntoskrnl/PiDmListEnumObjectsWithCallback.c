/*
 * XREFs of PiDmListEnumObjectsWithCallback @ 0x1409A3F50
 * Callers:
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14098EA84 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmGetCmObjectConstraintListFromCache @ 0x1409A2C44 (PiDmGetCmObjectConstraintListFromCache.c)
 *     PiPnpRtlCmActionCallback @ 0x1409A2FF0 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1409D8860 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     PiDmObjectRelease @ 0x1409A6000 (PiDmObjectRelease.c)
 *     CmpUnlockSiloKeyLockTracker @ 0x1409A604C (CmpUnlockSiloKeyLockTracker.c)
 *     PiDmObjectAcquireSharedLock @ 0x1409A7358 (PiDmObjectAcquireSharedLock.c)
 *     KsepCacheLock @ 0x1409A73D0 (KsepCacheLock.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDmListEnumObjectsWithCallback(int a1, struct _KTHREAD *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  __int64 v6; // rbx
  int v7; // r15d
  __int64 *v8; // r14
  __int64 v9; // rbp
  char *v10; // rdi
  __int64 Pool2; // rax
  _QWORD *v12; // rdx
  volatile signed __int32 *v13; // rcx
  char v14; // bp
  __int64 *v15; // rdi
  PVOID *v16; // rdi
  struct _KTHREAD *v18; // rbp
  char *v19; // rax
  int i; // ecx

  v4 = 0;
  v6 = 0LL;
  v7 = 0;
  v8 = 0LL;
  v9 = 5LL * a1;
  v10 = (char *)a2 + PiDmListDefs[v9 + 1];
  PiDmObjectAcquireSharedLock(a2);
  if ( *((_DWORD *)v10 + 4) )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    v8 = (__int64 *)Pool2;
    if ( Pool2 )
    {
      v12 = *(_QWORD **)v10;
      while ( 1 )
      {
        if ( v12 == (_QWORD *)v10 )
        {
          v14 = 0;
          goto LABEL_8;
        }
        if ( (unsigned int)v6 >= *((_DWORD *)v10 + 4) )
          break;
        v13 = (volatile signed __int32 *)((char *)v12 - PiDmListDefs[v9 + 3]);
        *(_QWORD *)(Pool2 + 8 * v6) = v13;
        _InterlockedIncrement(v13 + 2);
        v12 = (_QWORD *)*v12;
        v6 = (unsigned int)(v6 + 1);
      }
      v14 = 1;
LABEL_8:
      if ( (unsigned int)v6 < *((_DWORD *)v10 + 4) )
        v14 = 1;
      goto LABEL_10;
    }
    v7 = -1073741670;
  }
  else if ( *(char **)v10 != v10 )
  {
    v18 = a2;
    CmpUnlockSiloKeyLockTracker(a2);
    goto LABEL_25;
  }
  v14 = 0;
LABEL_10:
  CmpUnlockSiloKeyLockTracker(a2);
  if ( !v14 )
    goto LABEL_11;
  v18 = a2;
LABEL_25:
  KsepCacheLock(v18);
  v19 = *(char **)v10;
  for ( i = 0; v19 != v10; ++i )
    v19 = *(char **)v19;
  *((_DWORD *)v10 + 4) = i;
  CmpUnlockSiloKeyLockTracker(v18);
LABEL_11:
  if ( (_DWORD)v6 )
  {
    v15 = v8;
    do
    {
      v7 = guard_dispatch_icall_no_overrides(*v15, a4);
      if ( v7 < 0 )
        break;
      ++v4;
      ++v15;
    }
    while ( v4 < (unsigned int)v6 );
  }
  if ( v8 )
  {
    if ( (_DWORD)v6 )
    {
      v16 = (PVOID *)v8;
      do
      {
        PiDmObjectRelease(*v16++);
        --v6;
      }
      while ( v6 );
    }
    ExFreePoolWithTag(v8, 0x5A706E50u);
  }
  return (unsigned int)v7;
}
