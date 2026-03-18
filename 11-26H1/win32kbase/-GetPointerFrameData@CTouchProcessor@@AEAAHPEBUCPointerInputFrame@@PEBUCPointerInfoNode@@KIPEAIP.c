/*
 * XREFs of ?GetPointerFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@KIPEAIPEAE@Z @ 0x140050BFC
 * Callers:
 *     ?GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z @ 0x14004FE40 (-GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z.c)
 * Callees:
 *     GetPointerInfoSize @ 0x140050B38 (GetPointerInfoSize.c)
 *     ?PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x140050DAC (-PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_.c)
 *     ?CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ @ 0x140050ED0 (-CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerFrameData(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInfoNode *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int *a6,
        struct tagPOINTER_INFO *a7)
{
  __int64 PointerInfoSize; // r14
  unsigned int v11; // ebx
  CTouchProcessor *v12; // rdx
  unsigned int v13; // r15d
  unsigned int v14; // r13d
  unsigned __int64 v15; // rdi
  unsigned int v16; // esi
  __int64 v17; // rax
  __int64 v20; // [rsp+78h] [rbp+10h]

  PointerInfoSize = (unsigned int)GetPointerInfoSize(a4);
  v11 = 1;
  v13 = 0;
  if ( !(unsigned int)CTouchProcessor::CTouchProcessorLockShared(v12) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 14031LL);
  v14 = *((_DWORD *)a3 + 2);
  v20 = *((_QWORD *)a3 + 24);
  if ( v14 >= *((_DWORD *)a2 + 12) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 14036LL);
  v15 = *((_QWORD *)a2 + 30);
  v16 = 0;
  while ( 1 )
  {
    v17 = *((unsigned int *)a2 + 12);
    if ( v13 >= (unsigned int)v17 )
      break;
    if ( v15 >= *((_QWORD *)a2 + 30) + 480 * v17 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 14048LL);
    if ( *(_QWORD *)(v15 + 192) == v20 && *(_DWORD *)(v15 + 8) == v14 )
    {
      ++v16;
      if ( a5 >= (unsigned int)PointerInfoSize )
      {
        v11 = CTouchProcessor::PointerInfoCopyOutHelper(
                this,
                (struct CPointerInfoNode *)v15,
                *((struct tagHID_POINTER_DEVICE_INFO **)a2 + 32),
                a4,
                PointerInfoSize,
                a7);
        if ( v11 )
        {
          a7 = (struct tagPOINTER_INFO *)((char *)a7 + PointerInfoSize);
          a5 -= PointerInfoSize;
        }
      }
    }
    ++v13;
    v15 += 480LL;
    if ( !v11 )
      return v11;
  }
  *a6 = v16;
  return v11;
}
