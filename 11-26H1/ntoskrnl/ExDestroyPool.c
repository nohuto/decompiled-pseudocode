/*
 * XREFs of ExDestroyPool @ 0x1406CBBF0
 * Callers:
 *     SmGlobalsStart @ 0x140C7F428 (SmGlobalsStart.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     ExpPoolDestroy @ 0x140846574 (ExpPoolDestroy.c)
 */

__int64 __fastcall ExDestroyPool(ULONG_PTR BugCheckParameter2)
{
  int v1; // eax

  if ( !BugCheckParameter2 )
    KeBugCheckEx(0xC2u, 0x9EuLL, 0LL, 0LL, 0LL);
  v1 = *(_DWORD *)(BugCheckParameter2 ^ qword_140E6BCA8 ^ (unsigned __int64)&dword_140E6BC60);
  if ( v1 == -1381122884 )
    KeBugCheckEx(
      0xC2u,
      0x10uLL,
      *(_QWORD *)((BugCheckParameter2 ^ qword_140E6BCA8 ^ (unsigned __int64)&dword_140E6BC60) + 8),
      0xFFFFFFFFC00000BBuLL,
      0LL);
  if ( v1 != -1347437123 )
    KeBugCheckEx(0xC2u, 0x9EuLL, BugCheckParameter2, 0LL, 0LL);
  return ExpPoolDestroy(BugCheckParameter2 ^ qword_140E6BCA8 ^ (unsigned __int64)&dword_140E6BC60, 0LL);
}
