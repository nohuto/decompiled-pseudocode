/*
 * XREFs of IopReferenceFileObject @ 0x140264F80
 * Callers:
 *     IopSetEaOrQuotaInformationFile @ 0x140795248 (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryQuotaInformationFile @ 0x1407995D0 (NtQueryQuotaInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x140799CE0 (NtSetVolumeInformationFile.c)
 *     NtCancelIoFileEx @ 0x1409561B0 (NtCancelIoFileEx.c)
 *     NtSetEaFile @ 0x1409AFCE0 (NtSetEaFile.c)
 *     NtQueryEaFile @ 0x1409B0520 (NtQueryEaFile.c)
 *     NtFlushBuffersFileEx @ 0x1409B0CB0 (NtFlushBuffersFileEx.c)
 *     NtQueryVolumeInformationFile @ 0x1409B13A0 (NtQueryVolumeInformationFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140AACCA0 (NtNotifyChangeDirectoryFileEx.c)
 *     NtCancelIoFile @ 0x140ACE000 (NtCancelIoFile.c)
 *     NtCopyFileChunk @ 0x140AE2060 (NtCopyFileChunk.c)
 *     IopIoRingDispatchRead @ 0x140B00E10 (IopIoRingDispatchRead.c)
 *     NtWriteFileGather @ 0x140B01BE0 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x140B0D2F0 (NtReadFileScatter.c)
 *     IopIoRingReferenceFileObject @ 0x140B3E9AC (IopIoRingReferenceFileObject.c)
 *     IopValidateJunctionTarget @ 0x140B5F2B0 (IopValidateJunctionTarget.c)
 *     NtLockFile @ 0x140B6ECE0 (NtLockFile.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1402642E0 (KeAreInterruptsEnabled.c)
 *     ObpPushStackInfo @ 0x1402659F0 (ObpPushStackInfo.c)
 *     ObpDeferObjectDeletion @ 0x1403DD9F0 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     ObpDeregisterObject @ 0x140779D4C (ObpDeregisterObject.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     ObpRemoveObjectRoutine @ 0x140923BC0 (ObpRemoveObjectRoutine.c)
 *     PsIsProcessAppContainer @ 0x1409D6220 (PsIsProcessAppContainer.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x140A5A090 (ObpHandleRevocationBlockRemoveObject.c)
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
