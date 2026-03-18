/*
 * XREFs of ?HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ @ 0x14012C1F0
 * Callers:
 *     rimObsStartStopDeviceRead @ 0x1401F4828 (rimObsStartStopDeviceRead.c)
 * Callees:
 *     ?ExecutingInSensorHostingProcess@CBaseInput@@IEBA_NXZ @ 0x14012C240 (-ExecutingInSensorHostingProcess@CBaseInput@@IEBA_NXZ.c)
 *     ?OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ @ 0x14012C2B0 (-OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ.c)
 *     ?GetDispatcherObjectByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@@Z @ 0x14020F870 (-GetDispatcherObjectByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@@Z.c)
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
