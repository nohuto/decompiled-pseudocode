/*
 * XREFs of ExpKdPullRemoteFileForUser @ 0x14084A4C4
 * Callers:
 *     NtSystemDebugControl @ 0x14084A9E0 (NtSystemDebugControl.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     KeComputeSha256 @ 0x1404D2210 (KeComputeSha256.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     RtlDowncaseUnicodeString @ 0x140A50E10 (RtlDowncaseUnicodeString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     KdPullRemoteFile @ 0x140C193B8 (KdPullRemoteFile.c)
 */

__int64 __fastcall ExpKdPullRemoteFileForUser(_OWORD *a1)
{
  int v1; // r15d
  char PreviousMode; // dl
  wchar_t *Pool2; // rax
  int v5; // r14d
  struct _KLOCK_ENTRIES *v6; // r9
  struct _KTHREAD *CurrentThread; // rax
  void *v8; // rdx
  LegacyAutoBoost *v9; // rdi
  int v10; // r13d
  char *v11; // r14
  int v12; // edi
  int v13; // esi
  int v14; // eax
  struct _KTHREAD *v15; // rax
  AutoBoost *v16; // rax
  void *v17; // rdx
  AutoBoost *v18; // rdi
  __int64 v20; // rsi
  _DWORD *v21; // rdi
  int v22; // r13d
  int v23; // edi
  int v24; // r14d
  int v25; // eax
  int v26; // r15d
  int v27; // edi
  __int64 v28; // rdi
  UNICODE_STRING SourceString; // [rsp+38h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-90h] BYREF
  volatile void *Address[2]; // [rsp+60h] [rbp-78h]
  _QWORD Buf1[4]; // [rsp+80h] [rbp-58h] BYREF

  v1 = 0;
  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  *(_OWORD *)Address = *a1;
  if ( PreviousMode == 1 )
    ProbeForRead(Address[1], 2uLL, 2u);
  if ( LOWORD(Address[0])
    && ((__int64)Address[0] & 1) == 0
    && (BYTE2(Address[0]) & 1) == 0
    && WORD1(Address[0]) >= LOWORD(Address[0]) )
  {
    Pool2 = (wchar_t *)ExAllocatePool2(0x40uLL);
    SourceString.Buffer = Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    SourceString.Length = (unsigned __int16)Address[0];
    SourceString.MaximumLength = (unsigned __int16)Address[0];
    memmove(Pool2, (const void *)Address[1], LOWORD(Address[0]));
    DestinationString.Buffer = (wchar_t *)ExAllocatePool2(0x40uLL);
    if ( !DestinationString.Buffer )
    {
      v5 = -1073741670;
LABEL_32:
      ExFreePoolWithTag(SourceString.Buffer, 0);
      return (unsigned int)v5;
    }
    DestinationString.Length = SourceString.Length;
    DestinationString.MaximumLength = SourceString.MaximumLength;
    RtlDowncaseUnicodeString(&DestinationString, &SourceString, 0);
    KeComputeSha256((__int64)DestinationString.Buffer, DestinationString.Length, (__int64)Buf1);
    ExFreePoolWithTag(DestinationString.Buffer, 0);
    if ( ExpSysDbgPulledFileTable )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v9 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&ExpSysDbgLock, 0LL, 0LL, v6);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpSysDbgLock, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)&ExpSysDbgLock.Header.Lock, 0, v9, &ExpSysDbgLock);
      if ( v9 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v9, v8);
        else
          *((_BYTE *)v9 + 10) = 1;
      }
      v10 = 0;
      v11 = (char *)ExpSysDbgPulledFileTable;
      if ( ExpSysDbgPulledFileTable )
      {
        v12 = *(_DWORD *)ExpSysDbgPulledFileTable - 1;
        while ( v12 >= v1 )
        {
          v13 = (v1 + v12) >> 1;
          v14 = memcmp(Buf1, &v11[8 * v13 + 8], 8uLL);
          if ( v14 >= 0 )
          {
            v1 = 0;
            if ( v14 <= 0 )
            {
              v10 = 1;
              goto LABEL_28;
            }
            v1 = v13 + 1;
          }
          else
          {
            if ( !v13 )
              break;
            v12 = v13 - 1;
          }
        }
        v1 = 0;
      }
LABEL_28:
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpSysDbgLock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&ExpSysDbgLock.Header.Lock);
      KeAbPostRelease((unsigned __int64)&ExpSysDbgLock);
      KeLeaveCriticalRegion();
      if ( v10 )
      {
        v5 = 255;
        goto LABEL_32;
      }
    }
    v15 = KeGetCurrentThread();
    --v15->KernelApcDisable;
    v16 = (AutoBoost *)KeAbPreAcquire((__int64)&ExpSysDbgLock, 0LL, 0LL, v6);
    v18 = v16;
    if ( _interlockedbittestandset64(&ExpSysDbgLock.Header.Lock, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&ExpSysDbgLock, v16, (__int64)&ExpSysDbgLock);
    if ( v18 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v18, v17);
      else
        *((_BYTE *)v18 + 10) = 1;
    }
    v20 = -1LL;
    if ( !ExpSysDbgPulledFileTable )
      goto LABEL_42;
    if ( *(int *)ExpSysDbgPulledFileTable >= 0x1FFFFFFF )
      goto LABEL_72;
    if ( *(_DWORD *)ExpSysDbgPulledFileTable == *((_DWORD *)ExpSysDbgPulledFileTable + 1) )
LABEL_42:
      v20 = ExAllocatePool2(0x100uLL);
    if ( v20 )
    {
      if ( v20 == -1 )
      {
        v20 = (__int64)ExpSysDbgPulledFileTable;
      }
      else
      {
        *(_DWORD *)v20 = 0;
        *(_DWORD *)(v20 + 4) = 2048;
        v21 = ExpSysDbgPulledFileTable;
        if ( ExpSysDbgPulledFileTable )
        {
          memmove((void *)v20, ExpSysDbgPulledFileTable, 8LL * *(int *)ExpSysDbgPulledFileTable + 16);
          *(_DWORD *)(v20 + 4) = 2 * v21[1];
          ExFreePoolWithTag(v21, 0);
        }
        ExpSysDbgPulledFileTable = (PVOID)v20;
      }
      v22 = 0;
      v23 = *(_DWORD *)v20 - 1;
      while ( v23 >= v22 )
      {
        v24 = (v23 + v22) >> 1;
        v25 = memcmp(Buf1, (const void *)(v20 + 8 * (v24 + 1LL)), 8uLL);
        if ( v25 >= 0 )
        {
          if ( v25 <= 0 )
          {
            v1 = 1;
            break;
          }
          v22 = v24 + 1;
        }
        else
        {
          if ( !v24 )
            break;
          v23 = v24 - 1;
        }
      }
      if ( v1 )
      {
        v5 = 255;
      }
      else
      {
        v5 = KdPullRemoteFile(&SourceString, &SourceString);
        if ( v5 < 0
          || (DbgPrintEx(0x66u, 2u, "ExpKdPullRemoteFileForUser: Pulled %wZ from kd\n", &SourceString),
              *(_DWORD *)&WheapConfigTableLock.WaitBlockFill11[152]) )
        {
          if ( v23 < v22 )
          {
            v22 = 0;
            v23 = *(_DWORD *)v20 - 1;
            if ( !*(_DWORD *)v20 )
            {
              *(_QWORD *)(v20 + 8) = Buf1[0];
              *(_DWORD *)v20 = 1;
              v20 = 0LL;
            }
          }
          if ( v20 )
          {
            v26 = 0;
            if ( v22 >= 0 )
              v26 = v22;
            v27 = v23 + 1;
            while ( v26 < v27 && memcmp(Buf1, (const void *)(v20 + 8 * (v26 + 1LL)), 8uLL) >= 0 )
              ++v26;
            v28 = v20 + 8LL * v26;
            memmove((void *)(v20 + 8 * (v26 + 1 + 1LL)), (const void *)(v28 + 8), 8LL * (*(_DWORD *)v20 - v26));
            ++*(_DWORD *)v20;
            *(_QWORD *)(v28 + 8) = Buf1[0];
          }
        }
      }
      goto LABEL_73;
    }
LABEL_72:
    v5 = -1073741670;
LABEL_73:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSysDbgLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpSysDbgLock.Header.Lock);
    KeAbPostRelease((unsigned __int64)&ExpSysDbgLock);
    KeLeaveCriticalRegion();
    goto LABEL_32;
  }
  return 3221225485LL;
}
