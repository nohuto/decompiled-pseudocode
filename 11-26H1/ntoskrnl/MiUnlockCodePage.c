/*
 * XREFs of MiUnlockCodePage @ 0x140369D48
 * Callers:
 *     MiUnlockImageSection @ 0x140368D68 (MiUnlockImageSection.c)
 *     MiUnlockDriverPages @ 0x140AC8FF4 (MiUnlockDriverPages.c)
 *     MiUnlockDriverCode @ 0x140AC9BC8 (MiUnlockDriverCode.c)
 *     MiHandleDriverNonPagedSections @ 0x140ACAFE8 (MiHandleDriverNonPagedSections.c)
 *     MmUnlockPreChargedPagedPool @ 0x140B1D110 (MmUnlockPreChargedPagedPool.c)
 * Callees:
 *     MiVaToFlushVm @ 0x140283968 (MiVaToFlushVm.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402CAC30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetLeafVa @ 0x140328090 (MiGetLeafVa.c)
 */

void __fastcall MiUnlockCodePage(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rbp
  unsigned __int64 LeafVa; // rax
  void *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned __int8 v12; // r12
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r14
  unsigned int v17; // esi
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned __int64 v21; // rbp

  v5 = a1;
  v6 = 0LL;
  LeafVa = MiGetLeafVa(a1);
  v8 = MiVaToFlushVm(LeafVa);
  v12 = MiLockWorkingSetShared((__int64)v8, v9, v10);
  v13 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v5 > a2 )
    goto LABEL_15;
  do
  {
    if ( v6 )
    {
      if ( (v5 & 0xFFF) != 0 )
        goto LABEL_4;
      MiUnlockPageTableInternal((__int64)v8, v6);
      if ( v12 < 2u )
      {
        LOBYTE(v18) = v12;
        MiUnlockWorkingSetShared((__int64)v8, v18);
        MiLockWorkingSetShared((__int64)v8, v19, v20);
      }
    }
    v21 = v13 >> 9;
    if ( !a3 )
      v21 = v5 >> 9;
    v6 = (v21 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal((signed __int64)v8, v6, 0);
LABEL_4:
    if ( a3 )
      v14 = *(_QWORD *)v13;
    else
      v14 = *(_QWORD *)v5;
    v15 = (v14 >> 12) & 0xFFFFFFFFFFLL;
    if ( a3 )
      v15 += (v5 >> 3) & 0x1FF;
    v16 = 48 * v15 - 0x220000000000LL;
    v17 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v17 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v17);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v16 + 24) < 0 );
    }
    MiRemoveLockedPageChargeAndDecRef(v16);
    _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v5 += 8LL;
    if ( (v5 & 0xFFF) == 0 )
      v13 += 8LL;
  }
  while ( v5 <= a2 );
  if ( v6 )
    MiUnlockPageTableInternal((__int64)v8, v6);
LABEL_15:
  LOBYTE(v11) = v12;
  MiUnlockWorkingSetShared((__int64)v8, v11);
}
