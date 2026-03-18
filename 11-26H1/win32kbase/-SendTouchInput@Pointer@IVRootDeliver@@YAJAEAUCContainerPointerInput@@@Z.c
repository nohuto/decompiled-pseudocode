/*
 * XREFs of ?SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z @ 0x140221E14
 * Callers:
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x140213C90 (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x140060220 (RawInputManagerDeviceObjectResolveHandle.c)
 *     ??0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z @ 0x1401B4D38 (--0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z.c)
 *     ??1CIVSerializer@@UEAA@XZ @ 0x1401B71EC (--1CIVSerializer@@UEAA@XZ.c)
 *     ?ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x1401BA300 (-ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x1401C37F4 (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 *     ?IVMeasureRimCompleteFrame@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame@@U_UNICODE_STRING@@AEAVCIVTouchSerializer@@@Z @ 0x14021E3D0 (-IVMeasureRimCompleteFrame@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame@@U_UNICODE_STRING@@A.c)
 *     ?IVSerializeRimCompleteFrameForTouchInputPacket@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame@@U_UNICODE_STRING@@HAEAVCIVTouchSerializer@@@Z @ 0x14021E5E8 (-IVSerializeRimCompleteFrameForTouchInputPacket@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame.c)
 *     ?SendFrameToContainer@Pointer@InputTraceLogging@@SAXQEAURIMDEV@@PEBUCPointerInputFrame@@@Z @ 0x140221414 (-SendFrameToContainer@Pointer@InputTraceLogging@@SAXQEAURIMDEV@@PEBUCPointerInputFrame@@@Z.c)
 *     ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x140225A6C (-ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ.c)
 */

__int64 __fastcall IVRootDeliver::Pointer::SendTouchInput(
        IVRootDeliver::Pointer *this,
        struct CContainerPointerInput *a2,
        int a3)
{
  __int64 v3; // rsi
  PVOID v4; // rdi
  __int64 v5; // r14
  __int64 UserSessionState; // rax
  int v8; // edx
  int v9; // r8d
  __int64 result; // rax
  char *v11; // rcx
  int v12; // r12d
  struct _UNICODE_STRING v13; // xmm6
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // ebx
  LARGE_INTEGER PerformanceCounter; // rax
  struct _UNICODE_STRING v19; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v20[6]; // [rsp+40h] [rbp-40h] BYREF
  PVOID Object; // [rsp+B0h] [rbp+30h] BYREF

  v3 = *(_QWORD *)this;
  v4 = 0LL;
  v5 = *((_QWORD *)this + 1);
  Object = 0LL;
  UserSessionState = W32GetUserSessionState((_DWORD)this, (_DWORD)a2, a3);
  if ( !CIVChannel::ContainerConnected(*(_DWORD *)(*(_QWORD *)(UserSessionState + 16832) + 1272LL), v8, v9) )
    return 0LL;
  v11 = *(char **)(v3 + 32);
  v12 = 0;
  v13 = 0LL;
  if ( v11 )
  {
    result = RawInputManagerDeviceObjectResolveHandle(v11, 3u, *(_DWORD *)(v3 + 192) == 0, &Object);
    if ( (int)result < 0 )
      return result;
    v4 = Object;
    v13 = *(struct _UNICODE_STRING *)((char *)Object + 264);
  }
  else
  {
    v12 = 1;
  }
  CIVSerializer::CIVSerializer((__int64)v20, 3);
  v20[0] = &CIVGenericSerializer::`vftable';
  if ( v20[2] )
  {
    v19 = v13;
    v17 = IVMeasureRimCompleteFrame(
            (struct RIMCOMPLETEFRAME *)v3,
            (const struct CPointerRawData **)v5,
            &v19,
            (struct CIVTouchSerializer *)v20);
    if ( v17 >= 0 )
    {
      v17 = CIVSerializer::ExtendByMeasuredExtra((CIVSerializer *)v20);
      if ( v17 >= 0 )
      {
        *(union _LARGE_INTEGER *)(v3 + 184) = gliQpcFreq;
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v19 = v13;
        *(LARGE_INTEGER *)(v3 + 112) = PerformanceCounter;
        v17 = IVSerializeRimCompleteFrameForTouchInputPacket(
                (struct RIMCOMPLETEFRAME *)v3,
                (struct CPointerInputFrame *)v5,
                &v19,
                v12,
                (struct CIVTouchSerializer *)v20);
        if ( v17 >= 0 )
        {
          InputTraceLogging::Pointer::SendFrameToContainer(
            *(struct RIMDEV *const *)(*(_QWORD *)(v5 + 256) + 16LL),
            (const struct CPointerInputFrame *)v5);
          v17 = ivrIVSend((const struct CIVSerializer *)v20, 2u, (IVRootDeliver::Pointer *)((char *)this + 16));
        }
      }
    }
  }
  else
  {
    v17 = -1073741801;
  }
  if ( v4 )
    ObfDereferenceObject(v4);
  v20[0] = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer((CIVSerializer *)v20, v14, v15, v16);
  return (unsigned int)v17;
}
