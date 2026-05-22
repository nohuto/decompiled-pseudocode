/*
 * XREFs of ?OnDisconnected@InputProcessProxy@@MEAAJXZ @ 0x18019F2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@XZ @ 0x18004607C (-GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@X.c)
 *     ?Disconnected@InputProcessProxy@InputTraceLogging@@SAXXZ @ 0x18019F230 (-Disconnected@InputProcessProxy@InputTraceLogging@@SAXXZ.c)
 *     ?UnregisterInputProcess@InputProcessManager@@QEAAXPEAVBamoInputProcessProxy@@@Z @ 0x1801A0550 (-UnregisterInputProcess@InputProcessManager@@QEAAXPEAVBamoInputProcessProxy@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall InputProcessProxy::OnDisconnected(InputProcessProxy *this)
{
  struct InputSystemInternalServerConnection *InputSystemInternalServerConnection; // rax
  InputProcessManager *v3; // rax

  InputTraceLogging::InputProcessProxy::Disconnected();
  InputSystemInternalServerConnection = ISMStatics::GetInputSystemInternalServerConnection();
  v3 = (InputProcessManager *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)InputSystemInternalServerConnection
                                                                               + 31)
                                                                             + 8LL)
                                                                 + 24LL))(*((_QWORD *)InputSystemInternalServerConnection
                                                                          + 31) + 8LL);
  InputProcessManager::UnregisterInputProcess(v3, this);
  return 0LL;
}
