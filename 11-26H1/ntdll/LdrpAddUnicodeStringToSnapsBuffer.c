/*
 * XREFs of LdrpAddUnicodeStringToSnapsBuffer @ 0x180031C30
 * Callers:
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlpNotOwnerCriticalSection @ 0x180034C60 (RtlpNotOwnerCriticalSection.c)
 *     RtlRaiseStatus @ 0x180034D40 (RtlRaiseStatus.c)
 *     RtlpWakeByAddress @ 0x180035FC0 (RtlpWakeByAddress.c)
 *     RtlBackoff @ 0x18005F2E0 (RtlBackoff.c)
 *     NtSetInformationThread @ 0x18015EFE0 (NtSetInformationThread.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     ZwCreateEvent @ 0x18015F740 (ZwCreateEvent.c)
 *     ZwSetEventEx @ 0x180162270 (ZwSetEventEx.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

void __fastcall LdrpAddUnicodeStringToSnapsBuffer(const void **a1)
{
  int v2; // esi
  __int16 v3; // ax
  size_t v4; // rbp
  char *v5; // r14
  unsigned __int16 v6; // r8
  unsigned int v7; // edx
  signed __int64 v8; // rsi
  signed __int32 LockCount; // ebp
  void *LockSemaphore; // rbx
  __int64 v11; // rdx
  NTSTATUS v12; // eax
  char *SchedulerSharedDataSlot; // r8
  unsigned int i; // ecx
  char *v15; // rbx
  char *v16; // r8
  unsigned int j; // ecx
  unsigned __int16 v18; // si
  unsigned int v19; // edx
  signed __int32 v20[8]; // [rsp+0h] [rbp-68h] BYREF
  _QWORD ThreadInformation[2]; // [rsp+30h] [rbp-38h] BYREF
  int v22; // [rsp+78h] [rbp+10h] BYREF
  HANDLE EventHandle; // [rsp+88h] [rbp+20h] BYREF

  if ( !qword_1801CA848 )
    return;
  RtlEnterCriticalSection(&LdrpSnapsLock);
  v2 = *(unsigned __int16 *)a1;
  if ( (_WORD)v2 )
  {
    v3 = HIWORD(LdrpSnapsUnicodeString);
    if ( v2 + (unsigned int)(unsigned __int16)LdrpSnapsUnicodeString > HIWORD(LdrpSnapsUnicodeString) )
    {
      LOWORD(LdrpSnapsUnicodeString) = 0;
      v6 = 0;
      v18 = *(_WORD *)a1;
      if ( !*(_WORD *)a1 )
        goto LABEL_5;
      if ( v18 > HIWORD(LdrpSnapsUnicodeString) )
        goto LABEL_5;
      v5 = (char *)qword_1801CA848;
      v4 = *(unsigned __int16 *)a1;
      memmove(qword_1801CA848, a1[1], v4);
      v3 = HIWORD(LdrpSnapsUnicodeString);
      v6 = v18 + LdrpSnapsUnicodeString;
      v19 = (unsigned __int16)(v18 + LdrpSnapsUnicodeString) + 1;
      LOWORD(LdrpSnapsUnicodeString) = v18 + LdrpSnapsUnicodeString;
      if ( v19 >= HIWORD(LdrpSnapsUnicodeString) )
        goto LABEL_5;
    }
    else
    {
      v4 = *(unsigned __int16 *)a1;
      v5 = (char *)qword_1801CA848 + 2 * ((unsigned __int64)(unsigned __int16)LdrpSnapsUnicodeString >> 1);
      memmove(v5, a1[1], v4);
      v3 = HIWORD(LdrpSnapsUnicodeString);
      v6 = v2 + LdrpSnapsUnicodeString;
      v7 = (unsigned __int16)(v2 + LdrpSnapsUnicodeString) + 1;
      LOWORD(LdrpSnapsUnicodeString) = v2 + LdrpSnapsUnicodeString;
      if ( v7 >= HIWORD(LdrpSnapsUnicodeString) )
        goto LABEL_5;
    }
    *(_WORD *)&v5[2 * (v4 >> 1)] = 0;
  }
  v3 = HIWORD(LdrpSnapsUnicodeString);
  v6 = LdrpSnapsUnicodeString;
LABEL_5:
  if ( v6 == v3 )
  {
    qword_1801CA838 = (__int64)qword_1801CA848;
    LOWORD(LdrpSnapsUnicodeString2) = 0;
  }
  else
  {
    v3 = v3 - v6 - 2;
    LOWORD(LdrpSnapsUnicodeString2) = v3;
    qword_1801CA838 = (__int64)qword_1801CA848 + 2 * ((unsigned __int64)v6 >> 1) + 2;
  }
  HIWORD(LdrpSnapsUnicodeString2) = v3;
  if ( !--LdrpSnapsLock.RecursionCount )
  {
    LdrpSnapsLock.OwningThread = 0LL;
    v8 = -1LL;
    LockCount = _InterlockedCompareExchange(&LdrpSnapsLock.LockCount, -1, -2);
    if ( LockCount == -2 )
    {
      SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( SchedulerSharedDataSlot )
      {
        for ( i = 0; i < 8; ++i )
        {
          v15 = &SchedulerSharedDataSlot[8 * i];
          if ( (*(_QWORD *)v15 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&LdrpSnapsLock & 0x7FFFFFFFFFFFFFFCLL) )
          {
            if ( v15 )
            {
              *v15 |= 2u;
              if ( v15[7] < 0 )
              {
LABEL_30:
                ThreadInformation[1] = 0LL;
                ThreadInformation[0] = (v15 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
                NtSetInformationThread(
                  (HANDLE)0xFFFFFFFFFFFFFFFELL,
                  ThreadUpdateLockOwnership,
                  ThreadInformation,
                  0x10u);
              }
LABEL_31:
              *(_QWORD *)v15 = 0LL;
            }
            return;
          }
        }
      }
    }
    else
    {
      if ( (LdrpSnapsLock.LockCount & 1) != 0 )
        RtlpNotOwnerCriticalSection(&LdrpSnapsLock);
      LockSemaphore = LdrpSnapsLock.LockSemaphore;
      if ( !LdrpSnapsLock.LockSemaphore )
      {
        EventHandle = (HANDLE)-1LL;
        if ( RtlpForceCSToUseEvents )
        {
          if ( ZwCreateEvent(&EventHandle, 0x100003u, 0LL, SynchronizationEvent, 0) >= 0 )
            v8 = (signed __int64)EventHandle;
          else
            EventHandle = (HANDLE)-1LL;
        }
        LockSemaphore = (void *)_InterlockedCompareExchange64(
                                  (volatile signed __int64 *)&LdrpSnapsLock.LockSemaphore,
                                  v8,
                                  0LL);
        if ( LockSemaphore )
        {
          if ( EventHandle != (HANDLE)-1LL )
            NtClose(EventHandle);
          EventHandle = LockSemaphore;
        }
        else
        {
          LockSemaphore = EventHandle;
        }
      }
      v22 = 0;
      while ( 1 )
      {
        v11 = LockCount & 2 | 1u;
        if ( LockCount == _InterlockedCompareExchange(&LdrpSnapsLock.LockCount, v11 + LockCount, LockCount) )
          break;
        RtlBackoff(&v22, v11);
        _m_prefetchw(&LdrpSnapsLock.LockCount);
        LockCount = LdrpSnapsLock.LockCount;
      }
      if ( (LockCount & 2) != 0 )
      {
        if ( LockSemaphore == (void *)-1LL )
        {
          _InterlockedOr(v20, 0);
          RtlpWakeByAddress(&LdrpSnapsLock.LockCount, 0LL, &LdrpSnapsLock);
        }
        else
        {
          v12 = ZwSetEventEx(LockSemaphore, 0LL, &LdrpSnapsLock);
          if ( v12 < 0 )
            RtlRaiseStatus(v12);
        }
      }
      v16 = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( v16 )
      {
        for ( j = 0; j < 8; ++j )
        {
          v15 = &v16[8 * j];
          if ( (*(_QWORD *)v15 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&LdrpSnapsLock & 0x7FFFFFFFFFFFFFFCLL) )
          {
            if ( !v15 )
              return;
            *v15 |= 2u;
            if ( v15[7] >= 0 )
              goto LABEL_31;
            goto LABEL_30;
          }
        }
      }
    }
  }
}
