/*
 * XREFs of MiMakeHyperPteDemandZero @ 0x1403177EC
 * Callers:
 *     MiFillHyperPtes @ 0x140317670 (MiFillHyperPtes.c)
 * Callees:
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiIncreaseUsedPtes @ 0x140367CC0 (MiIncreaseUsedPtes.c)
 */

void __fastcall MiMakeHyperPteDemandZero(unsigned __int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  unsigned __int64 DemandZeroPte; // rbx
  int v8; // r8d

  if ( *(_DWORD *)a4 )
  {
    DemandZeroPte = MiMakeDemandZeroPte(4);
    if ( v8 != 3 )
      MiIncreaseUsedPtes(v6, (((unsigned __int64)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL, 0LL);
    *a1 = DemandZeroPte;
  }
  ++*(_QWORD *)(a4 + 8);
}
