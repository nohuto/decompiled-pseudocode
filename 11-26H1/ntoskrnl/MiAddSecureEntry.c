/*
 * XREFs of MiAddSecureEntry @ 0x140A03278
 * Callers:
 *     MiHandleInsertedImageVad @ 0x14099EF84 (MiHandleInsertedImageVad.c)
 *     MiReserveUserMemoryFinishVad @ 0x140A01EA0 (MiReserveUserMemoryFinishVad.c)
 *     MiMapLockedPagesInUserSpace @ 0x140A02A08 (MiMapLockedPagesInUserSpace.c)
 *     MiAllocateVad @ 0x140A02E80 (MiAllocateVad.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x140A02FF8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiCloneNoChange @ 0x140A07CA0 (MiCloneNoChange.c)
 *     MiSecureVad @ 0x140B51BA0 (MiSecureVad.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiInsertVadEvent @ 0x140494C48 (MiInsertVadEvent.c)
 *     MiLocateExclusiveSecure @ 0x1404B25EC (MiLocateExclusiveSecure.c)
 *     MiWriteSecureFlags @ 0x1404C73A4 (MiWriteSecureFlags.c)
 */

__int64 __fastcall MiAddSecureEntry(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  __int64 v9; // rcx
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  __int64 v12; // rsi
  _KPROCESS *Process; // rcx

  if ( (MiReadVadFlags(a1) & 2) != 0 && ((a5 & 1) != 0 || MiLocateExclusiveSecure(v9)) )
    return 0LL;
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  PoolMm = ExAllocatePoolMm(64LL, 0x68uLL, 1699966285, CurrentProcessorColor | 0x80000000);
  v12 = PoolMm;
  if ( !PoolMm )
    return 0LL;
  *(_WORD *)(PoolMm + 8) = 2;
  Process = KeGetCurrentThread()->ApcState.Process;
  *(_BYTE *)(PoolMm + 11) = (unsigned __int8)Process >> 4;
  *(_QWORD *)(PoolMm + 32) = a3;
  *(_QWORD *)(PoolMm + 40) = Process;
  *(_QWORD *)(PoolMm + 48) = a1;
  if ( (a4 & 1) != 0 )
  {
    a2 |= 8uLL;
  }
  else if ( (a4 & 4) != 0 )
  {
    a2 |= 0xAuLL;
  }
  else if ( (a4 & 2) != 0 )
  {
    a2 |= 9uLL;
  }
  if ( (a5 & 1) != 0 )
    a2 |= 0x20uLL;
  if ( (a5 & 4) != 0 )
    a2 |= 0x40uLL;
  if ( (a5 & 8) != 0 )
    a2 |= 0x80uLL;
  if ( a4 < 0 )
    a2 |= 4uLL;
  if ( (a4 & 0x40000000) != 0 )
    a2 |= 0x10uLL;
  if ( (a4 & 0x20000000) != 0 )
    a2 |= 0x100uLL;
  MiWriteSecureFlags((_QWORD *)(PoolMm + 24), a2);
  MiInsertVadEvent(a1, v12, 1);
  return v12;
}
