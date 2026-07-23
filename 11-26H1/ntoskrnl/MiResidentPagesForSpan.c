/*
 * XREFs of MiResidentPagesForSpan @ 0x140A03850
 * Callers:
 *     MiComputeVadCharges @ 0x1404BDF20 (MiComputeVadCharges.c)
 *     MiCreateUserPhysicalViewCharges @ 0x140773E70 (MiCreateUserPhysicalViewCharges.c)
 *     MiRemoveVadCharges @ 0x140A02094 (MiRemoveVadCharges.c)
 *     MiInitializePartialVad @ 0x140AC26F4 (MiInitializePartialVad.c)
 * Callees:
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
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
