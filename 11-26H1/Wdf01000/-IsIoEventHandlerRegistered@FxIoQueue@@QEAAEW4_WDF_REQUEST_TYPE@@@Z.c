/*
 * XREFs of ?IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z @ 0x14005D834
 * Callers:
 *     ?ConfigureForwarding@FxPkgIo@@QEAAJPEAVFxIoQueue@@W4_WDF_REQUEST_TYPE@@@Z @ 0x1400A1450 (-ConfigureForwarding@FxPkgIo@@QEAAJPEAVFxIoQueue@@W4_WDF_REQUEST_TYPE@@@Z.c)
 *     ?ConfigureForwarding@FxPkgGeneral@@QEAAJPEAVFxIoQueue@@@Z @ 0x1400AB75C (-ConfigureForwarding@FxPkgGeneral@@QEAAJPEAVFxIoQueue@@@Z.c)
 *     Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue @ 0x1400E524C (Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall FxIoQueue::IsIoEventHandlerRegistered(FxIoQueue *this, _WDF_REQUEST_TYPE RequestType)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  bool v5; // zf

  if ( this->m_Type == WdfIoQueueDispatchManual || this->m_IoDefault.Method )
    return 1;
  if ( RequestType )
  {
    v2 = RequestType - 3;
    if ( v2 )
    {
      v3 = v2 - 1;
      if ( v3 )
      {
        v4 = v3 - 10;
        if ( v4 )
        {
          if ( v4 != 1 )
            return 0;
          v5 = this->m_IoInternalDeviceControl.Method == 0LL;
        }
        else
        {
          v5 = this->m_IoDeviceControl.Method == 0LL;
        }
      }
      else
      {
        v5 = this->m_IoWrite.Method == 0LL;
      }
    }
    else
    {
      v5 = this->m_IoRead.Method == 0LL;
    }
    if ( !v5 )
      return 1;
  }
  return 0;
}
