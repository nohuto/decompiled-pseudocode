/*
 * XREFs of ??1?$basic_ostringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAA@XZ @ 0x1804F7564
 * Callers:
 *     ??_D?$basic_ostringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXXZ @ 0x1804F8754 (--_D-$basic_ostringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXXZ.c)
 * Callees:
 *     ??1?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAA@XZ @ 0x1804F75C8 (--1-$basic_stringbuf@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UEAA@XZ.c)
 */

__int64 __fastcall std::ostringstream::~ostringstream(__int64 a1)
{
  __int64 v2; // rdx

  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 - 136) + 4LL) + a1 - 136) = &std::ostringstream::`vftable';
  v2 = *(int *)(*(_QWORD *)(a1 - 136) + 4LL);
  *(_DWORD *)(v2 + a1 - 140) = v2 - 136;
  std::stringbuf::~stringbuf(a1 - 128);
  return std::ostream::~ostream<char,std::char_traits<char>>(a1 - 120);
}
