/*
 * XREFs of HalpWheaInitSystem @ 0x140BEB670
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x140427BB0 (HalpInterruptModel.c)
 *     HalpMcaInitializePcrContext @ 0x140BEA068 (HalpMcaInitializePcrContext.c)
 *     HalpWheaInitDiscard @ 0x140CAFBBC (HalpWheaInitDiscard.c)
 */

__int64 HalpWheaInitSystem()
{
  int v0; // edx
  __int64 v1; // r8

  if ( (unsigned int)HalpInterruptModel() != 1 )
    return 0LL;
  if ( v0 == 12 )
  {
    if ( !v1 )
      return 3221225473LL;
    HalpWheaInitDiscard(v1);
  }
  else
  {
    if ( v0 == 17 )
    {
      off_140E00928[0] = (__int64 (__fastcall *)())HalpReadWheaPhysicalMemory;
      off_140E00930[0] = (__int64 (__fastcall *)())HalpWriteWheaPhysicalMemory;
    }
    else if ( v0 != 19 )
    {
      return 0LL;
    }
    HalpMcaInitializePcrContext();
  }
  return 0LL;
}
