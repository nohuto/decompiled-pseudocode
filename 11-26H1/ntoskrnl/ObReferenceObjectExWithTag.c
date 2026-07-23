/*
 * XREFs of ObReferenceObjectExWithTag @ 0x140446820
 * Callers:
 *     ObpCreateHandle @ 0x140908590 (ObpCreateHandle.c)
 *     MiCreateImageOrDataSection @ 0x14098BFCC (MiCreateImageOrDataSection.c)
 *     PspInsertThread @ 0x140A7B188 (PspInsertThread.c)
 * Callees:
 *     ObpTraceObjectReferenceIfActive @ 0x140278120 (ObpTraceObjectReferenceIfActive.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
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
