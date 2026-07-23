/*
 * XREFs of IopReferenceFileObject @ 0x1402644F0
 * Callers:
 *     IopSetEaOrQuotaInformationFile @ 0x140797D78 (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryQuotaInformationFile @ 0x14079C100 (NtQueryQuotaInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x14079C810 (NtSetVolumeInformationFile.c)
 *     NtCancelIoFileEx @ 0x140949ED0 (NtCancelIoFileEx.c)
 *     NtSetEaFile @ 0x140980DA0 (NtSetEaFile.c)
 *     NtQueryEaFile @ 0x1409815E0 (NtQueryEaFile.c)
 *     NtFlushBuffersFileEx @ 0x140981D70 (NtFlushBuffersFileEx.c)
 *     NtQueryVolumeInformationFile @ 0x140982460 (NtQueryVolumeInformationFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140AAAD60 (NtNotifyChangeDirectoryFileEx.c)
 *     NtCancelIoFile @ 0x140AD0240 (NtCancelIoFile.c)
 *     NtCopyFileChunk @ 0x140ADF550 (NtCopyFileChunk.c)
 *     IopIoRingDispatchRead @ 0x140B02B40 (IopIoRingDispatchRead.c)
 *     NtWriteFileGather @ 0x140B03910 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x140B0EA40 (NtReadFileScatter.c)
 *     IopIoRingReferenceFileObject @ 0x140B409DC (IopIoRingReferenceFileObject.c)
 *     IopValidateJunctionTarget @ 0x140B62430 (IopValidateJunctionTarget.c)
 *     NtLockFile @ 0x140B720D0 (NtLockFile.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140263850 (KeAreInterruptsEnabled.c)
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     ObpDeferObjectDeletion @ 0x1403E0BE0 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ObpDeregisterObject @ 0x14077CC7C (ObpDeregisterObject.c)
 *     ObpRemoveObjectRoutine @ 0x1408FF6D0 (ObpRemoveObjectRoutine.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     PsIsProcessAppContainer @ 0x1409A7110 (PsIsProcessAppContainer.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x140A67000 (ObpHandleRevocationBlockRemoveObject.c)
 */

__int64 __fastcall IopReferenceFileObject(
        void *a1,
        ACCESS_MASK a2,
        KPROCESSOR_MODE a3,
        ULONG_PTR *a4,
        POBJECT_HANDLE_INFORMATION HandleInformation)
{
  NTSTATUS v6; // ebx
  _QWORD *v7; // rax
  _DWORD *v9; // rax
  ULONG_PTR v10; // rsi
  signed __int64 v11; // rbx
  bool v12; // cc
  signed __int64 v13; // rbx
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  Object = 0LL;
  v6 = ObReferenceObjectByHandle(a1, a2, (POBJECT_TYPE)IoFileObjectType, a3, &Object, HandleInformation);
  v7 = Object;
  *a4 = (ULONG_PTR)Object;
  if ( v6 >= 0 )
  {
    v9 = (_DWORD *)v7[26];
    if ( v9 )
    {
      if ( (*v9 & 4) != 0 && (unsigned __int8)PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) )
      {
        v10 = *a4;
        if ( ObpTraceFlags )
          ObpPushStackInfo(v10 - 48, 0xFFFFFFFFLL, 1953261124LL);
        v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 - 48), 0xFFFFFFFFFFFFFFFFuLL);
        v12 = v11 <= 1;
        v13 = v11 - 1;
        if ( !v12 )
          return (unsigned int)-1073739504;
        if ( *(_QWORD *)(v10 - 40) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v10 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v10 - 48) >> 8)],
            v10,
            1uLL,
            *(_QWORD *)(v10 - 40));
        if ( v13 < 0 )
          KeBugCheckEx(0x18u, 0LL, v10, 2uLL, v13);
        if ( KeGetCurrentThread()->SpecialApcDisable || !KeAreInterruptsEnabled() || KeGetCurrentIrql() )
        {
          ObpDeferObjectDeletion(v10 - 48);
          return (unsigned int)-1073739504;
        }
        if ( (*(_BYTE *)(v10 - 22) & 0x40) != 0
          && *(_BYTE *)(*(_QWORD *)(v10 - 48 - ObpInfoMaskToOffset[*(_BYTE *)(v10 - 22) & 0x7F]) + 24LL) )
        {
          ObpHandleRevocationBlockRemoveObject();
        }
        if ( ObpTraceFlags )
          ObpDeregisterObject(v10 - 48);
        ObpRemoveObjectRoutine(v10 - 48, 0LL);
        return (unsigned int)-1073739504;
      }
    }
  }
  return (unsigned int)v6;
}
