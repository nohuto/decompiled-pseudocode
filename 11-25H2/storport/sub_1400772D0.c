/*
 * XREFs of sub_1400772D0 @ 0x1400772D0
 * Callers:
 *     sub_140095F04 @ 0x140095F04 (sub_140095F04.c)
 *     sub_14018213C @ 0x14018213C (sub_14018213C.c)
 * Callees:
 *     sub_14000A7B4 @ 0x14000A7B4 (sub_14000A7B4.c)
 *     sub_140020D90 @ 0x140020D90 (sub_140020D90.c)
 *     sub_140021110 @ 0x140021110 (sub_140021110.c)
 *     sub_140021280 @ 0x140021280 (sub_140021280.c)
 *     sub_1400215B0 @ 0x1400215B0 (sub_1400215B0.c)
 *     sub_140021760 @ 0x140021760 (sub_140021760.c)
 *     sub_1400305F0 @ 0x1400305F0 (sub_1400305F0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

void __fastcall sub_1400772D0(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  void *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  char v10; // al
  __int64 v11; // rdi
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v12; // rcx
  _QWORD *v13; // rdi
  void *v14; // rcx
  __int64 v15; // [rsp+20h] [rbp-50h]
  __int128 *v16; // [rsp+28h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-38h] BYREF
  __int128 v18; // [rsp+50h] [rbp-20h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *(char *)(a1 + 505) < 0 )
  {
    if ( *(_QWORD *)(a1 + 24) && (*(_DWORD *)(*(_QWORD *)(a1 + 1872) + 32LL) & 4) != 0 && sub_1400215B0(a1, 4) )
    {
      v2 = *(_QWORD *)(a1 + 24);
      v18 = 0LL;
      LOWORD(v18) = 1;
      DWORD1(v18) = 4;
      WORD1(v18) = *(_WORD *)(v2 + 56);
      WORD4(v18) = *(_WORD *)(a1 + 104);
      BYTE10(v18) = *(_BYTE *)(a1 + 106);
      v16 = &v18;
      v15 = 0x1800000001LL;
      sub_140021760(v2 + 376);
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 48), &LockHandle);
    sub_14000A7B4(a1);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    sub_1400305F0(a1, 0);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 1872) + 96LL), &LockHandle);
    sub_140020D90(a1);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 1872) + 104LL);
    if ( v6 )
    {
      PoUnregisterCoalescingCallback(v6, v3, v4, v5, v15, v16);
      *(_QWORD *)(*(_QWORD *)(a1 + 1872) + 104LL) = 0LL;
    }
    v7 = *(void **)(*(_QWORD *)(a1 + 1872) + 112LL);
    if ( v7 )
    {
      PoUnregisterPowerSettingCallback(v7);
      *(_QWORD *)(*(_QWORD *)(a1 + 1872) + 112LL) = 0LL;
    }
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 1872) + 120LL);
    if ( v8 )
    {
      LOBYTE(v3) = 1;
      ExDeleteTimer(v8, v3, 0LL, 0LL);
      *(_QWORD *)(*(_QWORD *)(a1 + 1872) + 120LL) = 0LL;
    }
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 1872) + 128LL);
    if ( v9 )
    {
      LOBYTE(v3) = 1;
      v10 = ExDeleteTimer(v9, v3, 0LL, 0LL);
      *(_QWORD *)(*(_QWORD *)(a1 + 1872) + 128LL) = 0LL;
      if ( v10 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1872) + 148LL) & 1) != 0 )
        {
          v11 = *(_QWORD *)(a1 + 24);
          if ( sub_140021280(a1) )
          {
            PoFxIdleComponent(**(_QWORD **)(a1 + 1872), 0LL, 0LL);
            ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864));
          }
          if ( *(_QWORD *)(v11 + 4960) )
            sub_140021110(v11, 0LL, 0LL);
        }
      }
    }
    v12 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 1864);
    *(_BYTE *)(a1 + 505) &= ~0x80u;
    ExWaitForRundownProtectionReleaseCacheAware(v12);
    v13 = *(_QWORD **)(a1 + 1872);
    *(_QWORD *)(a1 + 1872) = 0LL;
    v14 = (void *)v13[22];
    if ( v14 )
    {
      ExFreePoolWithTag(v14, 0x4F506152u);
      v13[22] = 0LL;
      *((_DWORD *)v13 + 42) = 0;
    }
    PoFxUnregisterDevice(*v13);
    ExFreePoolWithTag(v13, 0x4F506152u);
  }
}
