/*
 * XREFs of HalpLeaveDmaDomain @ 0x14058AE1C
 * Callers:
 *     HalpDmaFreeChildAdapter @ 0x14050FED0 (HalpDmaFreeChildAdapter.c)
 *     HalLeaveDmaDomain @ 0x140589F70 (HalLeaveDmaDomain.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     HalpDmaDereferenceDomainObject @ 0x1403444A8 (HalpDmaDereferenceDomainObject.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x140444460 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpLeaveDmaDomain(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rbp
  unsigned __int64 *v6; // rbx
  AutoBoost *v7; // rax
  volatile unsigned __int8 *v8; // rdx
  AutoBoost *v9; // rsi
  int v10; // esi
  __int64 v11; // rdx

  v4 = *(_QWORD *)(a1 + 512);
  if ( !*(_DWORD *)(v4 + 48) )
  {
LABEL_18:
    HalpDmaDereferenceDomainObject((__int64 *)v4);
    v10 = 0;
    *(_QWORD *)(a1 + 512) = 0LL;
    return (unsigned int)v10;
  }
  v6 = (unsigned __int64 *)(a1 + 320);
  v7 = (AutoBoost *)KeAbPreAcquire(a1 + 320, 0LL, 0LL, a4);
  v9 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, v7, (__int64)v6);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v8) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v9 + 33), v8, 1);
    }
    else
    {
      *((_BYTE *)v9 + 10) = 1;
    }
  }
  if ( *(_BYTE *)(a1 + 346) )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v6);
    KeAbPostRelease((unsigned __int64)v6);
    goto LABEL_16;
  }
  v10 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 544), v8);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v6);
  KeAbPostRelease((unsigned __int64)v6);
  if ( v10 >= 0 )
  {
LABEL_16:
    if ( *(_DWORD *)(v4 + 48) == 3 )
      guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 560), v11);
    goto LABEL_18;
  }
  return (unsigned int)v10;
}
