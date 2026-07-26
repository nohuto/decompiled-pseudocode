/*
 * XREFs of ?ndisValidateMiniportDriverCharacteristicsEntryPoints@@YAHPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAU_DRIVER_OBJECT@@KK@Z @ 0x140168FD0
 * Callers:
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x140076300 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x140094C9C (McTemplateK0qqq_EtwWriteTransfer.c)
 */

__int64 __fastcall ndisValidateMiniportDriverCharacteristicsEntryPoints(
        struct _NDIS_MINIPORT_DRIVER_CHARACTERISTICS *a1,
        struct _DRIVER_OBJECT *a2,
        unsigned int a3,
        int a4)
{
  unsigned int v4; // ebx
  char v6; // di
  unsigned int Flags; // r8d
  int (__fastcall *InitializeHandlerEx)(void *, void *, _NDIS_MINIPORT_INIT_PARAMETERS *); // rax
  int v10; // edx

  v4 = 0;
  v6 = (char)a2;
  if ( !a1->PauseHandler
    || !a1->RestartHandler
    || !a1->SendNetBufferListsHandler
    || !a1->ReturnNetBufferListsHandler
    || !a1->CancelSendHandler
    || !a1->CancelOidRequestHandler )
  {
    return (unsigned int)-1073676283;
  }
  Flags = a1->Flags;
  InitializeHandlerEx = a1->InitializeHandlerEx;
  if ( (Flags & 0x20) != 0 )
  {
    if ( InitializeHandlerEx
      || a1->HaltHandlerEx
      || a1->DevicePnPEventNotifyHandler
      || a1->ShutdownHandlerEx
      || a1->UnloadHandler
      || a1->CheckForHangHandlerEx
      || a1->ResetHandlerEx )
    {
      return (unsigned int)-1073676283;
    }
  }
  else if ( !InitializeHandlerEx || !a1->HaltHandlerEx || !a1->DevicePnPEventNotifyHandler || !a1->ShutdownHandlerEx )
  {
    return (unsigned int)-1073676283;
  }
  if ( (Flags & 0x10) == 0 && (a1->Flags & 0x20) == 0 && !a1->UnloadHandler )
    return (unsigned int)-1073676283;
  if ( a3 > 6 || a3 == 6 && a4 )
  {
    v10 = a1->CancelDirectOidRequestHandler == 0LL;
    if ( v10 != (a1->DirectOidRequestHandler == 0LL) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v10,
          1,
          13,
          (struct _GUID *)&WPP_fd3d11e9cca43795654742c76fc3086a_Traceguids,
          v6);
      }
      v4 = -1073676283;
      if ( (byte_14011D041 & 1) != 0 )
        McTemplateK0qqq_EtwWriteTransfer(
          (__int64)a1,
          &RegisterMiniportDriverFailed,
          (const GUID *)&NDIS_PROVIDER_ID,
          -1073676283,
          1,
          v6);
    }
  }
  return v4;
}
