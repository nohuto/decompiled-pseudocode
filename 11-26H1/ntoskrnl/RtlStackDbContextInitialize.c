/*
 * XREFs of RtlStackDbContextInitialize @ 0x140623368
 * Callers:
 *     ObpInitStackAndObjectTables @ 0x1407C4BE8 (ObpInitStackAndObjectTables.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *RtlStackDbContextInitialize())()
{
  __int64 (__fastcall *result)(); // rax

  qword_140F13210 = (__int64)ObpStackDbAllocRoutine;
  result = ObpStackDbFreeRoutine;
  qword_140F13218 = (__int64)ObpStackDbFreeRoutine;
  qword_140F131E0 = 0LL;
  qword_140F131E8 = 0LL;
  qword_140F131F0 = 0LL;
  qword_140F131F8 = 0LL;
  qword_140F13208 = 0LL;
  *(_QWORD *)&qword_140F13200.Header.Lock = 0LL;
  qword_140F13220 = 0LL;
  return result;
}
