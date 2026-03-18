/*
 * XREFs of ?HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ @ 0x1401112F0
 * Callers:
 *     rimObsStartStopDeviceRead @ 0x1402102A4 (rimObsStartStopDeviceRead.c)
 * Callees:
 *     ?OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ @ 0x140095B10 (-OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ.c)
 *     ?GetDispatcherObjectByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@@Z @ 0x140111340 (-GetDispatcherObjectByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@@Z.c)
 *     ?ExecutingInSensorHostingProcess@CBaseInput@@IEBA_NXZ @ 0x14021847C (-ExecutingInSensorHostingProcess@CBaseInput@@IEBA_NXZ.c)
 */

void __fastcall CHidInput::HandleDirectStartStopDeviceReadRequest(CHidInput *this)
{
  struct _KEVENT *DispatcherObjectByName; // rax

  if ( *((_QWORD *)this + 1) != -1LL )
  {
    if ( CBaseInput::ExecutingInSensorHostingProcess(this) )
    {
      CHidInput::OnDirectStartStopReadNotification(this);
    }
    else
    {
      DispatcherObjectByName = (struct _KEVENT *)CRIMBase::GetDispatcherObjectByName(this, 10LL);
      KeSetEvent(DispatcherObjectByName, 1, 0);
    }
  }
}
