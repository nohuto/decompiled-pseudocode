/*
 * XREFs of MiCreateWriteWatchView @ 0x1409A07F8
 * Callers:
 *     MiReserveUserMemoryPrepare @ 0x140A010AC (MiReserveUserMemoryPrepare.c)
 *     MiCloneAncillaryVadInfo @ 0x140A07A00 (MiCloneAncillaryVadInfo.c)
 * Callees:
 *     MiGetVadMandatoryPageSize @ 0x140319EC0 (MiGetVadMandatoryPageSize.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiCreateVadEvent @ 0x14099F5BC (MiCreateVadEvent.c)
 */

__int64 __fastcall MiCreateWriteWatchView(ULONG_PTR BugCheckParameter4, __int64 a2)
{
  unsigned int VadFlags; // eax
  unsigned __int64 VadMandatoryPageSize; // rax
  __int64 v5; // r8
  __int64 v6; // r11
  __int64 result; // rax
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0LL;
  VadFlags = MiReadVadFlags(a2);
  VadMandatoryPageSize = MiGetVadMandatoryPageSize(VadFlags);
  result = MiCreateVadEvent(
             BugCheckParameter4,
             v6,
             (~(VadMandatoryPageSize - 1) & (VadMandatoryPageSize + v5 - 1)) / VadMandatoryPageSize,
             4,
             0LL,
             &v8);
  if ( (int)result >= 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(BugCheckParameter4 + 500), 0x8000u);
    return 0LL;
  }
  return result;
}
