/*
 * XREFs of VfZwQueryValueKey_Entry @ 0x140C32EE0
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140C20574 (ViZwCheckVirtualAddress.c)
 *     ViZwCheckUnicodeString @ 0x140C33170 (ViZwCheckUnicodeString.c)
 *     ViZwShouldCheck @ 0x140C47B84 (ViZwShouldCheck.c)
 */

void __fastcall VfZwQueryValueKey_Entry(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (unsigned int)ViZwShouldCheck(a1, a2, a3) )
  {
    ViZwCheckUnicodeString(*(_QWORD *)(a1 + 40), *(_QWORD *)a1);
    ViZwCheckVirtualAddress(*(_QWORD *)(a1 + 24), *(_QWORD *)a1);
    ViZwCheckVirtualAddress(*(_QWORD *)(a1 + 8), *(_QWORD *)a1);
  }
}
