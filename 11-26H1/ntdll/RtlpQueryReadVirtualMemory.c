/*
 * XREFs of RtlpQueryReadVirtualMemory @ 0x1800D46A0
 * Callers:
 *     <none>
 * Callees:
 *     ZwReadVirtualMemory @ 0x18015F620 (ZwReadVirtualMemory.c)
 */

__int64 __fastcall RtlpQueryReadVirtualMemory(void *a1, void *a2, void *a3, SIZE_T a4, PSIZE_T NumberOfBytesRead)
{
  NTSTATUS VirtualMemory; // ecx
  __int64 result; // rax

  VirtualMemory = ZwReadVirtualMemory(a1, a2, a3, a4, NumberOfBytesRead);
  if ( VirtualMemory < 0 )
  {
    *NumberOfBytesRead = 0LL;
    return (unsigned int)VirtualMemory;
  }
  else
  {
    result = 0LL;
    if ( *NumberOfBytesRead != a4 )
      return 2147483661LL;
  }
  return result;
}
