/*
 * XREFs of DbgkpDeleteErrorPort @ 0x14078AF50
 * Callers:
 *     DbgkpDereferenceErrorPort @ 0x140532ABC (DbgkpDereferenceErrorPort.c)
 * Callees:
 *     ObCloseHandle @ 0x140A00740 (ObCloseHandle.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall DbgkpDeleteErrorPort(HANDLE *P)
{
  ObCloseHandle(P[1], 0);
  ExFreePoolWithTag(P, 0);
}
