/*
 * XREFs of SmProcessDeleteRequest @ 0x1408198D4
 * Callers:
 *     SmSetStoreInformation @ 0x140B2E9E0 (SmSetStoreInformation.c)
 * Callees:
 *     SmpGetProcessPartition @ 0x1404D6C0C (SmpGetProcessPartition.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     SmKmStoreDelete @ 0x140B20310 (SmKmStoreDelete.c)
 */

__int64 __fastcall SmProcessDeleteRequest(void *Src, int a2, char a3)
{
  __int64 ProcessPartition; // rax
  __int64 v7; // r8
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0LL;
  if ( a2 != 8 )
    return 3221225990LL;
  if ( a3 )
  {
    ProbeForRead(Src, 1uLL, 4u);
    RtlCopyFromUser(&v8, Src, 8uLL);
  }
  else
  {
    RtlCopyVolatileMemory(&v8, Src, 8uLL);
  }
  if ( (_BYTE)v8 != 1 || (v8 & 0xFFFFFF00) != 0 )
    return 3221225485LL;
  ProcessPartition = SmpGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
  LOBYTE(v7) = a3;
  return SmKmStoreDelete(ProcessPartition, HIDWORD(v8), v7);
}
