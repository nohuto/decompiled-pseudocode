/*
 * XREFs of ObpIncrPointerCountEx @ 0x14041EF10
 * Callers:
 *     ObInitializeFastReference @ 0x140A7BD9C (ObInitializeFastReference.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall ObpIncrPointerCountEx(volatile signed __int64 *a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  v2 = a2;
  v3 = _InterlockedExchangeAdd64(a1, a2);
  if ( v3 <= 0 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(a1 + 6), 0x10uLL, v2 + v3);
  return v2 + v3;
}
