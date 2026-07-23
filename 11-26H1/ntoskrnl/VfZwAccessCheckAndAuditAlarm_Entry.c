/*
 * XREFs of VfZwAccessCheckAndAuditAlarm_Entry @ 0x140C38110
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140C26580 (ViZwCheckVirtualAddress.c)
 *     ViZwCheckUnicodeString @ 0x140C39180 (ViZwCheckUnicodeString.c)
 *     ViZwShouldCheck @ 0x140C4DB94 (ViZwShouldCheck.c)
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
