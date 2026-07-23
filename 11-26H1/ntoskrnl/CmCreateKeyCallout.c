/*
 * XREFs of CmCreateKeyCallout @ 0x1409368B0
 * Callers:
 *     NtCreateKeyTransacted @ 0x1409363A0 (NtCreateKeyTransacted.c)
 *     NtCreateKey @ 0x140A88920 (NtCreateKey.c)
 * Callees:
 *     CmCreateKey @ 0x140936900 (CmCreateKey.c)
 */

void __fastcall CmCreateKeyCallout(_QWORD *Parameter)
{
  *(_DWORD *)Parameter = CmCreateKey(Parameter[1], *((unsigned int *)Parameter + 4), Parameter[3]);
}
