/*
 * XREFs of PspIoRateEntryIoControlReference @ 0x140207BB4
 * Callers:
 *     IoGetIoRateControl @ 0x140207570 (IoGetIoRateControl.c)
 *     PspJobIoRateVolumeEntryReference @ 0x140615D38 (PspJobIoRateVolumeEntryReference.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 */

unsigned __int64 __fastcall PspIoRateEntryIoControlReference(struct _EX_RUNDOWN_REF *a1)
{
  BOOLEAN v2; // al
  __int64 v3; // rdx

  v2 = ExAcquireRundownProtection_0(a1 + 4);
  v3 = 0LL;
  if ( v2 )
    return a1[5].Count;
  return v3;
}
