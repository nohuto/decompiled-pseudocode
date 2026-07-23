/*
 * XREFs of KiCopyCountersWorker @ 0x1407BE00C
 * Callers:
 *     KiCopyCounters @ 0x1405F5DD0 (KiCopyCounters.c)
 * Callees:
 *     KeGetCurrentProcessorNumberEx @ 0x140440C90 (KeGetCurrentProcessorNumberEx.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 */

__int64 __fastcall KiCopyCountersWorker(__int64 a1, __int64 a2)
{
  __int64 v4; // r15
  unsigned int v5; // esi
  __int64 v6; // rdi
  __int64 ULong64FromUser; // rax
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 v10; // rax
  _PROCESSOR_NUMBER ProcNumber; // [rsp+68h] [rbp+10h] BYREF

  ProcNumber = 0;
  v4 = *(_QWORD *)(a2 + 8);
  KeGetCurrentProcessorNumberEx(&ProcNumber);
  RtlWriteULongToUser((_DWORD *)(v4 + 4), *(_DWORD *)&ProcNumber);
  RtlWriteULong64ToUser((_QWORD *)(v4 + 56), *(_QWORD *)(a1 + 72) - *(_QWORD *)(a2 + 24));
  RtlWriteULong64ToUser((_QWORD *)(v4 + 48), KeGetCurrentPrcb()->StartCycles);
  if ( (*(_DWORD *)(a2 + 16) & 1) != 0 )
  {
    RtlWriteULongToUser((_DWORD *)(v4 + 8), *(_DWORD *)(a2 + 20));
    v5 = 0;
    if ( *(_QWORD *)a2 )
    {
      v6 = _InterlockedExchange64((volatile __int64 *)a2, 0LL);
      ULong64FromUser = RtlReadULong64FromUser((volatile void *)(v4 + 24));
      RtlWriteULong64ToUser((_QWORD *)(v4 + 24), v6 | ULong64FromUser);
    }
  }
  else
  {
    v5 = 0;
  }
  v8 = *(_QWORD *)(a2 + 32);
  if ( v8 )
  {
    v9 = 1LL;
    while ( v5 < KiHwCountersCount )
    {
      if ( (v8 & v9) != 0 )
      {
        RtlWriteULongToUser((_DWORD *)(v4 + 68 + 24LL * v5), KiHwCounters[v5]);
        RtlWriteULong64ToUser((_QWORD *)(v4 + 24 * (v5 + 3LL)), *(_QWORD *)(a2 + 24LL * v5 + 48));
        RtlWriteULong64ToUser((_QWORD *)(v4 + 80 + 24LL * v5), *(_QWORD *)(a2 + 24LL * v5 + 56));
      }
      v9 *= 2LL;
      ++v5;
    }
    RtlWriteULongToUser((_DWORD *)(v4 + 12), KiHwCountersCount);
  }
  v10 = RtlReadULong64FromUser((volatile void *)(v4 + 16));
  RtlWriteULong64ToUser((_QWORD *)(v4 + 16), v10 + 1);
  return 0LL;
}
