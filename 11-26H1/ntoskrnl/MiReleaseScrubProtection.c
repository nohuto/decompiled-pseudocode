/*
 * XREFs of MiReleaseScrubProtection @ 0x140710C10
 * Callers:
 *     MiScrubLargePage @ 0x14071116C (MiScrubLargePage.c)
 * Callees:
 *     MiZeroPageWorkMapping @ 0x14029F2C0 (MiZeroPageWorkMapping.c)
 *     MiStopPageAccessor @ 0x140487B48 (MiStopPageAccessor.c)
 *     MiRemoveFaultNode @ 0x1404F0028 (MiRemoveFaultNode.c)
 *     MiSafeLockAnyPfn @ 0x140708378 (MiSafeLockAnyPfn.c)
 *     MiUnlockAnyPfn @ 0x140708444 (MiUnlockAnyPfn.c)
 */

void __fastcall MiReleaseScrubProtection(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // ebp
  unsigned __int64 v5; // rdi
  char v7; // si
  ULONG_PTR v8; // rcx

  v3 = *(_DWORD *)(a1 + 8);
  v5 = *(_QWORD *)a1;
  if ( a2 )
    v7 = 0;
  else
    v7 = MiSafeLockAnyPfn(*(_QWORD *)a1, v3, a3);
  if ( (**(_QWORD **)(a1 + 128) & 1) == 0 )
  {
    if ( v3 == 1 )
      v8 = *(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * ((v5 >> 18) & 0x3FFFFF);
    else
      v8 = 48 * v5 - 0x220000000000LL;
    MiStopPageAccessor(v8);
    MiZeroPageWorkMapping(*(_DWORD *)(a1 + 12), *(_QWORD *)(a1 + 120), 0);
  }
  if ( !a2 && v7 != 17 )
    MiUnlockAnyPfn(v5, v3, v7);
  MiRemoveFaultNode(a1 + 40, 0);
}
