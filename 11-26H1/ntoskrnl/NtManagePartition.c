/*
 * XREFs of NtManagePartition @ 0x140802EF0
 * Callers:
 *     DifNtManagePartitionWrapper @ 0x14067EF20 (DifNtManagePartitionWrapper.c)
 * Callees:
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     MmSetAgingOptions @ 0x1406FCB28 (MmSetAgingOptions.c)
 *     MmManagePartitionSetMemoryThresholds @ 0x14070EDF4 (MmManagePartitionSetMemoryThresholds.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MmManagePartitionCreateLargePages @ 0x1407809E4 (MmManagePartitionCreateLargePages.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     MmIssueMemoryListCommand @ 0x140871100 (MmIssueMemoryListCommand.c)
 *     MiCreatePagingFile @ 0x140871844 (MiCreatePagingFile.c)
 *     MmManagePartitionCharges @ 0x140883238 (MmManagePartitionCharges.c)
 *     MmManagePartitionInitialAddMemory @ 0x140883418 (MmManagePartitionInitialAddMemory.c)
 *     MmManagePartitionMoveMemory @ 0x1408834C8 (MmManagePartitionMoveMemory.c)
 *     MmManagePartitionNodeInformation @ 0x14088378C (MmManagePartitionNodeInformation.c)
 *     MmManagePartitionQueryPageFileInformation @ 0x140883898 (MmManagePartitionQueryPageFileInformation.c)
 *     MmManagePartitionUpdateAttributes @ 0x140883948 (MmManagePartitionUpdateAttributes.c)
 *     MiOpenSpecialPurposeMemory @ 0x140884B70 (MiOpenSpecialPurposeMemory.c)
 *     MiQuerySpecialPurposeMemoryInformation @ 0x140884D18 (MiQuerySpecialPurposeMemoryInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     PsReferencePartitionByHandle @ 0x140A5D28C (PsReferencePartitionByHandle.c)
 *     MmManagePartitionMemoryInformation @ 0x140ABB3FC (MmManagePartitionMemoryInformation.c)
 *     MmCheckPartitionManagementSupported @ 0x140AE26F0 (MmCheckPartitionManagementSupported.c)
 *     MiCombineIdenticalPages @ 0x140B4BC24 (MiCombineIdenticalPages.c)
 *     MmManagePartitionGetMemoryEvents @ 0x140B520B4 (MmManagePartitionGetMemoryEvents.c)
 */

NTSTATUS __cdecl NtManagePartition(
        HANDLE TargetHandle,
        HANDLE SourceHandle,
        PARTITION_INFORMATION_CLASS PartitionInformationClass,
        PVOID PartitionInformation,
        ULONG PartitionInformationLength)
{
  __int64 v6; // rbx
  __int64 v8; // r8
  unsigned __int8 PreviousMode; // r14
  __int64 *v10; // rsi
  NTSTATUS v11; // edi
  __int64 v12; // r13
  char v13; // cl
  unsigned int v14; // esi
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  __int64 *v23; // rcx
  int v24; // ebx
  int v25; // ebx
  NTSTATUS SpecialPurposeMemoryInformation; // eax
  __int64 v27; // r9
  ULONG *v28; // rcx
  int v29; // ebx
  int v30; // ebx
  int v31; // ebx
  int v32; // ebx
  int v33; // ebx
  int v34; // ebx
  int v36; // [rsp+20h] [rbp-C8h]
  int v37; // [rsp+30h] [rbp-B8h]
  __int64 *v38; // [rsp+38h] [rbp-B0h] BYREF
  __int64 *v39; // [rsp+40h] [rbp-A8h] BYREF
  HANDLE v40[3]; // [rsp+48h] [rbp-A0h] BYREF
  __int64 Src; // [rsp+60h] [rbp-88h] BYREF
  unsigned int v42; // [rsp+68h] [rbp-80h]
  int v43; // [rsp+6Ch] [rbp-7Ch]
  HANDLE v44; // [rsp+70h] [rbp-78h]
  int v45; // [rsp+80h] [rbp-68h]

  v6 = (unsigned int)PartitionInformationClass;
  v40[0] = SourceHandle;
  memset_0(&Src, 0, 0x40uLL);
  BYTE2(v37) = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  LOWORD(v37) = PreviousMode;
  v39 = 0LL;
  v10 = 0LL;
  v38 = 0LL;
  if ( (unsigned int)v6 >= 0x12 )
  {
    v11 = -1073741821;
    goto LABEL_81;
  }
  v12 = v6;
  v13 = HIBYTE(PspPartitionInfoDetails[v6]);
  if ( (v13 & 0x20) == 0 && PartitionInformationLength != WORD2(PspPartitionInfoDetails[v6]) )
  {
    v11 = -1073741820;
    goto LABEL_81;
  }
  if ( (v13 & 1) != 0 )
  {
    if ( PreviousMode
      && PartitionInformationLength
      && ((BYTE6(PspPartitionInfoDetails[v6]) - 1) & (unsigned int)PartitionInformation) != 0 )
    {
      ExRaiseDatatypeMisalignment();
    }
    if ( PreviousMode )
      RtlCopyFromUser(&Src, PartitionInformation, PartitionInformationLength);
    else
      RtlCopyVolatileMemory(&Src, PartitionInformation, PartitionInformationLength);
  }
  v14 = PspPartitionInfoDetails[v6];
  if ( (_DWORD)v6 == 11 && (_DWORD)Src == 2 )
    v14 = 2;
  LOBYTE(v8) = PreviousMode;
  v11 = PsReferencePartitionByHandle(TargetHandle, v14, v8, 1884123984LL, &v38);
  if ( v11 < 0 )
  {
    v10 = v38;
    goto LABEL_81;
  }
  BYTE1(v37) = 1;
  if ( (PspPartitionInfoDetails[v6] & 0x800000000000000LL) != 0 )
  {
    LOBYTE(v15) = PreviousMode;
    v11 = PsReferencePartitionByHandle(v40[0], v14, v15, 1884123984LL, &v39);
    v10 = v38;
    if ( v11 < 0 )
      goto LABEL_81;
    BYTE2(v37) = 1;
    if ( v39 == v38 && ((_DWORD)v6 != 1 || (v43 & 0x400) == 0) )
    {
      v11 = -1073741811;
      goto LABEL_81;
    }
  }
  else
  {
    v10 = v38;
    if ( v40[0] )
    {
      v11 = -1073741584;
      goto LABEL_81;
    }
  }
  v11 = MmCheckPartitionManagementSupported(v10, (unsigned int)v6);
  if ( v11 >= 0 )
  {
    if ( !v39 || (v11 = MmCheckPartitionManagementSupported(v39, (unsigned int)v6), v11 >= 0) )
    {
      if ( (int)v6 > 9 )
      {
        v29 = v6 - 10;
        if ( !v29 )
        {
          LOBYTE(v17) = PreviousMode;
          SpecialPurposeMemoryInformation = MiOpenSpecialPurposeMemory(*v10, &Src, v17);
          goto LABEL_69;
        }
        v30 = v29 - 1;
        if ( !v30 )
        {
          LOBYTE(v18) = PreviousMode;
          SpecialPurposeMemoryInformation = MmManagePartitionCharges(v10, &Src, PartitionInformation, v18);
          goto LABEL_69;
        }
        v31 = v30 - 1;
        if ( v31 )
        {
          v32 = v31 - 1;
          if ( v32 )
          {
            v33 = v32 - 1;
            if ( v33 )
            {
              v34 = v33 - 1;
              if ( !v34 )
              {
                v11 = -1073741637;
                goto LABEL_71;
              }
              if ( v34 == 1 )
              {
                SpecialPurposeMemoryInformation = MmSetAgingOptions(v10, (__int64)&Src);
              }
              else
              {
                LOBYTE(v16) = PreviousMode;
                SpecialPurposeMemoryInformation = MmManagePartitionQueryPageFileInformation(v10, v16, &Src);
              }
            }
            else
            {
              LOBYTE(v16) = PreviousMode;
              SpecialPurposeMemoryInformation = MmIssueMemoryListCommand((unsigned int)Src, v16, v10);
            }
          }
          else
          {
            SpecialPurposeMemoryInformation = MmManagePartitionSetMemoryThresholds(v10, (__int64)&Src);
          }
          goto LABEL_69;
        }
        v27 = 0LL;
        LOBYTE(v17) = PreviousMode;
        v23 = v10;
      }
      else
      {
        if ( (_DWORD)v6 == 9 )
        {
          LOBYTE(v18) = PreviousMode;
          SpecialPurposeMemoryInformation = MiQuerySpecialPurposeMemoryInformation(
                                              *v10,
                                              PartitionInformation,
                                              PartitionInformationLength,
                                              v18);
          goto LABEL_69;
        }
        if ( !(_DWORD)v6 )
        {
          LOBYTE(v18) = PreviousMode;
          SpecialPurposeMemoryInformation = MmManagePartitionMemoryInformation(
                                              v10,
                                              PartitionInformation,
                                              PartitionInformationLength,
                                              v18);
          goto LABEL_69;
        }
        v19 = v6 - 1;
        if ( !v19 )
        {
          LOBYTE(v18) = PreviousMode;
          SpecialPurposeMemoryInformation = MmManagePartitionMoveMemory(v10, v39, &Src, v18);
          goto LABEL_69;
        }
        v20 = v19 - 1;
        if ( !v20 )
        {
          LOBYTE(v18) = PreviousMode;
          SpecialPurposeMemoryInformation = MiCreatePagingFile(
                                              (_DWORD)PartitionInformation,
                                              (int)PartitionInformation + 16,
                                              (int)PartitionInformation + 24,
                                              v18,
                                              v45,
                                              *v10);
          goto LABEL_69;
        }
        v21 = v20 - 1;
        if ( !v21 )
        {
          v40[0] = 0LL;
          v28 = (ULONG *)*v10;
          if ( (v42 & 1) == 0 || v28 == &MiSystemPartition )
          {
            LOBYTE(v36) = PreviousMode;
            v11 = MiCombineIdenticalPages(v28, Src, v42, 0LL, v36, v40, v37);
            if ( v11 >= 0 )
            {
              v44 = v40[0];
              v11 = 0;
            }
          }
          else
          {
            v11 = -1073741585;
          }
LABEL_70:
          if ( v11 >= 0 )
          {
LABEL_72:
            if ( (PspPartitionInfoDetails[v12] & 0x200000000000000LL) != 0 )
            {
              if ( PreviousMode
                && PartitionInformationLength
                && ((BYTE6(PspPartitionInfoDetails[v12]) - 1) & (unsigned int)PartitionInformation) != 0 )
              {
                ExRaiseDatatypeMisalignment();
              }
              if ( PreviousMode )
                RtlCopyToUser(PartitionInformation, &Src, PartitionInformationLength);
              else
                RtlCopyVolatileMemory(PartitionInformation, &Src, PartitionInformationLength);
            }
            goto LABEL_81;
          }
LABEL_71:
          if ( (PspPartitionInfoDetails[v12] & 0x400000000000000LL) == 0 )
            goto LABEL_81;
          goto LABEL_72;
        }
        v22 = v21 - 1;
        v23 = v10;
        if ( !v22 )
        {
          LOBYTE(v18) = PreviousMode;
          SpecialPurposeMemoryInformation = MmManagePartitionInitialAddMemory(v10, &Src, PartitionInformation, v18);
          goto LABEL_69;
        }
        v24 = v22 - 1;
        LOBYTE(v17) = PreviousMode;
        if ( !v24 )
        {
          SpecialPurposeMemoryInformation = MmManagePartitionGetMemoryEvents(v10, &Src, v17);
          goto LABEL_69;
        }
        v25 = v24 - 1;
        if ( v25 )
        {
          if ( v25 == 1 )
            SpecialPurposeMemoryInformation = MmManagePartitionNodeInformation(v10, &Src, v17);
          else
            SpecialPurposeMemoryInformation = MmManagePartitionCreateLargePages(v10, (__int64)&Src, PreviousMode);
          goto LABEL_69;
        }
        v27 = 1LL;
      }
      SpecialPurposeMemoryInformation = MmManagePartitionUpdateAttributes(v23, &Src, v17, v27);
LABEL_69:
      v11 = SpecialPurposeMemoryInformation;
      goto LABEL_70;
    }
  }
LABEL_81:
  if ( BYTE1(v37) )
    PsDereferencePartition((__int64)v10);
  if ( BYTE2(v37) )
    PsDereferencePartition((__int64)v39);
  return v11;
}
