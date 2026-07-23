/*
 * XREFs of PopEtEnergyTrackerCleanup @ 0x1407DFF80
 * Callers:
 *     PopEtEnergyTrackerDelete @ 0x1407E0490 (PopEtEnergyTrackerDelete.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PopEtEnergyTrackerCleanupAggregates @ 0x1409CC764 (PopEtEnergyTrackerCleanupAggregates.c)
 *     PopEtAggregateKeyCleanup @ 0x1409CC898 (PopEtAggregateKeyCleanup.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopEtEnergyTrackerCleanup(__int64 *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 *v5; // rcx
  __int64 **v6; // rax
  unsigned int i; // esi
  void *v8; // rcx
  char *v9; // rsi
  char *v10; // rdi
  char *v11; // rax
  char *v12; // rbp
  char *j; // rcx
  void *v14; // rcx
  int v16; // [rsp+40h] [rbp+8h] BYREF

  PopAcquireRwLockExclusive((unsigned __int64 *)(PopEtGlobals + 16), a2, a3, a4);
  v5 = (__int64 *)*a1;
  if ( *(__int64 **)(*a1 + 8) != a1 || (v6 = (__int64 **)a1[1], *v6 != a1) )
    __fastfail(3u);
  *v6 = v5;
  v5[1] = (__int64)v6;
  PopReleaseRwLock((struct _KTHREAD *)(PopEtGlobals + 16));
  if ( a1[82] )
  {
    if ( *(int *)(PopEtGlobals + 1096) >= 0 )
    {
      if ( *(_QWORD *)(PopEtGlobals + 1088) )
      {
        for ( i = 0; i < *((_DWORD *)a1 + 162); ++i )
        {
          v16 = *(_DWORD *)(a1[82] + 20LL * i);
          guard_dispatch_icall_no_overrides((__int64)&v16, 0LL);
        }
      }
    }
    ExFreePoolWithTag((PVOID)a1[82], 0x54456F50u);
    a1[82] = 0LL;
  }
  PopEtEnergyTrackerCleanupAggregates(a1);
  v8 = (void *)a1[7];
  if ( v8 )
    ExFreePoolWithTag(v8, 0x54456F50u);
  v9 = (char *)a1[9];
  v10 = v9;
  while ( v10 )
  {
    v11 = *(char **)v10;
    v10 = v11;
    if ( ((unsigned __int8)v11 & 1) != 0 )
      break;
LABEL_19:
    if ( !v11 )
      goto LABEL_27;
    v12 = v10;
    for ( j = v9; (*(_QWORD *)j & 1) == 0; j = *(char **)j )
    {
      if ( *(char **)j == v10 )
      {
        *(_QWORD *)j = *(_QWORD *)v10;
        --*((_DWORD *)a1 + 16);
        *(_QWORD *)v10 |= 0x8000000000000002uLL;
        v10 = j;
        goto LABEL_26;
      }
    }
    v12 = 0LL;
LABEL_26:
    PopEtAggregateKeyCleanup(v12 + 16);
    ExFreePoolWithTag(v12, 0x54456F50u);
  }
  for ( v9 += 8; (unsigned __int64)v9 < a1[9] + 8 * ((unsigned __int64)*((unsigned int *)a1 + 17) >> 5); v9 += 8 )
  {
    v10 = *(char **)v9;
    if ( (*(_QWORD *)v9 & 1) == 0 )
    {
      v11 = *(char **)v9;
      goto LABEL_19;
    }
  }
LABEL_27:
  v14 = (void *)a1[9];
  if ( v14 )
    ExFreePoolWithTag(v14, 0x54456F50u);
  return PopEtAggregateKeyCleanup(a1 + 12);
}
