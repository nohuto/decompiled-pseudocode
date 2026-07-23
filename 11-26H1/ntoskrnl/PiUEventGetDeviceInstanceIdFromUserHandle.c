/*
 * XREFs of PiUEventGetDeviceInstanceIdFromUserHandle @ 0x1409A7178
 * Callers:
 *     PiUEventHandleRegistration @ 0x1409A80E0 (PiUEventHandleRegistration.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PnpGetRelatedTargetDevice @ 0x14049B114 (PnpGetRelatedTargetDevice.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     PsIsProcessAppContainer @ 0x1409A7110 (PsIsProcessAppContainer.c)
 */

__int64 __fastcall PiUEventGetDeviceInstanceIdFromUserHandle(void *a1, _QWORD *a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // r9
  NTSTATUS v6; // esi
  int RelatedTargetDevice; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  __int64 v12; // rbx
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  *a3 = 0LL;
  LOBYTE(CurrentThread) = CurrentThread->PreviousMode;
  v14 = 0LL;
  Object = 0LL;
  v6 = ObReferenceObjectByHandle(a1, 0, (POBJECT_TYPE)IoFileObjectType, (KPROCESSOR_MODE)CurrentThread, &Object, 0LL);
  if ( v6 >= 0 )
  {
    RelatedTargetDevice = PnpGetRelatedTargetDevice((PFILE_OBJECT)Object, &v14);
    v12 = v14;
    v6 = RelatedTargetDevice;
    if ( RelatedTargetDevice >= 0 )
    {
      *a2 = v14 + 40;
      if ( PsIsProcessAppContainer((__int64)KeGetCurrentThread()->ApcState.Process, v9, v10, v11) )
        *a3 = *(_QWORD *)(v12 + 32);
    }
    if ( v12 )
      ObfDereferenceObject(*(PVOID *)(v12 + 32));
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)v6;
}
