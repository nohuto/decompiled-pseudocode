/*
 * XREFs of SshNotifySystemSessionChange @ 0x140ADC854
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x1409F4CE0 (PopSleepstudyStartNextSession.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     CmpFreeTransientPoolWithTag @ 0x140470A10 (CmpFreeTransientPoolWithTag.c)
 *     SshpDereferenceBlocker @ 0x1404955E0 (SshpDereferenceBlocker.c)
 *     SshpQueryAndResetBlockerAccounting @ 0x14049C418 (SshpQueryAndResetBlockerAccounting.c)
 *     SSHSupportReleasePushLockExclusive @ 0x1404AC97C (SSHSupportReleasePushLockExclusive.c)
 *     SshpReferenceBlocker @ 0x1404AF8E4 (SshpReferenceBlocker.c)
 *     SshpWriteBlocker @ 0x1404C2C40 (SshpWriteBlocker.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SshpFlushBlockerDataCache @ 0x140ADCCA0 (SshpFlushBlockerDataCache.c)
 *     SshpAddBlockerDataToCache @ 0x140ADCE98 (SshpAddBlockerDataToCache.c)
 */

__int64 __fastcall SshNotifySystemSessionChange(int a1, __int64 a2)
{
  char v2; // bl
  __int64 v3; // r8
  struct _KLOCK_ENTRIES *v4; // r9
  int v5; // edx
  char *v6; // rdi
  __int64 v7; // r14
  int v8; // eax
  int v9; // ebx
  int v10; // r15d
  int v11; // r13d
  AutoBoost *v12; // rax
  void *v13; // rdx
  struct _KLOCK_ENTRIES *v14; // r9
  signed __int8 v15; // cf
  AutoBoost *v16; // rbx
  unsigned __int64 *v17; // rdi
  struct _KLOCK_ENTRIES *v18; // r13
  AutoBoost *v19; // rax
  void *v20; // rdx
  AutoBoost *v21; // rbx
  unsigned __int64 *i; // rbx
  __int64 result; // rax
  char v24; // al
  struct _KTHREAD *v25; // r13
  __int64 v26; // rcx
  AutoBoost *v27; // rax
  void *v28; // rdx
  AutoBoost *v29; // rsi
  char *v30; // r12
  char *v31; // rsi
  char v32; // r13
  char v33; // di
  KSPIN_LOCK *v34; // r14
  unsigned int j; // r14d
  int v36; // [rsp+48h] [rbp-C0h] BYREF
  int v37; // [rsp+4Ch] [rbp-BCh]
  unsigned int v38; // [rsp+50h] [rbp-B8h] BYREF
  int v39; // [rsp+54h] [rbp-B4h]
  struct _KLOCK_ENTRIES *v40; // [rsp+58h] [rbp-B0h]
  char *v41; // [rsp+60h] [rbp-A8h]
  __int64 v42; // [rsp+68h] [rbp-A0h]
  PVOID v43; // [rsp+70h] [rbp-98h] BYREF
  __int64 v44; // [rsp+78h] [rbp-90h]
  _BOOL8 v45; // [rsp+80h] [rbp-88h]
  __int64 v46; // [rsp+88h] [rbp-80h]
  __int64 v47; // [rsp+90h] [rbp-78h]
  _OWORD v48[8]; // [rsp+98h] [rbp-70h] BYREF
  _OWORD v49[8]; // [rsp+118h] [rbp+10h] BYREF
  _DWORD v50[68]; // [rsp+198h] [rbp+90h] BYREF

  v47 = a2;
  v2 = a1;
  v37 = a1;
  memset_0(v49, 0, sizeof(v49));
  memset_0(v50, 0, 0x108uLL);
  LOBYTE(v36) = 0;
  memset_0(v48, 0, sizeof(v48));
  v3 = SshpSessionId;
  v46 = SshpSessionId;
  v4 = (struct _KLOCK_ENTRIES *)SshpSessionId;
  v40 = (struct _KLOCK_ENTRIES *)SshpSessionId;
  if ( SshpSessionType == 2 )
  {
    v4 = (struct _KLOCK_ENTRIES *)(SshpSessionId - 1);
    v40 = (struct _KLOCK_ENTRIES *)(SshpSessionId - 1);
  }
  v43 = 0LL;
  v38 = 0;
  v5 = 1 << v2;
  v6 = (char *)&SshpBlockerCollections.SListFaultAddress + 4;
  v7 = 9LL;
  v39 = 1 << v2;
  v41 = (char *)&SshpBlockerCollections.SListFaultAddress + 4;
  v42 = 9LL;
  do
  {
    v8 = (unsigned __int8)*(v6 - 2);
    v9 = v8 & (1 << SshpSessionType);
    v10 = v5 & v8;
    if ( (v5 & v8) != 0 || v9 )
    {
      v24 = *(v6 - 3);
      v25 = (struct _KTHREAD *)(v6 - 28);
      v26 = (__int64)v4;
      if ( v24 )
        v26 = v3;
      v44 = v26;
      v45 = v24 != 0;
      v27 = (AutoBoost *)KeAbPreAcquire((__int64)(v6 - 28), 0LL, 0LL, v4);
      v29 = v27;
      if ( _interlockedbittestandset64(&v25->Header.Lock, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 - 28), v27, (__int64)(v6 - 28));
      if ( v29 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v29, v28);
        else
          *((_BYTE *)v29 + 10) = 1;
      }
      v30 = v6 + 4;
      v31 = *(char **)(v6 + 4);
      *(_DWORD *)v6 = *(_DWORD *)v6 & 0xFFFFFFFD | (v10 != 0 ? 2 : 0);
      if ( v31 != v6 + 4 )
      {
        v32 = v44;
        v33 = v45;
        do
        {
          v34 = (KSPIN_LOCK *)*((_QWORD *)v31 + 12);
          SshpQueryAndResetBlockerAccounting(v34, v49, v48, &v36);
          if ( v9 )
            SshpWriteBlocker((__int64)v34, (ULONGLONG)v49, (ULONGLONG)v48, v36, v32, v33, &v43, &v38);
          if ( v10 )
          {
            if ( !v9 )
              SshpReferenceBlocker(v34, 1);
          }
          else if ( v9 )
          {
            SshpDereferenceBlocker(v34, 1, 0);
          }
          v31 = *(char **)v31;
        }
        while ( v31 != v30 );
        v6 = v41;
        v7 = v42;
        v25 = (struct _KTHREAD *)(v41 - 28);
      }
      SSHSupportReleasePushLockExclusive(v25);
      v5 = v39;
      v3 = v46;
    }
    v4 = v40;
    v6 += 48;
    --v7;
    v41 = v6;
    v42 = v7;
  }
  while ( v7 );
  v11 = v37;
  if ( SshpSessionType == 2 || SshpSessionType == 1 && v37 != 2 )
  {
    v12 = (AutoBoost *)KeAbPreAcquire((__int64)&SshpLibraryListLock, 0LL, 0LL, v40);
    v15 = _interlockedbittestandset64((volatile signed __int32 *)&SshpLibraryListLock, 0LL);
    v16 = v12;
    if ( v15 )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&SshpLibraryListLock, v12, (__int64)&SshpLibraryListLock);
    if ( v16 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v16, v13);
      else
        *((_BYTE *)v16 + 10) = 1;
    }
    v17 = (unsigned __int64 *)SshpLibraryList;
    if ( SshpLibraryList != &SshpLibraryList )
    {
      v18 = v40;
      do
      {
        v19 = (AutoBoost *)KeAbPreAcquire((__int64)(v17 + 2), 0LL, 0LL, v14);
        v21 = v19;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v17 + 4, 0LL) )
          ExfAcquirePushLockExclusiveEx(v17 + 2, v19, (__int64)(v17 + 2));
        if ( v21 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v21, v20);
          else
            *((_BYTE *)v21 + 10) = 1;
        }
        v50[0] = *((_DWORD *)v17 + 6);
        for ( i = (unsigned __int64 *)v17[21]; i != v17 + 21; i = (unsigned __int64 *)*i )
        {
          for ( j = 0; j < *((_DWORD *)i + 10); ++j )
          {
            if ( v50[1] >= 8u )
              SshpFlushBlockerDataCache(v50, v18);
            SshpAddBlockerDataToCache(v50, i + 3, &i[4 * j + 6]);
          }
        }
        SshpFlushBlockerDataCache(v50, v18);
        SSHSupportReleasePushLockExclusive((struct _KTHREAD *)(v17 + 2));
        v17 = (unsigned __int64 *)*v17;
      }
      while ( v17 != (unsigned __int64 *)&SshpLibraryList );
      v11 = v37;
    }
    SSHSupportReleasePushLockExclusive((struct _KTHREAD *)&SshpLibraryListLock);
  }
  if ( v43 )
    CmpFreeTransientPoolWithTag(v43, 0x70687373u);
  result = v47;
  SshpSessionId = v47;
  SshpSessionType = v11;
  return result;
}
