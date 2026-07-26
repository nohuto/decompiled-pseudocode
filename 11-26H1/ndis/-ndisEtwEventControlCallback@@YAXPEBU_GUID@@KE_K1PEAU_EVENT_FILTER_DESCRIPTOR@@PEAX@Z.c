/*
 * XREFs of ?ndisEtwEventControlCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x140098D78
 * Callers:
 *     McGenControlCallbackV2 @ 0x1400976B0 (McGenControlCallbackV2.c)
 * Callees:
 *     ndisEtwWriteRundown @ 0x140099830 (ndisEtwWriteRundown.c)
 */

void __fastcall ndisEtwEventControlCallback(
        const struct _GUID *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        struct _EVENT_FILTER_DESCRIPTOR *a6,
        REGHANDLE *a7)
{
  if ( ndisEtwRundownEnabled && a7 == NDIS_PROVIDER_ID_Context && a2 == 1 )
    ndisEtwWriteRundown(a1);
}
