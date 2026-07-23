/*
 * XREFs of MiMakeTransitionPteValid @ 0x1402E5640
 * Callers:
 *     MiProtoFaultApplyPrivateFixups @ 0x1402BC040 (MiProtoFaultApplyPrivateFixups.c)
 *     MiCompleteTransitionPfnFault @ 0x1402E40B0 (MiCompleteTransitionPfnFault.c)
 *     MiResolveProtoCombine @ 0x1402EAA7C (MiResolveProtoCombine.c)
 *     MiHardFaultPageRelease @ 0x14031E950 (MiHardFaultPageRelease.c)
 *     MiIssueHardFault @ 0x14038F100 (MiIssueHardFault.c)
 *     MiProtectAweTransitionPte @ 0x140706E24 (MiProtectAweTransitionPte.c)
 * Callees:
 *     MiUserPdeOrAbove @ 0x1402A0990 (MiUserPdeOrAbove.c)
 */

unsigned __int64 __fastcall MiMakeTransitionPteValid(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // rax
  int v7; // ecx
  unsigned __int64 v9; // rdi
  __int64 v10; // rax
  _KPROCESS *Process; // rdx
  unsigned __int64 KernelWaitTime; // r8
  __int64 v13; // rcx

  v1 = *(_QWORD *)a1;
  if ( a1 >= 0xFFFFF6FB7DBED000uLL && a1 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v10 = *(_QWORD *)a1;
    if ( (v1 & 1) != 0 && ((v1 & 0x20) == 0 || (v1 & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        KernelWaitTime = Process[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v13 = *(_QWORD *)(KernelWaitTime + 8 * ((a1 >> 3) & 0x1FF));
          if ( (v13 & 0x20) != 0 )
            v10 = v1 | 0x20;
          v1 = v10 | 0x42;
          if ( (v13 & 0x42) == 0 )
            v1 = v10;
        }
      }
    }
  }
  v3 = v1;
  if ( qword_140E2D8C0 && (v1 & 0x10) == 0 )
    v3 = v1 & qword_140E2D8C8;
  v4 = v3 & 0xFFFFFFFFFF000LL | MmProtectToPteMask[(v1 >> 5) & 0x1F] & 0xFFF0000000000E7FuLL | 0x21;
  if ( a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v5 = v4 | 0x100;
    return v5 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  }
  if ( a1 >= 0xFFFFF6FB40000000uLL && a1 <= 0xFFFFF6FB7FFFFFFFuLL )
  {
    if ( a1 == 0xFFFFF6FB7DBEDF68uLL )
      v4 |= 0x8000000000000000uLL;
    else
      v4 &= ~0x8000000000000000uLL;
    if ( (unsigned int)MiUserPdeOrAbove(a1) )
      v4 |= 4uLL;
  }
  v9 = (__int64)(a1 << 25) >> 16;
  if ( v9 < 0x7FFFFFFF0000LL )
  {
    v6 = v4 | 4;
  }
  else
  {
    v6 = v4;
    if ( v9 >= 0xFFFF800000000000uLL )
    {
      if ( v9 < 0xFFFFF68000000000uLL || v9 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        if ( v9 < qword_140E2DFC0 || (v7 = BYTE5(stru_140E2DAB0.Header.WaitListHead.Blink), v9 > qword_140E2DFD0) )
          v7 = BYTE4(stru_140E2DAB0.Header.WaitListHead.Blink);
        v6 = v4;
      }
      else
      {
        v7 = 0;
        v6 = v4;
      }
      goto LABEL_9;
    }
  }
  v7 = BYTE5(stru_140E2DAB0.Header.WaitListHead.Blink);
LABEL_9:
  v5 = v6 | 0x100;
  if ( !v7 )
    v5 = v6;
  return v5 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
}
