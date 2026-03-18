/*
 * XREFs of SshpFreeDataEntry @ 0x1407E3AD8
 * Callers:
 *     SleepstudyHelperDestroyLibrary @ 0x140614000 (SleepstudyHelperDestroyLibrary.c)
 *     SleepstudyHelperDestroyBlockerData @ 0x1407E4390 (SleepstudyHelperDestroyBlockerData.c)
 *     SleepstudyHelperCreateBlockerData @ 0x140B63EF0 (SleepstudyHelperCreateBlockerData.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     CmpFreeTransientPoolWithTag @ 0x140477290 (CmpFreeTransientPoolWithTag.c)
 *     SSHSupportReleasePushLockExclusive @ 0x1404B32FC (SSHSupportReleasePushLockExclusive.c)
 */

void __fastcall SshpFreeDataEntry(_QWORD *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 *v5; // rdi
  AutoBoost *v6; // rax
  void *v7; // rdx
  AutoBoost *v8; // rsi
  unsigned int v9; // edi
  __int64 v10; // rcx
  _QWORD *v11; // rax

  v5 = (unsigned __int64 *)(a1[2] + 16LL);
  v6 = (AutoBoost *)KeAbPreAcquire((__int64)v5, 0LL, 0LL, a4);
  v8 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v6, (__int64)v5);
  v9 = 0;
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v7);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  v10 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v11 = (_QWORD *)a1[1], (_QWORD *)*v11 != a1) )
    __fastfail(3u);
  *v11 = v10;
  *(_QWORD *)(v10 + 8) = v11;
  SSHSupportReleasePushLockExclusive((struct _KTHREAD *)(a1[2] + 16LL));
  if ( *((_DWORD *)a1 + 10) )
  {
    do
      CmpFreeTransientPoolWithTag((void *)a1[4 * v9++ + 7], *(_DWORD *)(a1[2] + 24LL));
    while ( v9 < *((_DWORD *)a1 + 10) );
  }
  CmpFreeTransientPoolWithTag(a1, *(_DWORD *)(a1[2] + 24LL));
}
