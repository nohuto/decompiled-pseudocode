/*
 * XREFs of IommupHvDetachPasidDeviceDomain @ 0x1405A08B4
 * Callers:
 *     IommupDomainAttachPasidDevice @ 0x14058A5DC (IommupDomainAttachPasidDevice.c)
 *     IommupDomainDetachPasidDevice @ 0x14058A958 (IommupDomainDetachPasidDevice.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall IommupHvDetachPasidDeviceDomain(__int64 a1, int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rcx
  AutoBoost *v7; // rax
  volatile unsigned __int8 *v8; // rdx
  AutoBoost *v9; // rsi
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 24);
  v11 = 0LL;
  if ( a2 )
  {
    if ( *(_DWORD *)(v4 + 8) != 1 )
    {
      v7 = (AutoBoost *)KeAbPreAcquire(v4 + 104, 0LL, 0LL, a4);
      v9 = v7;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 104), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v4 + 104), v7, v4 + 104);
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
      if ( (*(_DWORD *)(v4 + 92))-- == 1 )
      {
        LODWORD(v11) = *(_DWORD *)(v4 + 48);
        BYTE4(v11) = 1;
        guard_dispatch_icall_no_overrides(&v11, v8);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v4 + 104));
      KeAbPostRelease(v4 + 104);
    }
  }
  else
  {
    v5 = *(_DWORD *)(a1 + 268);
    v6 = *(_QWORD *)(a1 + 32);
    LODWORD(v11) = v5;
    BYTE4(v11) = 1;
    guard_dispatch_icall_no_overrides(v6, &v11);
  }
}
