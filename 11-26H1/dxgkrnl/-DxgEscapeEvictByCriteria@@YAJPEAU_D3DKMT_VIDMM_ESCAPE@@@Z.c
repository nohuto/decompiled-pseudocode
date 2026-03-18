/*
 * XREFs of ?DxgEscapeEvictByCriteria@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x14018F770
 * Callers:
 *     DxgkEscape @ 0x14043CE60 (DxgkEscape.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?EvictAllResources@DXGPROCESS@@QEAAJPEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1401F5BC4 (-EvictAllResources@DXGPROCESS@@QEAAJPEAU_D3DKMT_EVICTION_CRITERIA@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgEscapeEvictByCriteria(struct _D3DKMT_VIDMM_ESCAPE *a1)
{
  DXGPROCESS *Current; // rax

  if ( a1->Type != D3DKMT_VIDMMESCAPETYPE_EVICT_BY_CRITERIA )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 424;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pVidMmEscape->Type == D3DKMT_VIDMMESCAPETYPE_EVICT_BY_CRITERIA",
      424LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
    return DXGPROCESS::EvictAllResources(Current, &a1->EvictByCriteria);
  WdLogSingleEntry1(2LL);
  WdLogGlobalForLineNumber = 430;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Invalid process context, returning 0x%I64x",
    -1073741811LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225485LL;
}
