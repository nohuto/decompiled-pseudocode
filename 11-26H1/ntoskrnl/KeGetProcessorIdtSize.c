/*
 * XREFs of KeGetProcessorIdtSize @ 0x1405EB9D8
 * Callers:
 *     IopLiveDumpMarkProcessorData @ 0x1405D0640 (IopLiveDumpMarkProcessorData.c)
 *     IopMarkPagesForProcessorData @ 0x1405D5CAC (IopMarkPagesForProcessorData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetProcessorIdtSize(__int64 a1)
{
  if ( KiFredEnabled )
    return (unsigned int)KiBootProcessorIdtSize;
  else
    return (unsigned int)*(unsigned __int16 *)(a1 + 358) + 1;
}
