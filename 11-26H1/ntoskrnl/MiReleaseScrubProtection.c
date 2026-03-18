/*
 * XREFs of MiReleaseScrubProtection @ 0x14070BF60
 * Callers:
 *     MiScrubLargePage @ 0x14070C4BC (MiScrubLargePage.c)
 * Callees:
 *     MiZeroPageWorkMapping @ 0x14029FD70 (MiZeroPageWorkMapping.c)
 *     MiStopPageAccessor @ 0x14048E008 (MiStopPageAccessor.c)
 *     MiRemoveFaultNode @ 0x1404F6A18 (MiRemoveFaultNode.c)
 *     MiSafeLockAnyPfn @ 0x1407036A8 (MiSafeLockAnyPfn.c)
 *     MiUnlockAnyPfn @ 0x140703774 (MiUnlockAnyPfn.c)
 */

void __fastcall MiReleaseScrubProtection(__int64 a1, int a2)
{
  unsigned int v2; // ebp
  unsigned __int64 v4; // rdi
  char v6; // si
  ULONG_PTR v7; // rcx

  v2 = *(_DWORD *)(a1 + 8);
  v4 = *(_QWORD *)a1;
  if ( a2 )
    v6 = 0;
  else
    v6 = MiSafeLockAnyPfn(*(_QWORD *)a1, v2);
  if ( (**(_QWORD **)(a1 + 128) & 1) == 0 )
  {
    if ( v2 == 1 )
      v7 = *(_QWORD *)((char *)&stru_140E2EB88.116 + 4) + 8 * ((v4 >> 18) & 0x3FFFFF);
    else
      v7 = 48 * v4 - 0x220000000000LL;
    MiStopPageAccessor(v7);
    MiZeroPageWorkMapping(*(_DWORD *)(a1 + 12), *(_QWORD *)(a1 + 120), 0);
  }
  if ( !a2 && v6 != 17 )
    MiUnlockAnyPfn(v4, v2, v6);
  MiRemoveFaultNode(a1 + 40, 0);
}
