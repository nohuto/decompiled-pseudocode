/*
 * XREFs of ExpSetDriverEntry @ 0x14083C5DC
 * Callers:
 *     NtAddDriverEntry @ 0x14083D0C0 (NtAddDriverEntry.c)
 *     NtModifyDriverEntry @ 0x14083DB40 (NtModifyDriverEntry.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140276140 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403FC2F0 (ExAcquireFastMutexUnsafe.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140450FF0 (PsIsCurrentThreadInServerSilo.c)
 *     swprintf_s @ 0x14053B0E0 (swprintf_s.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwTranslateFilePath @ 0x140726EF0 (ZwTranslateFilePath.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     IoSetEnvironmentVariableEx @ 0x140906830 (IoSetEnvironmentVariableEx.c)
 *     IoGetEnvironmentVariableEx @ 0x140908318 (IoGetEnvironmentVariableEx.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     ExpSafeWcslen @ 0x140A94B34 (ExpSafeWcslen.c)
 *     ExpVerifyFilePath @ 0x140A94FDC (ExpVerifyFilePath.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpSetDriverEntry(int a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int i; // esi
  unsigned __int64 v6; // r13
  __int64 v7; // r12
  KPROCESSOR_MODE PreviousMode; // di
  unsigned int ULongFromUser; // ebx
  int v11; // eax
  _DWORD *Pool2; // rax
  _DWORD *v13; // rdi
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // r8
  unsigned int v17; // r14d
  int EnvironmentVariable; // ebx
  void *v19; // rbx
  unsigned int v20; // eax
  char *v21; // rsi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v23; // [rsp+30h] [rbp-98h] BYREF
  unsigned int Size; // [rsp+38h] [rbp-90h]
  int Size_4; // [rsp+3Ch] [rbp-8Ch]
  void *Src; // [rsp+40h] [rbp-88h]
  PVOID P; // [rsp+48h] [rbp-80h]
  unsigned int v28; // [rsp+50h] [rbp-78h]
  PVOID v29; // [rsp+60h] [rbp-68h]
  unsigned int *v30; // [rsp+68h] [rbp-60h]
  wchar_t Dst[12]; // [rsp+80h] [rbp-48h] BYREF

  v30 = a3;
  Size_4 = a1;
  v29 = 0LL;
  i = 0;
  v6 = 0LL;
  v7 = 0LL;
  P = 0LL;
  Size = 0;
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
  if ( *v13 != 1 || !Size_4 && v13[2] > 0xFFFFu )
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
  v6 = (unsigned __int64)v13 + v16;
  EnvironmentVariable = ExpVerifyFilePath((char *)v13 + v16);
  if ( EnvironmentVariable < 0 )
    goto LABEL_51;
  v19 = Src;
  if ( (unsigned __int64)Src + v17 > v6 )
  {
LABEL_50:
    EnvironmentVariable = -1073741811;
    goto LABEL_51;
  }
  if ( *(_DWORD *)(v6 + 8) == 4 )
  {
    v20 = *(_DWORD *)(v6 + 4);
    v7 = v6;
    goto LABEL_30;
  }
  EnvironmentVariable = ZwTranslateFilePath(v6, 4LL);
  if ( EnvironmentVariable == -1073741789 )
  {
    v7 = ExAllocatePool2(0x40uLL);
    if ( !v7 )
    {
LABEL_26:
      EnvironmentVariable = -1073741670;
      goto LABEL_51;
    }
    v23 = Size;
    EnvironmentVariable = ZwTranslateFilePath(v6, 4LL);
    if ( EnvironmentVariable < 0 )
      goto LABEL_51;
    v20 = Size;
    v19 = Src;
LABEL_30:
    Size = v20 - 12;
    LODWORD(Src) = v17 + v20 - 12 + 6;
    P = (PVOID)ExAllocatePool2(0x40uLL);
    if ( P )
    {
      v21 = (char *)P;
      *((_WORD *)P + 2) = Size;
      memmove(v21 + 6, v19, v17);
      memmove(&v21[v17 + 6], (const void *)(v7 + 12), Size);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.WriteOperationCount);
      if ( Size_4 )
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
      ExReleaseFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.WriteOperationCount);
      KeLeaveCriticalRegion();
      goto LABEL_51;
    }
    goto LABEL_26;
  }
LABEL_51:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v7 && v7 != v6 )
    ExFreePoolWithTag((PVOID)v7, 0);
  ExFreePoolWithTag(v13, 0);
  if ( Size_4 && v30 && EnvironmentVariable >= 0 )
    *v30 = i;
  return (unsigned int)EnvironmentVariable;
}
