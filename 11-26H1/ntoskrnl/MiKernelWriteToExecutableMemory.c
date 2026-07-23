/*
 * XREFs of MiKernelWriteToExecutableMemory @ 0x14070424C
 * Callers:
 *     MiValidFault @ 0x1403A9098 (MiValidFault.c)
 * Callees:
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MmIsAddressValidEx @ 0x140350050 (MmIsAddressValidEx.c)
 *     MiRelockFaultState @ 0x14038DE50 (MiRelockFaultState.c)
 *     MiReleaseFaultState @ 0x14038FB40 (MiReleaseFaultState.c)
 *     NtWaitLowEventPair @ 0x14077FD00 (NtWaitLowEventPair.c)
 *     PsForceCrashForInvalidAccess @ 0x140802B70 (PsForceCrashForInvalidAccess.c)
 */

__int64 __fastcall MiKernelWriteToExecutableMemory(__int64 a1, __int64 a2, struct _KPROCESS *a3, __int64 a4)
{
  volatile _KAFFINITY_EX *ActiveProcessors; // r13
  __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r12
  __int64 v11; // rbp
  HANDLE v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // ebx
  __int64 v15; // r8
  __int64 v16; // rdx
  _KPROCESS *v17; // rax
  __int64 v18; // r8
  unsigned __int64 KernelWaitTime; // rax
  __int64 v20; // rax

  ActiveProcessors = a3[2].ActiveProcessors;
  v8 = a1 + 56;
  v9 = ((*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = ActiveProcessors[6].Bitmap[0];
  v11 = MiReleaseFaultState(a1 + 56, 0x11u, 0LL, a4);
  if ( NtWaitLowEventPair(v12) >= 0 )
  {
    MiRelockFaultState(v8, v11, v13);
    if ( v10 == ActiveProcessors[6].Bitmap[0] && ((*(_BYTE *)(a1 + 69) & 1) == 0 || MmIsAddressValidEx(v9)) )
    {
      v16 = *(_QWORD *)v9;
      if ( v9 >= 0xFFFFF6FB7DBED000uLL
        && v9 <= 0xFFFFF6FB7DBED7F8uLL
        && (v16 & 1) != 0
        && ((v16 & 0x20) == 0 || (v16 & 0x42) == 0) )
      {
        v17 = MiPteHasShadow();
        if ( v17 )
        {
          KernelWaitTime = v17[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v20 = *(_QWORD *)(KernelWaitTime + 8 * ((v9 >> 3) & 0x1FF));
            if ( (v20 & 0x20) != 0 )
              v18 |= 0x20uLL;
            v16 = v18 | 0x42;
            if ( (v20 & 0x42) == 0 )
              v16 = v18;
          }
        }
      }
      return ((a2 ^ v16) & 0xFFFFFFFFFFFFFFDFuLL) != 0 ? 0xC0000434 : 0;
    }
    else
    {
      return (unsigned int)-1073740748;
    }
  }
  else
  {
    PsForceCrashForInvalidAccess(a3);
    v14 = -1073739997;
    MiRelockFaultState(v8, v11, v15);
  }
  return v14;
}
