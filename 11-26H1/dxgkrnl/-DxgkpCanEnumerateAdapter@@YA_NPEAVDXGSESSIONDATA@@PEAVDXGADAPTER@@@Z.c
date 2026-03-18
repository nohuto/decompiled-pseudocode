/*
 * XREFs of ?DxgkpCanEnumerateAdapter@@YA_NPEAVDXGSESSIONDATA@@PEAVDXGADAPTER@@@Z @ 0x1403B54E0
 * Callers:
 *     ?CleanupPresentHistoryTokenQueueSession@DXGPRESENTHISTORYTOKENQUEUE@@SAXXZ @ 0x14018B454 (-CleanupPresentHistoryTokenQueueSession@DXGPRESENTHISTORYTOKENQUEUE@@SAXXZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x14033D68C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ??0PDOBaseEnum@@QEAA@XZ @ 0x1403B3E1C (--0PDOBaseEnum@@QEAA@XZ.c)
 *     ?AdvancedColorPowerSettingsCallback@DXGGLOBAL@@SAJPEBU_GUID@@PEAXK1@Z @ 0x1403B4880 (-AdvancedColorPowerSettingsCallback@DXGGLOBAL@@SAJPEBU_GUID@@PEAXK1@Z.c)
 *     DxgkSessionDisconnected @ 0x1403B4C60 (DxgkSessionDisconnected.c)
 *     ?MonitorStateChangeThread@@YAXPEAX@Z @ 0x1403B51B0 (-MonitorStateChangeThread@@YAXPEAX@Z.c)
 * Callees:
 *     ?CanEnumerateAdapter@DXGSESSIONDATA@@QEBA_NPEAVDXGADAPTER@@@Z @ 0x14004B590 (-CanEnumerateAdapter@DXGSESSIONDATA@@QEBA_NPEAVDXGADAPTER@@@Z.c)
 */

char __fastcall DxgkpCanEnumerateAdapter(struct DXGSESSIONDATA *a1, struct DXGADAPTER *a2)
{
  if ( a1 )
    return DXGSESSIONDATA::CanEnumerateAdapter(a1, a2);
  else
    return 1;
}
