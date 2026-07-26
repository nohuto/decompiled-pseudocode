/*
 * XREFs of NdisMRegisterAdapterShutdownHandler @ 0x140095BA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?ndisMRegisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14007B590 (-ndisMRegisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __stdcall NdisMRegisterAdapterShutdownHandler(
        NDIS_HANDLE MiniportHandle,
        PVOID ShutdownContext,
        ADAPTER_SHUTDOWN_HANDLER ShutdownHandler)
{
  PVOID v4; // rsi

  v4 = ShutdownContext;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(ShutdownContext) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)ShutdownContext,
      1,
      47,
      (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
      (char)MiniportHandle);
  }
  if ( !*((_QWORD *)MiniportHandle + 258) )
  {
    *((_QWORD *)MiniportHandle + 258) = ShutdownHandler;
    *((_QWORD *)MiniportHandle + 257) = v4;
    ndisMRegisterBugCheckHandler((char *)MiniportHandle);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(ShutdownContext) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)ShutdownContext,
      1,
      48,
      (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
      (char)MiniportHandle);
  }
}
