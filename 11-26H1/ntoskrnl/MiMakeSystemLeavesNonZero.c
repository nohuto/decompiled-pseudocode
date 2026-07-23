/*
 * XREFs of MiMakeSystemLeavesNonZero @ 0x1405129C0
 * Callers:
 *     MiComputePxeWalkAction @ 0x14032A400 (MiComputePxeWalkAction.c)
 *     MiCreateSystemPageTable @ 0x14033B880 (MiCreateSystemPageTable.c)
 * Callees:
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiLockNestedPageTable @ 0x14029E130 (MiLockNestedPageTable.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiIncreaseUsedPtes @ 0x140367CC0 (MiIncreaseUsedPtes.c)
 */

void __fastcall MiMakeSystemLeavesNonZero(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned int v3; // edi
  __int64 KernelWaitTime; // rcx
  unsigned __int64 DemandZeroPte; // r9
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r11
  __int64 v11; // rdx
  _KPROCESS *v12; // rax
  __int64 v13; // r8
  __int64 v14; // rax

  v3 = 0;
  if ( (*(_DWORD *)a1 & 4) != 0 )
    MiLockNestedPageTable(*(_QWORD *)(a1 + 32), a2);
  DemandZeroPte = MiMakeDemandZeroPte(16);
  if ( v9 <= v10 )
  {
    do
    {
      v11 = *(_QWORD *)v9;
      if ( v9 >= 0xFFFFF6FB7DBED000uLL
        && v9 <= 0xFFFFF6FB7DBED7F8uLL
        && (v11 & 1) != 0
        && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
      {
        v12 = MiPteHasShadow();
        if ( v12 )
        {
          KernelWaitTime = v12[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v14 = *(_QWORD *)(KernelWaitTime + 8 * ((v9 >> 3) & 0x1FF));
            if ( (v14 & 0x20) != 0 )
              v13 |= 0x20uLL;
            v11 = v13 | 0x42;
            if ( (v14 & 0x42) == 0 )
              v11 = v13;
          }
        }
      }
      if ( !v11 )
      {
        *(_QWORD *)v9 = DemandZeroPte;
        ++v3;
      }
      v9 += 8LL;
    }
    while ( v9 <= v10 );
    if ( v3 && a3 != 4 )
      MiIncreaseUsedPtes(KernelWaitTime, (((v9 - 8) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v3, 2);
  }
  if ( (*(_DWORD *)a1 & 4) != 0 )
    MiUnlockPageTableInternal(*(_QWORD *)(a1 + 32), a2);
}
