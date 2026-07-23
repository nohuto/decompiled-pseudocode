/*
 * XREFs of SleepstudyHelperCreateBlockerData @ 0x140B66F90
 * Callers:
 *     PopSleepstudyInitialize @ 0x140D0FD08 (PopSleepstudyInitialize.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     SSHSupportReleasePushLockExclusive @ 0x1404AC97C (SSHSupportReleasePushLockExclusive.c)
 *     SSHSupportAllocateNonPaged @ 0x1404BB7D8 (SSHSupportAllocateNonPaged.c)
 *     SshpCopyDataEntry @ 0x140616E10 (SshpCopyDataEntry.c)
 *     SshpFreeDataEntry @ 0x1407E8E24 (SshpFreeDataEntry.c)
 */

__int64 __fastcall SleepstudyHelperCreateBlockerData(
        __int64 a1,
        __int128 *a2,
        unsigned int a3,
        __int64 a4,
        __int64 *a5)
{
  unsigned int i; // ecx
  __int64 v10; // rax
  __int64 NonPaged; // rax
  struct _KLOCK_ENTRIES *v12; // r9
  __int64 v13; // rdi
  int v14; // ebx
  __int128 v15; // xmm0
  __int64 j; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  AutoBoost *v19; // rax
  void *v20; // rdx
  AutoBoost *v21; // rsi
  __int64 *v22; // rcx

  if ( a1 && a3 && a4 && a5 )
  {
    for ( i = 0; i < a3; ++i )
    {
      v10 = 32LL * i;
      if ( !*(_QWORD *)(v10 + a4 + 8) || !*(_WORD *)(v10 + a4) || !*(_QWORD *)(v10 + a4 + 24) )
        return (unsigned int)-1073741811;
    }
    if ( 32 * (unsigned __int64)a3 > 0xFFFFFFFF || 32 * a3 + 48 < 32 * a3 )
    {
      return (unsigned int)-1073741675;
    }
    else
    {
      NonPaged = SSHSupportAllocateNonPaged();
      v13 = NonPaged;
      if ( NonPaged )
      {
        v15 = *a2;
        *(_QWORD *)(NonPaged + 16) = a1;
        *(_OWORD *)(NonPaged + 24) = v15;
        *(_QWORD *)(NonPaged + 8) = NonPaged;
        *(_QWORD *)NonPaged = NonPaged;
        *(_DWORD *)(NonPaged + 40) = 0;
        for ( j = 0LL; (unsigned int)j < a3; j = *(unsigned int *)(v13 + 40) )
        {
          v14 = SshpCopyDataEntry(
                  *(_DWORD *)(a1 + 24),
                  (PCUNICODE_STRING)(32 * j + a4),
                  (PUNICODE_STRING)(32 * j + v13 + 48));
          if ( v14 < 0 )
          {
            SshpFreeDataEntry((_QWORD *)v13, v17, v18, v12);
            return (unsigned int)v14;
          }
          ++*(_DWORD *)(v13 + 40);
        }
        v19 = (AutoBoost *)KeAbPreAcquire(a1 + 16, 0LL, 0LL, v12);
        v21 = v19;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 16), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 16), v19, a1 + 16);
        if ( v21 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v21, v20);
          else
            *((_BYTE *)v21 + 10) = 1;
        }
        v22 = *(__int64 **)(a1 + 176);
        if ( *v22 != a1 + 168 )
          __fastfail(3u);
        *(_QWORD *)(v13 + 8) = v22;
        *(_QWORD *)v13 = a1 + 168;
        *v22 = v13;
        *(_QWORD *)(a1 + 176) = v13;
        SSHSupportReleasePushLockExclusive((struct _KTHREAD *)(a1 + 16));
        *a5 = v13;
        return 0;
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
}
