/*
 * XREFs of MiCreatePfnTemplate @ 0x1406EBD98
 * Callers:
 *     MiInitializeDynamicPfnsWorker @ 0x1406EE0B0 (MiInitializeDynamicPfnsWorker.c)
 *     MxInsertFreePages @ 0x140CFD680 (MxInsertFreePages.c)
 *     MxSwitchToPfns @ 0x140CFE6E0 (MxSwitchToPfns.c)
 * Callees:
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiUpdatePageFileHighInPte @ 0x14028B570 (MiUpdatePageFileHighInPte.c)
 *     MiSetPageTablePfnBuddy @ 0x1402A4030 (MiSetPageTablePfnBuddy.c)
 *     MiSetPfnContainingFrame @ 0x14033DC90 (MiSetPfnContainingFrame.c)
 *     MiSetPfnIdentity @ 0x14036B1E0 (MiSetPfnIdentity.c)
 *     MiSetPfnTbFlushStamp @ 0x14036D880 (MiSetPfnTbFlushStamp.c)
 */

__int64 __fastcall MiCreatePfnTemplate(__int64 a1, int a2, unsigned __int16 a3)
{
  __int64 v3; // rbp
  int v6; // r8d
  int v7; // ecx
  __int64 result; // rax
  unsigned __int64 DemandZeroPte; // rax
  unsigned int v10; // edx

  v3 = a3;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 32) & 0xFF3FFFFF | 0x400000;
  MiSetPfnTbFlushStamp(a1, 0LL, 0);
  *(_QWORD *)(a1 + 40) |= 0x40000000000000uLL;
  if ( (a2 & 0x800000) != 0 )
  {
    MiSetPfnIdentity(a1, v6 + 3);
LABEL_5:
    v7 = 6;
    goto LABEL_11;
  }
  if ( (a2 & 0x40) != 0 )
  {
    *(_QWORD *)(a1 + 8) = 0xFFFFF68000000000uLL;
    goto LABEL_5;
  }
  if ( (a2 & 2) != 0 )
  {
    *(_QWORD *)(a1 + 40) |= 0x20000000000000uLL;
    if ( (a2 & 4) != 0 )
    {
      *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 32) & 0xFFFF0000 | 1;
      *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
      goto LABEL_5;
    }
    v7 = 2;
  }
  else
  {
    v7 = (4 * (a2 & 1)) | 1;
  }
LABEL_11:
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 32) & 0xFFF8FFFF | (v7 << 16);
  result = 0xFFE007FFFFFFFFFFuLL;
  *(_QWORD *)(a1 + 40) = (v3 << 43) ^ (*(_QWORD *)(a1 + 40) ^ (v3 << 43)) & 0xFFE007FFFFFFFFFFuLL;
  if ( (a2 & 0x800040) == 0 )
    return result;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
  DemandZeroPte = MiMakeDemandZeroPte(4);
  *(_QWORD *)(a1 + 16) = DemandZeroPte;
  if ( (a2 & 0x80u) != 0 )
  {
    v10 = 1;
LABEL_16:
    *(_QWORD *)(a1 + 16) = MiUpdatePageFileHighInPte(DemandZeroPte, v10);
    goto LABEL_17;
  }
  if ( (a2 & 0x800000) != 0 )
  {
    v10 = 17;
    goto LABEL_16;
  }
LABEL_17:
  MiSetPfnContainingFrame(a1, 0x3FFFFFFFFELL);
  MiSetPageTablePfnBuddy(a1, 0x10000000001uLL, 1);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 32) & 0xFFFF0000 | 2;
  result = *(_QWORD *)(a1 + 24) | 0x4000000000000000LL;
  *(_QWORD *)(a1 + 24) = result;
  return result;
}
