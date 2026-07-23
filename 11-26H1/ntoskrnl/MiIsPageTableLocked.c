/*
 * XREFs of MiIsPageTableLocked @ 0x140479F4C
 * Callers:
 *     MiResetAccessBitPte @ 0x14029BDF0 (MiResetAccessBitPte.c)
 *     MiFastTrimWorkingSet @ 0x1403216C0 (MiFastTrimWorkingSet.c)
 * Callees:
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 */

__int64 __fastcall MiIsPageTableLocked(__int64 a1, unsigned __int64 a2)
{
  int v3; // eax
  unsigned __int64 v4; // rdx
  _KPROCESS *v6; // rax
  unsigned __int64 v7; // r8
  unsigned __int64 KernelWaitTime; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  char v11; // al
  _QWORD *v12; // rcx
  bool v13; // zf
  __int64 v14; // rax

  v3 = *(_DWORD *)(a1 + 184);
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    v11 = v3 & 0xF;
    if ( v11 )
    {
      if ( v11 == 7 )
      {
        v12 = &unk_140E2EAA0;
      }
      else
      {
        v12 = &unk_140E2EA98;
        if ( v11 != 5 )
          v12 = &unk_140E2EAB0;
      }
    }
    else
    {
      v12 = (_QWORD *)(a1 + 176);
    }
    v13 = *v12 == 0LL;
    return !v13;
  }
  if ( (v3 & 0xF) == 0 && a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    v14 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count;
    if ( v14 )
    {
      v13 = *(_DWORD *)(v14 + 4 * ((a2 >> 3) & 0x1FF)) == 0;
      return !v13;
    }
  }
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 && a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
    return (*(_DWORD *)&stru_140E2DAB0.PriorityFloorCounts[4
                                                         * ((unsigned __int64)(2
                                                                             * (unsigned int)((__int64)(a2 + 0x90482413000LL) >> 3)) >> 5)
                                                         + 4] >> ((2 * ((__int64)(a2 + 0x90482413000LL) >> 3)) & 0x1F)) & 1;
  v4 = *(_QWORD *)a2;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (v4 & 1) != 0
    && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
  {
    v6 = MiPteHasShadow();
    if ( v6 )
    {
      KernelWaitTime = v6[2].KernelWaitTime;
      if ( KernelWaitTime )
      {
        v9 = *(_QWORD *)(KernelWaitTime + 8 * ((v7 >> 3) & 0x1FF));
        if ( (v9 & 0x20) != 0 )
          v4 |= 0x20uLL;
        v10 = v4;
        v4 |= 0x42uLL;
        if ( (v9 & 0x42) == 0 )
          v4 = v10;
      }
    }
  }
  return (v4 >> 60) & 1;
}
