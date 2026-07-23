/*
 * XREFs of MiDecreaseUsedPtes @ 0x1403410A0
 * Callers:
 *     MiSectionProtectPageFilePte @ 0x1402B16A8 (MiSectionProtectPageFilePte.c)
 *     MiDeleteSystemPageTable @ 0x1402EBAE0 (MiDeleteSystemPageTable.c)
 *     MiSectionProtectTransitionPte @ 0x140340FE0 (MiSectionProtectTransitionPte.c)
 *     MiUpdateAwePageTable @ 0x140342494 (MiUpdateAwePageTable.c)
 *     MiDeleteShadowStackPtes @ 0x140342874 (MiDeleteShadowStackPtes.c)
 *     MiFillPoolCommitPageTable @ 0x140367040 (MiFillPoolCommitPageTable.c)
 *     MiDecommitLargePoolVa @ 0x1403CD620 (MiDecommitLargePoolVa.c)
 *     MiUnmapKernelScp @ 0x1404F0274 (MiUnmapKernelScp.c)
 *     MiUnmapMdlCommon @ 0x14051F5C4 (MiUnmapMdlCommon.c)
 *     MiMarkBootGuardPage @ 0x140703ED4 (MiMarkBootGuardPage.c)
 *     MiInitializeBootShadowStackPage @ 0x140D02594 (MiInitializeBootShadowStackPage.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiInitializeUsedPtesCount @ 0x140342440 (MiInitializeUsedPtesCount.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDecreaseUsedPtes(__int64 a1, unsigned __int64 a2, _KPROCESS *Process)
{
  unsigned __int64 v3; // rax
  ULONG_PTR BugCheckParameter4; // rsi
  ULONG_PTR v6; // rbx
  unsigned int v7; // edi
  __int64 v8; // r9
  ULONG_PTR v9; // r9
  __int64 v10; // rcx
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v12; // rdx
  unsigned int v13; // r9d

  v3 = *(_QWORD *)a2;
  BugCheckParameter4 = (unsigned int)Process;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v10 = *(_QWORD *)a2;
    if ( (v3 & 1) != 0 && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        KernelWaitTime = Process[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v12 = *(_QWORD *)(KernelWaitTime + 8 * ((a2 >> 3) & 0x1FF));
          if ( (v12 & 0x20) != 0 )
            v10 = v3 | 0x20;
          v3 = v10 | 0x42;
          if ( (v12 & 0x42) == 0 )
            v3 = v10;
        }
      }
    }
  }
  v6 = 48 * ((v3 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v7 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v7 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v7);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v6 + 24) < 0 );
  }
  if ( (*(_DWORD *)(v6 + 36) & 0x4000000) != 0 )
    v8 = *(_QWORD *)v6 >> 36;
  else
    v8 = *(_QWORD *)(v6 + 16) >> 17;
  v9 = v8 & 0x3FF;
  if ( (unsigned int)v9 < (unsigned int)BugCheckParameter4 )
    KeBugCheckEx(0x1Au, 0x41790uLL, v6, v9, BugCheckParameter4);
  MiInitializeUsedPtesCount(
    v6,
    (unsigned int)(v9 - BugCheckParameter4),
    Process,
    (unsigned int)(v9 - BugCheckParameter4));
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v13;
}
