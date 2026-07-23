/*
 * XREFs of MiGetVaAge @ 0x14029BC40
 * Callers:
 *     MiActOnValidPte @ 0x140296698 (MiActOnValidPte.c)
 *     MiUpdateWsleAge @ 0x14029B680 (MiUpdateWsleAge.c)
 *     MiResetAccessBitPteWorker @ 0x14029BA28 (MiResetAccessBitPteWorker.c)
 *     MiCountWslesInPageTableRange @ 0x14029D9E0 (MiCountWslesInPageTableRange.c)
 *     MiProcessWsInSwapFault @ 0x14029E50C (MiProcessWsInSwapFault.c)
 * Callees:
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 */

char __fastcall MiGetVaAge(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 v3; // rax
  __int64 v5; // rcx
  _KPROCESS *Process; // r9
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v8; // rdx
  unsigned __int64 *v9; // r9
  unsigned __int64 v10; // rdx
  __int64 HasShadow; // rax
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rax

  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v3 = *(_QWORD *)v2;
    if ( v2 >= 0xFFFFF6FB7DBED000uLL && v2 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v5 = *(_QWORD *)v2;
      if ( (v3 & 1) != 0 && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 )
        {
          KernelWaitTime = Process[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v8 = *(_QWORD *)(KernelWaitTime + 8 * ((v2 >> 3) & 0x1FF));
            if ( (v8 & 0x20) != 0 )
              HIBYTE(v5) = HIBYTE(*(_QWORD *)v2);
            HIBYTE(v3) = HIBYTE(v5);
            if ( (v8 & 0x42) == 0 )
              HIBYTE(v3) = HIBYTE(v5);
          }
        }
      }
    }
    return HIBYTE(v3) & 0xF;
  }
  else
  {
    v9 = (unsigned __int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v10 = *v9;
    if ( (unsigned __int64)v9 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)v9 <= 0xFFFFF6FB7DBED7F8uLL
      && (v10 & 1) != 0
      && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
    {
      HasShadow = MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v10, *v9);
      if ( HasShadow )
      {
        v14 = *(_QWORD *)(HasShadow + 1288);
        if ( v14 )
        {
          v15 = *(_QWORD *)(v14 + 8 * ((v13 >> 3) & 0x1FF));
          if ( (v15 & 0x20) != 0 )
            v12 |= 0x20uLL;
          v10 = v12 | 0x42;
          if ( (v15 & 0x42) == 0 )
            v10 = v12;
        }
      }
    }
    return (*(_QWORD *)(48 * ((v10 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL) >> 46) & 7;
  }
}
