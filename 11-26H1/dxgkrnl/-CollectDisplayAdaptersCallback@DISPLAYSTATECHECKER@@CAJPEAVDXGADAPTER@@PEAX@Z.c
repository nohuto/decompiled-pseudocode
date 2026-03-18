/*
 * XREFs of ?CollectDisplayAdaptersCallback@DISPLAYSTATECHECKER@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1401C9E40
 * Callers:
 *     <none>
 * Callees:
 *     ?AddDisplayAdapter@DISPLAYSTATECHECKER@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1401C8E18 (-AddDisplayAdapter@DISPLAYSTATECHECKER@@AEAAJPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DISPLAYSTATECHECKER::CollectDisplayAdaptersCallback(
        struct DXGADAPTER *a1,
        DISPLAYSTATECHECKER *this)
{
  return DISPLAYSTATECHECKER::AddDisplayAdapter(this, a1);
}
