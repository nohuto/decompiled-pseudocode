/*
 * XREFs of VfIsRuleClassEnabled @ 0x140C46310
 * Callers:
 *     IovLogIrpMdlEvent @ 0x140530E84 (IovLogIrpMdlEvent.c)
 *     IovCleanupAiDb @ 0x14064238C (IovCleanupAiDb.c)
 *     IovInitAiDb @ 0x1406424E0 (IovInitAiDb.c)
 *     VfIrpTrackingPluginEntry @ 0x1407214D0 (VfIrpTrackingPluginEntry.c)
 *     VerifierInitSystem @ 0x140CDE894 (VerifierInitSystem.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall VfIsRuleClassEnabled(unsigned int a1)
{
  int v1; // eax

  if ( a1 >= 0x40 )
    return 0;
  v1 = *((_DWORD *)&VfRuleClasses + ((unsigned __int64)a1 >> 5));
  return _bittest(&v1, a1 & 0x1F);
}
