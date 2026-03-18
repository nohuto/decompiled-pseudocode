/*
 * XREFs of ObReferenceObjectExWithTag @ 0x14044E6F0
 * Callers:
 *     ObpCreateHandle @ 0x14092CA60 (ObpCreateHandle.c)
 *     MiCreateImageOrDataSection @ 0x1409BAFEC (MiCreateImageOrDataSection.c)
 *     PspInsertThread @ 0x140A026D0 (PspInsertThread.c)
 * Callees:
 *     ObpTraceObjectReferenceIfActive @ 0x140278BB0 (ObpTraceObjectReferenceIfActive.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall ObReferenceObjectExWithTag(ULONG_PTR BugCheckParameter2, int a2, unsigned int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // rdx
  unsigned __int64 result; // rax

  v3 = a2;
  ObpTraceObjectReferenceIfActive(BugCheckParameter2 - 48, a2, a3);
  v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 48), v3);
  result = v5 + v3;
  if ( v5 <= 0 )
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x10uLL, v5 + v3);
  return result;
}
