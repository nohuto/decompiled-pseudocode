/*
 * XREFs of MiGetPfnPageSizeIndexUnsynchronized @ 0x1402D2C40
 * Callers:
 *     MiPfnsWorthTrying @ 0x140290280 (MiPfnsWorthTrying.c)
 *     MiActivePageClaimCandidate @ 0x140291950 (MiActivePageClaimCandidate.c)
 *     MiSetProbePagesAhead @ 0x1402D1B90 (MiSetProbePagesAhead.c)
 *     MiGetPagesRemainingInResidentPage @ 0x140708004 (MiGetPagesRemainingInResidentPage.c)
 *     MiZeroPageMakeHot @ 0x140713BF0 (MiZeroPageMakeHot.c)
 *     MiCombineAllPhysicalMemory @ 0x140880C48 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiGetBaseResidentPage @ 0x1402D3C20 (MiGetBaseResidentPage.c)
 *     MiSafeLockPage @ 0x1402D5780 (MiSafeLockPage.c)
 *     MiSafeLockPageAtDpc @ 0x14035A998 (MiSafeLockPageAtDpc.c)
 */

__int64 __fastcall MiGetPfnPageSizeIndexUnsynchronized(__int64 a1, int *a2, int *a3)
{
  int v5; // esi
  int v6; // edi
  unsigned int v8; // r14d
  __int64 v9; // rcx
  unsigned __int8 v10; // al
  unsigned __int8 v11; // bp
  __int64 BaseResidentPage; // rdx

  v5 = HIWORD(*(_DWORD *)(a1 + 32)) & 7;
  v6 = (*(_DWORD *)(a1 + 32) >> 22) & 3;
  v8 = 3;
  if ( (*(_QWORD *)(a1 + 40) & 0x10000000000LL) != 0 )
  {
    v9 = (a1 + 0x220000000000LL) / 48;
    if ( KeGetCurrentIrql() >= 2u )
      v10 = MiSafeLockPageAtDpc(v9);
    else
      v10 = MiSafeLockPage(v9);
    v11 = v10;
    if ( v10 == 17 )
    {
      *a2 = 5;
      *a3 = 3;
      return v8;
    }
    if ( (*(_QWORD *)(a1 + 40) & 0x10000000000LL) != 0 )
    {
      BaseResidentPage = MiGetBaseResidentPage(a1);
      v5 = HIWORD(*(_DWORD *)(BaseResidentPage + 32)) & 7;
      v6 = (*(_DWORD *)(BaseResidentPage + 32) >> 22) & 3;
      if ( (*(_QWORD *)(BaseResidentPage + 40) & 0x10000000000LL) != 0 )
      {
        v8 = 3 - ((*(_DWORD *)(BaseResidentPage + 36) >> 27) & 3);
        if ( v8 == 3 )
          v8 = 3;
      }
      if ( BaseResidentPage != a1 )
        _InterlockedAnd64((volatile signed __int64 *)(BaseResidentPage + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v11 < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
      __writecr8(v11);
    }
  }
  *a2 = v5;
  *a3 = v6;
  return v8;
}
