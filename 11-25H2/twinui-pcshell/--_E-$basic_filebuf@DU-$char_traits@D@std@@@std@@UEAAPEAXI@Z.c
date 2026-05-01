/*
 * XREFs of ??_E?$basic_filebuf@DU?$char_traits@D@std@@@std@@UEAAPEAXI@Z @ 0x1805EE130
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$basic_filebuf@DU?$char_traits@D@std@@@std@@UEAA@XZ @ 0x1805ED8E8 (--1-$basic_filebuf@DU-$char_traits@D@std@@@std@@UEAA@XZ.c)
 */

void *__fastcall std::filebuf::`vector deleting destructor'(void *a1, char a2)
{
  std::filebuf::~filebuf<char,std::char_traits<char>>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x98);
  return a1;
}
