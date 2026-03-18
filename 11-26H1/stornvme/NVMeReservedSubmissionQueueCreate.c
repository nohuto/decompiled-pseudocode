/*
 * XREFs of NVMeReservedSubmissionQueueCreate @ 0x140029EA4
 * Callers:
 *     IoctlCreateReservedQueuePair @ 0x14001AF84 (IoctlCreateReservedQueuePair.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x140005C10 (NVMeAllocateDmaBuffer.c)
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     WaitForCommandComplete @ 0x14000C330 (WaitForCommandComplete.c)
 *     LocalCommandReuse @ 0x14000CA80 (LocalCommandReuse.c)
 *     NVMeFreeDmaBuffer @ 0x14000FA50 (NVMeFreeDmaBuffer.c)
 *     NVMeFreePool @ 0x140017DB8 (NVMeFreePool.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall NVMeReservedSubmissionQueueCreate(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        __int64 a4,
        unsigned __int16 a5,
        unsigned __int16 a6)
{
  __int64 v7; // rax
  int v8; // r9d
  __int64 v9; // r8
  unsigned __int64 v10; // rsi
  __int64 v11; // r13
  int v12; // ebx
  __int64 v13; // rcx

  v7 = 64LL;
  v8 = a3;
  if ( *(_BYTE *)(a2 + 2) != 40 )
    v7 = 24LL;
  v9 = 16LL * a6;
  v10 = (unsigned __int64)a5 << 6;
  v11 = *(_QWORD *)(v7 + a2);
  v12 = *(unsigned __int16 *)(v9 + v11 + 86);
  *(_WORD *)(v10 + *(_QWORD *)(a1 + 960) + 42) = v8;
  *(_QWORD *)(v10 + *(_QWORD *)(a1 + 960) + 16) = (unsigned int)(2 * *(_DWORD *)(a1 + 200) * v8)
                                                + *(_QWORD *)(a1 + 176)
                                                + 4096LL;
  v13 = *(_QWORD *)(v11 + 16 * (a6 + 3LL) + 28);
  if ( v13 )
  {
    *(_QWORD *)(v10 + *(_QWORD *)(a1 + 960)) = v13;
    *(_QWORD *)(v10 + *(_QWORD *)(a1 + 960) + 8) = 0LL;
  }
  else if ( *(_WORD *)(v9 + v11 + 86) && (*(_DWORD *)(a1 + 128) & 1) != 0 )
  {
    NVMeAllocateDmaBuffer(a1, v12 << 6);
    return 8;
  }
  StorPortExtendedFunction(0LL, a1, (unsigned int)(32 * v12), 1701672526LL);
  return 1;
}
