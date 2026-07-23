/*
 * XREFs of PoQueryPowerLimitValue @ 0x1407CD4F0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PopPowerLimitUpdatePendingEvents @ 0x1407CE2C4 (PopPowerLimitUpdatePendingEvents.c)
 */

__int64 __fastcall PoQueryPowerLimitValue(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v5; // r14d
  __int64 v7; // rdi
  unsigned int v8; // ecx
  unsigned int i; // eax
  __int64 v10; // r8
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
  struct _KLOCK_ENTRIES *v14; // r9

  v5 = a2;
  if ( a1 && (_DWORD)a2 && a3 )
  {
    v7 = *(_QWORD *)(a1 + 64);
    PopAcquireRwLockExclusive((unsigned __int64 *)(v7 + 32), a2, a3, a4);
    if ( *(_BYTE *)(a1 + 16) && *(_BYTE *)(v7 + 48) )
    {
      v8 = 0;
LABEL_7:
      if ( v8 >= v5 )
      {
        ++*(_DWORD *)(v7 + 180);
        PopReleaseRwLock((struct _KTHREAD *)(v7 + 32));
        v11 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v7 + 120), v5);
        PopAcquireRwLockExclusive((unsigned __int64 *)(v7 + 32), v12, v13, v14);
        --*(_DWORD *)(v7 + 180);
        PopPowerLimitUpdatePendingEvents(v7);
      }
      else
      {
        for ( i = 0; i < *(_DWORD *)(a1 + 32); ++i )
        {
          v10 = *(_QWORD *)(a1 + 40);
          if ( *(_DWORD *)(a3 + 16LL * v8) == *(_DWORD *)(v10 + 16LL * i)
            && *(_DWORD *)(a3 + 16LL * v8 + 4) == *(_DWORD *)(v10 + 16LL * i + 4) )
          {
            ++v8;
            goto LABEL_7;
          }
        }
        v11 = -1073741637;
      }
    }
    else
    {
      v11 = -1073741431;
    }
    PopReleaseRwLock((struct _KTHREAD *)(v7 + 32));
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v11;
}
