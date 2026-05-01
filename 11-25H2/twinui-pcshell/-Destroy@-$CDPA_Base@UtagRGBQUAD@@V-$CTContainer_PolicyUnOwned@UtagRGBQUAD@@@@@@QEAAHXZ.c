/*
 * XREFs of ?Destroy@?$CDPA_Base@UtagRGBQUAD@@V?$CTContainer_PolicyUnOwned@UtagRGBQUAD@@@@@@QEAAHXZ @ 0x1806A2A88
 * Callers:
 *     ??1?$CDPA_Base@UtagRGBQUAD@@V?$CTContainer_PolicyUnOwned@UtagRGBQUAD@@@@@@QEAA@XZ @ 0x1806A29F4 (--1-$CDPA_Base@UtagRGBQUAD@@V-$CTContainer_PolicyUnOwned@UtagRGBQUAD@@@@@@QEAA@XZ.c)
 *     ??1BUCKET@@QEAA@XZ @ 0x1806A2A10 (--1BUCKET@@QEAA@XZ.c)
 * Callees:
 *     DPA_Destroy @ 0x1806A43B0 (DPA_Destroy.c)
 *     DPA_DestroyCallback @ 0x1806A4410 (DPA_DestroyCallback.c)
 */

BOOL __fastcall CDPA_Base<tagRGBQUAD,CTContainer_PolicyUnOwned<tagRGBQUAD>>::Destroy(struct _DPA **a1)
{
  BOOL result; // eax
  struct _DPA *v3; // rcx

  result = 1;
  v3 = *a1;
  if ( v3 )
  {
    g_pfn_DPA_DestroyCallback(v3, (PFNDAENUMCALLBACK)CActionCenterExperienceManager::IsHintSupported, 0LL);
    *a1 = 0LL;
    result = DPA_Destroy(0LL);
    *a1 = 0LL;
  }
  return result;
}
