/*
 * XREFs of PpmRegisterProfiles @ 0x1407E1B0C
 * Callers:
 *     PdcPoPpmRegisterProfiles @ 0x1407DB6A0 (PdcPoPpmRegisterProfiles.c)
 * Callees:
 *     PpmReleaseLock @ 0x14037AFBC (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140394F80 (PpmAcquireLock.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     RtlStringCchLengthW @ 0x140459140 (RtlStringCchLengthW.c)
 *     RtlULongLongMult @ 0x1404655A0 (RtlULongLongMult.c)
 *     RtlStringCchCopyW @ 0x14046AD84 (RtlStringCchCopyW.c)
 *     RtlStringCbLengthW @ 0x14047EE24 (RtlStringCbLengthW.c)
 *     PpmResetProfileSettings @ 0x1404EB680 (PpmResetProfileSettings.c)
 *     PpmEventTraceProfiles @ 0x1409459FC (PpmEventTraceProfiles.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall PpmRegisterProfiles(unsigned __int8 a1, __int64 a2)
{
  __int64 v2; // rsi
  NTSTATUS v4; // ebp
  __int64 v5; // r14
  ULONGLONG v6; // rbx
  unsigned __int8 v7; // r11
  ULONGLONG v8; // rdi
  char v9; // r11
  __int64 Pool2; // rax
  __int64 v11; // rdx
  unsigned int v12; // r8d
  __int64 v13; // rdi
  ULONGLONG v14; // rax
  unsigned __int8 v15; // r13
  __int64 v16; // r15
  __int64 v17; // r12
  ULONGLONG v18; // r14
  __int64 v19; // r11
  __int64 v20; // rdx
  __int64 v21; // r8
  struct _KLOCK_ENTRIES *v22; // r9
  size_t pcbLength; // [rsp+70h] [rbp+18h] BYREF
  ULONGLONG pullResult; // [rsp+78h] [rbp+20h] BYREF

  v2 = a1;
  pcbLength = 0LL;
  pullResult = 0LL;
  if ( a1 <= 0x1Fu )
  {
    v5 = a1;
    v4 = RtlULongLongMult(a1, 0x5E0uLL, &pullResult);
    if ( v4 >= 0 )
    {
      v6 = (pullResult + 1) & 0xFFFFFFFFFFFFFFFEuLL;
      v7 = 0;
      v8 = v6;
      while ( v7 < (unsigned __int8)v2 )
      {
        v4 = RtlStringCbLengthW(*(STRSAFE_PCNZWCH *)(32LL * v7 + a2 + 8), 0x7FFFFFFFuLL, &pcbLength);
        if ( v4 < 0 )
          return (unsigned int)v4;
        v7 = v9 + 1;
        v8 += pcbLength + 2;
      }
      Pool2 = ExAllocatePool2(0x40uLL);
      v13 = Pool2;
      if ( Pool2 )
      {
        v14 = v6 + Pool2;
        v15 = 0;
        if ( (_BYTE)v2 )
        {
          v16 = a2 + 8;
          v17 = v13 + 32;
          v18 = v14;
          do
          {
            ++v15;
            *(_OWORD *)(v17 - 20) = *(_OWORD *)*(_QWORD *)(v16 - 8);
            *(_BYTE *)v17 = *(_BYTE *)(v16 + 8);
            *(_QWORD *)(v17 - 32) = v18;
            *(_QWORD *)(v17 + 1456) = -1LL;
            *(_BYTE *)(v17 - 24) = v15;
            RtlStringCchLengthW(*(STRSAFE_PCNZWCH *)v16, 0x7FFFFFFFuLL, &pcbLength);
            RtlStringCchCopyW(*(NTSTRSAFE_PWSTR *)(v17 - 32), pcbLength + 1, *(NTSTRSAFE_PCWSTR *)v16);
            *(_QWORD *)(v16 + 16) = v17 - 32;
            v18 += 2 * v19 + 2;
            v17 += 1504LL;
            v16 += 32LL;
          }
          while ( v15 < (unsigned __int8)v2 );
          v5 = v2;
        }
        PpmAcquireLock((struct _KTHREAD **)&stru_140F10070.SchedulerAssistLastYieldBoostTime, v11, v12);
        PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F10070.1136, v20, v21, v22);
        PpmProfiles = v13;
        PpmProfileCount = v2;
        if ( (_BYTE)v2 )
        {
          do
          {
            PpmResetProfileSettings(v13);
            v13 += 1504LL;
            --v5;
          }
          while ( v5 );
        }
        PpmEventTraceProfiles(0LL);
        PopReleaseRwLock((struct _KTHREAD *)&stru_140F10070.1136);
        PpmReleaseLock(&stru_140F10070.SchedulerAssistLastYieldBoostTime);
        PpmProfileStatus |= 1u;
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
  return (unsigned int)v4;
}
