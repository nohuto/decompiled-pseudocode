/*
 * XREFs of PiClearDeviceObjectList @ 0x1409B4BCC
 * Callers:
 *     PiAllocateDeviceObjectList @ 0x1409B4B00 (PiAllocateDeviceObjectList.c)
 *     PipFreeDeviceObjectList @ 0x1409B5B6C (PipFreeDeviceObjectList.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void *__fastcall PiClearDeviceObjectList(_DWORD *a1)
{
  __int64 i; // rdi
  void *result; // rax

  for ( i = 0LL; (unsigned int)i < *a1; i = (unsigned int)(i + 1) )
    ObfDereferenceObjectWithTag(*(PVOID *)&a1[6 * i + 4], 0x4C706E50u);
  result = memset_0(a1 + 4, 0, 24LL * (unsigned int)a1[1]);
  *a1 = 0;
  a1[2] = 0;
  return result;
}
