/*
 * XREFs of MiDecrementCloneBlock @ 0x14036A250
 * Callers:
 *     MiDecommitSharedPageTail @ 0x1402DBF60 (MiDecommitSharedPageTail.c)
 *     MiDemoteCombinedPte @ 0x1402FE120 (MiDemoteCombinedPte.c)
 *     MiCombineInitialInstance @ 0x1403093AC (MiCombineInitialInstance.c)
 *     MiDecrementCombinedPteEx @ 0x14036A1BC (MiDecrementCombinedPteEx.c)
 *     MiDecrementCloneBlockReference @ 0x1404AFB30 (MiDecrementCloneBlockReference.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024C8D0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiVaToPfnEx @ 0x14024DF10 (MiVaToPfnEx.c)
 *     MiUpdateNonPagedPoolNoSteal @ 0x14024E3BC (MiUpdateNonPagedPoolNoSteal.c)
 *     MiLockAndDecrementShareCount @ 0x1403091DC (MiLockAndDecrementShareCount.c)
 *     MiUnlockPageTableCharges @ 0x140318F40 (MiUnlockPageTableCharges.c)
 *     MiDeleteMergedPte @ 0x14033C800 (MiDeleteMergedPte.c)
 *     MiLockCloneBlockAtDpc @ 0x14036A800 (MiLockCloneBlockAtDpc.c)
 *     MiReturnCloneCharges @ 0x14036CAA4 (MiReturnCloneCharges.c)
 *     MiUpdateCloneReducedCommit @ 0x14049AD5C (MiUpdateCloneReducedCommit.c)
 */

__int64 __fastcall MiDecrementCloneBlock(__int64 a1, __int64 a2, unsigned __int64 a3, char a4, _DWORD *a5)
{
  __int64 v8; // r15
  unsigned int v9; // edi
  __int64 v10; // rax
  unsigned int v11; // esi
  __int64 v13; // rax
  ULONG_PTR v14; // rbx

  *a5 = 0;
  if ( a2 )
    v8 = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * *(unsigned __int16 *)(a2 + 174));
  else
    v8 = a1;
  v9 = 0;
  MiLockCloneBlockAtDpc(a3);
  if ( (a4 & 2) == 0 || *(_QWORD *)(a3 + 24) == 1LL )
  {
    if ( v8 != a1 && (*(_QWORD *)(a3 + 8))-- == 1LL )
      v9 = 5;
    if ( (a4 & 1) != 0 && !MiUpdateCloneReducedCommit(a3, 0LL) )
      v9 |= 2u;
    v10 = *(_QWORD *)(a3 + 24) - 1LL;
    *(_QWORD *)(a3 + 24) = v10;
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 16), 0x7FFFFFFFFFFFFFFFuLL);
    v11 = 4;
    if ( !v10 )
    {
      *a5 = 1;
      if ( (a4 & 4) != 0 )
      {
        *(_QWORD *)a3 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        if ( (a4 & 8) != 0 )
        {
          if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(a3) )
          {
            v13 = MiVaToPfnEx(a3);
          }
          else
          {
            MiUpdateNonPagedPoolNoSteal(a3, 1u);
            v13 = (*(_QWORD *)(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL;
          }
          v14 = 48 * v13 - 0x220000000000LL;
          if ( (a4 & 0x10) != 0 )
            MiUnlockPageTableCharges(v14, 1);
          MiLockAndDecrementShareCount(v14, 2LL);
        }
      }
      else
      {
        v11 = MiDeleteMergedPte((struct _KEVENT *)a1, (unsigned __int64 *)a3);
        if ( v11 == 3 )
        {
          if ( (a4 & 1) != 0 )
          {
            v9 &= ~2u;
            v11 = 5;
            _InterlockedDecrement64((volatile signed __int64 *)(a1 + 23480));
          }
          else if ( v8 != a1 )
          {
            v11 = 4;
            v9 &= ~1u;
          }
          goto LABEL_9;
        }
      }
    }
    if ( (a4 & 1) != 0 )
      v11 = 5;
LABEL_9:
    MiReturnCloneCharges(a1, v9);
    return v11;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a3 + 16), 0x7FFFFFFFFFFFFFFFuLL);
  return 2LL;
}
