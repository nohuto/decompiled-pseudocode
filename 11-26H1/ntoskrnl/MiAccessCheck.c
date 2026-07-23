/*
 * XREFs of MiAccessCheck @ 0x1403A8730
 * Callers:
 *     MiUserFault @ 0x1403A4EA0 (MiUserFault.c)
 *     MiDispatchFault @ 0x1403A5BC0 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x1403A7B0C (MiResolveProtoPteFault.c)
 * Callees:
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiLockTransitionLeafPageEx @ 0x1403400D0 (MiLockTransitionLeafPageEx.c)
 *     MiAllowGuardFault @ 0x1403A8A00 (MiAllowGuardFault.c)
 */

__int64 __fastcall MiAccessCheck(ULONG_PTR BugCheckParameter2, __int64 a2, char a3, int a4, __int64 a5, char a6)
{
  __int64 PteShadow; // rbx
  char v9; // si
  __int64 v11; // rax
  _KPROCESS *Process; // rdx
  unsigned __int64 KernelWaitTime; // r8
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r9
  unsigned __int64 v17; // rax

  if ( a3 == 1 && (BugCheckParameter2 > 0xFFFFF6BFFFFFFF78uLL || BugCheckParameter2 < 0xFFFFF68000000000uLL) )
    return 3221225477LL;
  PteShadow = *(_QWORD *)BugCheckParameter2;
  if ( BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL && BugCheckParameter2 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v11 = *(_QWORD *)BugCheckParameter2;
    if ( (PteShadow & 1) == 0 )
      goto LABEL_6;
    if ( ((PteShadow & 0x20) == 0 || (PteShadow & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        KernelWaitTime = Process[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v14 = *(_QWORD *)(KernelWaitTime + 8 * ((BugCheckParameter2 >> 3) & 0x1FF));
          if ( (v14 & 0x20) != 0 )
            v11 = PteShadow | 0x20;
          PteShadow = v11 | 0x42;
          if ( (v14 & 0x42) == 0 )
            PteShadow = v11;
        }
      }
    }
  }
  if ( (PteShadow & 1) != 0 )
  {
    if ( !a2 || (PteShadow & 0xA00) != 0 )
      return 0LL;
    return 3221225477LL;
  }
LABEL_6:
  v9 = a4;
  if ( *((char *)&MiReadWrite + (a4 & 7)) - (a2 != 0) < 10 )
    return 3221225477LL;
  if ( (a4 & 0xFFFFFFF8) != 0x10 || (a5 & 1) != 0 && *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    return 0LL;
  if ( !(unsigned int)MiAllowGuardFault() )
    return 3221225477LL;
  if ( (PteShadow & 0xC00) != 0x800 )
  {
    *(_QWORD *)BugCheckParameter2 = PteShadow & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v9 & 0xF));
    return 2147483649LL;
  }
  if ( a6 )
  {
    v17 = PteShadow;
    if ( qword_140E2D8C0 && (PteShadow & 0x10) == 0 )
      v17 = PteShadow & qword_140E2D8C8;
    v16 = 48 * ((v17 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  }
  else
  {
    v15 = MiLockTransitionLeafPageEx(BugCheckParameter2, 0LL, 0);
    PteShadow = *(_QWORD *)BugCheckParameter2;
    v16 = v15;
    if ( BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL && BugCheckParameter2 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(BugCheckParameter2, *(_QWORD *)BugCheckParameter2);
    if ( v16 )
      *(_QWORD *)(v16 + 16) = *(_QWORD *)(v16 + 16) & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v9 & 0xF));
  }
  *(_QWORD *)BugCheckParameter2 = PteShadow & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v9 & 0xF));
  if ( a6 || !v16 )
    return 2147483649LL;
  _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return 2147483649LL;
}
