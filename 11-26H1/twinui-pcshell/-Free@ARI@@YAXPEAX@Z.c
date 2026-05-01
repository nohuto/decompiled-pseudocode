/*
 * XREFs of ?Free@ARI@@YAXPEAX@Z @ 0x1800C24F4
 * Callers:
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x1800C1E58 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ??1AutoSysAppId@ProcessToken@ARI@@QEAA@XZ @ 0x1800C2678 (--1AutoSysAppId@ProcessToken@ARI@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ARI::Free(PVOID P, void *a2)
{
  if ( P )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
}
