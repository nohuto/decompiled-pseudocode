/*
 * XREFs of MiFillPoolCommitPageTable @ 0x140367040
 * Callers:
 *     MiCommitPoolMemory @ 0x140366880 (MiCommitPoolMemory.c)
 * Callees:
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     MiWorkingSetIsContended @ 0x14031A300 (MiWorkingSetIsContended.c)
 *     MiDecreaseUsedPtes @ 0x1403410A0 (MiDecreaseUsedPtes.c)
 *     MiLockPoolCommitWs @ 0x140366098 (MiLockPoolCommitWs.c)
 *     MiUnlockPoolCommitWs @ 0x140366EB0 (MiUnlockPoolCommitWs.c)
 *     MiAssignNonPagedPoolPte @ 0x1403679D0 (MiAssignNonPagedPoolPte.c)
 *     MiLockPoolCommitPageTable @ 0x14045E930 (MiLockPoolCommitPageTable.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

int __fastcall MiFillPoolCommitPageTable(__int64 a1)
{
  _UNKNOWN **DemandZeroPte; // rax
  __int64 v3; // r14
  unsigned int v4; // esi
  char v5; // bp
  ULONG_PTR v6; // rdi
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int8 v11; // dl
  __int64 v12; // rcx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  DemandZeroPte = &retaddr;
  if ( (*(_BYTE *)(a1 + 100) & 4) == 0 )
  {
    v3 = *(_QWORD *)(a1 + 72);
    v4 = 0;
    v5 = 0;
    while ( 1 )
    {
      v6 = *(_QWORD *)(a1 + 56);
      if ( !v6 )
        return (int)DemandZeroPte;
      v7 = *(_QWORD *)(a1 + 88);
      if ( v7 )
      {
        v8 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v8 == v7 )
          goto LABEL_6;
        if ( v4 )
        {
          MiDecreaseUsedPtes(v8, v7, (_KPROCESS *)v4);
          v4 = 0;
        }
        MiUnlockPageTableInternal(v3, *(_QWORD *)(a1 + 88));
        *(_QWORD *)(a1 + 88) = 0LL;
      }
      if ( !(unsigned int)MiLockPoolCommitPageTable(a1, v6) )
        KeBugCheckEx(0x1Au, 0x530AuLL, v6, 0LL, 0LL);
LABEL_6:
      v9 = *(_QWORD *)v6;
      if ( !*(_QWORD *)v6 )
        goto LABEL_11;
      if ( qword_140E2D8C0 )
      {
        if ( (v9 & 0x10) != 0 )
          v9 &= ~0x10uLL;
        else
          v9 &= qword_140E2D8C8;
      }
      v9 = (v9 >> 24) & 0x7FFFFFFFFFLL;
      if ( v9 == 0x7FFFFFFFFFLL )
        v10 = 0LL;
      else
LABEL_11:
        v10 = 8 * v9 - 0x94000000000LL;
      *(_QWORD *)(a1 + 56) = v10;
      v11 = *(_WORD *)(a1 + 100);
      if ( (v11 & 1) != 0 )
      {
        LODWORD(DemandZeroPte) = CLFS_LSN_NULL_EXT;
        ++v4;
        *(_QWORD *)v6 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        if ( v9 == 0x7FFFFFFFFFLL )
        {
          LODWORD(DemandZeroPte) = MiDecreaseUsedPtes(0x7FFFFFFFFFLL, *(_QWORD *)(a1 + 88), (_KPROCESS *)v4);
          v4 = 0;
        }
      }
      else
      {
        if ( (v11 & 2) != 0 )
        {
          DemandZeroPte = (_UNKNOWN **)MiMakeDemandZeroPte(v11 >> 3);
          *(_QWORD *)v6 = DemandZeroPte;
LABEL_15:
          ++*(_QWORD *)(a1 + 48);
          goto LABEL_16;
        }
        LODWORD(DemandZeroPte) = MiAssignNonPagedPoolPte(a1, (__int64)(v6 << 25) >> 16);
        if ( (_DWORD)DemandZeroPte )
          goto LABEL_15;
      }
LABEL_16:
      ++v5;
      if ( *(_QWORD *)(a1 + 56) )
      {
        if ( (v5 & 0xF) == 0 && *(_BYTE *)(a1 + 103) < 2u )
        {
          if ( MiWorkingSetIsContended(v3, 0)
            || (LODWORD(DemandZeroPte) = KeShouldYieldProcessor(), (_DWORD)DemandZeroPte) )
          {
            if ( v4 )
            {
              MiDecreaseUsedPtes(v12, *(_QWORD *)(a1 + 88), (_KPROCESS *)v4);
              v4 = 0;
            }
            MiUnlockPoolCommitWs(a1);
            LODWORD(DemandZeroPte) = MiLockPoolCommitWs(a1);
          }
        }
      }
    }
  }
  return (int)DemandZeroPte;
}
