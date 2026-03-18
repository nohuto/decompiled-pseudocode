/*
 * XREFs of ?Invoke@FxCxFileObjectFileCreate@@QEAAEPEAUWDFDEVICE__@@PEAUWDFREQUEST__@@PEAUWDFFILEOBJECT__@@@Z @ 0x140005568
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x140048B50 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?CallbackEnd@FxLockedCallback@@IEAAXE@Z @ 0x1400055F0 (-CallbackEnd@FxLockedCallback@@IEAAXE@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

unsigned __int8 __fastcall FxCxFileObjectFileCreate::Invoke(
        FxCxFileObjectFileCreate *this,
        WDFDEVICE__ *Device,
        WDFREQUEST__ *Request,
        WDFFILEOBJECT__ *FileObject)
{
  unsigned __int8 v4; // bl
  FxCallbackLock *m_CallbackLock; // rcx
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  if ( this->Method )
  {
    m_CallbackLock = this->m_CallbackLock;
    irql = 0;
    if ( m_CallbackLock )
      m_CallbackLock->Lock(m_CallbackLock, &irql);
    v4 = this->Method(Device, Request, FileObject);
    FxLockedCallback::CallbackEnd(this, irql);
  }
  return v4;
}
