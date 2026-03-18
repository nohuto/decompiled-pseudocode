/*
 * XREFs of MmGetChannelInformation @ 0x140B0D228
 * Callers:
 *     ExpQueryNumaAvailableMemory @ 0x140832DEC (ExpQueryNumaAvailableMemory.c)
 *     ExpQueryChannelInformation @ 0x140B66418 (ExpQueryChannelInformation.c)
 *     KiPopulateNodeInformation @ 0x140CCAA4C (KiPopulateNodeInformation.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x14044ADC0 (MmGetCurrentProcessorColor.c)
 *     MiGetChannelInformation @ 0x1404A43F4 (MiGetChannelInformation.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memmove @ 0x14073D480 (memmove.c)
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
  MiGetChannelInformation(*(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * a1), a2, (__int64)Src, Size);
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
