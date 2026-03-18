/*
 * XREFs of ?SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z @ 0x14021E6D0
 * Callers:
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1401FB1F0 (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1400620B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     ??0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z @ 0x14019B67C (--0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z.c)
 *     ??1CIVSerializer@@UEAA@XZ @ 0x14019C368 (--1CIVSerializer@@UEAA@XZ.c)
 *     ?IVMeasureRimCompleteFrame@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame@@U_UNICODE_STRING@@AEAVCIVTouchSerializer@@@Z @ 0x1402199B4 (-IVMeasureRimCompleteFrame@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame@@U_UNICODE_STRING@@A.c)
 *     ?IVSerializeRimCompleteFrameForTouchInputPacket@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame@@U_UNICODE_STRING@@HAEAVCIVTouchSerializer@@@Z @ 0x140219CA0 (-IVSerializeRimCompleteFrameForTouchInputPacket@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame.c)
 *     ?ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x14021B160 (-ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?SendFrameToContainer@Pointer@InputTraceLogging@@SAXQEAURIMDEV@@PEBUCPointerInputFrame@@@Z @ 0x14021DCA0 (-SendFrameToContainer@Pointer@InputTraceLogging@@SAXQEAURIMDEV@@PEBUCPointerInputFrame@@@Z.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x14021EA58 (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 *     ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x14022411C (-ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ.c)
 */

__int64 __fastcall IVRootDeliver::Pointer::SendTouchInput(
        IVRootDeliver::Pointer *this,
        struct CContainerPointerInput *a2)
{
  __int64 v2; // rsi
  PVOID v3; // rdi
  __int64 v4; // r14
  __int64 UserSessionState; // rax
  __int64 result; // rax
  char *v8; // rcx
  int v9; // r12d
  struct _UNICODE_STRING v10; // xmm6
  int v11; // ebx
  LARGE_INTEGER PerformanceCounter; // rax
  struct _UNICODE_STRING v13; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v14[6]; // [rsp+40h] [rbp-40h] BYREF
  PVOID Object; // [rsp+B0h] [rbp+30h] BYREF

  v2 = *(_QWORD *)this;
  v3 = 0LL;
  v4 = *((_QWORD *)this + 1);
  Object = 0LL;
  UserSessionState = W32GetUserSessionState(this, a2);
  if ( !CIVChannel::ContainerConnected(*(_DWORD *)(*(_QWORD *)(UserSessionState + 16840) + 1272LL)) )
    return 0LL;
  v8 = *(char **)(v2 + 32);
  v9 = 0;
  v10 = 0LL;
  if ( v8 )
  {
    result = RawInputManagerDeviceObjectResolveHandle(v8, 3u, *(_DWORD *)(v2 + 192) == 0, &Object);
    if ( (int)result < 0 )
      return result;
    v3 = Object;
    v10 = *(struct _UNICODE_STRING *)((char *)Object + 264);
  }
  else
  {
    v9 = 1;
  }
  CIVSerializer::CIVSerializer((__int64)v14, 3);
  v14[0] = &CIVGenericSerializer::`vftable';
  if ( v14[2] )
  {
    v13 = v10;
    v11 = IVMeasureRimCompleteFrame(
            (struct RIMCOMPLETEFRAME *)v2,
            (const struct CPointerRawData **)v4,
            &v13,
            (struct CIVTouchSerializer *)v14);
    if ( v11 >= 0 )
    {
      v11 = CIVSerializer::ExtendByMeasuredExtra((CIVSerializer *)v14);
      if ( v11 >= 0 )
      {
        *(union _LARGE_INTEGER *)(v2 + 184) = gliQpcFreq;
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v13 = v10;
        *(LARGE_INTEGER *)(v2 + 112) = PerformanceCounter;
        v11 = IVSerializeRimCompleteFrameForTouchInputPacket(
                (struct RIMCOMPLETEFRAME *)v2,
                (struct CPointerInputFrame *)v4,
                &v13,
                v9,
                (struct CIVTouchSerializer *)v14);
        if ( v11 >= 0 )
        {
          InputTraceLogging::Pointer::SendFrameToContainer(
            *(struct RIMDEV *const *)(*(_QWORD *)(v4 + 256) + 16LL),
            (const struct CPointerInputFrame *)v4);
          v11 = ivrIVSend((const struct CIVSerializer *)v14, 2LL, (IVRootDeliver::Pointer *)((char *)this + 16));
        }
      }
    }
  }
  else
  {
    v11 = -1073741801;
  }
  if ( v3 )
    ObfDereferenceObject(v3);
  v14[0] = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer((CIVSerializer *)v14);
  return (unsigned int)v11;
}
