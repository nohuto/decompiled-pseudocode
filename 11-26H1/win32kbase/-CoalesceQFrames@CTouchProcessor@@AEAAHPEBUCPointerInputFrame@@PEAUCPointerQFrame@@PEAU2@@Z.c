/*
 * XREFs of ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x14006DC54
 * Callers:
 *     ?DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x14006D858 (-DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?IsFullyReleased@CPointerInfoNode@@QEBAHXZ @ 0x1400511CC (-IsFullyReleased@CPointerInfoNode@@QEBAHXZ.c)
 *     ?CanCoalesceIgnoreNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAW4CPointerCoalesce@@@Z @ 0x1400514EC (-CanCoalesceIgnoreNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAW4.c)
 *     ?CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@KH@Z @ 0x140064CC8 (-CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x140066268 (McTemplateK0qqq_EtwWriteTransfer.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14006D5C8 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1400CCC34 (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 *     ApiSetEditionDelQEntry @ 0x1400E43DC (ApiSetEditionDelQEntry.c)
 *     ?TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x1401437F4 (-TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z.c)
 *     ?GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z @ 0x140156D00 (-GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z.c)
 *     ?FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z @ 0x140163A1C (-FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z.c)
 *     ?CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@_K@Z @ 0x140174CE8 (-CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@_K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct tagCPointerCoalesceInfo *__fastcall CTouchProcessor::CoalesceQFrames(
        PERESOURCE *this,
        const struct CPointerInputFrame *a2,
        struct CPointerQFrame *a3,
        struct CPointerInputFrame *a4)
{
  unsigned int v5; // r12d
  __int64 v9; // rcx
  __int64 v10; // rcx
  struct tagCPointerCoalesceInfo *result; // rax
  __int64 v12; // r8
  __int64 v13; // r14
  unsigned int CanCoalesceNodeWithPrevious; // ebx
  const struct CPointerInfoNode *v15; // rsi
  int v16; // r13d
  __int64 v17; // rcx
  int v18; // r8d
  struct tagQMSG *NodeQueuedMessage; // rbx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rcx
  unsigned int v23; // r12d
  unsigned __int64 v24; // rsi
  unsigned int v25; // ebx
  __int64 v26; // r13
  struct tagQ *v27; // rcx
  unsigned int v28; // [rsp+44h] [rbp-Ch]
  struct tagQ *v29; // [rsp+48h] [rbp-8h] BYREF
  unsigned int v31; // [rsp+A0h] [rbp+50h] BYREF
  struct CPointerInputFrame *v32; // [rsp+A8h] [rbp+58h]

  v32 = a4;
  v5 = 0;
  v29 = 0LL;
  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 15477LL);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v9, (__int64)a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 15479LL);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v10, (__int64)a4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 15480LL);
  if ( (*((_DWORD *)a3 + 35) & 4) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 15481LL);
  if ( (*((_DWORD *)a3 + 35) & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 15482LL);
  if ( (*((_DWORD *)a3 + 35) & 8) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 15483LL);
  if ( *(_DWORD *)a3 == -1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 15484LL);
  result = CTouchProcessor::GetCoalesceInfo((CTouchProcessor *)this, *((_DWORD *)a3 + 34));
  v13 = (__int64)result;
  if ( result )
  {
    CanCoalesceNodeWithPrevious = 1;
    v31 = 1;
    v15 = (const struct CPointerInfoNode *)*((_QWORD *)a2 + 30);
    v16 = 0;
    while ( 1 )
    {
      v17 = *((unsigned int *)a2 + 12);
      if ( v5 >= (unsigned int)v17 )
        break;
      if ( (unsigned __int64)v15 >= *((_QWORD *)a2 + 30) + 480 * v17 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 15512LL);
      if ( *((_DWORD *)v15 + 2) == *(_DWORD *)a3 )
      {
        if ( (*(_DWORD *)v15 & 0x2000) != 0 || CPointerInfoNode::IsFullyReleased(v15) )
        {
          if ( !(unsigned int)CTouchProcessor::CanCoalesceIgnoreNode(this, v32, v15, (enum CPointerCoalesce *)&v31) )
          {
            if ( v31 != 3 && v31 != 20 )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 15550LL);
            CanCoalesceNodeWithPrevious = 0;
            goto LABEL_32;
          }
        }
        else
        {
          v29 = 0LL;
          NodeQueuedMessage = CTouchProcessor::FindNodeQueuedMessage((CTouchProcessor *)this, v15, v18, &v29);
          if ( !NodeQueuedMessage )
          {
            v31 = 15;
            goto LABEL_28;
          }
          if ( !*((_QWORD *)NodeQueuedMessage + 1) )
          {
            v31 = 18;
LABEL_28:
            CanCoalesceNodeWithPrevious = 0;
            goto LABEL_32;
          }
          if ( !v29 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 15581LL);
          if ( v5 < *(_DWORD *)(v13 + 4) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 15582LL);
          if ( *(_DWORD *)(v13 + 4) >= *(_DWORD *)v13 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 15583LL);
          *(_QWORD *)(*(_QWORD *)(v13 + 8) + 16LL * *(unsigned int *)(v13 + 4)) = v29;
          *(_QWORD *)(*(_QWORD *)(v13 + 8) + 16LL * (unsigned int)(*(_DWORD *)(v13 + 4))++ + 8) = NodeQueuedMessage;
          if ( *(_DWORD *)(v13 + 4) > *(_DWORD *)v13 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 15587LL);
          CanCoalesceNodeWithPrevious = CTouchProcessor::CanCoalesceNodeWithPrevious(
                                          (CTouchProcessor *)this,
                                          v32,
                                          v15,
                                          NodeQueuedMessage,
                                          a3,
                                          (enum CPointerCoalesce *)&v31);
          if ( !CanCoalesceNodeWithPrevious )
            goto LABEL_32;
          v16 = 1;
        }
      }
      ++v5;
      v15 = (const struct CPointerInfoNode *)((char *)v15 + 480);
    }
    if ( !v16 )
    {
      v31 = 19;
LABEL_31:
      CanCoalesceNodeWithPrevious = 0;
      goto LABEL_32;
    }
    if ( *((_DWORD *)a3 + 34) != *(_DWORD *)(*((_QWORD *)a3 + 19) + 136LL) )
    {
      v31 = 17;
      goto LABEL_31;
    }
    if ( *(_DWORD *)(v13 + 4) > *((_DWORD *)a3 + 34) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 15633LL);
    if ( v31 != 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 15634LL);
    if ( (Microsoft_Windows_Win32kEnableBits & 0x40000) != 0 )
      McTemplateK0qqq_EtwWriteTransfer(
        *((unsigned int *)a2 + 12),
        &BeginPointerFrameDelegateCoalesce,
        v12,
        *((_DWORD *)a2 + 10),
        *((_DWORD *)a2 + 12),
        0);
    v22 = *((unsigned int *)a2 + 12);
    v23 = 0;
    v24 = *((_QWORD *)a2 + 30);
    if ( (_DWORD)v22 )
    {
      v28 = CanCoalesceNodeWithPrevious;
      v25 = 0;
      do
      {
        if ( v24 >= *((_QWORD *)a2 + 30) + 480 * (unsigned __int64)(unsigned int)v22 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 15644LL);
        if ( *(_DWORD *)(v24 + 8) == *(_DWORD *)a3
          && (*(_DWORD *)v24 & 0x2000) == 0
          && !CPointerInfoNode::IsFullyReleased((CPointerInfoNode *)v24) )
        {
          if ( v25 > v23 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 15663LL);
          if ( v25 >= *(_DWORD *)(v13 + 4) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 15664LL);
          v29 = *(struct tagQ **)(*(_QWORD *)(v13 + 8) + 16LL * v25);
          v26 = *(_QWORD *)(*(_QWORD *)(v13 + 8) + 16LL * v25 + 8);
          if ( *(_QWORD *)(v24 + 16) != *(_QWORD *)(v26 + 40) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 15667LL);
          CTouchProcessor::CoalesceNodeWithPrevious(this, a2, v32, (struct CPointerInfoNode *)v24, v23, 1u);
          if ( *(_QWORD *)(v24 + 16) == *(_QWORD *)(v26 + 40) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 15675LL);
          InputTraceLogging::Delivery::CoalesceMessage(*(const struct tagQMSG **)(v26 + 8), *(_QWORD *)(v26 + 144));
          *(_QWORD *)(*(_QWORD *)(v26 + 8) + 144LL) = *(_QWORD *)(v26 + 144);
          v27 = v29;
          if ( *((_QWORD *)v29 + 11) == v26 )
          {
            *((_QWORD *)v29 + 11) = 0LL;
            v27 = v29;
          }
          ApiSetEditionDelQEntry((char *)v27 + 24, v26);
          ++v25;
        }
        v22 = *((unsigned int *)a2 + 12);
        ++v23;
        v24 += 480LL;
      }
      while ( v23 < (unsigned int)v22 );
      CanCoalesceNodeWithPrevious = v28;
    }
    if ( (Microsoft_Windows_Win32kEnableBits & 0x40000) != 0 )
      McTemplateK0qqq_EtwWriteTransfer(v22, &EndPointerFrameDelegateCoalesce, v12, *((_DWORD *)a2 + 10), v22, 0);
LABEL_32:
    v20 = v31;
    v21 = 4 * CanCoalesceNodeWithPrevious;
    *((_DWORD *)a3 + 35) = v21 ^ (*((_DWORD *)a3 + 35) ^ (2 * CanCoalesceNodeWithPrevious)) & 0xFFFFFFF9 ^ ((2 * CanCoalesceNodeWithPrevious) ^ (4 * CanCoalesceNodeWithPrevious)) & 0xFFFFFFFB;
    CTouchProcessor::TrackCoalesceOnReassign(v21, a3, v20);
    return (struct tagCPointerCoalesceInfo *)CanCoalesceNodeWithPrevious;
  }
  return result;
}
