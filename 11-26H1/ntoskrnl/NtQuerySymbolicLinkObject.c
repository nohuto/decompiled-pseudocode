/*
 * XREFs of NtQuerySymbolicLinkObject @ 0x140A907B0
 * Callers:
 *     DifNtQuerySymbolicLinkObjectWrapper @ 0x140685A10 (DifNtQuerySymbolicLinkObjectWrapper.c)
 *     AdtpInitializeDriveLetters @ 0x140890D7C (AdtpInitializeDriveLetters.c)
 *     IopReassignSystemRoot @ 0x140CBDDA4 (IopReassignSystemRoot.c)
 *     IopStoreSystemPartitionInformation @ 0x140CBE34C (IopStoreSystemPartitionInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlReadUShortFromUser @ 0x14077F5CC (RtlReadUShortFromUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     RtlWriteUShortToUser @ 0x14077F7E4 (RtlWriteUShortToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtQuerySymbolicLinkObject(HANDLE Handle, unsigned __int16 *a2, unsigned int *a3)
{
  KPROCESSOR_MODE PreviousMode; // r15
  __int16 UShortFromUser; // ax
  __int16 v8; // ax
  int ULongFromUser; // eax
  struct _KLOCK_ENTRIES *v10; // r9
  NTSTATUS v11; // r14d
  char *v12; // r13
  char *v13; // rcx
  struct _KTHREAD *CurrentThread; // rax
  void *v15; // rdx
  AutoBoost *v16; // rbx
  unsigned __int64 *v17; // rax
  unsigned __int64 v18; // rax
  char *v19; // rbx
  signed __int64 *v20; // roff
  signed __int64 v21; // rax
  signed __int64 v22; // rdx
  void *Src[2]; // [rsp+38h] [rbp-70h] BYREF
  PVOID Object; // [rsp+48h] [rbp-60h] BYREF
  volatile void *Address[2]; // [rsp+50h] [rbp-58h] BYREF
  int v27; // [rsp+60h] [rbp-48h]
  unsigned __int64 *v28; // [rsp+70h] [rbp-38h]
  char *v29; // [rsp+78h] [rbp-30h]

  *(_OWORD *)Address = 0LL;
  *(_OWORD *)Src = 0LL;
  v27 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)a2 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    RtlCopyFromUser(Address, a2, 0x10uLL);
    UShortFromUser = RtlReadUShortFromUser(a2);
    RtlWriteUShortToUser(a2, UShortFromUser);
    v8 = RtlReadUShortFromUser(a2 + 1);
    RtlWriteUShortToUser(a2 + 1, v8);
    ProbeForWrite(Address[1], WORD1(Address[0]), 1u);
    if ( a3 )
    {
      ULongFromUser = RtlReadULongFromUser(a3);
      RtlWriteULongToUser(a3, ULongFromUser);
    }
  }
  else
  {
    *(_OWORD *)Address = *(_OWORD *)a2;
  }
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(Handle, 1u, (POBJECT_TYPE)ObpSymbolicLinkObjectType, PreviousMode, &Object, 0LL);
  if ( v11 >= 0 )
  {
    v12 = (char *)Object;
    v13 = (char *)Object - 48;
    v29 = (char *)Object - 48;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v28 = (unsigned __int64 *)(v13 + 16);
    v16 = (AutoBoost *)KeAbPreAcquire((__int64)(v13 + 16), 0LL, 0LL, v10);
    v17 = v28;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v28, 0LL) )
      ExfAcquirePushLockExclusiveEx(v17, v16, (__int64)v17);
    if ( v16 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v16, v15);
      else
        *((_BYTE *)v16 + 10) = 1;
    }
    if ( (*((_DWORD *)v12 + 7) & 0x10) != 0 )
      RtlInitUnicodeString((PUNICODE_STRING)Src, &word_140B814F0);
    else
      *(_OWORD *)Src = *(_OWORD *)(v12 + 8);
    if ( a3 )
    {
      v18 = (unsigned __int64)Src[0] >> 16;
      if ( WORD1(Src[0]) <= WORD1(Address[0]) )
      {
LABEL_16:
        LODWORD(v18) = (unsigned __int16)v18;
        goto LABEL_17;
      }
    }
    else
    {
      LOWORD(v18) = Src[0];
      if ( LOWORD(Src[0]) <= WORD1(Address[0]) )
        goto LABEL_16;
    }
    v11 = -1073741789;
    LODWORD(v18) = v27;
LABEL_17:
    if ( v11 < 0 )
    {
      if ( !a3 )
        goto LABEL_28;
      if ( !PreviousMode )
      {
        *a3 = WORD1(Src[0]);
        goto LABEL_28;
      }
    }
    else
    {
      if ( PreviousMode )
        RtlCopyToUser((void *)Address[1], Src[1], (unsigned int)v18);
      else
        RtlCopyVolatileMemory((void *)Address[1], Src[1], (unsigned int)v18);
      if ( PreviousMode )
        RtlWriteUShortToUser(a2, (__int16)Src[0]);
      else
        *a2 = (unsigned __int16)Src[0];
      if ( !a3 )
        goto LABEL_28;
      if ( !PreviousMode )
      {
        *a3 = WORD1(Src[0]);
        goto LABEL_28;
      }
    }
    RtlWriteULongToUser(a3, WORD1(Src[0]));
LABEL_28:
    v19 = v29;
    v20 = (signed __int64 *)(v29 + 16);
    _m_prefetchw(v29 + 16);
    v21 = *v20;
    v22 = *v20 - 16;
    if ( (*v20 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v22 = 0LL;
    if ( (v21 & 2) != 0 || v21 != _InterlockedCompareExchange64((volatile signed __int64 *)v29 + 2, v22, v21) )
      ExfReleasePushLock((_QWORD *)v19 + 2);
    KeAbPostRelease((unsigned __int64)(v19 + 16));
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v12);
  }
  return (unsigned int)v11;
}
