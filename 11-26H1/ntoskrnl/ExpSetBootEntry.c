/*
 * XREFs of ExpSetBootEntry @ 0x14083BEC0
 * Callers:
 *     NtAddBootEntry @ 0x14083D090 (NtAddBootEntry.c)
 *     NtModifyBootEntry @ 0x14083DB10 (NtModifyBootEntry.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140276140 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403FC2F0 (ExAcquireFastMutexUnsafe.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140450FF0 (PsIsCurrentThreadInServerSilo.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     swprintf_s @ 0x14053B0E0 (swprintf_s.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwTranslateFilePath @ 0x140726EF0 (ZwTranslateFilePath.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     strcmp @ 0x14073DC40 (strcmp.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     IoSetEnvironmentVariableEx @ 0x140906830 (IoSetEnvironmentVariableEx.c)
 *     IoGetEnvironmentVariableEx @ 0x140908318 (IoGetEnvironmentVariableEx.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     ExpVerifyWindowsOsOptions @ 0x140A94AC0 (ExpVerifyWindowsOsOptions.c)
 *     ExpSafeWcslen @ 0x140A94B34 (ExpSafeWcslen.c)
 *     ExpVerifyFilePath @ 0x140A94FDC (ExpVerifyFilePath.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
  int EnvironmentVariable; // ebx
  __int64 v15; // rsi
  __int64 v16; // r14
  int v17; // eax
  void *v18; // r15
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // esi
  size_t v22; // rbx
  _WORD *v23; // rax
  int v24; // ecx
  char *v25; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v28; // [rsp+38h] [rbp-B0h] BYREF
  unsigned int v29; // [rsp+3Ch] [rbp-ACh]
  KPROCESSOR_MODE v30; // [rsp+40h] [rbp-A8h]
  unsigned int v31; // [rsp+44h] [rbp-A4h]
  unsigned int Size; // [rsp+48h] [rbp-A0h]
  int Size_4; // [rsp+4Ch] [rbp-9Ch]
  unsigned int v34; // [rsp+50h] [rbp-98h]
  PVOID P; // [rsp+58h] [rbp-90h]
  PVOID v36; // [rsp+60h] [rbp-88h]
  char *v37; // [rsp+68h] [rbp-80h]
  PVOID v38; // [rsp+78h] [rbp-70h]
  unsigned int v39; // [rsp+80h] [rbp-68h]
  void *Src; // [rsp+88h] [rbp-60h]
  unsigned int *v41; // [rsp+90h] [rbp-58h]
  wchar_t Dst[12]; // [rsp+98h] [rbp-50h] BYREF

  v41 = a3;
  v38 = 0LL;
  i = 0;
  v37 = 0LL;
  v36 = 0LL;
  P = 0LL;
  v29 = 0;
  v31 = 0;
  v28 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v30 = PreviousMode;
  if ( PreviousMode )
    ULongFromUser = RtlReadULongFromUser(a2 + 1);
  else
    ULongFromUser = a2[1];
  v39 = ULongFromUser;
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
  v38 = Pool2;
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
  v34 = *((_DWORD *)v11 + 5);
  if ( (v34 & 3) != 0 )
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
      v37 = &v11[v34];
      EnvironmentVariable = ExpVerifyFilePath(v37);
      if ( EnvironmentVariable < 0 )
        goto LABEL_78;
      v18 = Src;
      if ( &v11[v15 + 28] <= Src && (char *)Src + Size <= v37 )
      {
        if ( *((_DWORD *)v37 + 2) == 4 )
        {
          v19 = *((_DWORD *)v37 + 1);
          v36 = v37;
          goto LABEL_43;
        }
        EnvironmentVariable = ZwTranslateFilePath((__int64)v37, 4LL);
        if ( EnvironmentVariable == -1073741789 )
        {
          v36 = (PVOID)ExAllocatePool2(0x40uLL);
          if ( !v36 )
          {
LABEL_39:
            EnvironmentVariable = -1073741670;
            goto LABEL_78;
          }
          v28 = v29;
          EnvironmentVariable = ZwTranslateFilePath((__int64)v37, 4LL);
          if ( EnvironmentVariable < 0 )
            goto LABEL_78;
          v19 = v29;
LABEL_43:
          v20 = v19 - 12;
          v29 = v20;
          if ( !Size_4 || *(_DWORD *)(v16 + 8) == 4 )
          {
            v21 = *((_DWORD *)v11 + 6);
          }
          else
          {
            EnvironmentVariable = ZwTranslateFilePath(v16, 4LL);
            if ( EnvironmentVariable != -1073741789 )
              goto LABEL_78;
            v21 = v31 + *((_DWORD *)v11 + 6) - *(_DWORD *)(v16 + 4);
            v20 = v29;
          }
          v22 = Size;
          v34 = Size + v21 + v20 + 6;
          v23 = (_WORD *)ExAllocatePool2(0x40uLL);
          P = v23;
          if ( v23 )
          {
            *(_DWORD *)v23 = 0;
            v24 = 0;
            if ( (*((_DWORD *)v11 + 3) & 1) != 0 )
            {
              *(_DWORD *)v23 = 1;
              v24 = 1;
            }
            if ( (*((_DWORD *)v11 + 3) & 0x10) != 0 )
              *(_DWORD *)v23 = v24 | 8;
            v23[2] = v29;
            memmove(v23 + 3, v18, v22);
            v25 = (char *)P + v22 + 6;
            memmove(v25, (char *)v36 + 12, v29);
            if ( !Size_4 || *(_DWORD *)(v16 + 8) == 4 )
            {
              memmove(&v25[v29], v11 + 28, v21);
            }
            else
            {
              memmove(&v25[v29], v11 + 28, *((unsigned int *)v11 + 11));
              *(_DWORD *)&v25[v29 + 12] = v21;
              v28 = v31;
              EnvironmentVariable = ZwTranslateFilePath(v16, 4LL);
              if ( EnvironmentVariable )
                goto LABEL_78;
            }
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquireFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.WriteOperationCount);
            if ( a1 )
            {
              for ( i = 0; i <= 0xFFFF; ++i )
              {
                swprintf_s(Dst, 9uLL, L"Boot%04x", i);
                v28 = 0;
                EnvironmentVariable = IoGetEnvironmentVariableEx(
                                        (unsigned int)Dst,
                                        (unsigned int)&EfiBootVariablesGuid,
                                        0,
                                        (unsigned int)&v28,
                                        0LL);
                if ( EnvironmentVariable == -1073741568 && ((2 * ((i | (2 * i)) & 0xC4444444)) & i) != 0 )
                {
                  swprintf_s(Dst, 9uLL, L"Boot%04X", i);
                  v28 = 0;
                  EnvironmentVariable = IoGetEnvironmentVariableEx(
                                          (unsigned int)Dst,
                                          (unsigned int)&EfiBootVariablesGuid,
                                          0,
                                          (unsigned int)&v28,
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
              v28 = 0;
              EnvironmentVariable = IoGetEnvironmentVariableEx(
                                      (unsigned int)Dst,
                                      (unsigned int)&EfiBootVariablesGuid,
                                      0,
                                      (unsigned int)&v28,
                                      0LL);
              if ( EnvironmentVariable == -1073741568
                && ((2 * ((*((_DWORD *)v11 + 2) | (2 * *((_DWORD *)v11 + 2))) & 0xC4444444)) & *((_DWORD *)v11 + 2)) != 0 )
              {
                swprintf_s(Dst, 9uLL, L"Boot%04x");
                v28 = 0;
                EnvironmentVariable = IoGetEnvironmentVariableEx(
                                        (unsigned int)Dst,
                                        (unsigned int)&EfiBootVariablesGuid,
                                        0,
                                        (unsigned int)&v28,
                                        0LL);
              }
              if ( !EnvironmentVariable || EnvironmentVariable == -1073741789 )
LABEL_75:
                EnvironmentVariable = IoSetEnvironmentVariableEx(
                                        (unsigned int)Dst,
                                        (unsigned int)&EfiBootVariablesGuid,
                                        (_DWORD)P,
                                        v34,
                                        1);
            }
LABEL_76:
            ExReleaseFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.WriteOperationCount);
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
      v16 = (__int64)&v11[*((unsigned int *)v11 + 11) + 28];
      goto LABEL_32;
    }
  }
LABEL_79:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v36 && v36 != v37 )
    ExFreePoolWithTag(v36, 0);
  ExFreePoolWithTag(v11, 0);
  if ( v13 && v41 && EnvironmentVariable >= 0 )
  {
    if ( v30 )
      RtlWriteULongToUser(v41, i);
    else
      *v41 = i;
  }
  return (unsigned int)EnvironmentVariable;
}
