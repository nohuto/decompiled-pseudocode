/*
 * XREFs of NtFreeUserPhysicalPages @ 0x14087F7C0
 * Callers:
 *     DifNtFreeUserPhysicalPagesWrapper @ 0x14067BEF0 (DifNtFreeUserPhysicalPagesWrapper.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140317570 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403175E4 (LOCK_ADDRESS_SPACE.c)
 *     MiFreePagesFromMdl @ 0x140347540 (MiFreePagesFromMdl.c)
 *     MiReturnCrossPartitionCharges @ 0x14036FF88 (MiReturnCrossPartitionCharges.c)
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
 *     IoFreeMdl @ 0x1403A0EF0 (IoFreeMdl.c)
 *     MiGetAweInfoPartition @ 0x1403C604C (MiGetAweInfoPartition.c)
 *     MiFreePhysicalPageChain @ 0x1403D12C8 (MiFreePhysicalPageChain.c)
 *     IoAllocateMdl @ 0x1404046D0 (IoAllocateMdl.c)
 *     MiGetProcessPartition @ 0x1404441E0 (MiGetProcessPartition.c)
 *     MiPageChainCount @ 0x140474500 (MiPageChainCount.c)
 *     MiReturnProcessCommitment @ 0x14047EE9C (MiReturnProcessCommitment.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     MiReferenceAweHandle @ 0x14050D4B4 (MiReferenceAweHandle.c)
 *     MiBuildPhysicalPageFreeChain @ 0x140705918 (MiBuildPhysicalPageFreeChain.c)
 *     MiPreparePhysicalPagesMdlForFree @ 0x140706A3C (MiPreparePhysicalPagesMdlForFree.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     MiCaptureUlongPtrArray @ 0x14087EB38 (MiCaptureUlongPtrArray.c)
 */

NTSTATUS __cdecl NtFreeUserPhysicalPages(HANDLE ProcessHandle, PULONG_PTR NumberOfPages, PULONG_PTR UserPfnArray)
{
  int v5; // ebx
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 ULong64FromUser; // rax
  unsigned __int64 v8; // r12
  NTSTATUS result; // eax
  __int64 v10; // r14
  struct _MDL *p_Mdl; // rdi
  void *v12; // r8
  _KPROCESS *v13; // rsi
  NTSTATUS v14; // r14d
  __int64 v15; // rax
  IRP *Irp; // r8
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rcx
  struct _MDL *v19; // rcx
  __int64 v20; // r8
  struct _KLOCK_ENTRIES *v21; // r9
  struct _KTHREAD *v22; // rax
  __int64 ByteOffset; // rax
  __int64 ByteCount; // rax
  __int64 AweInfoPartition; // r10
  unsigned __int64 v26; // rax
  __int64 ProcessPartition; // rax
  __int64 v28; // r9
  __int64 v29; // r10
  __int16 v30; // ax
  bool v31; // zf
  char v32; // al
  __int64 v33; // rax
  void *v34; // rcx
  KPROCESSOR_MODE v35; // [rsp+30h] [rbp-1118h]
  __int64 v36; // [rsp+38h] [rbp-1110h] BYREF
  __int64 v37; // [rsp+40h] [rbp-1108h]
  PVOID Object; // [rsp+48h] [rbp-1100h] BYREF
  void *Src; // [rsp+50h] [rbp-10F8h]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-10F0h]
  _KPROCESS *Process; // [rsp+60h] [rbp-10E8h]
  __int64 v42; // [rsp+68h] [rbp-10E0h]
  __int64 v43; // [rsp+70h] [rbp-10D8h]
  __int64 v44; // [rsp+78h] [rbp-10D0h]
  __int128 v45; // [rsp+80h] [rbp-10C8h] BYREF
  __int64 v46; // [rsp+90h] [rbp-10B8h]
  unsigned __int64 v47; // [rsp+98h] [rbp-10B0h]
  _OWORD v48[3]; // [rsp+A0h] [rbp-10A8h] BYREF
  struct _MDL Mdl; // [rsp+D0h] [rbp-1078h] BYREF

  Src = UserPfnArray;
  memset(v48, 0, sizeof(v48));
  memset_0(&Mdl, 0, 0x1030uLL);
  Object = 0LL;
  v36 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v5 = 0;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  v35 = PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(NumberOfPages);
    RtlWriteULong64ToUser(NumberOfPages, ULong64FromUser);
    v8 = RtlReadULong64FromUser(NumberOfPages);
  }
  else
  {
    v8 = *NumberOfPages;
  }
  v47 = v8;
  if ( PreviousMode )
    RtlWriteULong64ToUser(NumberOfPages, 0LL);
  else
    *NumberOfPages = 0LL;
  if ( !v8 )
    return -1073741584;
  v10 = 0LL;
  v37 = 0LL;
  p_Mdl = &Mdl;
  result = MiReferenceAweHandle(ProcessHandle, 2u, PreviousMode, &Object, &v36);
  v12 = 0LL;
  if ( result >= 0 )
  {
    if ( v36 )
    {
      v10 = *(_QWORD *)(MiSectionControlArea(v36) + 8);
      v37 = v10;
    }
    else
    {
      v13 = (_KPROCESS *)Object;
      if ( Object )
        goto LABEL_15;
      v5 = 4;
    }
    v13 = Process;
LABEL_15:
    Object = v12;
    if ( !v10 )
    {
      v10 = v13[2].ActiveProcessors[4].StaticBitmap[29];
      v37 = v10;
      if ( !v10 )
      {
        v14 = -1073741585;
        goto LABEL_66;
      }
    }
    v15 = MiPageChainCount(v10);
    v42 = v15;
    p_Mdl = (struct _MDL *)Irp;
    v17 = 512LL;
    if ( v8 > 0x200 )
    {
      v18 = 786432LL;
      if ( v15 != 1 )
        v18 = 0xFFFFFLL;
      v17 = v8;
      if ( v8 > v18 )
        v17 = v18;
      while ( 1 )
      {
        if ( v17 <= 0x200 )
          goto LABEL_27;
        p_Mdl = IoAllocateMdl(0LL, (_DWORD)v17 << 12, 0, 0, Irp);
        Irp = 0LL;
        if ( p_Mdl )
          break;
        v17 >>= 1;
      }
      v5 |= 8u;
    }
LABEL_27:
    if ( !p_Mdl )
    {
      p_Mdl = &Mdl;
      v17 = 512LL;
    }
    while ( 1 )
    {
      if ( v17 > v8 )
        v17 = v8;
      p_Mdl->Next = (struct _MDL *)Irp;
      p_Mdl->Size = 8 * ((((v17 << 12) + 4095) >> 12) + 6);
      p_Mdl->MdlFlags = (__int16)Irp;
      p_Mdl->StartVa = Irp;
      p_Mdl->ByteOffset = (unsigned int)Irp;
      p_Mdl->ByteCount = (_DWORD)v17 << 12;
      v5 &= ~1u;
      v19 = p_Mdl + 1;
      if ( v35 == (_BYTE)Irp )
      {
        memmove(v19, Src, 8 * v17);
      }
      else
      {
        v14 = MiCaptureUlongPtrArray((char *)v19, Src, v17);
        if ( v14 < 0 )
          goto LABEL_65;
        v10 = v37;
      }
      v22 = CurrentThread;
      if ( CurrentThread->ApcState.Process != v13 )
      {
        KiStackAttachProcess(v13, 0, (__int64)v48);
        v5 |= 1u;
        v22 = CurrentThread;
      }
      if ( !v36 )
      {
        LOCK_ADDRESS_SPACE((__int64)v22, (__int64)v13, v20, v21);
        if ( (v13[1].DirectoryTableBase & 0x2000000000LL) != 0 )
        {
          UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, (__int64)v13);
          v14 = -1073741558;
LABEL_65:
          PreviousMode = v35;
LABEL_66:
          if ( (v5 & 8) != 0 )
          {
            p_Mdl->MdlFlags &= ~2u;
            IoFreeMdl(p_Mdl);
          }
          if ( (v5 & 1) != 0 )
            KiUnstackDetachProcess((__int64)v48, 0);
          if ( (v5 & 4) == 0 )
          {
            v34 = (void *)v36;
            if ( !v36 )
              v34 = v13;
            ObfDereferenceObjectWithTag(v34, 0x68506D4Du);
          }
          if ( PreviousMode )
            RtlWriteULong64ToUser(NumberOfPages, (__int64)Object);
          else
            *NumberOfPages = (unsigned __int64)Object;
          return v14;
        }
      }
      v14 = MiBuildPhysicalPageFreeChain(v10, (__int64)p_Mdl, (__int64)&v45);
      ByteOffset = p_Mdl->ByteOffset;
      v44 = ByteOffset;
      Irp = 0LL;
      if ( ByteOffset )
      {
        if ( !v36 )
          MiReturnProcessCommitment((__int64)v13, v42 * (unsigned int)ByteOffset);
        Object = (char *)Object + v17;
      }
      if ( (IRP *)v36 == Irp )
      {
        UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, (__int64)v13);
        Irp = 0LL;
      }
      ByteCount = p_Mdl->ByteCount;
      v43 = ByteCount;
      if ( ByteCount )
      {
        if ( v42 != 1 )
        {
          MiFreePhysicalPageChain(v37, &v45);
LABEL_52:
          Irp = 0LL;
          goto LABEL_53;
        }
        p_Mdl->MdlFlags |= 2u;
        p_Mdl->ByteCount = (_DWORD)ByteCount << 12;
        MiPreparePhysicalPagesMdlForFree((__int64)p_Mdl, 1uLL);
        MiFreePagesFromMdl((ULONG_PTR)p_Mdl, 0, 0, v37);
        AweInfoPartition = MiGetAweInfoPartition(v37);
        v26 = -v43;
        _InterlockedAdd64((volatile signed __int64 *)(AweInfoPartition + 23464), -v43);
        if ( !v36 )
          _InterlockedAdd64((volatile signed __int64 *)&v13[3].ProfileListHead, v26);
        ProcessPartition = MiGetProcessPartition((__int64)Process);
        if ( v29 != ProcessPartition )
        {
          MiReturnCrossPartitionCharges(v29, 4u, 1, v28);
          goto LABEL_52;
        }
      }
LABEL_53:
      v8 -= v44;
      if ( v14 || !v8 )
        goto LABEL_65;
      if ( (v5 & 1) != 0 )
      {
        KiUnstackDetachProcess((__int64)v48, 0);
        v5 &= ~1u;
        Irp = 0LL;
      }
      if ( (IRP *)v13[1].ReadyTime == Irp )
        goto LABEL_62;
      v30 = WORD2(v13[3].PerProcessorCycleTimes);
      if ( v30 == 332 || (v31 = v30 == 452, v32 = (char)Irp, v31) )
        v32 = 1;
      v31 = v32 == 0;
      v33 = 4LL;
      if ( v31 )
LABEL_62:
        v33 = 8LL;
      Src = (char *)Src + v17 * v33;
      v10 = v37;
    }
  }
  return result;
}
