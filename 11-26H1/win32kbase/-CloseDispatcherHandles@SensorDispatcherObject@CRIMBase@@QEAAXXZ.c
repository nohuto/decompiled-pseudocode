/*
 * XREFs of ?CloseDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAXXZ @ 0x140129D80
 * Callers:
 *     ?CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z @ 0x140129A80 (-CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z.c)
 *     ?CleanupHandles@CRIMBase@@IEAAXXZ @ 0x140129C98 (-CleanupHandles@CRIMBase@@IEAAXXZ.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?_Signal@MarshalingCompletion@SensorDispatcherObject@CRIMBase@@AEBAXXZ @ 0x140129EF8 (-_Signal@MarshalingCompletion@SensorDispatcherObject@CRIMBase@@AEBAXXZ.c)
 *     ProtectHandle @ 0x140133808 (ProtectHandle.c)
 */

void __fastcall CRIMBase::SensorDispatcherObject::CloseDispatcherHandles(CRIMBase::SensorDispatcherObject *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  PVOID *v6; // rdi

  W32AcquirePushLockExclusiveEx(this);
  v3 = *((_QWORD *)this + 2);
  if ( v3 )
  {
    if ( *((_BYTE *)this + 24) )
    {
      ProtectHandle(v3, v2, ExEventObjectType, 0LL);
      *((_BYTE *)this + 24) = 0;
    }
    ObCloseHandle(*((HANDLE *)this + 2), 1);
    *((_QWORD *)this + 2) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 4);
  if ( v4 )
  {
    ZwClose(v4);
    *((_QWORD *)this + 4) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 5);
  if ( v5 )
  {
    ObfDereferenceObject(v5);
    *((_QWORD *)this + 5) = 0LL;
  }
  v6 = (PVOID *)((char *)this + 48);
  if ( *((_QWORD *)this + 6) )
  {
    CRIMBase::SensorDispatcherObject::MarshalingCompletion::_Signal((CRIMBase::SensorDispatcherObject *)((char *)this + 48));
    ObfDereferenceObject(*v6);
    *v6 = 0LL;
  }
  *((_QWORD *)this + 1) = 19LL;
  W32ReleasePushLockExclusiveEx(this);
}
