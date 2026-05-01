/*
 * XREFs of ?Free@ARI@@YAXPEAX@Z @ 0x1800B8034
 * Callers:
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x1800B733C (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ??1AutoSysAppId@ProcessToken@ARI@@QEAA@XZ @ 0x1800B7B4C (--1AutoSysAppId@ProcessToken@ARI@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ARI::Free(PVOID P, void *a2)
{
  if ( P )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
}
