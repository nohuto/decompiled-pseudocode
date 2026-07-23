/*
 * XREFs of NtEnumerateBootEntries @ 0x140A2CCB0
 * Callers:
 *     DifNtEnumerateBootEntriesWrapper @ 0x14067A6C0 (DifNtEnumerateBootEntriesWrapper.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403F8AE0 (ExAcquireFastMutexUnsafe.c)
 *     ExUnlockUserBuffer @ 0x14040F520 (ExUnlockUserBuffer.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 *     ExpIsDevicePathForRemovableMedia @ 0x1404D112C (ExpIsDevicePathForRemovableMedia.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     strcmp @ 0x140742840 (strcmp.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ExpVerifyWindowsOsOptions @ 0x140A2D310 (ExpVerifyWindowsOsOptions.c)
 *     ExpSafeWcslen @ 0x140A2D384 (ExpSafeWcslen.c)
 *     ExpTranslateBootEntryNameToId @ 0x140A2D3F8 (ExpTranslateBootEntryNameToId.c)
 *     ExpVerifyFilePath @ 0x140A2D82C (ExpVerifyFilePath.c)
 *     IoEnumerateEnvironmentVariablesEx @ 0x140A2EC3C (IoEnumerateEnvironmentVariablesEx.c)
 *     ExLockUserBuffer @ 0x140A2FFA0 (ExLockUserBuffer.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtEnumerateBootEntries(PVOID Buffer, PULONG BufferLength)
{
  unsigned int *v2; // r12
  __int64 v4; // r8
  KPROCESSOR_MODE PreviousMode; // r13
  unsigned int v6; // edi
  int ULongFromUser; // eax
  NTSTATUS result; // eax
  _DWORD *v9; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 Pool2; // rax
  unsigned int *v12; // r15
  unsigned int v13; // ebx
  NTSTATUS v14; // esi
  unsigned int *v15; // r12
  char *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned int v19; // r13d
  unsigned int v20; // eax
  size_t v21; // r8
  __int64 v22; // r9
  unsigned int v23; // ebx
  unsigned int v24; // eax
  void *v25; // rdx
  unsigned int v26; // r13d
  unsigned __int64 v27; // rax
  _DWORD *v28; // rbx
  BOOL v29; // r8d
  unsigned int v30; // edx
  int v31; // eax
  BOOL v32; // eax
  BOOL v33; // r8d
  unsigned int v34; // ecx
  unsigned int v35; // eax
  int v36; // ecx
  _DWORD *v37; // r8
  __int64 v38; // rax
  _BYTE *v39; // rcx
  __int64 v40; // rax
  int v41; // eax
  unsigned int v42; // ecx
  int v43; // r14d
  unsigned int v44; // [rsp+34h] [rbp-B4h] BYREF
  int v45; // [rsp+38h] [rbp-B0h]
  unsigned int v46; // [rsp+3Ch] [rbp-ACh]
  BOOL v47; // [rsp+40h] [rbp-A8h]
  unsigned int v48; // [rsp+44h] [rbp-A4h]
  int v49; // [rsp+48h] [rbp-A0h]
  int v50; // [rsp+4Ch] [rbp-9Ch] BYREF
  unsigned int v51; // [rsp+50h] [rbp-98h]
  unsigned int v52; // [rsp+54h] [rbp-94h]
  unsigned int v53; // [rsp+58h] [rbp-90h]
  _DWORD *v54; // [rsp+68h] [rbp-80h]
  void *v55; // [rsp+70h] [rbp-78h] BYREF
  size_t v56; // [rsp+78h] [rbp-70h]
  void *v57; // [rsp+80h] [rbp-68h]
  PVOID P; // [rsp+88h] [rbp-60h] BYREF
  _DWORD *v59; // [rsp+90h] [rbp-58h]
  size_t Size; // [rsp+98h] [rbp-50h]
  void *Src; // [rsp+A0h] [rbp-48h]
  char *v62; // [rsp+A8h] [rbp-40h]
  char v64; // [rsp+100h] [rbp+18h]
  KPROCESSOR_MODE v65; // [rsp+108h] [rbp+20h]

  v2 = BufferLength;
  v55 = 0LL;
  P = 0LL;
  if ( LODWORD(ExpSysDbgLock.ThreadListEntry.Blink) != 2 )
    return -1073741822;
  if ( (PVOID)((unsigned __int64)Buffer & 0xFFFFFFFFFFFFFFFCuLL) != Buffer )
    return -1073741811;
  if ( PsIsCurrentThreadInServerSilo() )
    return -1073741822;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v65 = PreviousMode;
  if ( PreviousMode )
  {
    ULongFromUser = RtlReadULongFromUser(v2);
    RtlWriteULongToUser(v2, ULongFromUser);
    v6 = Buffer != 0LL ? RtlReadULongFromUser(v2) : 0;
    v48 = v6;
    if ( v6 )
      ProbeForWrite(Buffer, v6, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  else
  {
    v6 = Buffer != 0LL ? *v2 : 0;
    v48 = v6;
  }
  if ( !v6 || (LOBYTE(v4) = PreviousMode, result = ExLockUserBuffer(Buffer, v6, v4, 1LL, &v55, &P), result >= 0) )
  {
    v9 = v55;
    v47 = v6 != 0;
    v45 = 0;
    v54 = 0LL;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.QueuedScb);
    v44 = 0x2000;
    Pool2 = ExAllocatePool2(0x40uLL);
    v12 = (unsigned int *)Pool2;
    if ( !Pool2 )
      v44 = 0;
    while ( 1 )
    {
      v13 = v44;
      v14 = IoEnumerateEnvironmentVariablesEx(2LL, ExpIsBootEntry, Pool2, &v44);
      if ( v14 != -1073741789 || v13 >= v44 )
        break;
      if ( v12 )
        ExFreePoolWithTag(v12, 0);
      Pool2 = ExAllocatePool2(0x40uLL);
      v12 = (unsigned int *)Pool2;
      if ( !Pool2 )
      {
        v14 = -1073741670;
        break;
      }
    }
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.QueuedScb);
    KeLeaveCriticalRegion();
    if ( v14 || !v44 )
    {
      if ( v14 == -1073741789 )
        v14 = -1073741306;
    }
    else
    {
      v15 = v12;
      v16 = (char *)v12 + 2 * v44;
      v62 = v16;
      v17 = EfiBootVariablesGuid;
      while ( 1 )
      {
        v50 = 0;
        v18 = *((_QWORD *)v15 + 2) - v17;
        if ( !v18 )
          v18 = *((_QWORD *)v15 + 3) + 0x73D4FC671FFFF256LL;
        if ( !v18 )
        {
          if ( (unsigned int)ExpTranslateBootEntryNameToId(v15 + 8, &v50) )
          {
            v19 = v15[2];
            if ( v19 >= 8 )
            {
              v59 = (unsigned int *)((char *)v15 + v15[1]);
              Src = (char *)v59 + 6;
              v20 = ExpSafeWcslen((char *)v59 + 6, v16);
              v23 = v20;
              v46 = v20;
              if ( v20 != -1 )
              {
                v23 = 2 * v20 + 2;
                v46 = v23;
              }
              v24 = v21 + v23 + 6;
              if ( v23 != -1 && (unsigned int)v21 < v19 && v19 >= v24 )
              {
                v64 = 1;
                Size = v23;
                v25 = (void *)(v22 + v23 + 6LL);
                v57 = v25;
                v56 = v21;
                v26 = v19 - v24;
                v27 = ((unsigned __int64)v9 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
                if ( (_DWORD *)v27 != v9 )
                {
                  v42 = v27 - (_DWORD)v9;
                  v9 = (_DWORD *)(((unsigned __int64)v9 + 3) & 0xFFFFFFFFFFFFFFFCuLL);
                  if ( v6 < v42 )
                  {
                    v47 = 0;
                    v6 = 0;
                    v45 = -1073741789;
                  }
                  else
                  {
                    v6 -= v42;
                  }
                }
                v49 = v21 + 12;
                v28 = v9 + 1;
                if ( v6 >= (int)v21 + 12 )
                {
                  *v9 = 1;
                  *v28 = v21 + 12;
                  v9[2] = 4;
                  memmove(v9 + 3, v25, v21);
                  v41 = ExpVerifyFilePath(v9);
                  v29 = v47;
                  if ( v41 < 0 )
                  {
                    v64 = 0;
                    v49 = 16;
                  }
                }
                else
                {
                  v6 = 0;
                  v29 = 0;
                  v45 = -1073741789;
                }
                v51 = (v26 + 31) & 0xFFFFFFFC;
                v46 = (v46 + 3 + v51) & 0xFFFFFFFC;
                v52 = v46 + v49;
                v30 = v46 + v49 + 4;
                v53 = v30;
                v31 = v45;
                if ( v6 < v30 )
                  v31 = -1073741789;
                v45 = v31;
                v32 = 0;
                if ( v6 >= v30 )
                  v32 = v29;
                v33 = v32;
                v47 = v32;
                v34 = v6;
                v35 = v6 - v30;
                v6 = 0;
                if ( v34 >= v30 )
                  v6 = v35;
                if ( v33 )
                {
                  memset_0(v9, 0, v30);
                  *v28 = 1;
                  v9[2] = v52;
                  v9[3] = v50;
                  v9[4] = 0;
                  v36 = 0;
                  v37 = v59;
                  if ( (*v59 & 1) != 0 )
                  {
                    v9[4] = 1;
                    v36 = 1;
                  }
                  if ( (*v37 & 8) != 0 )
                    v9[4] = v36 | 0x10;
                  v9[5] = v51;
                  v9[6] = v46;
                  v9[7] = v26;
                  memmove(v9 + 8, (char *)v57 + v56, v26);
                  if ( v26 > 0x14
                    && !strcmp((const char *)v9 + 32, "WINDOWS")
                    && (int)ExpVerifyWindowsOsOptions(v9 + 8, v26) >= 0 )
                  {
                    v9[4] |= 4u;
                  }
                  memmove((char *)v28 + v51, Src, Size);
                  v38 = v46;
                  *(_DWORD *)((char *)v28 + v46) = 1;
                  *(_DWORD *)((char *)v28 + v38 + 4) = v49;
                  *(_DWORD *)((char *)v28 + v38 + 8) = 4;
                  v39 = (char *)v28 + v38 + 12;
                  if ( v64 )
                  {
                    memmove(v39, v57, v56);
                    if ( (unsigned int)ExpIsDevicePathForRemovableMedia(v57) )
                      v9[4] |= 8u;
                  }
                  else
                  {
                    v9[4] |= 0x20u;
                    *v39 = 127;
                    *(_WORD *)((char *)v28 + v38 + 13) = 1279;
                    *((_BYTE *)v28 + v38 + 15) = 0;
                  }
                  if ( v54 )
                    *v54 = (_DWORD)v9 - (_DWORD)v54;
                  v54 = v9;
                  v30 = v53;
                }
                v9 = (_DWORD *)((char *)v9 + v30);
              }
            }
          }
          v17 = EfiBootVariablesGuid;
        }
        v40 = *v15;
        if ( !(_DWORD)v40 )
          break;
        v15 = (unsigned int *)((char *)v15 + v40);
        v16 = v62;
      }
      v2 = BufferLength;
      PreviousMode = v65;
      if ( v54 )
        *v54 = 0;
    }
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
    if ( P )
      ExUnlockUserBuffer((struct _MDL *)P);
    if ( v14 >= 0 )
      v14 = v45;
    v43 = (_DWORD)v9 - (_DWORD)v55;
    if ( PreviousMode )
      RtlWriteULongToUser(v2, v43);
    else
      *v2 = v43;
    return v14;
  }
  return result;
}
