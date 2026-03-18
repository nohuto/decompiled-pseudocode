/*
 * XREFs of DrvSampleDisplayState @ 0x14007EBD0
 * Callers:
 *     ?DispBrokerQueryDisplayConfig@@YAJIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_N@Z @ 0x14007D67C (-DispBrokerQueryDisplayConfig@@YAJIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcDatagram_1___lambda_0389f40e646f18740e1f12cb9d5b37a1__&DrvSampleDisplayState_ @ 0x14007E854 (InitDisplayBrokerMessage_DispBroker--AlpcDatagram_1___lambda_0389f40e646f18740e1f12cb9d5b37a1__-.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcDatagram_5___lambda_8341fb6a1f9e9c95dd045a579bb39db4__&DrvSampleDisplayState_ @ 0x14007EB18 (InitDisplayBrokerMessage_DispBroker--AlpcDatagram_5___lambda_8341fb6a1f9e9c95dd045a579bb39db4__-.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1400FAA90 (NtUserDisplayConfigGetDeviceInfo.c)
 *     NtUserQueryDisplayConfig @ 0x1400FB0F0 (NtUserQueryDisplayConfig.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcRequest_7___lambda_cc443f55816a528e59093b1569cde5ac__&DrvSampleDisplayState_ @ 0x14018B3EC (InitDisplayBrokerMessage_DispBroker--AlpcRequest_7___lambda_cc443f55816a528e59093b1569cde5ac__-D.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcRequest_6___lambda_7dc7c0424fbefd701d9ba3d1e39eb072__&DrvSampleDisplayState_ @ 0x1401B8E54 (InitDisplayBrokerMessage_DispBroker--AlpcRequest_6___lambda_7dc7c0424fbefd701d9ba3d1e39eb072__-D.c)
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_3__lambda_b4f43b15d51bbb98ecd260a5ad293850___ @ 0x1401CE3D4 (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_3__lambda_b4f43b15d51bbb98ecd260a5ad293850___.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvSampleDisplayState(__int64 a1)
{
  __int64 v2; // rdx
  __int64 result; // rax

  if ( !a1 )
    return 3221225485LL;
  v2 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  *(_DWORD *)a1 = *(_DWORD *)(*(_QWORD *)(v2 + 1856) + 1573008LL);
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(*(_QWORD *)(v2 + 1856) + 1573032LL);
  result = 0LL;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(*(_QWORD *)(v2 + 1856) + 1573024LL);
  *(_OWORD *)(a1 + 12) = 0LL;
  return result;
}
