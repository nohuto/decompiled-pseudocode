/*
 * XREFs of KasanPoolAllocateNoInline @ 0x1405E02D0
 * Callers:
 *     ExAllocateContiguousHeapPool @ 0x14034CAE0 (ExAllocateContiguousHeapPool.c)
 *     ExAllocateHeapPool @ 0x14039A530 (ExAllocateHeapPool.c)
 *     ExAllocateHeapSpecialPool @ 0x1405140E8 (ExAllocateHeapSpecialPool.c)
 * Callees:
 *     KasanMarkAddressInvalidNoInline @ 0x1405E00B0 (KasanMarkAddressInvalidNoInline.c)
 *     KasanMarkAddressRedZoneNoInline @ 0x1405E0190 (KasanMarkAddressRedZoneNoInline.c)
 */

unsigned __int64 __fastcall KasanPoolAllocateNoInline(ULONG_PTR a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  unsigned __int64 result; // rax
  ULONG_PTR v10; // rsi
  ULONG_PTR v11; // rbx

  result = (unsigned __int8)byte_140FC8BD8;
  if ( byte_140FC8BD8 )
  {
    KasanMarkAddressInvalidNoInline(a1, a3 - (((_BYTE)a3 - (_BYTE)a1) & 7) - a1, 141);
    result = (unsigned __int8)byte_140FC8BD8;
  }
  v10 = a3 & 0xFFFFFFFFFFFFFFF8uLL;
  v11 = a4 + a3 - (a3 & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (_BYTE)result )
  {
    KasanMarkAddressRedZoneNoInline(v10, v11, a2 + a1 - v10, 134);
    result = (unsigned __int8)byte_140FC8BD8;
  }
  if ( a5 )
  {
    if ( (_BYTE)result )
      return (unsigned __int64)KasanMarkAddressInvalidNoInline(v10, v11 & 0xFFFFFFFFFFFFFFF8uLL, 9);
  }
  return result;
}
