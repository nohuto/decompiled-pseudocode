/*
 * XREFs of ?CleanupHandles@CRIMBase@@IEAAXXZ @ 0x140129C98
 * Callers:
 *     ?UninitializeSensor@CBaseInput@@QEAAXXZ @ 0x14021896C (-UninitializeSensor@CBaseInput@@QEAAXXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14006EEBC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14006EF14 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?CloseDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAXXZ @ 0x140129D80 (-CloseDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAXXZ.c)
 *     RIMUnregisterForInput @ 0x140129F90 (RIMUnregisterForInput.c)
 */

void __fastcall CRIMBase::CleanupHandles(CRIMBase *this, __int64 a2, __int64 a3, __int64 a4)
{
  CRIMBase::SensorDispatcherObject *v4; // rbx
  CRIMBase::SensorDispatcherObject *v6; // rsi
  __int64 v7; // rcx
  char *v8; // rcx
  char *v9; // rcx

  v4 = (CRIMBase *)((char *)this + 168);
  v6 = (CRIMBase *)((char *)this + 1232);
  while ( v4 != v6 )
  {
    CRIMBase::SensorDispatcherObject::CloseDispatcherHandles(v4);
    v4 = (CRIMBase::SensorDispatcherObject *)((char *)v4 + 56);
  }
  v7 = *((_QWORD *)this + 1);
  if ( v7 != -1 )
  {
    RIMUnregisterForInput(v7);
    ObCloseHandle(*((HANDLE *)this + 1), 1);
    *((_QWORD *)this + 1) = -1LL;
  }
  if ( *((_QWORD *)this + 2) )
  {
    CPushLock::AcquireLockExclusive((CRIMBase *)((char *)this + 152));
    ObfDereferenceObject(*((PVOID *)this + 2));
    *((_QWORD *)this + 2) = 0LL;
    CPushLock::ReleaseLock((CRIMBase *)((char *)this + 152));
  }
  v8 = (char *)*((_QWORD *)this + 8);
  if ( v8 && v8 != *((char **)this + 9) )
  {
    GreDeleteFastMutex(v8, a2, a3, a4);
    *((_QWORD *)this + 8) = 0LL;
  }
  v9 = (char *)*((_QWORD *)this + 9);
  if ( v9 != (char *)this + 80 )
  {
    GreDeleteFastMutex(v9, a2, a3, a4);
    *((_QWORD *)this + 9) = 0LL;
    *((_DWORD *)this + 14) = 0;
    if ( *((_QWORD *)this + 8) )
      *((_QWORD *)this + 8) = 0LL;
  }
}
