/*
 * XREFs of ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x18014EB54
 * Callers:
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x18014E468 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSW.c)
 *     ?Partition_RegisterForNotifications@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_REGISTERFORNOTIFICATIONS@@@Z @ 0x18014E7BC (-Partition_RegisterForNotifications@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@.c)
 *     ?ProcessRoundTripRequest@CComposition@@AEAA_NXZ @ 0x18014EA0C (-ProcessRoundTripRequest@CComposition@@AEAA_NXZ.c)
 *     ?FlushRoundTripRequests@CComposition@@AEAAXXZ @ 0x1801E088C (-FlushRoundTripRequests@CComposition@@AEAAXXZ.c)
 * Callees:
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x18002DC58 (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CComposition::NotifyHelper(CComposition *this, struct MIL_MESSAGE *a2)
{
  unsigned int v2; // eax
  int v3; // ebx
  __int64 v6; // rsi
  __int64 v7; // rbp
  int v8; // eax
  int v9; // edi

  v2 = *((_DWORD *)this + 238);
  v3 = 0;
  if ( v2 )
  {
    v6 = 0LL;
    v7 = v2;
    do
    {
      v8 = CChannelContext::PostMessageToChannel(*(CChannelContext **)(*((_QWORD *)this + 116) + v6), a2);
      v9 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x816u, 0LL);
      if ( !v3 || v3 >= 0 && v9 < 0 )
        v3 = v9;
      v6 += 8LL;
      --v7;
    }
    while ( v7 );
  }
  return (unsigned int)v3;
}
