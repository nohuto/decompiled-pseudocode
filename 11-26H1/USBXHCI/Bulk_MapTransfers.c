/*
 * XREFs of Bulk_MapTransfers @ 0x14000FBB0
 * Callers:
 *     Bulk_WdfEvtIoQueueReadyNotification @ 0x14000FAB0 (Bulk_WdfEvtIoQueueReadyNotification.c)
 *     Bulk_EvtDmaCallback @ 0x140019D60 (Bulk_EvtDmaCallback.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x140022EF0 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_EP_StartMapping @ 0x14003AD30 (Bulk_EP_StartMapping.c)
 *     Bulk_CommonBufferCallback @ 0x14004D970 (Bulk_CommonBufferCallback.c)
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x1400274BC (WPP_RECORDER_SF_ddL.c)
 *     Bulk_MappingLoop @ 0x14003ADD0 (Bulk_MappingLoop.c)
 */

__int64 __fastcall Bulk_MapTransfers(__int64 a1)
{
  char i; // di
  int v3; // edx
  __int64 result; // rax
  int v5; // ett
  int v6; // ett
  bool v7; // zf

  for ( i = 0; ; ++i )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v3 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
      LOBYTE(v3) = 5;
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v3,
        14,
        38,
        (__int64)&WPP_b35432f3067b3bf93fefc5589952cfde_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
        i);
    }
    Bulk_MappingLoop(a1);
    result = *(_QWORD *)(a1 + 40);
    if ( *(_BYTE *)(result + 1004) == 1 )
      break;
    if ( *(_DWORD *)(a1 + 108) != 2 )
      return result;
    v7 = *(_DWORD *)(a1 + 348) == 0;
LABEL_14:
    if ( !v7 )
    {
      result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 108), 3, 2);
      if ( (_DWORD)result == 2 )
        continue;
    }
    return result;
  }
  _m_prefetchw((const void *)(a1 + 108));
  LODWORD(result) = *(_DWORD *)(a1 + 108);
  do
  {
    v5 = result;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 108), result, result);
  }
  while ( v5 != (_DWORD)result );
  if ( (_DWORD)result == 2 )
  {
    _m_prefetchw((const void *)(a1 + 348));
    LODWORD(result) = *(_DWORD *)(a1 + 348);
    do
    {
      v6 = result;
      result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 348), result, result);
    }
    while ( v6 != (_DWORD)result );
    v7 = (_DWORD)result == 0;
    goto LABEL_14;
  }
  return result;
}
