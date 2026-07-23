/*
 * XREFs of MiWalkVaCheckCommon @ 0x14035F710
 * Callers:
 *     MiEmptyWorkingSetHelper @ 0x14029B748 (MiEmptyWorkingSetHelper.c)
 *     MiEmptyPte @ 0x14035F400 (MiEmptyPte.c)
 * Callees:
 *     MiDemoteCombinedPte @ 0x1402E01A0 (MiDemoteCombinedPte.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 */

__int64 __fastcall MiWalkVaCheckCommon(__int64 a1, ULONG_PTR a2, __int64 a3, int a4, _QWORD *a5)
{
  __int64 v5; // r10
  __int64 v7; // r11
  __int64 v8; // r8
  int v10; // eax
  __int64 v11; // rdx
  _KPROCESS *v12; // rax
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  char v16; // al
  _QWORD *v17; // rcx
  bool v18; // zf
  __int64 v19; // rcx
  unsigned __int64 v20; // rax

  v5 = a3;
  v7 = a1;
  if ( a4 )
    goto LABEL_2;
  if ( (*(_QWORD *)(a3 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
    return 0LL;
  v10 = *(_DWORD *)(a1 + 184);
  if ( a2 != 0xFFFFF6FB7DBEDF68uLL )
  {
    if ( (v10 & 0xF) == 0 && a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
    {
      v19 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count;
      if ( v19 )
      {
        v18 = *(_DWORD *)(v19 + 4 * ((a2 >> 3) & 0x1FF)) == 0;
        goto LABEL_31;
      }
    }
    if ( (*(_DWORD *)(v7 + 184) & 0xF) != 0 && a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
    {
      v20 = 2 * (unsigned int)((__int64)(a2 + 0x90482413000LL) >> 3);
      if ( ((*(_DWORD *)&stru_140E2DAB0.PriorityFloorCounts[4 * (v20 >> 5) + 4] >> (v20 & 0x1F)) & 1) != 0 )
        return 0LL;
      goto LABEL_2;
    }
    v11 = *(_QWORD *)a2;
    if ( a2 >= 0xFFFFF6FB7DBED000uLL
      && a2 <= 0xFFFFF6FB7DBED7F8uLL
      && (v11 & 1) != 0
      && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
    {
      v12 = MiPteHasShadow();
      if ( v12 )
      {
        KernelWaitTime = v12[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v14 = *(_QWORD *)(KernelWaitTime + 8 * ((a2 >> 3) & 0x1FF));
          if ( (v14 & 0x20) != 0 )
            v11 |= 0x20uLL;
          v15 = v11;
          v11 |= 0x42uLL;
          if ( (v14 & 0x42) == 0 )
            v11 = v15;
        }
      }
    }
    if ( (v11 & 0x1000000000000000LL) == 0 )
      goto LABEL_2;
    return 0LL;
  }
  v16 = v10 & 0xF;
  if ( v16 )
  {
    if ( v16 == 7 )
    {
      v17 = &unk_140E2EAA0;
    }
    else
    {
      v17 = &unk_140E2EAB0;
      if ( v16 == 5 )
        v17 = &unk_140E2EA98;
    }
  }
  else
  {
    v17 = (_QWORD *)(a1 + 176);
  }
  v18 = *v17 == 0LL;
LABEL_31:
  if ( !v18 )
    return 0LL;
LABEL_2:
  v8 = *(_QWORD *)(v5 + 8);
  if ( v8 > 0 && (*(_QWORD *)(v5 + 40) & 0x10000000000LL) == 0 )
  {
    if ( (unsigned int)MiDemoteCombinedPte(v7, a2, v8 | 0x8000000000000000uLL) )
      *a5 = *(_QWORD *)a2;
  }
  return 1LL;
}
