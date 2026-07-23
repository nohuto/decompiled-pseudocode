/*
 * XREFs of LdrpTouchThreadStack @ 0x1800CC49C
 * Callers:
 *     _LdrpInitialize @ 0x1800CC6B8 (_LdrpInitialize.c)
 * Callees:
 *     LdrpGenericExceptionFilter @ 0x18015B628 (LdrpGenericExceptionFilter.c)
 *     ZwQueryVirtualMemory @ 0x18015F2A0 (ZwQueryVirtualMemory.c)
 */

NTSTATUS __fastcall LdrpTouchThreadStack(unsigned __int64 a1)
{
  struct _TEB *v2; // rdi
  NTSTATUS result; // eax
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  _QWORD MemoryInformation[8]; // [rsp+38h] [rbp-40h] BYREF
  ULONG_PTR ReturnLength; // [rsp+88h] [rbp+10h] BYREF

  memset(MemoryInformation, 0, 48);
  ReturnLength = 0LL;
  v2 = NtCurrentTeb();
  result = ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             v2->NtTib.StackLimit,
             MemoryBasicInformation,
             MemoryInformation,
             0x30uLL,
             &ReturnLength);
  if ( result >= 0 )
  {
    v4 = (unsigned __int64)v2->NtTib.StackBase - 4096;
    if ( v4 > a1 )
    {
      v5 = v4 - a1;
      if ( v4 - a1 <= MemoryInformation[1] + 12288LL )
        v5 = MemoryInformation[1] + 12288LL;
    }
    else
    {
      v5 = MemoryInformation[1] + 12288LL;
    }
    while ( v4 >= v5 )
      v4 -= 4096LL;
    return 0;
  }
  return result;
}
