/*
 * XREFs of MiQueryVpabAccessedState @ 0x14045D66C
 * Callers:
 *     MiFastTrimWorkingSet @ 0x1403216C0 (MiFastTrimWorkingSet.c)
 *     MiAgeWorkingSetTail @ 0x14032AD10 (MiAgeWorkingSetTail.c)
 *     MiTrimWorkingSetTail @ 0x14045D050 (MiTrimWorkingSetTail.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x14045D220 (MiUpdateOldWorkingSetPagesTail.c)
 *     MiAgeTrimListsTail @ 0x14045D310 (MiAgeTrimListsTail.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x14027DCC8 (MiUnlockWorkingSetExclusive.c)
 *     MiReacquireWalkLocks @ 0x1402E32A0 (MiReacquireWalkLocks.c)
 *     MmIsAddressValidEx @ 0x140350050 (MmIsAddressValidEx.c)
 *     MiReleaseWalkLocks @ 0x140364CA0 (MiReleaseWalkLocks.c)
 *     VslQueryPrivilegedAccessedState @ 0x14045D810 (VslQueryPrivilegedAccessedState.c)
 *     VmpQueryAccessedState @ 0x14045D8F4 (VmpQueryAccessedState.c)
 *     MiLockWorkingSetExclusiveAtDpc @ 0x1404BCA10 (MiLockWorkingSetExclusiveAtDpc.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiQueryVpabAccessedState(__int64 a1, __int64 a2, int a3)
{
  unsigned int *v3; // rdi
  __int64 v5; // r15
  __int64 v7; // r9
  _KPROCESS *Process; // rcx
  _KPROCESS_SECURE_STATE *p_SecureState; // r14
  __int64 result; // rax

  v3 = *(unsigned int **)(a2 + 16);
  v5 = *(_QWORD *)(a1 + 56);
  MiReleaseWalkLocks(a1);
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 184LL) & 0xF) != 0 )
  {
    LOBYTE(v7) = a3 != 0;
    if ( (int)VslQueryPrivilegedAccessedState(0LL, v3 + 2, *v3, v7) < 0 )
      KeBugCheckEx(0x1Au, 0x51515uLL, (ULONG_PTR)(v3 + 2), *v3, 0LL);
  }
  else
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process[3].ProcessListEntry.Blink )
    {
      VmpQueryAccessedState((PEX_SPIN_LOCK)KeGetCurrentThread()->ApcState.Process[3].ProcessListEntry.Blink);
    }
    else
    {
      p_SecureState = &Process->SecureState;
      if ( (Process->SecureState.EntireField & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
      {
        LOBYTE(v7) = a3 != 0;
        if ( (int)VslQueryPrivilegedAccessedState(
                    Process->SecureState.EntireField & 0xFFFFFFFFFFFFFFFCuLL & -(__int64)(Process != 0LL),
                    v3 + 2,
                    *v3,
                    v7) < 0 )
          KeBugCheckEx(0x1Au, 0x51515uLL, (ULONG_PTR)(v3 + 2), *v3, p_SecureState->EntireField & 0xFFFFFFFFFFFFFFFCuLL);
      }
    }
  }
  if ( (*(_DWORD *)a1 & 4) == 0 )
  {
    MiLockWorkingSetExclusiveAtDpc(*(_QWORD *)(a1 + 32));
    if ( MmIsAddressValidEx(((*((_QWORD *)v3 + 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) )
    {
      *(_DWORD *)(a1 + 4) &= ~1u;
      return 1LL;
    }
    MiUnlockWorkingSetExclusive(*(_QWORD *)(a1 + 32), 0x11u);
    result = 0LL;
LABEL_14:
    *v3 = 0;
    return result;
  }
  result = MiReacquireWalkLocks(a1, v5, 0LL);
  if ( !(_DWORD)result )
    goto LABEL_14;
  return result;
}
