/*
 * XREFs of PopFxRegisterDevice @ 0x140B52230
 * Callers:
 *     PoFxEnableDStateReporting @ 0x1407CFEE0 (PoFxEnableDStateReporting.c)
 *     PoFxRegisterDevice @ 0x1407D0180 (PoFxRegisterDevice.c)
 *     PoFxRegisterPrimaryDevice @ 0x1407D0460 (PoFxRegisterPrimaryDevice.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14026E824 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x14026F250 (IoGetAttachedDeviceReferenceWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     PopFxActivateComponent @ 0x14037C8F0 (PopFxActivateComponent.c)
 *     PopFxIdleComponent @ 0x140396DA0 (PopFxIdleComponent.c)
 *     PopFxBugCheck @ 0x1403BAB64 (PopFxBugCheck.c)
 *     PopFxDereferenceDevice @ 0x1403C00F4 (PopFxDereferenceDevice.c)
 *     PopFxInsertDevice @ 0x1404E9100 (PopFxInsertDevice.c)
 *     PopFxAssignDeviceToDevNode @ 0x1404F1850 (PopFxAssignDeviceToDevNode.c)
 *     PopFxGetParentFxDevice @ 0x140607AC8 (PopFxGetParentFxDevice.c)
 *     PopFxInsertDeviceRelation @ 0x140607C20 (PopFxInsertDeviceRelation.c)
 *     PopFxTraceDeviceRegistration @ 0x140AF125C (PopFxTraceDeviceRegistration.c)
 *     PopFxRegisterDeviceWorker @ 0x140B1DC50 (PopFxRegisterDeviceWorker.c)
 *     PopGenerateDeviceFriendlyName @ 0x140B25330 (PopGenerateDeviceFriendlyName.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopFxRegisterDevice(
        struct _LIST_ENTRY *Object,
        __int128 *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  void *Pool2; // r14
  __int64 v9; // r12
  _QWORD *DeviceAttachmentBaseRefWithTag; // r13
  int v11; // ebx
  _QWORD *AttachedDeviceReferenceWithTag; // r15
  __int64 v13; // rdi
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  __int64 ParentFxDevice; // rax
  ULONG_PTR v17; // rsi
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct _KLOCK_ENTRIES *v21; // r9
  struct _LIST_ENTRY *v23; // [rsp+50h] [rbp-18h] BYREF

  Pool2 = 0LL;
  v23 = 0LL;
  v9 = 0LL;
  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag((__int64)Object, 0x78466F50u);
  if ( DeviceAttachmentBaseRefWithTag )
  {
    AttachedDeviceReferenceWithTag = IoGetAttachedDeviceReferenceWithTag(Object, 0x78466F50u);
    if ( !AttachedDeviceReferenceWithTag )
    {
      v11 = -1073741811;
      goto LABEL_32;
    }
    v13 = *(_QWORD *)(DeviceAttachmentBaseRefWithTag[39] + 40LL);
    if ( v13 )
    {
      _m_prefetchw((const void *)(v13 + 296));
      v14 = *(_DWORD *)(v13 + 296);
      do
      {
        v15 = v14;
        v14 = _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 296), v14, v14);
      }
      while ( v15 != v14 );
      if ( (v14 & 1) != 0 )
      {
        ParentFxDevice = PopFxGetParentFxDevice(v13);
        v17 = ParentFxDevice;
        if ( !ParentFxDevice
          || (v18 = *(_DWORD *)(ParentFxDevice + 952), v18 == -1)
          || (v9 = *(_QWORD *)(*(_QWORD *)(v17 + 872) + 8LL * v18),
              PopFxActivateComponent(v17, v9, 1, 0),
              (Pool2 = (void *)ExAllocatePool2(0x40uLL)) != 0LL) )
        {
          v11 = PopFxRegisterDeviceWorker(
                  *(_QWORD *)(v13 + 144),
                  (const UNICODE_STRING *)(v13 + 128),
                  a2,
                  a3,
                  a4,
                  a5,
                  *((_BYTE *)AttachedDeviceReferenceWithTag + 76) + 1,
                  a6,
                  &v23);
          if ( v11 >= 0 )
          {
            v23[3].Flink = (struct _LIST_ENTRY *)v13;
            if ( *(_QWORD *)(v13 + 80) )
              PopFxBugCheck(0x600uLL, *(_QWORD *)(v13 + 32), 0LL, 0LL);
            PopGenerateDeviceFriendlyName(v13, 1, (UNICODE_STRING *)&v23[77]);
            PopFxAssignDeviceToDevNode(v13, (__int64)v23);
            ObfReferenceObjectWithTag(Object, 0x78466F50u);
            v23[6].Flink = Object;
            v23[6].Blink = (struct _LIST_ENTRY *)AttachedDeviceReferenceWithTag;
            if ( ((__int64)v23[54].Flink & 1) == 0 && Pool2 )
            {
              PopFxInsertDeviceRelation(v9, (__int64)v23, 2, (__int64)Pool2);
              Pool2 = 0LL;
              v9 = 0LL;
            }
            PopFxTraceDeviceRegistration((__int64)v23, 0);
            PopFxInsertDevice(v20, v19, v23, v21);
            AttachedDeviceReferenceWithTag = 0LL;
            DeviceAttachmentBaseRefWithTag = 0LL;
            v11 = 0;
          }
          else
          {
            v23 = 0LL;
          }
          if ( Pool2 )
            ExFreePoolWithTag(Pool2, 0x4D584650u);
        }
        else
        {
          v11 = -1073741670;
        }
        if ( v9 )
          PopFxIdleComponent(v17, *(unsigned int *)(v9 + 16), 2);
        if ( v17 )
          PopFxDereferenceDevice(v17, 6);
        if ( !AttachedDeviceReferenceWithTag )
        {
LABEL_31:
          if ( !DeviceAttachmentBaseRefWithTag )
            goto LABEL_33;
LABEL_32:
          ObfDereferenceObjectWithTag(DeviceAttachmentBaseRefWithTag, 0x78466F50u);
          goto LABEL_33;
        }
      }
      else
      {
        v11 = -1073741661;
      }
    }
    else
    {
      v11 = -1073741811;
    }
    ObfDereferenceObjectWithTag(AttachedDeviceReferenceWithTag, 0x78466F50u);
    goto LABEL_31;
  }
  v11 = -1073741811;
LABEL_33:
  *a7 = v23;
  return (unsigned int)v11;
}
