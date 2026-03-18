/*
 * XREFs of KasanMarkAddressInvalidNoInline @ 0x1405DD740
 * Callers:
 *     RtlpHpVsFreeChunkInsert @ 0x14024AA50 (RtlpHpVsFreeChunkInsert.c)
 *     MiMapContiguousMemory @ 0x140363E10 (MiMapContiguousMemory.c)
 *     KcsanMarkAddressIgnored @ 0x1404F7F60 (KcsanMarkAddressIgnored.c)
 *     KasanPoolAllocateNoInline @ 0x1405DD960 (KasanPoolAllocateNoInline.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

_BYTE *__fastcall KasanMarkAddressInvalidNoInline(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, char a3)
{
  _BYTE *result; // rax
  ULONG_PTR i; // rdx

  if ( BugCheckParameter3 < 0xFFFF800000000000uLL )
    KeBugCheckEx(0x1F1u, 2uLL, 1uLL, BugCheckParameter3, 0LL);
  if ( (BugCheckParameter3 & 7) != 0 )
    KeBugCheckEx(0x1F1u, 2uLL, 2uLL, BugCheckParameter3, 8uLL);
  if ( BugCheckParameter3 + BugCheckParameter4 < BugCheckParameter3 )
    KeBugCheckEx(0x1F1u, 2uLL, 3uLL, BugCheckParameter3, BugCheckParameter4);
  result = (_BYTE *)(KasaniShadow + ((BugCheckParameter3 + 0x800000000000LL) >> 3));
  for ( i = (BugCheckParameter4 - (((_BYTE)BugCheckParameter4 - 1) & 7) + 7) >> 3; i; --i )
    *result++ = a3;
  return result;
}
