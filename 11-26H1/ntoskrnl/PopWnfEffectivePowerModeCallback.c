/*
 * XREFs of PopWnfEffectivePowerModeCallback @ 0x1407D2650
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     ExQueryWnfStateData @ 0x1409C4360 (ExQueryWnfStateData.c)
 */

__int64 __fastcall PopWnfEffectivePowerModeCallback(
        __int64 a1,
        const void *a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rdi
  unsigned int v9; // esi
  __int64 v10; // rax
  unsigned int v11; // ebx
  int v13[10]; // [rsp+20h] [rbp-28h] BYREF
  int v14; // [rsp+68h] [rbp+20h] BYREF

  v14 = (int)a4;
  v6 = a6;
  v13[0] = 0;
  v9 = 0;
  PopAcquireRwLockExclusive((unsigned __int64 *)(a6 + 40), (__int64)a2, a3, a4);
  if ( !memcmp(a2, &WNF_PO_EFFECTIVE_POWER_MODE, 8uLL) )
  {
    v13[0] = 8;
    v9 = ExQueryWnfStateData(a1, &v14, &a6, v13);
    if ( v9 )
    {
      v9 = 128;
    }
    else
    {
      v10 = (unsigned int)(*(_DWORD *)v6 - 1);
      if ( (unsigned int)v10 > 1 )
        v10 = 0LL;
      v11 = *((_DWORD *)&a6 + v10);
      if ( v11 != *(_DWORD *)(v6 + 16) )
      {
        *(_QWORD *)(v6 + 72) = KeGetCurrentThread();
        if ( *(_QWORD *)(v6 + 56) )
          guard_dispatch_icall_no_overrides(v11, *(_QWORD *)(v6 + 80));
        ++*(_DWORD *)(v6 + 64);
        *(_DWORD *)(v6 + 16) = v11;
        *(_QWORD *)(v6 + 72) = 0LL;
      }
    }
  }
  PopReleaseRwLock((struct _KTHREAD *)(v6 + 40));
  return v9;
}
