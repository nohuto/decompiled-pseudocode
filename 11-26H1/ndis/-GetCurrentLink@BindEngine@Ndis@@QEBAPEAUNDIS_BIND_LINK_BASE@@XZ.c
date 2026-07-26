/*
 * XREFs of ?GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ @ 0x140169740
 * Callers:
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1400857F0 (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     NdisOpenAdapterEx @ 0x1401758D0 (NdisOpenAdapterEx.c)
 *     NdisCloseAdapter @ 0x140176E20 (NdisCloseAdapter.c)
 * Callees:
 *     <none>
 */

struct NDIS_BIND_LINK_BASE *__fastcall Ndis::BindEngine::GetCurrentLink(Ndis::BindEngine *this)
{
  return this->m_currentOperation;
}
