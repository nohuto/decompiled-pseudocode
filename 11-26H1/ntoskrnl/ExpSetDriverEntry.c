/*
 * XREFs of ExpSetDriverEntry @ 0x14084281C
 * Callers:
 *     NtAddDriverEntry @ 0x140843300 (NtAddDriverEntry.c)
 *     NtModifyDriverEntry @ 0x140843D80 (NtModifyDriverEntry.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403F8AE0 (ExAcquireFastMutexUnsafe.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 *     swprintf_s @ 0x14053D560 (swprintf_s.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwTranslateFilePath @ 0x14072BAC0 (ZwTranslateFilePath.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ExpSafeWcslen @ 0x140A2D384 (ExpSafeWcslen.c)
 *     ExpVerifyFilePath @ 0x140A2D82C (ExpVerifyFilePath.c)
 *     IoSetEnvironmentVariableEx @ 0x140A2EB60 (IoSetEnvironmentVariableEx.c)
 *     IoGetEnvironmentVariableEx @ 0x140A30478 (IoGetEnvironmentVariableEx.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpSetDriverEntry(int a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int i; // esi
  _FILE_PATH *v6; // r13
  _FILE_PATH *v7; // r12
  KPROCESSOR_MODE PreviousMode; // di
  unsigned int ULongFromUser; // ebx
  int v11; // eax
  _DWORD *Pool2; // rax
  _DWORD *v13; // rdi
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // r8
  unsigned int v17; // r14d
  NTSTATUS EnvironmentVariable; // ebx
  void *v19; // rbx
  ULONG Length; // eax
  char *v21; // rsi
  struct _KTHREAD *CurrentThread; // rax
  ULONG v23; // [rsp+30h] [rbp-98h] BYREF
  ULONG OutputFilePathLength; // [rsp+38h] [rbp-90h] BYREF
  int v25; // [rsp+3Ch] [rbp-8Ch]
  void *Src; // [rsp+40h] [rbp-88h]
  PVOID P; // [rsp+48h] [rbp-80h]
  unsigned int v28; // [rsp+50h] [rbp-78h]
  PVOID v29; // [rsp+60h] [rbp-68h]
  unsigned int *v30; // [rsp+68h] [rbp-60h]
  wchar_t Dst[12]; // [rsp+80h] [rbp-48h] BYREF

  v30 = a3;
  v25 = a1;
  v29 = 0LL;
  i = 0;
  v6 = 0LL;
  v7 = 0LL;
  P = 0LL;
  OutputFilePathLength = 0;
  v23 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
    ULongFromUser = RtlReadULongFromUser(a2 + 1);
  else
    ULongFromUser = a2[1];
  v28 = ULongFromUser;
  if ( ULongFromUser < 0x14 )
    return 3221225485LL;
  if ( PsIsCurrentThreadInServerSilo() )
    return 3221225474LL;
  if ( PreviousMode )
  {
    ProbeForRead(a2, ULongFromUser, 4u);
    if ( a3 )
    {
      v11 = RtlReadULongFromUser(a3);
      RtlWriteULongToUser(a3, v11);
    }
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return 3221225569LL;
  }
  Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
  v13 = Pool2;
  v29 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memmove(Pool2, a2, ULongFromUser);
  if ( *v13 != 1 || !v25 && v13[2] > 0xFFFFu )
    goto LABEL_50;
  v14 = (unsigned int)v13[3];
  if ( (v14 & 1) != 0 )
    goto LABEL_50;
  if ( (v13[4] & 3) != 0 )
    goto LABEL_50;
  Src = (char *)v13 + v14;
  v15 = ExpSafeWcslen((char *)v13 + v14, (char *)v13 + ULongFromUser);
  if ( v15 == -1 )
    goto LABEL_50;
  v17 = 2 * v15 + 2;
  v6 = (_FILE_PATH *)((char *)v13 + v16);
  EnvironmentVariable = ExpVerifyFilePath((char *)v13 + v16);
  if ( EnvironmentVariable < 0 )
    goto LABEL_51;
  v19 = Src;
  if ( (char *)Src + v17 > (char *)v6 )
  {
LABEL_50:
    EnvironmentVariable = -1073741811;
    goto LABEL_51;
  }
  if ( v6->Type == 4 )
  {
    Length = v6->Length;
    v7 = v6;
    goto LABEL_30;
  }
  EnvironmentVariable = ZwTranslateFilePath(v6, 4u, 0LL, &OutputFilePathLength);
  if ( EnvironmentVariable == -1073741789 )
  {
    v7 = (_FILE_PATH *)ExAllocatePool2(0x40uLL);
    if ( !v7 )
    {
LABEL_26:
      EnvironmentVariable = -1073741670;
      goto LABEL_51;
    }
    v23 = OutputFilePathLength;
    EnvironmentVariable = ZwTranslateFilePath(v6, 4u, v7, &v23);
    if ( EnvironmentVariable < 0 )
      goto LABEL_51;
    Length = OutputFilePathLength;
    v19 = Src;
LABEL_30:
    OutputFilePathLength = Length - 12;
    LODWORD(Src) = v17 + Length - 12 + 6;
    P = (PVOID)ExAllocatePool2(0x40uLL);
    if ( P )
    {
      v21 = (char *)P;
      *((_WORD *)P + 2) = OutputFilePathLength;
      memmove(v21 + 6, v19, v17);
      memmove(&v21[v17 + 6], v7->FilePath, OutputFilePathLength);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.QueuedScb);
      if ( v25 )
      {
        for ( i = 0; i <= 0xFFFF; ++i )
        {
          swprintf_s(Dst, 0xBuLL, L"Driver%04x", i);
          v23 = 0;
          EnvironmentVariable = IoGetEnvironmentVariableEx(
                                  (unsigned int)Dst,
                                  (unsigned int)&EfiDriverVariablesGuid,
                                  0,
                                  (unsigned int)&v23,
                                  0LL);
          if ( EnvironmentVariable == -1073741568 && ((2 * ((i | (2 * i)) & 0xC4444444)) & i) != 0 )
          {
            swprintf_s(Dst, 0xBuLL, L"Driver%04X", i);
            v23 = 0;
            EnvironmentVariable = IoGetEnvironmentVariableEx(
                                    (unsigned int)Dst,
                                    (unsigned int)&EfiDriverVariablesGuid,
                                    0,
                                    (unsigned int)&v23,
                                    0LL);
          }
          if ( EnvironmentVariable == -1073741568 )
            goto LABEL_48;
          if ( EnvironmentVariable && EnvironmentVariable != -1073741789 )
            goto LABEL_49;
        }
        EnvironmentVariable = -1073741670;
      }
      else
      {
        i = v13[2];
        swprintf_s(Dst, 0xBuLL, L"Driver%04X", i);
        v23 = 0;
        EnvironmentVariable = IoGetEnvironmentVariableEx(
                                (unsigned int)Dst,
                                (unsigned int)&EfiDriverVariablesGuid,
                                0,
                                (unsigned int)&v23,
                                0LL);
        if ( EnvironmentVariable == -1073741568 && ((2 * ((v13[2] | (2 * v13[2])) & 0xC4444444)) & v13[2]) != 0 )
        {
          swprintf_s(Dst, 0xBuLL, L"Driver%04x");
          v23 = 0;
          EnvironmentVariable = IoGetEnvironmentVariableEx(
                                  (unsigned int)Dst,
                                  (unsigned int)&EfiDriverVariablesGuid,
                                  0,
                                  (unsigned int)&v23,
                                  0LL);
        }
        if ( !EnvironmentVariable || EnvironmentVariable == -1073741789 )
LABEL_48:
          EnvironmentVariable = IoSetEnvironmentVariableEx(
                                  (unsigned int)Dst,
                                  (unsigned int)&EfiDriverVariablesGuid,
                                  (_DWORD)P,
                                  (_DWORD)Src,
                                  1);
      }
LABEL_49:
      ExReleaseFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.QueuedScb);
      KeLeaveCriticalRegion();
      goto LABEL_51;
    }
    goto LABEL_26;
  }
LABEL_51:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v7 && v7 != v6 )
    ExFreePoolWithTag(v7, 0);
  ExFreePoolWithTag(v13, 0);
  if ( v25 && v30 && EnvironmentVariable >= 0 )
    *v30 = i;
  return (unsigned int)EnvironmentVariable;
}
