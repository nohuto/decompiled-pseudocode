/*
 * XREFs of MiReducePteUseCount @ 0x1403631B0
 * Callers:
 *     MiDecommitPages @ 0x140361EF0 (MiDecommitPages.c)
 *     MiDeleteVaTail @ 0x140363010 (MiDeleteVaTail.c)
 *     MiDecommitPagesTail @ 0x1404438DC (MiDecommitPagesTail.c)
 *     MiClearDriverTablePtes @ 0x1404FF898 (MiClearDriverTablePtes.c)
 * Callees:
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiInitializeUsedPtesCount @ 0x140342440 (MiInitializeUsedPtesCount.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiReducePteUseCount(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  ULONG_PTR BugCheckParameter4; // rbp
  unsigned __int64 *v4; // r9
  unsigned __int64 v5; // rdx
  __int64 v6; // rbx
  unsigned int v7; // esi
  unsigned int v8; // edi
  __int64 v9; // r9
  ULONG_PTR v10; // r9
  _KPROCESS *v11; // rax
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r9
  unsigned __int64 KernelWaitTime; // rax
  __int64 v15; // rax
  int v16; // r9d

  BugCheckParameter4 = a3;
  v4 = (unsigned __int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v5 = *v4;
  if ( (unsigned __int64)v4 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)v4 <= 0xFFFFF6FB7DBED7F8uLL
    && (v5 & 1) != 0
    && ((v5 & 0x20) == 0 || (v5 & 0x42) == 0) )
  {
    v11 = MiPteHasShadow();
    if ( v11 )
    {
      KernelWaitTime = v11[2].KernelWaitTime;
      if ( KernelWaitTime )
      {
        v15 = *(_QWORD *)(KernelWaitTime + 8 * ((v13 >> 3) & 0x1FF));
        if ( (v15 & 0x20) != 0 )
          v12 |= 0x20uLL;
        v5 = v12 | 0x42;
        if ( (v15 & 0x42) == 0 )
          v5 = v12;
      }
    }
  }
  v6 = 48 * ((v5 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v7 = 0;
  v8 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v8 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v8);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v6 + 24) < 0 );
  }
  if ( (*(_DWORD *)(v6 + 36) & 0x4000000) != 0 )
    v9 = *(_QWORD *)v6 >> 36;
  else
    v9 = *(_QWORD *)(v6 + 16) >> 17;
  v10 = v9 & 0x3FF;
  if ( (unsigned int)v10 < (unsigned int)BugCheckParameter4 )
    KeBugCheckEx(0x1Au, 0x41790uLL, v6, v10, BugCheckParameter4);
  MiInitializeUsedPtesCount(v6, v10 - BugCheckParameter4);
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v7) = v16 == 0;
  return v7;
}
