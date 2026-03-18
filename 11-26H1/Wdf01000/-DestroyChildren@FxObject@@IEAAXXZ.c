/*
 * XREFs of ?DestroyChildren@FxObject@@IEAAXXZ @ 0x140036A80
 * Callers:
 *     imp_WdfRequestSend @ 0x140029C80 (imp_WdfRequestSend.c)
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x140035F00 (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x140036010 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?DeleteEarlyDisposedObject@FxObject@@IEAAXXZ @ 0x140036B80 (-DeleteEarlyDisposedObject@FxObject@@IEAAXXZ.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x140036CE0 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?PreProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x140038164 (-PreProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     ?PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ @ 0x140038B3C (-PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ.c)
 *     ?DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z @ 0x1400399C8 (-DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z.c)
 *     ?Dispose@FxDevice@@UEAAEXZ @ 0x14007A8A0 (-Dispose@FxDevice@@UEAAEXZ.c)
 *     ?Dispose@FxMpDevice@@UEAAEXZ @ 0x1400946C0 (-Dispose@FxMpDevice@@UEAAEXZ.c)
 *     ?PnpEventPdoInitFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1400A3A60 (-PnpEventPdoInitFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x140035F00 (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1400375F8 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 */

void __fastcall FxObject::DestroyChildren(FxObject *this)
{
  _LIST_ENTRY *p_m_ChildListHead; // rbx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v3; // rcx
  FxObject *p_Blink; // rdi
  KIRQL v5; // al
  int m_ObjectState; // edx
  KIRQL v7; // bp

  p_m_ChildListHead = &this->m_ChildListHead;
  while ( 1 )
  {
    Flink = p_m_ChildListHead->Flink;
    if ( p_m_ChildListHead->Flink == p_m_ChildListHead )
      break;
    if ( Flink->Blink != p_m_ChildListHead || (v3 = Flink->Flink, Flink->Flink->Blink != Flink) )
      __fastfail(3u);
    p_m_ChildListHead->Flink = v3;
    p_Blink = (FxObject *)&Flink[-5].Blink;
    v3->Blink = p_m_ChildListHead;
    Flink->Blink = Flink;
    Flink->Flink = Flink;
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Flink[-1]);
    m_ObjectState = p_Blink->m_ObjectState;
    v7 = v5;
    p_Blink->m_ParentObject = 0LL;
    if ( m_ObjectState == 10 )
    {
LABEL_6:
      KeReleaseSpinLock(&p_Blink->m_SpinLock.m_Lock, v7);
    }
    else
    {
      if ( m_ObjectState != 2 )
      {
        switch ( m_ObjectState )
        {
          case 8:
            break;
          case 9:
            FxObject::TraceDroppedEvent(p_Blink, FxObjectDroppedEventParentDeleteEvent);
            goto LABEL_6;
          default:
            goto LABEL_6;
        }
      }
      FxObject::DeletedAndDisposedWorkerLocked(p_Blink, v5, 1u);
    }
  }
}
