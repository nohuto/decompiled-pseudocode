/*
 * XREFs of EngAllocUserMem @ 0x140072DC0
 * Callers:
 *     <none>
 * Callees:
 *     EngAllocUserMemEx @ 0x140072DE8 (EngAllocUserMemEx.c)
 */

PVOID __stdcall EngAllocUserMem(SIZE_T cjMemSize, ULONG ulTag)
{
  void *v3; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  EngAllocUserMemEx(cjMemSize, ulTag, &v3);
  return v3;
}
