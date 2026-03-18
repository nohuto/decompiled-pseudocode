/*
 * XREFs of MiVaIsUltra @ 0x1403385D0
 * Callers:
 *     MiClearMappingAndDereferenceIoSpace @ 0x140282A34 (MiClearMappingAndDereferenceIoSpace.c)
 *     MiTranslatePageForCopy @ 0x140338D4C (MiTranslatePageForCopy.c)
 *     MiPrefetchVirtualMemory @ 0x1403A0710 (MiPrefetchVirtualMemory.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVaIsUltra(unsigned __int64 a1)
{
  return qword_140E34BB0 && a1 >= qword_140E34BB0 && a1 < qword_140E34BB0 + (qword_140E34BC0 << 30);
}
