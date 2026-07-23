/*
 * XREFs of PpmRegisterProfiles @ 0x1407E6B9C
 * Callers:
 *     PdcPoPpmRegisterProfiles @ 0x1407DF6B0 (PdcPoPpmRegisterProfiles.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PpmReleaseLock @ 0x14037CD6C (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140396D00 (PpmAcquireLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     RtlStringCchLengthW @ 0x1404509C0 (RtlStringCchLengthW.c)
 *     RtlULongLongMult @ 0x14045E560 (RtlULongLongMult.c)
 *     RtlStringCchCopyW @ 0x140464504 (RtlStringCchCopyW.c)
 *     RtlStringCbLengthW @ 0x140478794 (RtlStringCbLengthW.c)
 *     PpmResetProfileSettings @ 0x1404E4C60 (PpmResetProfileSettings.c)
 *     PpmEventTraceProfiles @ 0x1409C136C (PpmEventTraceProfiles.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
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
        PpmAcquireLock((struct _KTHREAD **)&PpmIdlePolicyLock.ThreadLock, v11, v12);
        PopAcquireRwLockExclusive((unsigned __int64 *)&PpmIdlePolicyLock, v20, v21, v22);
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
        PopReleaseRwLock(&PpmIdlePolicyLock);
        PpmReleaseLock((__int64 *)&PpmIdlePolicyLock.ThreadLock);
        LODWORD(PopDirectedDripsDiagLock.TracingPrivate[0]) |= 1u;
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
