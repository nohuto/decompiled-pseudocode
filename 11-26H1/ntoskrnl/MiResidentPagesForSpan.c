/*
 * XREFs of MiResidentPagesForSpan @ 0x14095DF90
 * Callers:
 *     MiComputeVadCharges @ 0x1404C4640 (MiComputeVadCharges.c)
 *     MiCreateUserPhysicalViewCharges @ 0x140770E70 (MiCreateUserPhysicalViewCharges.c)
 *     MiRemoveVadCharges @ 0x14095C7D4 (MiRemoveVadCharges.c)
 *     MiInitializePartialVad @ 0x140AC0654 (MiInitializePartialVad.c)
 * Callees:
 *     MiGetPteAddress @ 0x1404468C0 (MiGetPteAddress.c)
 */

__int64 __fastcall MiResidentPagesForSpan(unsigned __int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r9
  unsigned __int64 v4; // r10
  __int64 v5; // rbx
  unsigned __int64 v6; // r11
  unsigned __int64 v8; // r11
  __int64 v9; // rdx

  v3 = 0LL;
  v4 = a1;
  if ( a3 >= 0 )
  {
    do
    {
      MiGetPteAddress(v4);
      MiGetPteAddress(v8);
    }
    while ( v9 != 1 );
  }
  if ( a3 < 3 )
  {
    v5 = (unsigned int)(3 - a3);
    do
    {
      MiGetPteAddress(v4);
      MiGetPteAddress(v6);
      --v5;
    }
    while ( v5 );
  }
  return v3;
}
