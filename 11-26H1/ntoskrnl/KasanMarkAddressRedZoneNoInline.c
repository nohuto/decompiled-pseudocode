/*
 * XREFs of KasanMarkAddressRedZoneNoInline @ 0x1405E0190
 * Callers:
 *     MiMapContiguousMemory @ 0x140365BB0 (MiMapContiguousMemory.c)
 *     KasanDriverLoadImageInternal @ 0x140525CA0 (KasanDriverLoadImageInternal.c)
 *     KasanPoolAllocateNoInline @ 0x1405E02D0 (KasanPoolAllocateNoInline.c)
 *     MiInitializeSharedUserData @ 0x140CF82E0 (MiInitializeSharedUserData.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

_BYTE *__fastcall KasanMarkAddressRedZoneNoInline(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a2,
        ULONG_PTR BugCheckParameter4,
        char a4)
{
  char v4; // r11
  ULONG_PTR v6; // rcx
  _BYTE *result; // rax
  ULONG_PTR i; // rdx
  int v9; // r11d
  ULONG_PTR j; // rcx

  v4 = a2;
  if ( BugCheckParameter3 < 0xFFFF800000000000uLL )
    KeBugCheckEx(0x1F1u, 2uLL, 1uLL, BugCheckParameter3, 0LL);
  if ( (BugCheckParameter3 & 7) != 0 )
    KeBugCheckEx(0x1F1u, 2uLL, 2uLL, BugCheckParameter3, 8uLL);
  if ( a2 > BugCheckParameter4 )
    KeBugCheckEx(0x1F1u, 2uLL, 3uLL, a2, BugCheckParameter4);
  if ( BugCheckParameter3 + BugCheckParameter4 < BugCheckParameter3 )
    KeBugCheckEx(0x1F1u, 2uLL, 3uLL, BugCheckParameter3, BugCheckParameter4);
  v6 = BugCheckParameter4 + (((_BYTE)a2 - 1) & 7) - (unsigned __int64)(((_BYTE)BugCheckParameter4 - 1) & 7) - a2;
  result = (_BYTE *)(KasaniShadow + ((BugCheckParameter3 + 0x800000000000LL) >> 3));
  for ( i = a2 >> 3; i; --i )
    *result++ = 0;
  v9 = v4 & 7;
  if ( v9 )
    *result++ = v9;
  for ( j = v6 >> 3; j; --j )
    *result++ = a4;
  return result;
}
