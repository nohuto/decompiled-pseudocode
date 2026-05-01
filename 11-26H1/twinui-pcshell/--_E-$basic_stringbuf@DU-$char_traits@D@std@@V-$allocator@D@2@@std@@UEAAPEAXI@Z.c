/*
 * XREFs of ??_E?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAAPEAXI@Z @ 0x1804F88B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAA@XZ @ 0x1804F75C8 (--1-$basic_stringbuf@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UEAA@XZ.c)
 */

_QWORD *__fastcall std::stringbuf::`vector deleting destructor'(_QWORD *a1, char a2)
{
  std::stringbuf::~stringbuf(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x78);
  return a1;
}
