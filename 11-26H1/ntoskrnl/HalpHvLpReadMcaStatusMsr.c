/*
 * XREFs of HalpHvLpReadMcaStatusMsr @ 0x14044B9F4
 * Callers:
 *     HalpHvEpReadMsr @ 0x14044B5F0 (HalpHvEpReadMsr.c)
 * Callees:
 *     HalpWheaGetBankFromMciStatusIndex @ 0x14044BA94 (HalpWheaGetBankFromMciStatusIndex.c)
 *     HalpHvLpReadMultipleMsr @ 0x14044BBD4 (HalpHvLpReadMultipleMsr.c)
 */

char __fastcall HalpHvLpReadMcaStatusMsr(__int64 a1, unsigned int a2, __int64 *a3, _QWORD *a4)
{
  char v6; // di
  int BankFromMciStatusIndex; // eax
  unsigned int v8; // r10d
  __int64 v9; // rsi
  __int64 v10; // rbx

  v6 = 0;
  BankFromMciStatusIndex = HalpWheaGetBankFromMciStatusIndex(a2);
  v9 = BankFromMciStatusIndex;
  if ( BankFromMciStatusIndex > -1 && BankFromMciStatusIndex < (unsigned int)HalpHvMcaBankCount )
  {
    v10 = *a3;
    if ( !*a3 )
    {
      v10 = HalpHvMcaStatusCache + 8LL * HalpHvMcaBankCount * v8;
      if ( (int)HalpHvLpReadMultipleMsr(v8, (unsigned int)HalpHvMcaBankCount, HalpHvMcaStatusMsrIndices, v10) < 0 )
        return v6;
      *a3 = v10;
    }
    v6 = 1;
    *a4 = *(_QWORD *)(v10 + 8 * v9);
  }
  return v6;
}
