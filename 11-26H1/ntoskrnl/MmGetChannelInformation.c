/*
 * XREFs of MmGetChannelInformation @ 0x140B0E978
 * Callers:
 *     ExpQueryNumaAvailableMemory @ 0x14083902C (ExpQueryNumaAvailableMemory.c)
 *     ExpQueryChannelInformation @ 0x140B693A4 (ExpQueryChannelInformation.c)
 *     KiPopulateNodeInformation @ 0x140CD0B2C (KiPopulateNodeInformation.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiGetChannelInformation @ 0x14049DA84 (MiGetChannelInformation.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall MmGetChannelInformation(unsigned __int16 a1, unsigned int a2, _QWORD *a3, size_t *a4)
{
  size_t v6; // rbx
  int CurrentProcessorColor; // eax
  void *PoolMm; // rax
  size_t Size[2]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE Src[80]; // [rsp+30h] [rbp-78h] BYREF

  Size[0] = 0LL;
  if ( a2 >= (unsigned __int16)KeNumberNodes )
    return 3221225711LL;
  MiGetChannelInformation(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * a1), a2, (__int64)Src, Size);
  v6 = Size[0];
  *a4 = Size[0];
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  PoolMm = (void *)ExAllocatePoolMm(64LL, v6, 1750101325, CurrentProcessorColor | 0x80000000);
  *a3 = PoolMm;
  if ( !PoolMm )
    return 3221225626LL;
  memmove(PoolMm, Src, v6);
  return 0LL;
}
