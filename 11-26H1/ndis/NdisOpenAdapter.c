/*
 * XREFs of NdisOpenAdapter @ 0x140175850
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1400857F0 (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 */

void __fastcall NdisOpenAdapter(
        int *a1,
        int *a2,
        void **a3,
        unsigned int *a4,
        enum _NDIS_MEDIUM *a5,
        unsigned int a6,
        struct _NDIS_PROTOCOL_BLOCK *a7,
        void *a8,
        struct _UNICODE_STRING *a9,
        unsigned int a10,
        struct _STRING *a11)
{
  ndisOpenAdapterLegacyProtocol(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, 0LL);
}
