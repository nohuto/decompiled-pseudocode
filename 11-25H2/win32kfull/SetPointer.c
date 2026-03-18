/*
 * XREFs of SetPointer @ 0x140123830
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x140197AB8 (xxxSystemParametersInfoWorker.c)
 *     ChangeComposableCursor @ 0x140214560 (ChangeComposableCursor.c)
 *     ?ForceSetCurrentCursorShape@CursorApiRouter@@QEAAXXZ @ 0x14022655C (-ForceSetCurrentCursorShape@CursorApiRouter@@QEAAXXZ.c)
 *     SetMouseTrails @ 0x140241038 (SetMouseTrails.c)
 *     xxxRemoteReconnect @ 0x1402573C0 (xxxRemoteReconnect.c)
 *     RemoteShadowStart @ 0x1402B894C (RemoteShadowStart.c)
 *     ?SetMouseTrails@CursorApiRouter@@QEBAXI@Z @ 0x1402DC7BC (-SetMouseTrails@CursorApiRouter@@QEBAXI@Z.c)
 * Callees:
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x140123850 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 */

__int64 __fastcall SetPointer(__int64 a1)
{
  LOBYTE(a1) = (_DWORD)a1 != 0;
  return SetPointerInternal(a1, 6LL);
}
