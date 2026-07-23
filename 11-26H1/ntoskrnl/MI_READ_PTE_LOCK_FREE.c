/*
 * XREFs of MI_READ_PTE_LOCK_FREE @ 0x1404044B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MI_READ_PTE_LOCK_FREE(unsigned __int64 a1)
{
  __int64 result; // rax
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx

  result = *(_QWORD *)a1;
  if ( a1 >= 0xFFFFF6FB7DBED000uLL
    && a1 <= 0xFFFFF6FB7DBED7F8uLL
    && (result & 1) != 0
    && ((result & 0x20) == 0 || (result & 0x42) == 0)
    && (MiFlags & 0x1800000) != 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process->AddressPolicy != 1 )
    {
      KernelWaitTime = Process[2].KernelWaitTime;
      if ( KernelWaitTime )
      {
        v4 = *(_QWORD *)(KernelWaitTime + 8 * ((a1 >> 3) & 0x1FF));
        if ( (v4 & 0x20) != 0 )
          result |= 0x20uLL;
        v5 = result | 0x42;
        if ( (v4 & 0x42) == 0 )
          return result;
        return v5;
      }
    }
  }
  return result;
}
