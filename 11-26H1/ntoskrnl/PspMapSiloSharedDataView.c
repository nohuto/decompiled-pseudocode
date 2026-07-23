/*
 * XREFs of PspMapSiloSharedDataView @ 0x1409E6308
 * Callers:
 *     PspSetupUserProcessAddressSpace @ 0x1409E53DC (PspSetupUserProcessAddressSpace.c)
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 * Callees:
 *     PsIsHostSilo @ 0x140467DB0 (PsIsHostSilo.c)
 *     PsGetProcessServerSilo @ 0x140470370 (PsGetProcessServerSilo.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     MmMapViewOfSection @ 0x140992F30 (MmMapViewOfSection.c)
 */

__int64 __fastcall PspMapSiloSharedDataView(__int64 a1)
{
  __int64 ProcessServerSilo; // rsi
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 *v5; // rax
  __int64 v6; // [rsp+88h] [rbp+10h] BYREF
  __int64 v7; // [rsp+90h] [rbp+18h] BYREF
  __int64 v8; // [rsp+98h] [rbp+20h] BYREF

  ProcessServerSilo = PsGetProcessServerSilo(a1);
  if ( PsIsHostSilo(ProcessServerSilo) )
    return 0LL;
  v6 = 0LL;
  v8 = 0LL;
  v7 = 0LL;
  result = MmMapViewOfSection(
             *(_QWORD *)(*(_QWORD *)(ProcessServerSilo + 1504) + 1296LL),
             a1,
             &v6,
             0LL,
             0LL,
             (__int64)&v8,
             &v7,
             1,
             0x400000,
             2);
  if ( (int)result >= 0 )
  {
    RtlWriteULong64ToUser((_QWORD *)(*(_QWORD *)(a1 + 736) + 144LL), v6);
    v4 = 0LL;
    v5 = *(__int64 **)(a1 + 784);
    if ( v5 )
      v4 = *v5;
    if ( v4 )
      RtlWriteULongToUser((_DWORD *)(v4 + 80), v6);
    return 0LL;
  }
  return result;
}
