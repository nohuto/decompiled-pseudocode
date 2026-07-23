/*
 * XREFs of KeQueryGroupMaskProcess @ 0x1404939A4
 * Callers:
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 *     MmCreatePeb @ 0x140ACC600 (MmCreatePeb.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall KeQueryGroupMaskProcess(_OWORD *a1, __int64 a2)
{
  _OWORD *result; // rax

  result = a1;
  *a1 = *(_OWORD *)(a2 + 152);
  return result;
}
