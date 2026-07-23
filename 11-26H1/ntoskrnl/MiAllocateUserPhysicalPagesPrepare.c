/*
 * XREFs of MiAllocateUserPhysicalPagesPrepare @ 0x14087E398
 * Callers:
 *     MiAllocateUserPhysicalPages @ 0x14087DC48 (MiAllocateUserPhysicalPages.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
 *     MiGetAweInfoPartition @ 0x1403C604C (MiGetAweInfoPartition.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1403FE8A4 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1403FE914 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiGetProcessPartition @ 0x1404441E0 (MiGetProcessPartition.c)
 *     MiChargeProcessCommitment @ 0x140457600 (MiChargeProcessCommitment.c)
 *     MiPageChainCount @ 0x140474500 (MiPageChainCount.c)
 *     KeGetIdealNodeNumberThread @ 0x140485DEC (KeGetIdealNodeNumberThread.c)
 *     MiHugePagesSupported @ 0x1404C9454 (MiHugePagesSupported.c)
 *     MiReadHighestPhysicalPage @ 0x1404D023C (MiReadHighestPhysicalPage.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     MiReferenceAweHandle @ 0x14050D4B4 (MiReferenceAweHandle.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     MiCreateProcessDefaultAweInfo @ 0x14087EDDC (MiCreateProcessDefaultAweInfo.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     MiCaptureAllocateMapExtendedParameters @ 0x1409EEE14 (MiCaptureAllocateMapExtendedParameters.c)
 *     MiChargeProcessPhysicalPages @ 0x140B3ED98 (MiChargeProcessPhysicalPages.c)
 */

NTSTATUS __fastcall MiAllocateUserPhysicalPagesPrepare(
        HANDLE Handle,
        _QWORD *a2,
        volatile void *a3,
        volatile void *a4,
        int a5,
        __int64 a6)
{
  __int64 v10; // rdi
  KPROCESSOR_MODE PreviousMode; // si
  NTSTATUS result; // eax
  char v13; // bl
  __int64 ULong64FromUser; // rax
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // r14
  __int64 *v17; // r12
  __int64 *v18; // rbx
  __int64 v19; // r13
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rsi
  unsigned __int64 v24; // rax
  __int64 v25; // r8
  struct _KLOCK_ENTRIES *v26; // r9
  unsigned __int64 v27; // r12
  int v28; // ebx
  int v29; // ebx
  unsigned __int64 v30; // rdx
  _QWORD *v31; // rcx
  __int64 AweInfoPartition; // rax
  unsigned __int64 v33; // rax
  __int16 v34; // cx
  bool v35; // cl
  unsigned int v36; // edx
  unsigned int v37; // ebx
  unsigned int IdealNodeNumberThread; // eax
  char v39; // cl
  __int64 ProcessPartition; // rax
  __int64 v41; // r8
  _BYTE v42[32]; // [rsp+40h] [rbp-78h] BYREF
  unsigned int v43; // [rsp+60h] [rbp-58h]
  char v44; // [rsp+71h] [rbp-47h]
  __int64 v45; // [rsp+78h] [rbp-40h]
  struct _KTHREAD *CurrentThread; // [rsp+C8h] [rbp+10h]
  _KPROCESS *Process; // [rsp+D0h] [rbp+18h]

  memset_0(v42, 0, 0x48uLL);
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v10 = a6;
  *(_QWORD *)(a6 + 104) = Process;
  PreviousMode = CurrentThread->PreviousMode;
  LOBYTE(a6) = PreviousMode;
  *(_BYTE *)(v10 + 8) = PreviousMode;
  *(_QWORD *)(v10 + 144) = a2;
  *(_QWORD *)(v10 + 152) = a3;
  result = MiCaptureAllocateMapExtendedParameters(a4, v42);
  if ( result < 0 )
    return result;
  v13 = v45;
  if ( (v45 & 0xFFFFFFFFFFFFFFE5uLL) != 0
    || (v45 & 0x1A) != 0 && ((unsigned __int8)v45 & (unsigned __int8)((v45 & 0x1A) - 1) & 0x1A) != 0
    || v43 > (unsigned __int16)KeNumberNodes )
  {
    return -1073741811;
  }
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(a2);
    RtlWriteULong64ToUser(a2, ULong64FromUser);
    v15 = RtlReadULong64FromUser(a2);
  }
  else
  {
    v15 = *a2;
  }
  if ( !v15 )
    return 0;
  if ( v15 > 0x1FFFFFFFFFFFFFFFLL )
    return -1073741584;
  if ( PreviousMode )
    ProbeForWrite(a3, 8 * v15, 8u);
  if ( (v13 & 2) != 0 )
  {
    v16 = 16LL;
  }
  else if ( (v13 & 8) != 0 )
  {
    v16 = 512LL;
  }
  else if ( (v13 & 0x10) != 0 )
  {
    if ( !(unsigned int)MiHugePagesSupported() )
      return -1073741637;
    v16 = 0x40000LL;
  }
  else
  {
    v16 = 0LL;
  }
  if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, PreviousMode) )
    return -1073741727;
  v17 = (__int64 *)(v10 + 120);
  v18 = (__int64 *)(v10 + 112);
  result = MiReferenceAweHandle(Handle, 2u, PreviousMode, (PVOID *)(v10 + 112), (_QWORD *)(v10 + 120));
  if ( result < 0 )
    return result;
  v19 = 0LL;
  a6 = 0LL;
  if ( *v17 )
  {
    v20 = MiSectionControlArea(*v17);
    v21 = (__int64)Process;
    *v18 = (__int64)Process;
    a6 = *(_QWORD *)(v20 + 8);
    v19 = a6;
    *(_DWORD *)v10 |= 8u;
    *(_QWORD *)(v10 + 96) = v19;
    v22 = v19;
  }
  else
  {
    v23 = *v18;
    v21 = (__int64)Process;
    if ( *v18 )
    {
      *(_DWORD *)v10 |= 8u;
      v22 = 0LL;
      goto LABEL_33;
    }
    *v18 = (__int64)Process;
    v22 = 0LL;
  }
  v23 = v21;
LABEL_33:
  if ( v23 != v21 )
  {
    KiStackAttachProcess((_KPROCESS *)v23, 0, v10 + 48);
    *(_DWORD *)v10 |= 1u;
  }
  if ( !v22 )
  {
    result = MiCreateProcessDefaultAweInfo(&a6);
    if ( result < 0 )
      return result;
    *(_QWORD *)(v10 + 96) = v23;
    v19 = a6;
  }
  *(_QWORD *)(v10 + 40) = v19;
  v24 = MiPageChainCount(v19);
  v27 = v24;
  if ( v24 == 16 )
  {
    v28 = 4096;
  }
  else if ( v24 == 512 )
  {
    v28 = 0x1000000;
  }
  else
  {
    v28 = 0;
    if ( v24 == 0x40000 )
      v28 = 0x2000000;
  }
  if ( (*(_DWORD *)(v19 + 8) & 4) != 0 )
    *(_DWORD *)v10 |= 0x20u;
  if ( v16 )
  {
    if ( v16 > v24 && !(v16 % v24) && ((v16 - 1) & v16) == 0 )
      goto LABEL_51;
    return -1073741811;
  }
  v16 = v24;
LABEL_51:
  if ( v16 > 1 )
  {
    if ( v15 >= v16 * v15 )
      return -1073741584;
    v15 *= v16;
  }
  if ( !*(_QWORD *)(v10 + 120) )
  {
    LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, v23, v25, v26);
    if ( (*(_DWORD *)(v23 + 500) & 0x20) != 0 )
    {
      v29 = -1073741558;
LABEL_66:
      UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, v23);
      return v29;
    }
    if ( !(unsigned int)MiChargeProcessPhysicalPages(v23, v15)
      || (*(_DWORD *)v10 |= 4u, !(unsigned int)MiChargeProcessCommitment(v31, v30)) )
    {
      v29 = -1073741523;
      goto LABEL_66;
    }
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, v23);
    *(_DWORD *)v10 |= 2u;
  }
  *(_QWORD *)(v10 + 16) = v15;
  AweInfoPartition = MiGetAweInfoPartition(v19);
  v33 = MiReadHighestPhysicalPage(AweInfoPartition) + 1;
  if ( *(_QWORD *)(v23 + 784) )
  {
    v34 = *(_WORD *)(v23 + 1772);
    v35 = v34 == 332 || v34 == 452;
    if ( v35 && v33 > 0x100000000LL )
      v33 = 0x100000000LL;
  }
  *(_QWORD *)(v10 + 128) = v33;
  v36 = 0x80000000;
  v37 = v28 | 0x80000000;
  if ( v43 )
  {
    IdealNodeNumberThread = v43 - 1;
    v39 = v44;
    if ( v44 )
      v37 |= 2u;
  }
  else
  {
    IdealNodeNumberThread = (unsigned __int16)KeGetIdealNodeNumberThread((__int64)CurrentThread);
    v39 = v44;
  }
  *(_DWORD *)(v10 + 136) = IdealNodeNumberThread;
  if ( !v39 )
    IdealNodeNumberThread |= v36;
  *(_DWORD *)(v10 + 140) = IdealNodeNumberThread;
  if ( v16 != 1 )
    v37 |= 0x30u;
  ProcessPartition = MiGetProcessPartition(v23);
  if ( v41 == ProcessPartition
    && (*(_BYTE *)v10 & 0x20) == 0
    && (v37 & 0x1000) != 0
    && v16 == 16
    && (*(_DWORD *)(v41 + 4) & 0x10) == 0 )
  {
    *(_DWORD *)v10 |= 0x80u;
  }
  *(_DWORD *)(v10 + 4) = v37;
  *(_QWORD *)(v10 + 24) = v27;
  *(_QWORD *)(v10 + 32) = v16;
  return 0;
}
