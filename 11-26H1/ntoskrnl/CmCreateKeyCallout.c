/*
 * XREFs of CmCreateKeyCallout @ 0x1409748A0
 * Callers:
 *     NtCreateKeyTransacted @ 0x140974390 (NtCreateKeyTransacted.c)
 *     NtCreateKey @ 0x140A82AB0 (NtCreateKey.c)
 * Callees:
 *     CmCreateKey @ 0x1409748F0 (CmCreateKey.c)
 */

void __fastcall CmCreateKeyCallout(_QWORD *Parameter)
{
  *(_DWORD *)Parameter = CmCreateKey(Parameter[1], *((unsigned int *)Parameter + 4), Parameter[3]);
}
