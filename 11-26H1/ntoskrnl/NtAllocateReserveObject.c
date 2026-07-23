/*
 * XREFs of NtAllocateReserveObject @ 0x140B0A080
 * Callers:
 *     DifNtAllocateReserveObjectWrapper @ 0x14066EE10 (DifNtAllocateReserveObjectWrapper.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 */

NTSTATUS __cdecl NtAllocateReserveObject(
        PHANDLE MemoryReserveHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        MEMORY_RESERVE_TYPE Type)
{
  __int64 v3; // r14
  char PreviousMode; // si
  NTSTATUS result; // eax
  _DWORD *v8; // rbx
  NTSTATUS inserted; // ebx
  __int64 ULong64FromUser; // rax
  __int64 v11; // [rsp+20h] [rbp-68h]
  void *v12; // [rsp+58h] [rbp-30h] BYREF
  void *v13; // [rsp+60h] [rbp-28h] BYREF

  v3 = Type;
  v13 = 0LL;
  v12 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(MemoryReserveHandle);
    RtlWriteULong64ToUser(MemoryReserveHandle, ULong64FromUser);
  }
  if ( (unsigned int)v3 > 1 )
    return -1073741811;
  result = ObCreateObjectEx(
             PreviousMode,
             *((_DWORD **)&stru_140FC11F0.SchedulerApc.ApcListEntry.Blink + v3),
             (__int64)ObjectAttributes,
             PreviousMode,
             v11,
             *((_DWORD *)&ExpPlatformBinaryLock.AffinityPrimaryGroup + 2 * v3),
             0,
             0,
             &v12,
             0LL);
  if ( result >= 0 )
  {
    v8 = v12;
    memset_0(v12, 0, *((_QWORD *)&ExpPlatformBinaryLock.AffinityPrimaryGroup + v3));
    if ( (_DWORD)v3 == 1 )
    {
      v8[6] = 4;
      *((_QWORD *)v8 + 8) = PspIoMiniPacketCallbackRoutine;
      *((_QWORD *)v8 + 9) = v8;
      *((_BYTE *)v8 + 80) = 0;
    }
    inserted = ObInsertObjectEx((char *)v8, 0LL, 983043, 0, 0, 0LL, &v13);
    LODWORD(v12) = inserted;
    if ( inserted >= 0 )
    {
      if ( PreviousMode )
        RtlWriteULong64ToUser(MemoryReserveHandle, (__int64)v13);
      else
        *MemoryReserveHandle = v13;
    }
    return inserted;
  }
  return result;
}
