/*
 * XREFs of TR_Disable_Internal @ 0x14003D720
 * Callers:
 *     Endpoint_Disable_Internal @ 0x14001EB24 (Endpoint_Disable_Internal.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x140035FF0 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 *     Endpoint_EndpointStaticStreamsDisableCompletion @ 0x140048100 (Endpoint_EndpointStaticStreamsDisableCompletion.c)
 *     Endpoint_EndpointStaticStreamsEnableCompletion @ 0x140048370 (Endpoint_EndpointStaticStreamsEnableCompletion.c)
 * Callees:
 *     XilCoreCommonBuffer_ReleaseBuffers @ 0x140033370 (XilCoreCommonBuffer_ReleaseBuffers.c)
 *     CommonBuffer_ReleaseBuffer @ 0x14003D258 (CommonBuffer_ReleaseBuffer.c)
 *     TR_FreeSecureTransferSegments @ 0x14004BCE0 (TR_FreeSecureTransferSegments.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

void __fastcall TR_Disable_Internal(__int64 a1, char a2)
{
  __int64 v4; // rsi
  _QWORD **v5; // rdx
  _QWORD **v6; // rdx
  struct _MDL *v7; // rcx
  __int64 v8; // rdx

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 120LL);
  (*(void (**)(void))(*(_QWORD *)(a1 + 32) + 40LL))();
  _InterlockedExchange((volatile __int32 *)(a1 + 108), 0);
  if ( a2 )
  {
    if ( *(_BYTE *)(a1 + 288) )
      TR_FreeSecureTransferSegments(a1);
    v5 = (_QWORD **)(a1 + 208);
    if ( *v5 != v5 )
      XilCoreCommonBuffer_ReleaseBuffers(v4 + 88, v5);
    v6 = (_QWORD **)(a1 + 224);
    if ( *v6 != v6 )
      XilCoreCommonBuffer_ReleaseBuffers(v4 + 88, v6);
    v7 = *(struct _MDL **)(a1 + 120);
    if ( v7 )
    {
      IoFreeMdl(v7);
      *(_QWORD *)(a1 + 120) = 0LL;
    }
    v8 = *(_QWORD *)(a1 + 240);
    if ( v8 )
    {
      CommonBuffer_ReleaseBuffer(v4, v8);
      *(_QWORD *)(a1 + 240) = 0LL;
    }
  }
}
