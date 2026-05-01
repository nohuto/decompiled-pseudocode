/*
 * XREFs of ??_E?$basic_ostringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAAPEAXI@Z @ 0x1804F886C
 * Callers:
 *     ??_E?$basic_ostringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$4PPPPPPPM@A@EAAPEAXI@Z @ 0x1804F8790 (--_E-$basic_ostringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@$4PPPPPPPM@A@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_D?$basic_ostringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXXZ @ 0x1804F8754 (--_D-$basic_ostringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXXZ.c)
 */

void *__fastcall std::ostringstream::`vector deleting destructor'(__int64 a1, char a2)
{
  void *v2; // rdi

  v2 = (void *)(a1 - 136);
  std::ostringstream::`vbase destructor'(a1 - 136);
  if ( (a2 & 1) != 0 )
    operator delete(v2, (const struct std::nothrow_t *)0xE8);
  return v2;
}
