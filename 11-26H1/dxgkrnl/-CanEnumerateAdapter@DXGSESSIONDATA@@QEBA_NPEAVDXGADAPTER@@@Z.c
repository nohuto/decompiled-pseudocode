/*
 * XREFs of ?CanEnumerateAdapter@DXGSESSIONDATA@@QEBA_NPEAVDXGADAPTER@@@Z @ 0x14004B590
 * Callers:
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x14033D68C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?ApplyCsFunction@DXGPROCESS@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x14037E71C (-ApplyCsFunction@DXGPROCESS@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z.c)
 *     ?DxgkpCanEnumerateAdapter@@YA_NPEAVDXGSESSIONDATA@@PEAVDXGADAPTER@@@Z @ 0x1403B54E0 (-DxgkpCanEnumerateAdapter@@YA_NPEAVDXGSESSIONDATA@@PEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall DXGSESSIONDATA::CanEnumerateAdapter(DXGSESSIONDATA *this, struct DXGADAPTER *a2)
{
  if ( !*((_BYTE *)this + 18504) )
    return (*((_DWORD *)a2 + 111) & 0x10) != 0;
  if ( *((_BYTE *)this + 18503) )
    return *((_BYTE *)a2 + 3098) != 0;
  return 1;
}
