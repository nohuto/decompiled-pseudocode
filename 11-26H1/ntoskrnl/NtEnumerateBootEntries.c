/*
 * XREFs of NtEnumerateBootEntries @ 0x140A94460
 * Callers:
 *     DifNtEnumerateBootEntriesWrapper @ 0x140676AE0 (DifNtEnumerateBootEntriesWrapper.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140276140 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403FC2F0 (ExAcquireFastMutexUnsafe.c)
 *     ExUnlockUserBuffer @ 0x14040FE00 (ExUnlockUserBuffer.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140450FF0 (PsIsCurrentThreadInServerSilo.c)
 *     ExpIsDevicePathForRemovableMedia @ 0x1404D795C (ExpIsDevicePathForRemovableMedia.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     strcmp @ 0x14073DC40 (strcmp.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     IoEnumerateEnvironmentVariablesEx @ 0x1409069DC (IoEnumerateEnvironmentVariablesEx.c)
 *     ExLockUserBuffer @ 0x140907E40 (ExLockUserBuffer.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     ExpVerifyWindowsOsOptions @ 0x140A94AC0 (ExpVerifyWindowsOsOptions.c)
 *     ExpSafeWcslen @ 0x140A94B34 (ExpSafeWcslen.c)
 *     ExpTranslateBootEntryNameToId @ 0x140A94BA8 (ExpTranslateBootEntryNameToId.c)
 *     ExpVerifyFilePath @ 0x140A94FDC (ExpVerifyFilePath.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtEnumerateBootEntries(unsigned __int64 Address, unsigned int *a2)
{
  unsigned int *v2; // r12
  KPROCESSOR_MODE PreviousMode; // r13
  unsigned int v5; // edi
  int ULongFromUser; // eax
  __int64 result; // rax
  _DWORD *v8; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 Pool2; // rax
  unsigned int *v11; // r15
  unsigned int v12; // ebx
  int v13; // esi
  unsigned int *v14; // r12
  char *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned int v18; // r13d
  unsigned int v19; // eax
  size_t v20; // r8
  __int64 v21; // r9
  unsigned int v22; // ebx
  unsigned int v23; // eax
  void *v24; // rdx
  unsigned int v25; // r13d
  unsigned __int64 v26; // rax
  _DWORD *v27; // rbx
  BOOL v28; // r8d
  unsigned int v29; // edx
  int v30; // eax
  BOOL v31; // eax
  BOOL v32; // r8d
  unsigned int v33; // ecx
  unsigned int v34; // eax
  int v35; // ecx
  _DWORD *v36; // r8
  __int64 v37; // rax
  _BYTE *v38; // rcx
  __int64 v39; // rax
  int v40; // eax
  unsigned int v41; // ecx
  int v42; // r14d
  unsigned int v43; // [rsp+34h] [rbp-B4h] BYREF
  int v44; // [rsp+38h] [rbp-B0h]
  unsigned int v45; // [rsp+3Ch] [rbp-ACh]
  BOOL v46; // [rsp+40h] [rbp-A8h]
  unsigned int v47; // [rsp+44h] [rbp-A4h]
  int v48; // [rsp+48h] [rbp-A0h]
  int v49; // [rsp+4Ch] [rbp-9Ch] BYREF
  unsigned int v50; // [rsp+50h] [rbp-98h]
  unsigned int v51; // [rsp+54h] [rbp-94h]
  unsigned int v52; // [rsp+58h] [rbp-90h]
  _DWORD *v53; // [rsp+68h] [rbp-80h]
  void *v54; // [rsp+70h] [rbp-78h] BYREF
  size_t v55; // [rsp+78h] [rbp-70h]
  void *v56; // [rsp+80h] [rbp-68h]
  PVOID P; // [rsp+88h] [rbp-60h] BYREF
  _DWORD *v58; // [rsp+90h] [rbp-58h]
  size_t Size; // [rsp+98h] [rbp-50h]
  void *Src; // [rsp+A0h] [rbp-48h]
  char *v61; // [rsp+A8h] [rbp-40h]
  char v63; // [rsp+100h] [rbp+18h]
  KPROCESSOR_MODE v64; // [rsp+108h] [rbp+20h]

  v2 = a2;
  v54 = 0LL;
  P = 0LL;
  if ( *(_DWORD *)&ExpSysDbgLock.SchedulerApcFill5[64] != 2 )
    return 3221225474LL;
  if ( (Address & 0xFFFFFFFFFFFFFFFCuLL) != Address )
    return 3221225485LL;
  if ( PsIsCurrentThreadInServerSilo() )
    return 3221225474LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v64 = PreviousMode;
  if ( PreviousMode )
  {
    ULongFromUser = RtlReadULongFromUser(v2);
    RtlWriteULongToUser(v2, ULongFromUser);
    v5 = Address != 0 ? RtlReadULongFromUser(v2) : 0;
    v47 = v5;
    if ( v5 )
      ProbeForWrite((volatile void *)Address, v5, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return 3221225569LL;
  }
  else
  {
    v5 = Address != 0 ? *v2 : 0;
    v47 = v5;
  }
  if ( !v5 || (result = ExLockUserBuffer(Address, v5, PreviousMode, 1, &v54, (struct _MDL **)&P), (int)result >= 0) )
  {
    v8 = v54;
    v46 = v5 != 0;
    v44 = 0;
    v53 = 0LL;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.WriteOperationCount);
    v43 = 0x2000;
    Pool2 = ExAllocatePool2(0x40uLL);
    v11 = (unsigned int *)Pool2;
    if ( !Pool2 )
      v43 = 0;
    while ( 1 )
    {
      v12 = v43;
      v13 = IoEnumerateEnvironmentVariablesEx(2, (__int64)ExpIsBootEntry, Pool2, &v43);
      if ( v13 != -1073741789 || v12 >= v43 )
        break;
      if ( v11 )
        ExFreePoolWithTag(v11, 0);
      Pool2 = ExAllocatePool2(0x40uLL);
      v11 = (unsigned int *)Pool2;
      if ( !Pool2 )
      {
        v13 = -1073741670;
        break;
      }
    }
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.WriteOperationCount);
    KeLeaveCriticalRegion();
    if ( v13 || !v43 )
    {
      if ( v13 == -1073741789 )
        v13 = -1073741306;
    }
    else
    {
      v14 = v11;
      v15 = (char *)v11 + 2 * v43;
      v61 = v15;
      v16 = EfiBootVariablesGuid;
      while ( 1 )
      {
        v49 = 0;
        v17 = *((_QWORD *)v14 + 2) - v16;
        if ( !v17 )
          v17 = *((_QWORD *)v14 + 3) + 0x73D4FC671FFFF256LL;
        if ( !v17 )
        {
          if ( (unsigned int)ExpTranslateBootEntryNameToId(v14 + 8, &v49) )
          {
            v18 = v14[2];
            if ( v18 >= 8 )
            {
              v58 = (unsigned int *)((char *)v14 + v14[1]);
              Src = (char *)v58 + 6;
              v19 = ExpSafeWcslen((char *)v58 + 6, v15);
              v22 = v19;
              v45 = v19;
              if ( v19 != -1 )
              {
                v22 = 2 * v19 + 2;
                v45 = v22;
              }
              v23 = v20 + v22 + 6;
              if ( v22 != -1 && (unsigned int)v20 < v18 && v18 >= v23 )
              {
                v63 = 1;
                Size = v22;
                v24 = (void *)(v21 + v22 + 6LL);
                v56 = v24;
                v55 = v20;
                v25 = v18 - v23;
                v26 = ((unsigned __int64)v8 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
                if ( (_DWORD *)v26 != v8 )
                {
                  v41 = v26 - (_DWORD)v8;
                  v8 = (_DWORD *)(((unsigned __int64)v8 + 3) & 0xFFFFFFFFFFFFFFFCuLL);
                  if ( v5 < v41 )
                  {
                    v46 = 0;
                    v5 = 0;
                    v44 = -1073741789;
                  }
                  else
                  {
                    v5 -= v41;
                  }
                }
                v48 = v20 + 12;
                v27 = v8 + 1;
                if ( v5 >= (int)v20 + 12 )
                {
                  *v8 = 1;
                  *v27 = v20 + 12;
                  v8[2] = 4;
                  memmove(v8 + 3, v24, v20);
                  v40 = ExpVerifyFilePath(v8);
                  v28 = v46;
                  if ( v40 < 0 )
                  {
                    v63 = 0;
                    v48 = 16;
                  }
                }
                else
                {
                  v5 = 0;
                  v28 = 0;
                  v44 = -1073741789;
                }
                v50 = (v25 + 31) & 0xFFFFFFFC;
                v45 = (v45 + 3 + v50) & 0xFFFFFFFC;
                v51 = v45 + v48;
                v29 = v45 + v48 + 4;
                v52 = v29;
                v30 = v44;
                if ( v5 < v29 )
                  v30 = -1073741789;
                v44 = v30;
                v31 = 0;
                if ( v5 >= v29 )
                  v31 = v28;
                v32 = v31;
                v46 = v31;
                v33 = v5;
                v34 = v5 - v29;
                v5 = 0;
                if ( v33 >= v29 )
                  v5 = v34;
                if ( v32 )
                {
                  memset_0(v8, 0, v29);
                  *v27 = 1;
                  v8[2] = v51;
                  v8[3] = v49;
                  v8[4] = 0;
                  v35 = 0;
                  v36 = v58;
                  if ( (*v58 & 1) != 0 )
                  {
                    v8[4] = 1;
                    v35 = 1;
                  }
                  if ( (*v36 & 8) != 0 )
                    v8[4] = v35 | 0x10;
                  v8[5] = v50;
                  v8[6] = v45;
                  v8[7] = v25;
                  memmove(v8 + 8, (char *)v56 + v55, v25);
                  if ( v25 > 0x14
                    && !strcmp((const char *)v8 + 32, "WINDOWS")
                    && (int)ExpVerifyWindowsOsOptions(v8 + 8, v25) >= 0 )
                  {
                    v8[4] |= 4u;
                  }
                  memmove((char *)v27 + v50, Src, Size);
                  v37 = v45;
                  *(_DWORD *)((char *)v27 + v45) = 1;
                  *(_DWORD *)((char *)v27 + v37 + 4) = v48;
                  *(_DWORD *)((char *)v27 + v37 + 8) = 4;
                  v38 = (char *)v27 + v37 + 12;
                  if ( v63 )
                  {
                    memmove(v38, v56, v55);
                    if ( (unsigned int)ExpIsDevicePathForRemovableMedia(v56) )
                      v8[4] |= 8u;
                  }
                  else
                  {
                    v8[4] |= 0x20u;
                    *v38 = 127;
                    *(_WORD *)((char *)v27 + v37 + 13) = 1279;
                    *((_BYTE *)v27 + v37 + 15) = 0;
                  }
                  if ( v53 )
                    *v53 = (_DWORD)v8 - (_DWORD)v53;
                  v53 = v8;
                  v29 = v52;
                }
                v8 = (_DWORD *)((char *)v8 + v29);
              }
            }
          }
          v16 = EfiBootVariablesGuid;
        }
        v39 = *v14;
        if ( !(_DWORD)v39 )
          break;
        v14 = (unsigned int *)((char *)v14 + v39);
        v15 = v61;
      }
      v2 = a2;
      PreviousMode = v64;
      if ( v53 )
        *v53 = 0;
    }
    if ( v11 )
      ExFreePoolWithTag(v11, 0);
    if ( P )
      ExUnlockUserBuffer((struct _MDL *)P);
    if ( v13 >= 0 )
      v13 = v44;
    v42 = (_DWORD)v8 - (_DWORD)v54;
    if ( PreviousMode )
      RtlWriteULongToUser(v2, v42);
    else
      *v2 = v42;
    return (unsigned int)v13;
  }
  return result;
}
