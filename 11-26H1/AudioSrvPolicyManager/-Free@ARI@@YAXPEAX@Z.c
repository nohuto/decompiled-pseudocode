/*
 * XREFs of ?Free@ARI@@YAXPEAX@Z @ 0x180023FF8
 * Callers:
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18000B24C (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ?Close@AutoSysAppId@ProcessToken@ARI@@QEAAJXZ @ 0x180023DEC (-Close@AutoSysAppId@ProcessToken@ARI@@QEAAJXZ.c)
 *     ?Open@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@PEAPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@PEA_N@Z @ 0x180023E30 (-Open@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@PEAPEBU_T.c)
 * Callees:
 *     <none>
 */

void __fastcall ARI::Free(PVOID P, void *a2)
{
  if ( P )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
}
