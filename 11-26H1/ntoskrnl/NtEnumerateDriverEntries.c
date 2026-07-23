/*
 * XREFs of NtEnumerateDriverEntries @ 0x140843670
 * Callers:
 *     DifNtEnumerateDriverEntriesWrapper @ 0x14067A830 (DifNtEnumerateDriverEntriesWrapper.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403F8AE0 (ExAcquireFastMutexUnsafe.c)
 *     ExUnlockUserBuffer @ 0x14040F520 (ExUnlockUserBuffer.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ExpTranslateDriverEntryNameToId @ 0x140842F18 (ExpTranslateDriverEntryNameToId.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ExpSafeWcslen @ 0x140A2D384 (ExpSafeWcslen.c)
 *     IoEnumerateEnvironmentVariablesEx @ 0x140A2EC3C (IoEnumerateEnvironmentVariablesEx.c)
 *     ExLockUserBuffer @ 0x140A2FFA0 (ExLockUserBuffer.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtEnumerateDriverEntries(PVOID Buffer, PULONG BufferLength)
{
  unsigned int *v4; // r15
  NTSTATUS result; // eax
  __int64 v6; // r8
  KPROCESSOR_MODE PreviousMode; // si
  int ULongFromUser; // eax
  ULONG v9; // ebx
  _DWORD *v10; // rdi
  NTSTATUS v11; // r14d
  _DWORD *v12; // r12
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v14; // esi
  __int64 Pool2; // rax
  unsigned int *v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rax
  int v19; // eax
  unsigned int v20; // r8d
  unsigned int v21; // r9d
  unsigned int v22; // eax
  unsigned __int64 v23; // rcx
  ULONG v24; // edx
  BOOL v25; // r8d
  ULONG v26; // edx
  int v27; // eax
  BOOL v28; // eax
  BOOL v29; // r8d
  ULONG v30; // ecx
  ULONG v31; // eax
  __int64 v32; // rcx
  unsigned int v33; // edx
  __int64 v34; // rax
  BOOL v35; // [rsp+38h] [rbp-90h]
  int v36; // [rsp+3Ch] [rbp-8Ch] BYREF
  unsigned int v37; // [rsp+40h] [rbp-88h]
  unsigned int v38; // [rsp+44h] [rbp-84h]
  unsigned int v39; // [rsp+48h] [rbp-80h]
  ULONG v40; // [rsp+4Ch] [rbp-7Ch]
  _DWORD *v41; // [rsp+58h] [rbp-70h] BYREF
  size_t Size; // [rsp+60h] [rbp-68h]
  PVOID P; // [rsp+68h] [rbp-60h] BYREF
  char *v44; // [rsp+70h] [rbp-58h]
  void *Src; // [rsp+78h] [rbp-50h]
  char *v46; // [rsp+80h] [rbp-48h]
  unsigned int v47; // [rsp+E0h] [rbp+18h] BYREF
  int v48; // [rsp+E8h] [rbp+20h]

  v41 = 0LL;
  P = 0LL;
  v4 = 0LL;
  if ( LODWORD(ExpSysDbgLock.ThreadListEntry.Blink) != 2 )
    return -1073741822;
  if ( (PVOID)((unsigned __int64)Buffer & 0xFFFFFFFFFFFFFFFCuLL) != Buffer )
    return -1073741811;
  if ( PsIsCurrentThreadInServerSilo() )
    return -1073741822;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULongFromUser = RtlReadULongFromUser(BufferLength);
    RtlWriteULongToUser(BufferLength, ULongFromUser);
    v9 = Buffer != 0LL ? *BufferLength : 0;
    if ( v9 )
      ProbeForWrite(Buffer, v9, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  else
  {
    v9 = Buffer != 0LL ? *BufferLength : 0;
  }
  if ( !v9 || (LOBYTE(v6) = PreviousMode, result = ExLockUserBuffer(Buffer, v9, v6, 1LL, &v41, &P), result >= 0) )
  {
    v10 = v41;
    v11 = 0;
    v48 = 0;
    v35 = v9 != 0;
    v12 = 0LL;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.QueuedScb);
    v47 = 0;
    v14 = IoEnumerateEnvironmentVariablesEx(2LL, ExpIsDriverEntry, 0LL, &v47);
    if ( v14 == -1073741789 )
    {
      Pool2 = ExAllocatePool2(0x40uLL);
      v4 = (unsigned int *)Pool2;
      if ( Pool2 )
        v14 = IoEnumerateEnvironmentVariablesEx(2LL, ExpIsDriverEntry, Pool2, &v47);
      else
        v14 = -1073741670;
    }
    else
    {
      v47 = 0;
    }
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.QueuedScb);
    KeLeaveCriticalRegion();
    if ( v14 || !v47 )
      goto LABEL_51;
    v16 = v4;
    v44 = (char *)v4 + 2 * v47;
    v17 = EfiDriverVariablesGuid;
    while ( 1 )
    {
      v36 = 0;
      v18 = *((_QWORD *)v16 + 2) - v17;
      if ( !v18 )
        v18 = *((_QWORD *)v16 + 3) + 0x73D4FC671FFFF256LL;
      if ( !v18 )
        break;
LABEL_47:
      v34 = *v16;
      if ( !(_DWORD)v34 )
      {
        v11 = v48;
        if ( v12 )
          *v12 = 0;
LABEL_51:
        if ( v4 )
          ExFreePoolWithTag(v4, 0);
        if ( P )
          ExUnlockUserBuffer((struct _MDL *)P);
        if ( v14 >= 0 )
          v14 = v11;
        *BufferLength = (_DWORD)v10 - (_DWORD)v41;
        return v14;
      }
      v16 = (unsigned int *)((char *)v16 + v34);
    }
    if ( !(unsigned int)ExpTranslateDriverEntryNameToId((wint_t *)v16 + 16, &v36)
      || v16[2] < 8
      || (v46 = (char *)v16 + v16[1],
          v39 = *((unsigned __int16 *)v46 + 2),
          Src = v46 + 6,
          v19 = ExpSafeWcslen(v46 + 6, v44),
          v19 == -1)
      || (v22 = 2 * v19 + 2, v22 == -1)
      || v21 >= v20
      || v20 < v21 + v22 + 6 )
    {
LABEL_46:
      v17 = EfiDriverVariablesGuid;
      goto LABEL_47;
    }
    Size = v22;
    v23 = ((unsigned __int64)v10 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (_DWORD *)v23 != v10 )
    {
      v24 = v23 - (_DWORD)v10;
      v10 = (_DWORD *)(((unsigned __int64)v10 + 3) & 0xFFFFFFFFFFFFFFFCuLL);
      if ( v9 < v24 )
      {
        v25 = 0;
        v9 = 0;
        v48 = -1073741789;
LABEL_35:
        v37 = (v22 + 23) & 0xFFFFFFFC;
        v38 = v21 + v37 + 12;
        v26 = v38 + 4;
        v40 = v38 + 4;
        v27 = v48;
        if ( v9 < v38 + 4 )
          v27 = -1073741789;
        v48 = v27;
        v28 = 0;
        if ( v9 >= v26 )
          v28 = v25;
        v29 = v28;
        v35 = v28;
        v30 = v9;
        v31 = v9 - v26;
        v9 = 0;
        if ( v30 >= v26 )
          v9 = v31;
        if ( v29 )
        {
          memset_0(v10, 0, v26);
          v10[1] = 1;
          v10[2] = v38;
          v10[3] = v36;
          v10[4] = 20;
          v10[5] = v37;
          memmove(v10 + 6, Src, Size);
          v32 = v37;
          *(_DWORD *)((char *)v10 + v37 + 4) = 1;
          v33 = v39;
          *(_DWORD *)((char *)v10 + v32 + 8) = v39 + 12;
          *(_DWORD *)((char *)v10 + v32 + 12) = 4;
          memmove((char *)v10 + v32 + 16, &v46[Size + 6], v33);
          if ( v12 )
            *v12 = (_DWORD)v10 - (_DWORD)v12;
          v12 = v10;
          v26 = v40;
        }
        v10 = (_DWORD *)((char *)v10 + v26);
        goto LABEL_46;
      }
      v9 -= v24;
    }
    v25 = v35;
    goto LABEL_35;
  }
  return result;
}
