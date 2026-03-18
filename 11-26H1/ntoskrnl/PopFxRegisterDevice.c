/*
 * XREFs of PopFxRegisterDevice @ 0x140B4F9A0
 * Callers:
 *     PoFxEnableDStateReporting @ 0x1407CCE40 (PoFxEnableDStateReporting.c)
 *     PoFxRegisterDevice @ 0x1407CD0E0 (PoFxRegisterDevice.c)
 *     PoFxRegisterPrimaryDevice @ 0x1407CD3C0 (PoFxRegisterPrimaryDevice.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14026F2B4 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x14026FCE0 (IoGetAttachedDeviceReferenceWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     PopFxActivateComponent @ 0x14037AB40 (PopFxActivateComponent.c)
 *     PopFxIdleComponent @ 0x140395020 (PopFxIdleComponent.c)
 *     PopFxBugCheck @ 0x1403B0E54 (PopFxBugCheck.c)
 *     PopFxDereferenceDevice @ 0x1403B61F4 (PopFxDereferenceDevice.c)
 *     PopFxInsertDevice @ 0x1404EFB20 (PopFxInsertDevice.c)
 *     PopFxAssignDeviceToDevNode @ 0x1404F8240 (PopFxAssignDeviceToDevNode.c)
 *     PopFxGetParentFxDevice @ 0x140604FC8 (PopFxGetParentFxDevice.c)
 *     PopFxInsertDeviceRelation @ 0x140605120 (PopFxInsertDeviceRelation.c)
 *     PopFxTraceDeviceRegistration @ 0x140AEE2C4 (PopFxTraceDeviceRegistration.c)
 *     PopFxRegisterDeviceWorker @ 0x140B1BA40 (PopFxRegisterDeviceWorker.c)
 *     PopGenerateDeviceFriendlyName @ 0x140B22F30 (PopGenerateDeviceFriendlyName.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopFxRegisterDevice(
        _QWORD *Object,
        __int128 *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        UNICODE_STRING **a7)
{
  void *Pool2; // r14
  __int64 v9; // r12
  _QWORD *DeviceAttachmentBaseRefWithTag; // r13
  int v11; // ebx
  wchar_t *AttachedDeviceReferenceWithTag; // r15
  __int64 v13; // rdi
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  __int64 ParentFxDevice; // rax
  ULONG_PTR v17; // rsi
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct _KLOCK_ENTRIES *v21; // r9
  UNICODE_STRING *v23; // [rsp+50h] [rbp-18h] BYREF

  Pool2 = 0LL;
  v23 = 0LL;
  v9 = 0LL;
  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag((__int64)Object, 0x78466F50u);
  if ( DeviceAttachmentBaseRefWithTag )
  {
    AttachedDeviceReferenceWithTag = (wchar_t *)IoGetAttachedDeviceReferenceWithTag(Object, 0x78466F50u);
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
            *(_QWORD *)&v23[3].Length = v13;
            if ( *(_QWORD *)(v13 + 80) )
              PopFxBugCheck(0x600uLL, *(_QWORD *)(v13 + 32), 0LL, 0LL);
            PopGenerateDeviceFriendlyName(v13, 1, v23 + 77);
            PopFxAssignDeviceToDevNode(v13, (__int64)v23);
            ObfReferenceObjectWithTag(Object, 0x78466F50u);
            *(_QWORD *)&v23[6].Length = Object;
            v23[6].Buffer = AttachedDeviceReferenceWithTag;
            if ( (*(_DWORD *)&v23[54].Length & 1) == 0 && Pool2 )
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
