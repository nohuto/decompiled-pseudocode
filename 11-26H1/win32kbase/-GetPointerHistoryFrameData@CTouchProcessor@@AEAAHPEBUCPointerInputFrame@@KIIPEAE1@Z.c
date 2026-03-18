/*
 * XREFs of ?GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z @ 0x14016F40C
 * Callers:
 *     ?GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z @ 0x14004FE40 (-GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z.c)
 * Callees:
 *     GetPointerInfoSize @ 0x140050B38 (GetPointerInfoSize.c)
 *     ?PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x140050DAC (-PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_.c)
 *     ?CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ @ 0x140050ED0 (-CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?FindPointerInFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@IPEAK@Z @ 0x140214FF4 (-FindPointerInFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@IPEAK@Z.c)
 *     RtlReadULongFromUser @ 0x1402D21A0 (RtlReadULongFromUser.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerHistoryFrameData(
        PERESOURCE *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int8 *a6,
        struct tagPOINTER_INFO *a7)
{
  unsigned int v7; // esi
  unsigned int v10; // r13d
  unsigned __int16 *v11; // rdx
  __int64 PointerInfoSize; // r12
  unsigned int v13; // ebx
  unsigned int v14; // edi
  unsigned int ULongFromUser; // eax
  unsigned int v16; // esi
  unsigned int v18[22]; // [rsp+30h] [rbp-58h] BYREF

  v7 = a4;
  v10 = 0;
  if ( !(unsigned int)CTouchProcessor::CTouchProcessorLockShared(this) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 14110LL);
  PointerInfoSize = (unsigned int)GetPointerInfoSize(a3);
  v13 = 1;
  if ( v7 > *((_DWORD *)a2 + 12) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 14122LL);
  if ( v7 * (_DWORD)PointerInfoSize != a5 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 14123LL);
  v14 = 0;
  while ( v13 && v10 < v7 )
  {
    v14 &= -(v14 < *((_DWORD *)a2 + 12));
    v18[0] = v14;
    ULongFromUser = RtlReadULongFromUser(a6 + 4, v11);
    v16 = ULongFromUser;
    v18[5] = ULongFromUser;
    if ( !ULongFromUser || HIWORD(ULongFromUser) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 14152LL);
    v11 = (unsigned __int16 *)(*((_QWORD *)a2 + 30) + 480LL * v14);
    if ( v11[86] != v16 )
    {
      if ( !(unsigned int)CTouchProcessor::FindPointerInFrame((CTouchProcessor *)this, a2, v16, v18) )
        return 0;
      v14 = v18[0];
      v11 = (unsigned __int16 *)(*((_QWORD *)a2 + 30) + 480LL * v18[0]);
    }
    if ( a5 >= (unsigned int)PointerInfoSize )
    {
      v13 = CTouchProcessor::PointerInfoCopyOutHelper(
              (CTouchProcessor *)this,
              (struct CPointerInfoNode *)v11,
              *((struct tagHID_POINTER_DEVICE_INFO **)a2 + 32),
              a3,
              PointerInfoSize,
              a7);
      if ( v13 )
      {
        a6 += PointerInfoSize;
        a7 = (struct tagPOINTER_INFO *)((char *)a7 + PointerInfoSize);
        a5 -= PointerInfoSize;
        ++v14;
      }
    }
    ++v10;
    v7 = a4;
  }
  return v13;
}
