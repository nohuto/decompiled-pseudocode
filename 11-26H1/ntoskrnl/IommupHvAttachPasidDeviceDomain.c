/*
 * XREFs of IommupHvAttachPasidDeviceDomain @ 0x1405A03C4
 * Callers:
 *     IommupDomainAttachPasidDevice @ 0x14058A5DC (IommupDomainAttachPasidDevice.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     IommupHvSetUpDomainConfig @ 0x1405A110C (IommupHvSetUpDomainConfig.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvAttachPasidDeviceDomain(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  int v4; // esi
  unsigned __int64 *v6; // rdi
  AutoBoost *v7; // rax
  volatile unsigned __int8 *v8; // rdx
  AutoBoost *v9; // r14
  signed __int32 v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-50h] BYREF
  __int128 v15; // [rsp+28h] [rbp-48h] BYREF
  __int128 v16; // [rsp+38h] [rbp-38h]
  __int64 v17; // [rsp+48h] [rbp-28h]
  __int64 v18; // [rsp+50h] [rbp-20h] BYREF
  int v19; // [rsp+58h] [rbp-18h]

  v4 = 0;
  v18 = 0LL;
  v19 = 0;
  LODWORD(v17) = 0;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  if ( (_DWORD)a3 )
  {
    v12 = *(_QWORD *)(a1 + 32);
    LODWORD(v14) = *(_DWORD *)(a2 + 48);
    BYTE4(v14) = *(_BYTE *)(a2 + 52);
    return (unsigned int)guard_dispatch_icall_no_overrides(v12, &v14);
  }
  if ( *(_DWORD *)(a2 + 8) != 1 )
  {
    v6 = (unsigned __int64 *)(a2 + 104);
    v7 = (AutoBoost *)KeAbPreAcquire(a2 + 104, 0LL, a3, a4);
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
    if ( *(_DWORD *)(a2 + 92) )
      goto LABEL_16;
    if ( !*(_BYTE *)(a2 + 96) )
    {
      v10 = _InterlockedIncrement(&HalpIommuDomainId);
      *(_BYTE *)(a2 + 96) = 1;
      *(_DWORD *)(a2 + 48) = v10;
    }
    LODWORD(v14) = *(_DWORD *)(a2 + 48);
    BYTE4(v14) = 1;
    v18 = v14;
    v4 = guard_dispatch_icall_no_overrides(&v18, v8);
    if ( v4 < 0 )
      goto LABEL_17;
    v15 = 0LL;
    v17 = 0LL;
    v16 = 0LL;
    v4 = IommupHvSetUpDomainConfig(a2, &v15);
    if ( v4 >= 0 && (v4 = guard_dispatch_icall_no_overrides(&v14, &v15), v4 >= 0) )
LABEL_16:
      ++*(_DWORD *)(a2 + 92);
    else
      guard_dispatch_icall_no_overrides(&v14, v11);
LABEL_17:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v6);
    KeAbPostRelease((unsigned __int64)v6);
  }
  return (unsigned int)v4;
}
