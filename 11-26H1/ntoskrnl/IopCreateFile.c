/*
 * XREFs of IopCreateFile @ 0x140984B18
 * Callers:
 *     PopCreateHiberFile @ 0x1407D2BAC (PopCreateHiberFile.c)
 *     RtlpSysVolTakeOwnership @ 0x14080BCAC (RtlpSysVolTakeOwnership.c)
 *     MiGetPagingFileHandle @ 0x140871CE8 (MiGetPagingFileHandle.c)
 *     PfpVolumeOpenAndVerify @ 0x1409809C8 (PfpVolumeOpenAndVerify.c)
 *     PfSnIsVolumeMounted @ 0x1409841A4 (PfSnIsVolumeMounted.c)
 *     IopOpenLinkOrRenameTarget @ 0x1409842DC (IopOpenLinkOrRenameTarget.c)
 *     NtCreateNamedPipeFile @ 0x140984640 (NtCreateNamedPipeFile.c)
 *     IoCreateFile @ 0x1409847E0 (IoCreateFile.c)
 *     IoCreateFileEx @ 0x140984880 (IoCreateFileEx.c)
 *     NtCreateFile @ 0x140984A20 (NtCreateFile.c)
 *     NtOpenFile @ 0x140984AB0 (NtOpenFile.c)
 *     PfSnGetPrefetchInstructions @ 0x140987060 (PfSnGetPrefetchInstructions.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x140A98FD0 (RtlCreateSystemVolumeInformationFolder.c)
 *     NtCreateMailslotFile @ 0x140B3E0E0 (NtCreateMailslotFile.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     PsGetCurrentSilo @ 0x140413410 (PsGetCurrentSilo.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     ObOpenObjectByNameEx @ 0x14092CD80 (ObOpenObjectByNameEx.c)
 *     FsRtlFreeExtraCreateParameter @ 0x140933710 (FsRtlFreeExtraCreateParameter.c)
 *     FsRtlInsertExtraCreateParameter @ 0x140933D40 (FsRtlInsertExtraCreateParameter.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x140934030 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlpPrepareExtraCreateParametersForCreate @ 0x1409856E0 (FsRtlpPrepareExtraCreateParametersForCreate.c)
 *     IopCleanupExtraCreateParameters @ 0x140986DB0 (IopCleanupExtraCreateParameters.c)
 *     IopCloseFile @ 0x140A285C0 (IopCloseFile.c)
 *     FsRtlAllocateExtraCreateParameterList @ 0x140A66900 (FsRtlAllocateExtraCreateParameterList.c)
 *     IoCheckEaBufferValidity @ 0x140AA4F50 (IoCheckEaBufferValidity.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopCreateFile(
        HANDLE *a1,
        int a2,
        __int64 a3,
        unsigned int *a4,
        __int64 a5,
        int a6,
        int a7,
        unsigned int a8,
        int a9,
        void **Address,
        SIZE_T Length,
        int a12,
        _DWORD *a13,
        int a14,
        int a15,
        __int16 *Src)
{
  int v16; // r12d
  int v17; // eax
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rbx
  __int64 v20; // rsi
  struct _KPRCB *v21; // rdx
  _GENERAL_LOOKASIDE *v22; // rcx
  NTSTATUS Parameter; // r14d
  unsigned int v25; // ecx
  void *v26; // rbx
  void **v27; // r15
  ULONG v28; // r14d
  __int64 v29; // rbx
  KPROCESSOR_MODE v30; // r12
  size_t v31; // r8
  char *v32; // r13
  struct _KTHREAD *CurrentThread; // rcx
  int v34; // ebx
  void *v35; // rcx
  int v36; // r14d
  void *v37; // rcx
  struct _KPRCB *v38; // rdx
  _GENERAL_LOOKASIDE *v39; // rcx
  int v40; // r15d
  __int64 ULong64FromUser; // rax
  int ULongFromUser; // eax
  void **v43; // r15
  ULONG v44; // r14d
  int v45; // ecx
  __int64 v46; // rcx
  __int64 v47; // rax
  _GENERAL_LOOKASIDE *L; // rbx
  void *v49; // rax
  struct _KPRCB *v50; // rdx
  _GENERAL_LOOKASIDE *v51; // rcx
  PECP_LIST *v52; // r15
  _DWORD *v53; // rbx
  __int64 v54; // rax
  void *v55; // rcx
  struct _KPRCB *v56; // rdx
  _GENERAL_LOOKASIDE *v57; // rcx
  struct _KPRCB *v58; // rdx
  _GENERAL_LOOKASIDE *v59; // rcx
  struct _KPRCB *v60; // rdx
  _GENERAL_LOOKASIDE *v61; // rcx
  _KPROCESS *Process; // rcx
  __int16 v63; // ax
  bool v64; // zf
  char v65; // al
  struct _KPRCB *v66; // rdx
  _GENERAL_LOOKASIDE *v67; // rcx
  unsigned __int64 v68; // rax
  struct _KPRCB *v69; // rdx
  _GENERAL_LOOKASIDE *v70; // rcx
  void *Pool2; // rax
  int v72; // eax
  _GENERAL_LOOKASIDE *v73; // r8
  void *v74; // rdx
  void *v75; // rcx
  int v76; // r13d
  char v77; // al
  char v78; // al
  int v79; // [rsp+44h] [rbp-E4h]
  HANDLE Handle; // [rsp+58h] [rbp-D0h] BYREF
  PECP_LIST EcpList; // [rsp+60h] [rbp-C8h] BYREF
  KPROCESSOR_MODE PreviousMode[8]; // [rsp+68h] [rbp-C0h]
  __int64 v83; // [rsp+70h] [rbp-B8h]
  void **v84; // [rsp+80h] [rbp-A8h]
  void *v85; // [rsp+88h] [rbp-A0h]
  _OWORD v86[2]; // [rsp+90h] [rbp-98h] BYREF
  __int128 v87; // [rsp+B8h] [rbp-70h] BYREF
  volatile void *v88; // [rsp+C8h] [rbp-60h]
  __int128 v89; // [rsp+D0h] [rbp-58h] BYREF
  __int128 v90; // [rsp+E0h] [rbp-48h]

  LODWORD(Handle) = a14;
  v16 = a9;
  LODWORD(v83) = Length;
  v84 = 0LL;
  v85 = 0LL;
  EcpList = 0LL;
  v79 = 0;
  v86[0] = 0LL;
  v17 = (unsigned __int8)KeGetCurrentThread()->PreviousMode;
  if ( (a14 & 0x100) != 0 )
    v17 = 0;
  *(_DWORD *)PreviousMode = v17;
  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[8].P;
  ++P->TotalAllocates;
  v20 = (__int64)RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( !v20 )
  {
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[8].L;
    ++L->TotalAllocates;
    v20 = (__int64)RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( !v20 )
    {
      ++L->AllocateMisses;
      v20 = guard_dispatch_icall_no_overrides((unsigned int)L->Type, L->Size);
    }
  }
  if ( !v20 )
    return 3221225626LL;
  *(_DWORD *)v20 = CurrentPrcb->Number;
  if ( PreviousMode[0] || (a14 & 0x200) != 0 )
  {
    if ( (a7 & 0xFFFFFFF8) != 0
      || (a6 & 0xFFA50048) != 0
      || a8 > 5
      || (a9 & 0xEF000000) != 0
      || (a9 & 0x30) != 0 && (a2 & 0x100000) == 0
      || (a9 & 0x1000) != 0 && (a2 & 0x10000) == 0
      || (a9 & 0x30) == 0x30
      || (a9 & 0x41) == 1 && ((a9 & 0xEF5C0ACC) != 0 || a8 - 1 > 2)
      || (a9 & 0x100100) == 0x100100
      || (a9 & 0x10100) == 0x10100
      || (a9 & 0x110000) == 0x110000
      || (a2 & 4) != 0 && (a9 & 8) != 0 )
    {
LABEL_11:
      v21 = KeGetCurrentPrcb();
      v22 = v21->PPLookasideList[8].P;
      ++v22->TotalFrees;
      if ( LOWORD(v22->ListHead.Alignment) < v22->Depth
        || (++v22->FreeMisses,
            v22 = v21->PPLookasideList[8].L,
            ++v22->TotalFrees,
            LOWORD(v22->ListHead.Alignment) < v22->Depth) )
      {
        RtlpInterlockedPushEntrySList(&v22->ListHead, (PSLIST_ENTRY)v20);
      }
      else
      {
        ++v22->FreeMisses;
        guard_dispatch_icall_no_overrides(v20, (__int64)v21);
      }
      return (unsigned int)-1073741811;
    }
    if ( IopFailZeroAccessCreate && !a2 )
    {
      v58 = KeGetCurrentPrcb();
      v59 = v58->PPLookasideList[8].P;
      ++v59->TotalFrees;
      if ( LOWORD(v59->ListHead.Alignment) < v59->Depth
        || (++v59->FreeMisses,
            v59 = v58->PPLookasideList[8].L,
            ++v59->TotalFrees,
            LOWORD(v59->ListHead.Alignment) < v59->Depth) )
      {
        RtlpInterlockedPushEntrySList(&v59->ListHead, (PSLIST_ENTRY)v20);
      }
      else
      {
        ++v59->FreeMisses;
        guard_dispatch_icall_no_overrides(v20, (__int64)v58);
      }
      return 3221225506LL;
    }
    if ( a12 )
    {
      if ( a12 == 1 )
      {
        if ( !a13 || (*a13 & 0xFFFFFFFC) != 0 || a13[1] > 1u || a13[2] > 1u || (a7 & 4) != 0 || a8 - 1 > 2 )
          goto LABEL_11;
      }
      else
      {
        if ( a12 != 2 )
          goto LABEL_18;
        if ( !a13 || (a7 & 0xFFFFFFFD) == 0 || (a7 & 4) != 0 || a8 != 2 )
          goto LABEL_11;
      }
      if ( (a9 & 0xFFFFFFCD) != 0 )
        goto LABEL_11;
    }
  }
LABEL_18:
  if ( PreviousMode[0] )
  {
    v40 = 0;
    v26 = 0LL;
    Handle = 0LL;
    ULong64FromUser = RtlReadULong64FromUser(a1);
    RtlWriteULong64ToUser(a1, ULong64FromUser);
    ULongFromUser = RtlReadULongFromUser(a4);
    RtlWriteULongToUser(a4, ULongFromUser);
    if ( a5 )
    {
      if ( (a5 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v26 = (void *)RtlReadULong64FromUser((volatile void *)a5);
      Handle = v26;
    }
    Parameter = -1073741811;
    if ( (__int64)v26 < 0 )
      v40 = -1073741811;
    if ( v40 < 0 )
    {
      v60 = KeGetCurrentPrcb();
      v61 = v60->PPLookasideList[8].P;
      ++v61->TotalFrees;
      if ( LOWORD(v61->ListHead.Alignment) < v61->Depth
        || (++v61->FreeMisses,
            v61 = v60->PPLookasideList[8].L,
            ++v61->TotalFrees,
            LOWORD(v61->ListHead.Alignment) < v61->Depth) )
      {
        RtlpInterlockedPushEntrySList(&v61->ListHead, (PSLIST_ENTRY)v20);
      }
      else
      {
        ++v61->FreeMisses;
        guard_dispatch_icall_no_overrides(v20, (__int64)v60);
      }
      return (unsigned int)v40;
    }
    v43 = Address;
    if ( (a9 & 0x10000000) != 0 )
    {
      if ( !Address )
        goto LABEL_93;
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( !Process[1].ReadyTime )
        goto LABEL_166;
      v63 = WORD2(Process[3].PerProcessorCycleTimes);
      if ( v63 == 332 || (v64 = v63 == 452, v65 = 0, v64) )
        v65 = 1;
      if ( v65 )
      {
        ProbeForRead(Address, (unsigned int)Length, 4u);
        if ( (unsigned int)Length < 0x10 )
        {
          v66 = KeGetCurrentPrcb();
          v67 = v66->PPLookasideList[8].P;
          ++v67->TotalFrees;
          if ( LOWORD(v67->ListHead.Alignment) < v67->Depth
            || (++v67->FreeMisses,
                v67 = v66->PPLookasideList[8].L,
                ++v67->TotalFrees,
                LOWORD(v67->ListHead.Alignment) < v67->Depth) )
          {
            RtlpInterlockedPushEntrySList(&v67->ListHead, (PSLIST_ENTRY)v20);
          }
          else
          {
            ++v67->FreeMisses;
            guard_dispatch_icall_no_overrides(v20, (__int64)v66);
          }
          return 3221225485LL;
        }
        v87 = 0LL;
        v88 = 0LL;
        RtlCopyFromUser(&v87, Address, (-(__int64)((unsigned int)v83 < 0x18) & 0xFFFFFFFFFFFFFFF8uLL) + 24);
        *(_QWORD *)(v20 + 216) = v87;
        v43 = (void **)DWORD2(v87);
        v84 = (void **)DWORD2(v87);
        v44 = HIDWORD(v87);
        if ( (unsigned int)Length < 0x18 )
          goto LABEL_65;
        v68 = (unsigned int)v88;
      }
      else
      {
LABEL_166:
        ProbeForRead(Address, (unsigned int)Length, 4u);
        if ( (unsigned int)Length < 0x18 )
        {
          v69 = KeGetCurrentPrcb();
          v70 = v69->PPLookasideList[8].P;
          ++v70->TotalFrees;
          if ( LOWORD(v70->ListHead.Alignment) < v70->Depth
            || (++v70->FreeMisses,
                v70 = v69->PPLookasideList[8].L,
                ++v70->TotalFrees,
                LOWORD(v70->ListHead.Alignment) < v70->Depth) )
          {
            RtlpInterlockedPushEntrySList(&v70->ListHead, (PSLIST_ENTRY)v20);
          }
          else
          {
            ++v70->FreeMisses;
            guard_dispatch_icall_no_overrides(v20, (__int64)v69);
          }
          return 3221225485LL;
        }
        v89 = 0LL;
        v90 = 0LL;
        RtlCopyFromUser(&v89, Address, (-(__int64)((unsigned int)v83 < 0x20) & 0xFFFFFFFFFFFFFFF4uLL) + 32);
        *(_QWORD *)(v20 + 216) = v89;
        v43 = (void **)*((_QWORD *)&v89 + 1);
        v84 = (void **)*((_QWORD *)&v89 + 1);
        v44 = v90;
        if ( (unsigned int)Length < 0x20 )
          goto LABEL_65;
        v68 = *((_QWORD *)&v90 + 1);
      }
      v85 = (void *)v68;
      if ( v68 )
        ProbeForRead((volatile void *)v68, 0x20uLL, 4u);
    }
    else
    {
      *(_QWORD *)(v20 + 216) = 0LL;
      v84 = Address;
      v44 = Length;
    }
LABEL_65:
    *(_QWORD *)(v20 + 72) = 0LL;
    if ( v43 && v44 )
    {
      ProbeForRead(v43, v44, 4u);
      Pool2 = (void *)ExAllocatePool2(0x43uLL);
      *(_QWORD *)(v20 + 72) = Pool2;
      if ( !Pool2 )
        goto LABEL_80;
      *(_DWORD *)(v20 + 80) = v44;
      RtlCopyFromUser(Pool2, v43, v44);
      v72 = IoCheckEaBufferValidity(*(PFILE_FULL_EA_INFORMATION *)(v20 + 72), v44, a4 + 2);
      if ( v72 < 0 )
      {
        *a4 = v72;
        RtlRaiseStatus(v72);
      }
    }
    else
    {
      *(_DWORD *)(v20 + 80) = 0;
    }
    goto LABEL_67;
  }
  v16 = a9 & 0x7FFFFFFF;
  if ( a9 >= 0 )
    v16 = a9;
  v25 = (unsigned int)Handle | 0x400;
  if ( a9 >= 0 )
    v25 = (unsigned int)Handle;
  a14 = v25;
  if ( a5 )
  {
    v26 = *(void **)a5;
    if ( *(__int64 *)a5 < 0 )
      goto LABEL_11;
  }
  else
  {
    v26 = 0LL;
  }
  Handle = v26;
  if ( (v16 & 0x10000000) != 0 )
  {
    if ( (unsigned int)Length < 0x18 )
      goto LABEL_11;
    *(_QWORD *)(v20 + 216) = *Address;
    v27 = (void **)Address[1];
    v84 = v27;
    v28 = *((_DWORD *)Address + 4);
    if ( (unsigned int)Length >= 0x20 )
      v85 = Address[3];
  }
  else
  {
    *(_QWORD *)(v20 + 216) = 0LL;
    v27 = Address;
    v84 = Address;
    v28 = Length;
  }
  if ( !v27 || !v28 )
  {
    *(_QWORD *)(v20 + 72) = 0LL;
    *(_DWORD *)(v20 + 80) = 0;
    goto LABEL_29;
  }
  v49 = (void *)ExAllocatePool2(0x42uLL);
  *(_QWORD *)(v20 + 72) = v49;
  if ( !v49 )
  {
LABEL_80:
    v50 = KeGetCurrentPrcb();
    v51 = v50->PPLookasideList[8].P;
    ++v51->TotalFrees;
    if ( LOWORD(v51->ListHead.Alignment) < v51->Depth
      || (++v51->FreeMisses,
          v51 = v50->PPLookasideList[8].L,
          ++v51->TotalFrees,
          LOWORD(v51->ListHead.Alignment) < v51->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v51->ListHead, (PSLIST_ENTRY)v20);
    }
    else
    {
      ++v51->FreeMisses;
      guard_dispatch_icall_no_overrides(v20, (__int64)v50);
    }
    return 3221225626LL;
  }
  *(_DWORD *)(v20 + 80) = v28;
  memmove(v49, v27, v28);
  Parameter = IoCheckEaBufferValidity(*(PFILE_FULL_EA_INFORMATION *)(v20 + 72), v28, a4 + 2);
  if ( Parameter < 0 )
  {
    ExFreePoolWithTag(*(PVOID *)(v20 + 72), 0);
    *a4 = Parameter;
    v56 = KeGetCurrentPrcb();
    v73 = v56->PPLookasideList[8].P;
    ++v73->TotalFrees;
    if ( LOWORD(v73->ListHead.Alignment) >= v73->Depth )
    {
      ++v73->FreeMisses;
      v73 = v56->PPLookasideList[8].L;
      ++v73->TotalFrees;
      if ( LOWORD(v73->ListHead.Alignment) >= v73->Depth )
      {
        ++v73->FreeMisses;
        goto LABEL_121;
      }
    }
    v57 = v73;
    goto LABEL_94;
  }
LABEL_67:
  v25 = a14;
LABEL_29:
  *(_DWORD *)v20 = 14680072;
  *(_DWORD *)(v20 + 32) = 0;
  *(_QWORD *)(v20 + 24) = 0LL;
  *(_QWORD *)(v20 + 56) = v26;
  *(_DWORD *)(v20 + 64) = v16 & 0xFFFFFF;
  *(_WORD *)(v20 + 68) = a6;
  *(_WORD *)(v20 + 70) = a7;
  *(_DWORD *)(v20 + 88) = a8;
  *(_WORD *)(v20 + 136) = 0;
  *(_BYTE *)(v20 + 138) = 0;
  *(_DWORD *)(v20 + 84) = v25;
  *(_QWORD *)(v20 + 40) = 0LL;
  v29 = a3;
  *(_QWORD *)(v20 + 48) = a3;
  *(_DWORD *)(v20 + 120) = a12;
  *(_QWORD *)(v20 + 128) = a13;
  *(_DWORD *)(v20 + 152) = a15;
  v30 = PreviousMode[0];
  *(_BYTE *)(v20 + 156) = PreviousMode[0];
  *(_OWORD *)(v20 + 160) = 0LL;
  *(_OWORD *)(v20 + 176) = 0LL;
  *(_WORD *)(v20 + 160) = 40;
  *(_QWORD *)(v20 + 192) = 1LL;
  if ( Src )
  {
    v31 = *Src;
    if ( v31 > 0x28 )
      v31 = 40LL;
    memmove((void *)(v20 + 160), Src, v31);
  }
  v32 = (char *)v85;
  if ( v85 )
  {
    v52 = (PECP_LIST *)(v20 + 168);
    *(_QWORD *)PreviousMode = v20 + 168;
    EcpList = *(PECP_LIST *)(v20 + 168);
    v53 = 0LL;
    v83 = 0LL;
    v54 = ExAllocatePool2(0x100uLL);
    if ( v54 )
    {
      *(_QWORD *)v54 = 1215324997LL;
      *(_QWORD *)(v54 + 16) = 0LL;
      *(_QWORD *)(v54 + 8) = 0LL;
      *(GUID *)(v54 + 24) = GUID_ECP_DUAL_OPLOCK_KEY;
      *(_QWORD *)(v54 + 40) = 0LL;
      *(_DWORD *)(v54 + 48) = 2;
      *(_DWORD *)(v54 + 52) = 108;
      *(_QWORD *)(v54 + 56) = 0LL;
      *(_QWORD *)(v54 + 64) = 0LL;
      v53 = (_DWORD *)(v54 + 72);
      v83 = v54 + 72;
      Parameter = 0;
    }
    else
    {
      Parameter = -1073741670;
    }
    if ( Parameter < 0 )
    {
LABEL_86:
      if ( v79 )
      {
        FsRtlFreeExtraCreateParameterList(EcpList);
        *v52 = 0LL;
      }
      else
      {
        IopCleanupExtraCreateParameters(v20);
      }
      if ( v53 )
        FsRtlFreeExtraCreateParameter(v53);
      v55 = *(void **)(v20 + 72);
      if ( v55 )
        ExFreePoolWithTag(v55, 0);
      *a4 = Parameter;
LABEL_93:
      v56 = KeGetCurrentPrcb();
      v57 = v56->PPLookasideList[8].P;
      ++v57->TotalFrees;
      if ( LOWORD(v57->ListHead.Alignment) >= v57->Depth )
      {
        ++v57->FreeMisses;
        v57 = v56->PPLookasideList[8].L;
        ++v57->TotalFrees;
        if ( LOWORD(v57->ListHead.Alignment) >= v57->Depth )
        {
          ++v57->FreeMisses;
LABEL_121:
          guard_dispatch_icall_no_overrides(v20, (__int64)v56);
          return (unsigned int)Parameter;
        }
      }
LABEL_94:
      RtlpInterlockedPushEntrySList(&v57->ListHead, (PSLIST_ENTRY)v20);
      return (unsigned int)Parameter;
    }
    if ( v30 )
      RtlCopyFromUser(v53, v32, 0x10uLL);
    else
      RtlCopyVolatileMemory(v53, v32, 0x10uLL);
    v74 = v32 + 16;
    v75 = v53 + 4;
    if ( v30 )
      RtlCopyFromUser(v75, v74, 0x10uLL);
    else
      RtlCopyVolatileMemory(v75, v74, 0x10uLL);
    v76 = 0;
    if ( *v53
      || *((_WORD *)v53 + 2)
      || *((_WORD *)v53 + 3)
      || *((_BYTE *)v53 + 8)
      || *((_BYTE *)v53 + 9)
      || *((_BYTE *)v53 + 10)
      || *((_BYTE *)v53 + 11)
      || *((_BYTE *)v53 + 12)
      || *((_BYTE *)v53 + 13)
      || *((_BYTE *)v53 + 14)
      || (v77 = 0, *((_BYTE *)v53 + 15)) )
    {
      v77 = 1;
    }
    *((_BYTE *)v53 + 32) = v77;
    if ( v53[4]
      || *((_WORD *)v53 + 10)
      || *((_WORD *)v53 + 11)
      || *((_BYTE *)v53 + 24)
      || *((_BYTE *)v53 + 25)
      || *((_BYTE *)v53 + 26)
      || *((_BYTE *)v53 + 27)
      || *((_BYTE *)v53 + 28)
      || *((_BYTE *)v53 + 29)
      || *((_BYTE *)v53 + 30)
      || (v78 = 0, *((_BYTE *)v53 + 31)) )
    {
      v78 = 1;
    }
    *((_BYTE *)v53 + 33) = v78;
    if ( !EcpList )
    {
      Parameter = FsRtlAllocateExtraCreateParameterList(0, &EcpList);
      if ( Parameter < 0 )
        goto LABEL_224;
      v76 = 1;
      v79 = 1;
      *v52 = EcpList;
    }
    Parameter = FsRtlInsertExtraCreateParameter(EcpList, v53);
    if ( Parameter >= 0 )
    {
      v53 = 0LL;
      if ( v76 )
        Parameter = FsRtlpPrepareExtraCreateParametersForCreate((ULONG_PTR)EcpList);
    }
LABEL_224:
    if ( Parameter >= 0 )
    {
      v29 = a3;
      goto LABEL_34;
    }
    goto LABEL_86;
  }
LABEL_34:
  if ( *(_QWORD *)(v20 + 192) == 1LL )
    *(_QWORD *)(v20 + 192) = PsGetCurrentSilo();
  *(_DWORD *)(v20 + 16) = 0;
  *(_QWORD *)(v20 + 8) = 0LL;
  CurrentThread = KeGetCurrentThread();
  ++CurrentThread->OtherOperationCount;
  __incgsdword(0x2EE4u);
  v34 = ObOpenObjectByNameEx(v29, (__int64)IoFileObjectType, v30, 0LL, a2, v20, *(_QWORD *)(v20 + 192), &Handle);
  v35 = *(void **)(v20 + 72);
  if ( v35 )
    ExFreePoolWithTag(v35, 0);
  if ( v79 )
  {
    FsRtlFreeExtraCreateParameterList(EcpList);
    *(_QWORD *)(v20 + 168) = 0LL;
  }
  else
  {
    IopCleanupExtraCreateParameters(v20);
  }
  v36 = *(_DWORD *)(v20 + 32);
  if ( v34 < 0 )
    goto LABEL_68;
  if ( v36 != -1096154543 )
  {
    ObCloseHandle(Handle, v30);
    v34 = -1073741788;
LABEL_68:
    v45 = *(_DWORD *)(v20 + 16);
    if ( v45 < 0 )
    {
      v34 = *(_DWORD *)(v20 + 16);
      if ( (v45 & 0xC0000000) == 0x80000000 || v45 == -1073741191 )
      {
        LODWORD(v86[0]) = *(_DWORD *)(v20 + 16);
        *((_QWORD *)&v86[0] + 1) = *(_QWORD *)(v20 + 24);
        if ( v30 )
          RtlCopyToUser(a4, v86, 0x10uLL);
        else
          RtlCopyVolatileMemory(a4, v86, 0x10uLL);
      }
    }
    else
    {
      v46 = *(_QWORD *)(v20 + 8);
      if ( v46 )
      {
        if ( v36 == -1096154543 )
        {
          if ( (*(_DWORD *)(v46 + 80) & 0x40000) == 0 )
            IopCloseFile(0LL, v46, 1LL, 1LL, 0LL);
        }
        else
        {
          if ( *(_WORD *)(v46 + 88) )
            ExFreePoolWithTag(*(PVOID *)(v46 + 96), 0);
          *(_QWORD *)(*(_QWORD *)(v20 + 8) + 8LL) = 0LL;
          ObfDereferenceObject(*(PVOID *)(v20 + 8));
        }
      }
    }
    if ( v34 == -1073741772 )
    {
      v47 = *(_QWORD *)(v20 + 24);
      if ( v47 == 2684354563LL || v47 == 2684354572LL || v47 == 2684354585LL )
        v34 = -1073741184;
    }
    goto LABEL_49;
  }
  *(_DWORD *)(*(_QWORD *)(v20 + 8) + 80LL) |= 0x40000u;
  *(_DWORD *)(*(_QWORD *)(v20 + 8) + 80LL) &= ~0x2000000u;
  *((_QWORD *)&v86[0] + 1) = *(_QWORD *)(v20 + 24);
  LODWORD(v86[0]) = *(_DWORD *)(v20 + 16);
  if ( v30 )
    RtlWriteULong64ToUser(a1, (__int64)Handle);
  else
    *a1 = Handle;
  if ( v30 )
    RtlCopyToUser(a4, v86, 0x10uLL);
  else
    RtlCopyVolatileMemory(a4, v86, 0x10uLL);
  v34 = *(_DWORD *)(v20 + 16);
LABEL_49:
  if ( v36 == -1096154543 )
  {
    v37 = *(void **)(v20 + 8);
    if ( v37 )
      ObfDereferenceObject(v37);
  }
  v38 = KeGetCurrentPrcb();
  v39 = v38->PPLookasideList[8].P;
  ++v39->TotalFrees;
  if ( LOWORD(v39->ListHead.Alignment) < v39->Depth
    || (++v39->FreeMisses,
        v39 = v38->PPLookasideList[8].L,
        ++v39->TotalFrees,
        LOWORD(v39->ListHead.Alignment) < v39->Depth) )
  {
    RtlpInterlockedPushEntrySList(&v39->ListHead, (PSLIST_ENTRY)v20);
  }
  else
  {
    ++v39->FreeMisses;
    guard_dispatch_icall_no_overrides(v20, (__int64)v38);
  }
  return (unsigned int)v34;
}
