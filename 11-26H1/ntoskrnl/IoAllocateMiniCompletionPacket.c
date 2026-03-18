/*
 * XREFs of IoAllocateMiniCompletionPacket @ 0x140A916E0
 * Callers:
 *     NtSetInformationJobObject @ 0x1407F4C70 (NtSetInformationJobObject.c)
 *     NtCreateWorkerFactory @ 0x140A912F0 (NtCreateWorkerFactory.c)
 * Callees:
 *     ExAllocatePool3 @ 0x140C10010 (ExAllocatePool3.c)
 */

__int64 __fastcall IoAllocateMiniCompletionPacket(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF

  v5 = 0LL;
  LOBYTE(v5) = 1;
  DWORD2(v5) = 0;
  result = ExAllocatePool3(64LL, 80LL, 544236361LL, &v5, 1);
  if ( result )
  {
    *(_BYTE *)(result + 16) = 4;
    *(_QWORD *)(result + 56) = a1;
    *(_QWORD *)(result + 64) = a2;
    *(_BYTE *)(result + 72) = 1;
  }
  return result;
}
