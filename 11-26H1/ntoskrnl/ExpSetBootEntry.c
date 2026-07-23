/*
 * XREFs of ExpSetBootEntry @ 0x140842100
 * Callers:
 *     NtAddBootEntry @ 0x1408432D0 (NtAddBootEntry.c)
 *     NtModifyBootEntry @ 0x140843D50 (NtModifyBootEntry.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403F8AE0 (ExAcquireFastMutexUnsafe.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     swprintf_s @ 0x14053D560 (swprintf_s.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwTranslateFilePath @ 0x14072BAC0 (ZwTranslateFilePath.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     strcmp @ 0x140742840 (strcmp.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ExpVerifyWindowsOsOptions @ 0x140A2D310 (ExpVerifyWindowsOsOptions.c)
 *     ExpSafeWcslen @ 0x140A2D384 (ExpSafeWcslen.c)
 *     ExpVerifyFilePath @ 0x140A2D82C (ExpVerifyFilePath.c)
 *     IoSetEnvironmentVariableEx @ 0x140A2EB60 (IoSetEnvironmentVariableEx.c)
 *     IoGetEnvironmentVariableEx @ 0x140A30478 (IoGetEnvironmentVariableEx.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpSetBootEntry(int a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int i; // r12d
  KPROCESSOR_MODE PreviousMode; // r15
  unsigned int ULongFromUser; // ebx
  int v9; // eax
  char *Pool2; // rax
  char *v11; // rdi
  unsigned __int64 v12; // r15
  int v13; // r14d
  NTSTATUS EnvironmentVariable; // ebx
  __int64 v15; // rsi
  _FILE_PATH *v16; // r14
  int v17; // eax
  void *v18; // r15
  _FILE_PATH *v19; // rsi
  ULONG Length; // eax
  ULONG v21; // eax
  ULONG v22; // esi
  size_t v23; // rbx
  _WORD *v24; // rax
  int v25; // ecx
  char *v26; // rbx
  char *v27; // r15
  _FILE_PATH *v28; // r8
  struct _KTHREAD *CurrentThread; // rax
  ULONG v31; // [rsp+38h] [rbp-B0h] BYREF
  ULONG OutputFilePathLength; // [rsp+3Ch] [rbp-ACh] BYREF
  KPROCESSOR_MODE v33; // [rsp+40h] [rbp-A8h]
  ULONG v34; // [rsp+44h] [rbp-A4h] BYREF
  unsigned int Size; // [rsp+48h] [rbp-A0h]
  int Size_4; // [rsp+4Ch] [rbp-9Ch]
  unsigned int v37; // [rsp+50h] [rbp-98h]
  PVOID P; // [rsp+58h] [rbp-90h]
  PVOID v39; // [rsp+60h] [rbp-88h]
  PFILE_PATH InputFilePath; // [rsp+68h] [rbp-80h]
  PVOID v41; // [rsp+78h] [rbp-70h]
  unsigned int v42; // [rsp+80h] [rbp-68h]
  void *Src; // [rsp+88h] [rbp-60h]
  unsigned int *v44; // [rsp+90h] [rbp-58h]
  wchar_t Dst[12]; // [rsp+98h] [rbp-50h] BYREF

  v44 = a3;
  v41 = 0LL;
  i = 0;
  InputFilePath = 0LL;
  v39 = 0LL;
  P = 0LL;
  OutputFilePathLength = 0;
  v34 = 0;
  v31 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v33 = PreviousMode;
  if ( PreviousMode )
    ULongFromUser = RtlReadULongFromUser(a2 + 1);
  else
    ULongFromUser = a2[1];
  v42 = ULongFromUser;
  if ( ULongFromUser < 0x1C )
    return 3221225485LL;
  if ( PsIsCurrentThreadInServerSilo() )
    return 3221225474LL;
  if ( PreviousMode )
  {
    ProbeForRead(a2, ULongFromUser, 4u);
    if ( a3 )
    {
      v9 = RtlReadULongFromUser(a3);
      RtlWriteULongToUser(a3, v9);
    }
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return 3221225569LL;
  }
  Pool2 = (char *)ExAllocatePool2(0x40uLL);
  v11 = Pool2;
  v41 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  if ( PreviousMode )
    RtlCopyFromUser(Pool2, a2, ULongFromUser);
  else
    RtlCopyVolatileMemory(Pool2, a2, ULongFromUser);
  v12 = (unsigned __int64)&v11[ULongFromUser];
  if ( *(_DWORD *)v11 != 1 )
    goto LABEL_77;
  v13 = a1;
  if ( !a1 && *((_DWORD *)v11 + 2) > 0xFFFFu )
    goto LABEL_21;
  *((_DWORD *)v11 + 3) &= 0x13u;
  Size = *((_DWORD *)v11 + 4);
  if ( (Size & 1) != 0 )
    goto LABEL_21;
  v37 = *((_DWORD *)v11 + 5);
  if ( (v37 & 3) != 0 )
    goto LABEL_21;
  v15 = *((unsigned int *)v11 + 6);
  if ( (unsigned int)v15 > ULongFromUser || (unsigned __int64)&v11[v15 + 28] >= v12 )
    goto LABEL_21;
  if ( (unsigned int)v15 < 8 || strcmp(v11 + 28, "WINDOWS") )
  {
    Size_4 = 0;
    v16 = 0LL;
LABEL_32:
    Src = &v11[Size];
    v17 = ExpSafeWcslen(Src, v12);
    if ( v17 != -1 )
    {
      Size = 2 * v17 + 2;
      InputFilePath = (PFILE_PATH)&v11[v37];
      EnvironmentVariable = ExpVerifyFilePath(InputFilePath);
      if ( EnvironmentVariable < 0 )
        goto LABEL_78;
      v18 = Src;
      if ( &v11[v15 + 28] <= Src && (char *)Src + Size <= (char *)InputFilePath )
      {
        if ( InputFilePath->Type == 4 )
        {
          Length = InputFilePath->Length;
          v39 = InputFilePath;
          goto LABEL_43;
        }
        EnvironmentVariable = ZwTranslateFilePath(InputFilePath, 4u, 0LL, &OutputFilePathLength);
        if ( EnvironmentVariable == -1073741789 )
        {
          v19 = (_FILE_PATH *)ExAllocatePool2(0x40uLL);
          v39 = v19;
          if ( !v19 )
          {
LABEL_39:
            EnvironmentVariable = -1073741670;
            goto LABEL_78;
          }
          v31 = OutputFilePathLength;
          EnvironmentVariable = ZwTranslateFilePath(InputFilePath, 4u, v19, &v31);
          if ( EnvironmentVariable < 0 )
            goto LABEL_78;
          Length = OutputFilePathLength;
LABEL_43:
          v21 = Length - 12;
          OutputFilePathLength = v21;
          if ( !Size_4 || v16->Type == 4 )
          {
            v22 = *((_DWORD *)v11 + 6);
          }
          else
          {
            EnvironmentVariable = ZwTranslateFilePath(v16, 4u, 0LL, &v34);
            if ( EnvironmentVariable != -1073741789 )
              goto LABEL_78;
            v22 = v34 + *((_DWORD *)v11 + 6) - v16->Length;
            v21 = OutputFilePathLength;
          }
          v23 = Size;
          v37 = Size + v22 + v21 + 6;
          v24 = (_WORD *)ExAllocatePool2(0x40uLL);
          P = v24;
          if ( v24 )
          {
            *(_DWORD *)v24 = 0;
            v25 = 0;
            if ( (*((_DWORD *)v11 + 3) & 1) != 0 )
            {
              *(_DWORD *)v24 = 1;
              v25 = 1;
            }
            if ( (*((_DWORD *)v11 + 3) & 0x10) != 0 )
              *(_DWORD *)v24 = v25 | 8;
            v24[2] = OutputFilePathLength;
            memmove(v24 + 3, v18, v23);
            v26 = (char *)P + v23 + 6;
            memmove(v26, (char *)v39 + 12, OutputFilePathLength);
            v27 = &v26[OutputFilePathLength];
            if ( !Size_4 || v16->Type == 4 )
            {
              memmove(&v26[OutputFilePathLength], v11 + 28, v22);
            }
            else
            {
              memmove(&v26[OutputFilePathLength], v11 + 28, *((unsigned int *)v11 + 11));
              *((_DWORD *)v27 + 3) = v22;
              v28 = (_FILE_PATH *)&v27[*((unsigned int *)v11 + 11)];
              v31 = v34;
              EnvironmentVariable = ZwTranslateFilePath(v16, 4u, v28, &v34);
              if ( EnvironmentVariable )
                goto LABEL_78;
            }
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquireFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.QueuedScb);
            if ( a1 )
            {
              for ( i = 0; i <= 0xFFFF; ++i )
              {
                swprintf_s(Dst, 9uLL, L"Boot%04x", i);
                v31 = 0;
                EnvironmentVariable = IoGetEnvironmentVariableEx(
                                        (unsigned int)Dst,
                                        (unsigned int)&EfiBootVariablesGuid,
                                        0,
                                        (unsigned int)&v31,
                                        0LL);
                if ( EnvironmentVariable == -1073741568 && ((2 * ((i | (2 * i)) & 0xC4444444)) & i) != 0 )
                {
                  swprintf_s(Dst, 9uLL, L"Boot%04X", i);
                  v31 = 0;
                  EnvironmentVariable = IoGetEnvironmentVariableEx(
                                          (unsigned int)Dst,
                                          (unsigned int)&EfiBootVariablesGuid,
                                          0,
                                          (unsigned int)&v31,
                                          0LL);
                }
                if ( EnvironmentVariable == -1073741568 )
                  goto LABEL_75;
                if ( EnvironmentVariable && EnvironmentVariable != -1073741789 )
                  goto LABEL_76;
              }
              EnvironmentVariable = -1073741670;
            }
            else
            {
              i = *((_DWORD *)v11 + 2);
              swprintf_s(Dst, 9uLL, L"Boot%04X", i);
              v31 = 0;
              EnvironmentVariable = IoGetEnvironmentVariableEx(
                                      (unsigned int)Dst,
                                      (unsigned int)&EfiBootVariablesGuid,
                                      0,
                                      (unsigned int)&v31,
                                      0LL);
              if ( EnvironmentVariable == -1073741568
                && ((2 * ((*((_DWORD *)v11 + 2) | (2 * *((_DWORD *)v11 + 2))) & 0xC4444444)) & *((_DWORD *)v11 + 2)) != 0 )
              {
                swprintf_s(Dst, 9uLL, L"Boot%04x");
                v31 = 0;
                EnvironmentVariable = IoGetEnvironmentVariableEx(
                                        (unsigned int)Dst,
                                        (unsigned int)&EfiBootVariablesGuid,
                                        0,
                                        (unsigned int)&v31,
                                        0LL);
              }
              if ( !EnvironmentVariable || EnvironmentVariable == -1073741789 )
LABEL_75:
                EnvironmentVariable = IoSetEnvironmentVariableEx(
                                        (unsigned int)Dst,
                                        (unsigned int)&EfiBootVariablesGuid,
                                        (_DWORD)P,
                                        v37,
                                        1);
            }
LABEL_76:
            ExReleaseFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.QueuedScb);
            KeLeaveCriticalRegion();
            goto LABEL_78;
          }
          goto LABEL_39;
        }
LABEL_78:
        v13 = a1;
        goto LABEL_79;
      }
    }
LABEL_77:
    EnvironmentVariable = -1073741811;
    goto LABEL_78;
  }
  if ( (unsigned int)v15 <= 0x14 )
  {
LABEL_21:
    EnvironmentVariable = -1073741811;
  }
  else
  {
    EnvironmentVariable = ExpVerifyWindowsOsOptions(v11 + 28, (unsigned int)v15);
    if ( EnvironmentVariable >= 0 )
    {
      Size_4 = 1;
      v16 = (_FILE_PATH *)&v11[*((unsigned int *)v11 + 11) + 28];
      goto LABEL_32;
    }
  }
LABEL_79:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v39 && v39 != InputFilePath )
    ExFreePoolWithTag(v39, 0);
  ExFreePoolWithTag(v11, 0);
  if ( v13 && v44 && EnvironmentVariable >= 0 )
  {
    if ( v33 )
      RtlWriteULongToUser(v44, i);
    else
      *v44 = i;
  }
  return (unsigned int)EnvironmentVariable;
}
