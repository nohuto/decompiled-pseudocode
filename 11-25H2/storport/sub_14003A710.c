/*
 * XREFs of sub_14003A710 @ 0x14003A710
 * Callers:
 *     sub_140014460 @ 0x140014460 (sub_140014460.c)
 *     sub_140091390 @ 0x140091390 (sub_140091390.c)
 *     sub_14009281C @ 0x14009281C (sub_14009281C.c)
 * Callees:
 *     sub_140015BC8 @ 0x140015BC8 (sub_140015BC8.c)
 *     sub_14003A894 @ 0x14003A894 (sub_14003A894.c)
 *     sub_14005A278 @ 0x14005A278 (sub_14005A278.c)
 *     sub_1400BB79C @ 0x1400BB79C (sub_1400BB79C.c)
 */

void __fastcall sub_14003A710(__int64 a1)
{
  __int64 v2; // rcx

  sub_14003A894();
  if ( (*(_BYTE *)(a1 + 506) & 1) != 0 && qword_140168DD8 == a1 )
    sub_1400BB79C();
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 && a1 == *(_QWORD *)(v2 + 5016) )
    *(_QWORD *)(v2 + 5016) = 0LL;
  if ( *(_QWORD *)(a1 + 24)
    && *(_BYTE *)(a1 + 3368)
    && _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3400), 0, 1) == 1 )
  {
    sub_14005A278(*(_QWORD *)(a1 + 24));
  }
  sub_140015BC8(a1);
  if ( *(_QWORD *)(a1 + 1968) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 1960));
  if ( *(_QWORD *)(a1 + 3544) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 3536));
  if ( *(_QWORD *)(a1 + 2088) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 2080));
  IoDeleteDevice(*(PDEVICE_OBJECT *)(a1 + 8));
}
