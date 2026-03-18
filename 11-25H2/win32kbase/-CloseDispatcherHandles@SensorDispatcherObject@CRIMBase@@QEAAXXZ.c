/*
 * XREFs of ?CloseDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAXXZ @ 0x14009C2D4
 * Callers:
 *     ?CleanupHandles@CRIMBase@@IEAAXXZ @ 0x14009C4B8 (-CleanupHandles@CRIMBase@@IEAAXXZ.c)
 *     ?CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z @ 0x14020EF5C (-CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B1C0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B254 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ProtectHandle @ 0x1400DDACC (ProtectHandle.c)
 *     ?_Signal@MarshalingCompletion@SensorDispatcherObject@CRIMBase@@AEBAXXZ @ 0x140210E24 (-_Signal@MarshalingCompletion@SensorDispatcherObject@CRIMBase@@AEBAXXZ.c)
 */

void __fastcall CRIMBase::SensorDispatcherObject::CloseDispatcherHandles(CRIMBase::SensorDispatcherObject *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  PVOID *v6; // rdi

  W32AcquirePushLockExclusiveEx(this, 0);
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
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 2) = 19;
  W32ReleasePushLockExclusiveEx(this, 0LL);
}
