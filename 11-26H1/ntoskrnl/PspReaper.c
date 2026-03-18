/*
 * XREFs of PspReaper @ 0x140410640
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     KeDeleteThread @ 0x1404106F4 (KeDeleteThread.c)
 *     KeEnumerateKernelStackSegments @ 0x1404107D8 (KeEnumerateKernelStackSegments.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

signed __int64 PspReaper()
{
  _QWORD *v0; // rbx
  volatile signed __int32 *v1; // rdi
  void *v2; // rcx
  signed __int64 result; // rax

  do
  {
    v0 = (_QWORD *)_InterlockedExchange64(
                     (volatile __int64 *)&PsAltSystemCallRegistrationLock.WaitBlock[0].WaitListEntry.Blink,
                     1LL);
    do
    {
      v1 = (volatile signed __int32 *)(v0 - 157);
      KeDeleteThread(v0 - 157);
      v2 = (void *)v0[39];
      if ( v2 )
      {
        ExFreePoolWithTag(v2, 0);
        *((_QWORD *)v1 + 196) = 0LL;
      }
      if ( _InterlockedExchangeAdd(v1 + 379, 0xFFFFFFFF) == 1 )
      {
        KeEnumerateKernelStackSegments(v0 - 157, PspDeleteKernelStack, 0LL);
        *((_QWORD *)v1 + 5) = 0LL;
      }
      v0 = (_QWORD *)*v0;
      ObfDereferenceObjectWithTag((PVOID)v1, 0x746C6644u);
    }
    while ( v0 && v0 != (_QWORD *)1 );
    result = _InterlockedCompareExchange64(
               (volatile signed __int64 *)&PsAltSystemCallRegistrationLock.WaitBlock[0].WaitListEntry.Blink,
               0LL,
               1LL);
  }
  while ( result != 1 );
  return result;
}
