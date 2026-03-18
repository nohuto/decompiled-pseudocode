/*
 * XREFs of ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x14001B668
 * Callers:
 *     NtFlipObjectConsumerEndProcessPresent @ 0x1400195D0 (NtFlipObjectConsumerEndProcessPresent.c)
 *     NtFlipObjectConsumerAcquirePresent @ 0x1400196F0 (NtFlipObjectConsumerAcquirePresent.c)
 *     NtFlipObjectDisconnectEndpoint @ 0x140019D90 (NtFlipObjectDisconnectEndpoint.c)
 *     NtFlipObjectOpen @ 0x14001A2F0 (NtFlipObjectOpen.c)
 *     NtFlipObjectConsumerPostMessage @ 0x14001AEA0 (NtFlipObjectConsumerPostMessage.c)
 *     NtFlipObjectQueryNextMessageToProducer @ 0x14001B1F0 (NtFlipObjectQueryNextMessageToProducer.c)
 *     NtFlipObjectReadNextMessageToProducer @ 0x14001B310 (NtFlipObjectReadNextMessageToProducer.c)
 *     NtFlipObjectSetContent @ 0x14001B470 (NtFlipObjectSetContent.c)
 *     ?FlipManagerCreateProducerTokenInitInfo@@YAJPEAXU_LUID@@_N_KIPEAUFlipPropertyItem@@PEAUFlipManagerTokenInitInfo@@@Z @ 0x140023904 (-FlipManagerCreateProducerTokenInitInfo@@YAJPEAXU_LUID@@_N_KIPEAUFlipPropertyItem@@PEAUFlipManag.c)
 *     ?FlipManagerCreateConsumerTokenOperation@@YAJPEAX_KPEAUFlipManagerTokenInitInfo@@@Z @ 0x14002584C (-FlipManagerCreateConsumerTokenOperation@@YAJPEAX_KPEAUFlipManagerTokenInitInfo@@@Z.c)
 *     NtFlipObjectConsumerBeginProcessPresent @ 0x140025B30 (NtFlipObjectConsumerBeginProcessPresent.c)
 *     NtFlipObjectRemoveContent @ 0x140029D30 (NtFlipObjectRemoveContent.c)
 *     NtFlipObjectRemovePoolBuffer @ 0x14002A0A0 (NtFlipObjectRemovePoolBuffer.c)
 *     NtFlipObjectAddContent @ 0x140044810 (NtFlipObjectAddContent.c)
 *     NtFlipObjectAddPoolBuffer @ 0x140044B00 (NtFlipObjectAddPoolBuffer.c)
 *     NtFlipObjectQueryBufferAvailableEvent @ 0x140059E20 (NtFlipObjectQueryBufferAvailableEvent.c)
 *     NtFlipObjectConsumerQueryBufferInfo @ 0x14005E6F0 (NtFlipObjectConsumerQueryBufferInfo.c)
 *     NtFlipObjectConsumerAdjustUsageReference @ 0x1400A3DC0 (NtFlipObjectConsumerAdjustUsageReference.c)
 *     NtFlipObjectEnablePresentStatisticsType @ 0x1400A3F80 (NtFlipObjectEnablePresentStatisticsType.c)
 *     NtFlipObjectPresentCancel @ 0x1400A4050 (NtFlipObjectPresentCancel.c)
 *     NtFlipObjectQueryLostEvent @ 0x1400A4130 (NtFlipObjectQueryLostEvent.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FlipManagerObject::ResolveHandle(
        void *a1,
        ACCESS_MASK a2,
        __int64 a3,
        struct FlipManagerObject **a4)
{
  NTSTATUS v5; // ebx
  struct FlipManagerObject *v6; // rdi
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(a1, a2, g_pDxgkCompositionObjectType, 1, &Object, 0LL);
  if ( v5 >= 0 )
  {
    v6 = (struct FlipManagerObject *)Object;
    if ( (***((unsigned int (__fastcall ****)(_QWORD))Object + 2))(*((_QWORD *)Object + 2)) == 4 )
    {
      *a4 = v6;
    }
    else
    {
      ObfDereferenceObject(v6);
      return (unsigned int)-1073741788;
    }
  }
  return (unsigned int)v5;
}
