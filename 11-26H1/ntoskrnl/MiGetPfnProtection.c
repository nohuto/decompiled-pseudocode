/*
 * XREFs of MiGetPfnProtection @ 0x1404290C0
 * Callers:
 *     MiSectionProtectValidPte @ 0x1402E64E0 (MiSectionProtectValidPte.c)
 *     MiGetPageProtection @ 0x1402E8264 (MiGetPageProtection.c)
 *     MiRevokeExecutePte @ 0x140428F80 (MiRevokeExecutePte.c)
 *     MiQueryPteAddResidentAttributes @ 0x1404E2D34 (MiQueryPteAddResidentAttributes.c)
 * Callees:
 *     MiLocateCloneAddress @ 0x14036D7EC (MiLocateCloneAddress.c)
 */

unsigned __int64 __fastcall MiGetPfnProtection(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 result; // rax
  __int64 v9; // rbx
  _KPROCESS *v10; // rcx
  _KPROCESS *Process; // rdx
  unsigned __int64 KernelWaitTime; // r8
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  _KPROCESS *v16; // r11
  unsigned __int64 v17; // r8
  __int64 v18; // r8

  v4 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = *(_QWORD *)v4;
  if ( v4 < 0xFFFFF6FB7DBED000uLL || v4 > 0xFFFFF6FB7DBED7F8uLL )
  {
    v6 = *(_QWORD *)v4;
    v7 = v5 >> 60;
  }
  else
  {
    if ( (v5 & 1) != 0 && ((v5 & 0x20) == 0 || (v5 & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        KernelWaitTime = Process[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v13 = *(_QWORD *)(KernelWaitTime + 8 * ((v4 >> 3) & 0x1FF));
          if ( (v13 & 0x20) != 0 )
            v5 |= 0x20uLL;
          v14 = v5 | 0x42;
          if ( (v13 & 0x42) == 0 )
            v14 = v5;
          v5 = v14;
        }
      }
    }
    v6 = *(_QWORD *)v4;
    v7 = v5 >> 60;
    v15 = *(_QWORD *)v4;
    if ( (*(_QWORD *)v4 & 1) != 0 && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
    {
      v16 = KeGetCurrentThread()->ApcState.Process;
      if ( v16->AddressPolicy != 1 )
      {
        v17 = v16[2].KernelWaitTime;
        if ( v17 )
        {
          v18 = *(_QWORD *)(v17 + 8 * ((v4 >> 3) & 0x1FF));
          if ( (v18 & 0x20) != 0 )
            LOBYTE(v15) = v6 | 0x20;
          LOBYTE(v6) = v15 | 0x42;
          if ( (v18 & 0x42) == 0 )
            LOBYTE(v6) = v15;
        }
      }
    }
  }
  result = v7 & 7;
  if ( (_DWORD)result )
  {
    if ( (v6 & 0x18) == 8 )
    {
      return (unsigned int)result | 0x18;
    }
    else if ( (v6 & 0x10) != 0 )
    {
      return (unsigned int)result | 8;
    }
  }
  else
  {
    v9 = (*(_DWORD *)(a3 + 16) >> 5) & 0x1F;
    if ( *(__int64 *)(a3 + 8) <= 0 || (*(_QWORD *)(a3 + 40) & 0x10000000000LL) != 0 )
    {
      v10 = KeGetCurrentThread()->ApcState.Process;
      if ( v10[1].IdealProcessorAssignmentBlock )
      {
        if ( MiLocateCloneAddress((__int64)v10, *(_QWORD *)(a3 + 8) | 0x8000000000000000uLL) )
          LODWORD(v9) = MmMakeProtectNotWriteCopy[v9];
      }
      return (unsigned int)v9;
    }
    else
    {
      return (unsigned int)MmMakeProtectNotWriteCopy[v9];
    }
  }
  return result;
}
