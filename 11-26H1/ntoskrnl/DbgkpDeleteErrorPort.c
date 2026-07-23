/*
 * XREFs of DbgkpDeleteErrorPort @ 0x14078DA80
 * Callers:
 *     DbgkpDereferenceErrorPort @ 0x140534F5C (DbgkpDereferenceErrorPort.c)
 * Callees:
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall DbgkpDeleteErrorPort(HANDLE *P)
{
  ObCloseHandle(P[1], 0);
  ExFreePoolWithTag(P, 0);
}
