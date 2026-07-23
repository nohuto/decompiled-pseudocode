/*
 * XREFs of HalpGetChipHacks @ 0x140CB9B9C
 * Callers:
 *     HalpPiix4Detect @ 0x140C10AEC (HalpPiix4Detect.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall HalpGetChipHacks(__int16 a1, __int16 a2, unsigned __int8 a3, int *a4)
{
  __int64 i; // rax
  unsigned int v5; // ecx

  if ( !HalpErrataChipHacksInitialized )
    KeBugCheckEx(
      0x5Cu,
      0x8000uLL,
      (ULONG_PTR)"HalpGetChipHacks",
      (ULONG_PTR)"minkernel\\hals\\lib\\errata\\chiphacks.c",
      0x127uLL);
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= HalpChipHackCount )
      return 3221226021LL;
    if ( *(_WORD *)(HalpChipHacksTable + 8 * i) == a1 && *(_WORD *)(HalpChipHacksTable + 8 * i + 2) == a2 )
      break;
  }
  v5 = *(_DWORD *)(HalpChipHacksTable + 8 * i + 4);
  if ( a3 && HIBYTE(v5) && a3 >= HIBYTE(v5) )
    v5 >>= 12;
  *a4 = v5 & 0xFFF;
  if ( (HalpDeviceBlockUnblockPushLock.WriteTransferCount & 0x200000000LL) != 0 )
    *a4 = v5 & 0xFFE;
  return 0LL;
}
