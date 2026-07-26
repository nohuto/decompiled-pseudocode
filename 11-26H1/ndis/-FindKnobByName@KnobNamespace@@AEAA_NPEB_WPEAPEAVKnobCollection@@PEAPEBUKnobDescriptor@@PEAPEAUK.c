/*
 * XREFs of ?FindKnobByName@KnobNamespace@@AEAA_NPEB_WPEAPEAVKnobCollection@@PEAPEBUKnobDescriptor@@PEAPEAUKnobState@@@Z @ 0x14014F408
 * Callers:
 *     ?ClearKnobEphemeralValue@KnobNamespace@@AEAAJPEB_W@Z @ 0x14014F120 (-ClearKnobEphemeralValue@KnobNamespace@@AEAAJPEB_W@Z.c)
 *     ?ClearKnobStoreValue@KnobNamespace@@AEAAJPEB_W_N@Z @ 0x14014F1BC (-ClearKnobStoreValue@KnobNamespace@@AEAAJPEB_W_N@Z.c)
 *     ?QueryKnobInformation@KnobNamespace@@AEAA_NPEB_WPEAUNDIS_KNOB_INFORMATION@@@Z @ 0x14014F7E8 (-QueryKnobInformation@KnobNamespace@@AEAA_NPEB_WPEAUNDIS_KNOB_INFORMATION@@@Z.c)
 *     ?SetKnobEphemeralValue@KnobNamespace@@AEAAJPEB_W_K@Z @ 0x14014F8A4 (-SetKnobEphemeralValue@KnobNamespace@@AEAAJPEB_W_K@Z.c)
 *     ?SetKnobStoreValue@KnobNamespace@@AEAAJPEB_W_K_N@Z @ 0x14014F978 (-SetKnobStoreValue@KnobNamespace@@AEAAJPEB_W_K_N@Z.c)
 * Callees:
 *     ?FindKnobByName@KnobCollection@@QEAA_NPEB_WPEAPEBUKnobDescriptor@@PEAPEAUKnobState@@@Z @ 0x14014FF04 (-FindKnobByName@KnobCollection@@QEAA_NPEB_WPEAPEBUKnobDescriptor@@PEAPEAUKnobState@@@Z.c)
 */

char __fastcall KnobNamespace::FindKnobByName(
        KnobNamespace *this,
        const wchar_t *a2,
        _LIST_ENTRY ***a3,
        const struct KnobDescriptor **a4,
        struct KnobState **a5)
{
  _LIST_ENTRY *p_m_collectionList; // r14
  _LIST_ENTRY *Flink; // rbx

  p_m_collectionList = &this->m_collectionList;
  Flink = this->m_collectionList.Flink;
  *a3 = 0LL;
  *a4 = 0LL;
  *a5 = 0LL;
  while ( Flink != p_m_collectionList )
  {
    if ( KnobCollection::FindKnobByName((KnobCollection *)&Flink[-1].Blink, a2, a4, a5) )
    {
      *a3 = &Flink[-1].Blink;
      return 1;
    }
    Flink = Flink->Flink;
  }
  return 0;
}
