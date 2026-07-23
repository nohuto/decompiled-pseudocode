/*
 * XREFs of MiUnlockDriverCode @ 0x140AC9BC8
 * Callers:
 *     MiUnloadSystemImage @ 0x140AC92D8 (MiUnloadSystemImage.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024E230 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiUnlockCodePage @ 0x140369D48 (MiUnlockCodePage.c)
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
 *     MiGetBaseLoaderPortion @ 0x1404EE710 (MiGetBaseLoaderPortion.c)
 */

void __fastcall MiUnlockDriverCode(__int64 a1)
{
  unsigned __int64 v1; // rsi
  __int64 BaseLoaderPortion; // rdi
  __int64 v4; // rbx
  __int64 i; // rsi
  __int64 v6; // rcx

  v1 = *(_QWORD *)(a1 + 48);
  if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(v1) )
  {
    BaseLoaderPortion = MiGetBaseLoaderPortion(a1);
    if ( (*(_DWORD *)(BaseLoaderPortion + 184) & 1) != 0 )
    {
      v4 = 0LL;
      for ( i = MiGetPteAddress(v1); (unsigned int)v4 < *(_DWORD *)(BaseLoaderPortion + 296); v4 = (unsigned int)(v4 + 1) )
      {
        v6 = *(_QWORD *)(BaseLoaderPortion + 200);
        if ( *(_DWORD *)(v6 + 12 * v4 + 8) )
          MiUnlockCodePage(i + 8LL * *(unsigned int *)(v6 + 12 * v4), i + 8LL * *(unsigned int *)(v6 + 12 * v4 + 4), 0);
      }
    }
  }
}
