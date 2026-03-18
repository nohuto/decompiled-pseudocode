/*
 * XREFs of ?CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z @ 0x14020EF5C
 * Callers:
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x14020F150 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 * Callees:
 *     ?CloseDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAXXZ @ 0x14009C2D4 (-CloseDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAXXZ.c)
 *     ProtectHandle @ 0x1400DDACC (ProtectHandle.c)
 *     CreateKernelEventObject @ 0x14014E99C (CreateKernelEventObject.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CRIMBase::SensorDispatcherObject::CreateDispatcherHandles(
        CRIMBase::SensorDispatcherObject *this,
        const struct CRIMBase::DispatcherCreation *a2)
{
  int v3; // ecx
  NTSTATUS Event; // eax
  NTSTATUS v6; // edi
  int v7; // eax
  POBJECT_TYPE *v8; // rax
  bool v9; // zf
  struct _OBJECT_TYPE *v10; // rsi
  void *v11; // rcx
  struct _OBJECT_TYPE *v12; // r8
  int v13; // edx
  __int64 v14; // rcx
  PVOID KernelEventObject; // rax
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF

  v3 = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 3) = v3;
  *((_DWORD *)this + 2) = *(_DWORD *)a2;
  if ( v3 == 1 )
  {
    Event = ZwCreateEvent((PHANDLE)this + 2, 0x1F0003u, 0LL, SynchronizationEvent, 0);
  }
  else if ( v3 == 2 )
  {
    Event = ZwCreateTimer((PHANDLE)this + 2, 0x1F0003u, 0LL, SynchronizationTimer);
  }
  else
  {
    if ( v3 != 3 )
    {
      LODWORD(Object) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 641);
    }
    Event = ZwCreateSemaphore((PHANDLE)this + 2, 0x1F0003u, 0LL, 0, 0x7FFFFFFF);
  }
  v6 = Event;
  if ( Event < 0 )
    goto LABEL_23;
  v7 = *((_DWORD *)this + 3);
  if ( v7 == 1 )
  {
    v8 = ExEventObjectType;
  }
  else
  {
    v9 = v7 == 2;
    v8 = (POBJECT_TYPE *)ExTimerObjectType;
    if ( !v9 )
      v8 = ExSemaphoreObjectType;
  }
  v10 = *v8;
  v11 = (void *)*((_QWORD *)this + 2);
  v12 = *v8;
  Object = 0LL;
  v6 = ObReferenceObjectByHandle(v11, 0x1F0003u, v12, 1, &Object, 0LL);
  *((_QWORD *)this + 5) = Object;
  if ( (*((_DWORD *)a2 + 2) & 2) != 0 )
  {
    if ( *((_DWORD *)this + 3) != 1 )
    {
      LODWORD(Object) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 663);
    }
    ProtectHandle(*((void **)this + 2), v13, v10, 1);
    *((_BYTE *)this + 24) = 1;
  }
  if ( v6 < 0 )
    goto LABEL_23;
  v6 = ObOpenObjectByPointer(*((PVOID *)this + 5), 0x200u, 0LL, 0x1F0003u, v10, 0, (PHANDLE)this + 4);
  if ( v6 < 0 )
    goto LABEL_23;
  if ( (*((_DWORD *)a2 + 2) & 1) != 0 )
  {
    KernelEventObject = CreateKernelEventObject(v14, 0);
    *((_QWORD *)this + 6) = KernelEventObject;
    if ( KernelEventObject )
      return 0;
    v6 = -1073741823;
LABEL_23:
    CRIMBase::SensorDispatcherObject::CloseDispatcherHandles(this);
  }
  return (unsigned int)v6;
}
