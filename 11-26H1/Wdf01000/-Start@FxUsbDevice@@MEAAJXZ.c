/*
 * XREFs of ?Start@FxUsbDevice@@MEAAJXZ @ 0x14006AAA0
 * Callers:
 *     <none>
 * Callees:
 *     ?SubmitPendedRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x140004A10 (-SubmitPendedRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x140020570 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?Start@FxIoTarget@@UEAAJXZ @ 0x14006AC50 (-Start@FxIoTarget@@UEAAJXZ.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxUsbDevice::Start(FxUsbDevice *this)
{
  unsigned __int8 v2; // r8
  int v3; // r14d
  char m_ObjectFlags; // cl
  unsigned __int8 v5; // si
  __int64 v6; // r8
  __int64 i; // rbx
  __int64 v8; // r12
  FxUsbInterface *v9; // r15
  FxUsbPipe *v10; // rcx
  _LIST_ENTRY *Flink; // rbx
  _LIST_ENTRY *Blink; // rcx
  FxRequestBase *p_Blink; // rdx
  FxIoTarget *v15; // rbx
  _LIST_ENTRY *v16; // rax
  _LIST_ENTRY head; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int8 irql; // [rsp+78h] [rbp+38h] BYREF

  v3 = FxIoTarget::Start(this);
  if ( v3 >= 0 )
  {
    m_ObjectFlags = this->m_ObjectFlags;
    head.Blink = &head;
    head.Flink = &head;
    irql = 0;
    if ( m_ObjectFlags < 0
      && (Blink = this[-1].m_InterfaceIterationLock.m_Event.m_Event.Header.WaitListHead.Blink) != 0LL )
    {
      FxVerifierLock::Lock((FxVerifierLock *)Blink, &irql, v2);
      v5 = irql;
    }
    else
    {
      v5 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    }
    for ( i = 0LL; (unsigned int)i < this->m_NumInterfaces; i = (unsigned int)(i + 1) )
    {
      v8 = 0LL;
      v9 = this->m_Interfaces[i];
      if ( v9->m_NumberOfConfiguredPipes )
      {
        do
        {
          LOBYTE(v6) = 1;
          v10 = v9->m_ConfiguredPipes[v8];
          v10->GotoStartState(v10, &head, v6);
          v8 = (unsigned int)(v8 + 1);
        }
        while ( (unsigned int)v8 < v9->m_NumberOfConfiguredPipes );
      }
    }
    FxNonPagedObject::Unlock(this, v5, v6);
    Flink = head.Flink;
    if ( head.Flink != &head )
    {
      do
      {
        FxObject::AddRef(
          (FxObject *)Flink[2].Blink,
          this,
          571,
          "minkernel\\wdf\\framework\\shared\\targets\\usb\\fxusbdevice.cpp");
        Flink = Flink->Flink;
      }
      while ( Flink != &head );
      goto LABEL_16;
    }
    while ( Flink != &head )
    {
      if ( Flink->Blink != &head || (v16 = Flink->Flink, Flink->Flink->Blink != Flink) )
        __fastfail(3u);
      head.Flink = Flink->Flink;
      v16->Blink = &head;
      p_Blink = (FxRequestBase *)&Flink[-8].Blink;
      v15 = (FxIoTarget *)Flink[2].Blink;
      FxIoTarget::SubmitPendedRequest(v15, p_Blink);
      v15->Release(v15, this, 591, "minkernel\\wdf\\framework\\shared\\targets\\usb\\fxusbdevice.cpp");
LABEL_16:
      Flink = head.Flink;
    }
  }
  return (unsigned int)v3;
}
