/*
 * XREFs of VfZwAccessCheckAndAuditAlarm_Entry @ 0x140C32100
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140C20574 (ViZwCheckVirtualAddress.c)
 *     ViZwCheckUnicodeString @ 0x140C33170 (ViZwCheckUnicodeString.c)
 *     ViZwShouldCheck @ 0x140C47B84 (ViZwShouldCheck.c)
 */

void __fastcall VfZwAccessCheckAndAuditAlarm_Entry(__int64 a1)
{
  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckUnicodeString(*(_QWORD *)(a1 + 88), *(_QWORD *)a1);
    ViZwCheckUnicodeString(*(_QWORD *)(a1 + 72), *(_QWORD *)a1);
    ViZwCheckUnicodeString(*(_QWORD *)(a1 + 64), *(_QWORD *)a1);
    ViZwCheckVirtualAddress(*(_QWORD *)(a1 + 56), *(_QWORD *)a1);
    ViZwCheckVirtualAddress(*(_QWORD *)(a1 + 40), *(_QWORD *)a1);
    ViZwCheckVirtualAddress(*(_QWORD *)(a1 + 24), *(_QWORD *)a1);
    ViZwCheckVirtualAddress(*(_QWORD *)(a1 + 8), *(_QWORD *)a1);
  }
}
