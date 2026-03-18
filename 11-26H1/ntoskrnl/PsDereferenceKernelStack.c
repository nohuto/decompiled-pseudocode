/*
 * XREFs of PsDereferenceKernelStack @ 0x140B29F50
 * Callers:
 *     <none>
 * Callees:
 *     KeEnumerateKernelStackSegments @ 0x1404107D8 (KeEnumerateKernelStackSegments.c)
 */

__int64 __fastcall PsDereferenceKernelStack(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1516), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    result = KeEnumerateKernelStackSegments(a1);
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  return result;
}
