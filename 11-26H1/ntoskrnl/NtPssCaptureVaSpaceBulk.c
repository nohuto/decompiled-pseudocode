/*
 * XREFs of NtPssCaptureVaSpaceBulk @ 0x14084BEC0
 * Callers:
 *     DifNtPssCaptureVaSpaceBulkWrapper @ 0x140684960 (DifNtPssCaptureVaSpaceBulkWrapper.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035F0D0 (MmMapLockedPagesSpecifyCache.c)
 *     IoFreeMdl @ 0x1403A0EF0 (IoFreeMdl.c)
 *     MmProbeAndLockPagesEx @ 0x1403A1820 (MmProbeAndLockPagesEx.c)
 *     IoAllocateMdl @ 0x1404046D0 (IoAllocateMdl.c)
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     Feature_993200443__private_IsEnabledDeviceUsageNoInline @ 0x1406D7ACC (Feature_993200443__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwPssCaptureVaSpaceBulk @ 0x14072A8C0 (ZwPssCaptureVaSpaceBulk.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     MmQueryVirtualMemory @ 0x1409243E0 (MmQueryVirtualMemory.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __cdecl NtPssCaptureVaSpaceBulk(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PNTPSS_MEMORY_BULK_INFORMATION BulkInformation,
        SIZE_T BulkInformationLength,
        PSIZE_T ReturnLength)
{
  PNTPSS_MEMORY_BULK_INFORMATION v6; // r14
  PVOID v7; // rax
  unsigned int v8; // ebx
  PMDL v9; // r15
  NTSTATUS VirtualMemory; // edi
  char PreviousMode; // r12
  __int64 ULong64FromUser; // rax
  PMDL Mdl; // rax
  SIZE_T v15; // r12
  _NTPSS_MEMORY_BULK_INFORMATION *v16; // r13
  char *v17; // rdx
  ULONG_PTR v18; // [rsp+48h] [rbp-F0h] BYREF
  PVOID BaseAddressa; // [rsp+50h] [rbp-E8h]
  PSIZE_T v20; // [rsp+58h] [rbp-E0h]
  ULONG_PTR BugCheckParameter1; // [rsp+68h] [rbp-D0h]
  PVOID Object; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+78h] [rbp-C0h] BYREF
  _NTPSS_MEMORY_BULK_INFORMATION v24; // [rsp+80h] [rbp-B8h]
  __int64 v25; // [rsp+90h] [rbp-A8h]
  HANDLE v26; // [rsp+98h] [rbp-A0h]
  PVOID v27; // [rsp+A0h] [rbp-98h]
  PNTPSS_MEMORY_BULK_INFORMATION v28; // [rsp+A8h] [rbp-90h]
  SIZE_T v29; // [rsp+B0h] [rbp-88h]
  struct _KTHREAD *CurrentThread; // [rsp+B8h] [rbp-80h]
  _BYTE v31[48]; // [rsp+C0h] [rbp-78h] BYREF

  v6 = BulkInformation;
  v7 = BaseAddress;
  BaseAddressa = BaseAddress;
  BugCheckParameter1 = (ULONG_PTR)ProcessHandle;
  v26 = ProcessHandle;
  v27 = BaseAddress;
  v28 = BulkInformation;
  v29 = BulkInformationLength;
  v20 = ReturnLength;
  Object = 0LL;
  memset(v31, 0, sizeof(v31));
  v23 = 0LL;
  v18 = 0LL;
  v8 = 0;
  v9 = 0LL;
  v25 = 0LL;
  VirtualMemory = 0;
  if ( BulkInformationLength < 0x10 )
    return -1073741820;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v24 = 0LL;
    ProbeForWrite(BulkInformation, BulkInformationLength, 8u);
    if ( v20 )
    {
      ULong64FromUser = RtlReadULong64FromUser(v20);
      RtlWriteULong64ToUser(v20, ULong64FromUser);
    }
    v24 = *v6;
    v7 = BaseAddressa;
  }
  else
  {
    v24 = *BulkInformation;
  }
  if ( !v24.QueryFlags )
    goto LABEL_9;
  if ( (v24.QueryFlags & 0xFFFFFFFC) != 0 )
  {
    VirtualMemory = -1073741637;
    goto LABEL_44;
  }
  if ( !MmIsUserAddress((unsigned __int64)v7) )
  {
    VirtualMemory = -1073741503;
    goto LABEL_44;
  }
  if ( !PreviousMode )
  {
    v9 = 0LL;
    goto LABEL_26;
  }
  if ( !(unsigned int)Feature_993200443__private_IsEnabledDeviceUsageNoInline() || BulkInformationLength <= 0xFFFFFFFF )
  {
    Mdl = IoAllocateMdl(v6, BulkInformationLength, 0, 0, 0LL);
    v9 = Mdl;
    if ( !Mdl )
      goto LABEL_18;
    VirtualMemory = MmProbeAndLockPagesEx((__int64)Mdl, 2uLL);
    if ( VirtualMemory < 0 )
      goto LABEL_44;
    v8 = 2;
    v6 = (PNTPSS_MEMORY_BULK_INFORMATION)((v9->MdlFlags & 5) != 0
                                        ? v9->MappedSystemVa
                                        : MmMapLockedPagesSpecifyCache(v9, 0, MmCached, 0LL, 0, 0x40000010u));
    if ( !v6 )
    {
LABEL_18:
      VirtualMemory = -1073741670;
      goto LABEL_44;
    }
LABEL_26:
    if ( BugCheckParameter1 != -1LL )
    {
      VirtualMemory = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x41737350u, (__int64)&Object, 0LL, 0LL);
      if ( VirtualMemory < 0 )
        goto LABEL_44;
      if ( (*((_DWORD *)Object + 383) & 0x1000) != 0 )
      {
        ObfDereferenceObjectWithTag(Object, 0x41737350u);
        VirtualMemory = -1073741790;
        goto LABEL_44;
      }
      KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v31);
      v8 |= 1u;
    }
    if ( PreviousMode )
    {
      VirtualMemory = ZwPssCaptureVaSpaceBulk(
                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        BaseAddressa,
                        v6,
                        BulkInformationLength,
                        &v18);
    }
    else
    {
      v6->NumberOfEntries = 0;
      v18 = 16LL;
      v15 = BulkInformationLength - 16;
      v16 = v6 + 1;
      if ( v15 >= 0x30 )
      {
        while ( 1 )
        {
          if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
          {
            VirtualMemory = -1073741749;
            goto LABEL_41;
          }
          VirtualMemory = MmQueryVirtualMemory(0xFFFFFFFFFFFFFFFFuLL, 48LL, (__int64)&v23, 2);
          if ( VirtualMemory < 0 )
            break;
          v15 -= v23;
          v18 += v23;
          v17 = (char *)v16[1].NextValidAddress + *(_QWORD *)&v16->QueryFlags;
          v16 += 3;
          ++v6->NumberOfEntries;
          v6->NextValidAddress = v17;
          if ( v15 < 0x30 )
            goto LABEL_41;
        }
        if ( v6->NumberOfEntries )
          VirtualMemory = 0;
      }
LABEL_41:
      if ( VirtualMemory >= 0 && v6->NextValidAddress != (PVOID)0x7FFFFFFF0000LL )
        VirtualMemory = 261;
    }
    goto LABEL_44;
  }
LABEL_9:
  VirtualMemory = -1073741811;
LABEL_44:
  if ( (v8 & 1) != 0 )
    KiUnstackDetachProcess((__int64)v31, 0);
  if ( v9 )
  {
    if ( v8 >= 2 )
      MmUnlockPages(v9);
    IoFreeMdl(v9);
  }
  if ( v20 )
    *v20 = v18;
  return VirtualMemory;
}
