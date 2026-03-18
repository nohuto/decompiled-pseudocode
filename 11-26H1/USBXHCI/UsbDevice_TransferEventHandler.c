/*
 * XREFs of UsbDevice_TransferEventHandler @ 0x140024920
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x14002A518 (Interrupter_DeferredWorkProcessor.c)
 * Callees:
 *     WPP_RECORDER_SF_ddq @ 0x140006C78 (WPP_RECORDER_SF_ddq.c)
 *     Endpoint_TransferEventHandler @ 0x140024A30 (Endpoint_TransferEventHandler.c)
 *     WPP_RECORDER_SF_ddqq @ 0x14002680C (WPP_RECORDER_SF_ddqq.c)
 */

char __fastcall UsbDevice_TransferEventHandler(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v6; // r8d
  char result; // al

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_ddqq(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      HIWORD(*(_DWORD *)(a2 + 12)) & 0x1F,
      HIBYTE(*(_DWORD *)(a2 + 12)),
      a4);
  v6 = *(_DWORD *)(a2 + 12);
  if ( *(_QWORD *)(a1 + 8LL * (HIWORD(v6) & 0x1F) + 176) )
    return Endpoint_TransferEventHandler(a2);
  result = *(_BYTE *)a2 & 3;
  if ( result != 1 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_SF_ddq(
             *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
             3u,
             0xCu,
             0x58u,
             (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
             HIBYTE(v6),
             HIWORD(v6) & 0x1F,
             a2);
  return result;
}
