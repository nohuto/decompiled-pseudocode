/*
 * XREFs of ?CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z @ 0x140129A80
 * Callers:
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1401297B8 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 * Callees:
 *     ?CloseDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAXXZ @ 0x140129D80 (-CloseDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAXXZ.c)
 *     ProtectHandle @ 0x140133808 (ProtectHandle.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     CreateKernelEventObject @ 0x1401BC480 (CreateKernelEventObject.c)
 */

__int64 __fastcall CRIMBase::SensorDispatcherObject::CreateDispatcherHandles(
        CRIMBase::SensorDispatcherObject *this,
        const struct CRIMBase::DispatcherCreation *a2)
{
  int v3; // ecx
  _QWORD *v5; // rsi
  NTSTATUS Event; // eax
  NTSTATUS v7; // edi
  int v8; // edx
  POBJECT_TYPE *v9; // rcx
  struct _OBJECT_TYPE *v10; // rbp
  void *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 KernelEventObject; // rax
  PVOID Object; // [rsp+70h] [rbp+8h] BYREF

  v3 = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 3) = v3;
  *((_DWORD *)this + 2) = *(_DWORD *)a2;
  if ( v3 == 1 )
  {
    v5 = (_QWORD *)((char *)this + 16);
    Event = ZwCreateEvent((PHANDLE)this + 2, 0x1F0003u, 0LL, SynchronizationEvent, 0);
  }
  else if ( v3 == 2 )
  {
    v5 = (_QWORD *)((char *)this + 16);
    Event = ZwCreateTimer((PHANDLE)this + 2, 0x1F0003u, 0LL, SynchronizationTimer);
  }
  else
  {
    if ( v3 != 3 )
    {
      LODWORD(Object) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 641LL);
    }
    v5 = (_QWORD *)((char *)this + 16);
    Event = ZwCreateSemaphore((PHANDLE)this + 2, 0x1F0003u, 0LL, 0, 0x7FFFFFFF);
  }
  v7 = Event;
  if ( Event < 0 )
    goto LABEL_12;
  v8 = *((_DWORD *)this + 3);
  if ( v8 == 1 )
  {
    v9 = ExEventObjectType;
  }
  else
  {
    v9 = ExSemaphoreObjectType;
    if ( v8 == 2 )
      v9 = (POBJECT_TYPE *)ExTimerObjectType;
  }
  v10 = *v9;
  v11 = (void *)*v5;
  Object = 0LL;
  v7 = ObReferenceObjectByHandle(v11, 0x1F0003u, v10, 1, &Object, 0LL);
  *((_QWORD *)this + 5) = Object;
  if ( (*((_DWORD *)a2 + 2) & 2) != 0 )
  {
    if ( *((_DWORD *)this + 3) != 1 )
    {
      LODWORD(Object) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 663LL);
    }
    LOBYTE(v13) = 1;
    ProtectHandle(*v5, v12, v10, v13);
    *((_BYTE *)this + 24) = 1;
  }
  if ( v7 < 0
    || (v7 = ObOpenObjectByPointer(*((PVOID *)this + 5), 0x200u, 0LL, 0x1F0003u, v10, 0, (PHANDLE)this + 4), v7 < 0) )
  {
LABEL_12:
    CRIMBase::SensorDispatcherObject::CloseDispatcherHandles(this);
    return (unsigned int)v7;
  }
  if ( (*((_DWORD *)a2 + 2) & 1) != 0 )
  {
    KernelEventObject = CreateKernelEventObject(v14, 0LL);
    *((_QWORD *)this + 6) = KernelEventObject;
    if ( KernelEventObject )
      return 0;
    v7 = -1073741823;
    goto LABEL_12;
  }
  return (unsigned int)v7;
}
