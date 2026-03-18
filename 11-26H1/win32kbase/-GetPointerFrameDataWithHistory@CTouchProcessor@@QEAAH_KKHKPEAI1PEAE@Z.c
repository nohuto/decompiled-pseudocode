/*
 * XREFs of ?GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z @ 0x14004FE40
 * Callers:
 *     ?GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z @ 0x14004F438 (-GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     GetPointerInfoSize @ 0x140050B38 (GetPointerInfoSize.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x140050B68 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?GetPointerFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@KIPEAIPEAE@Z @ 0x140050BFC (-GetPointerFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@KIPEAIP.c)
 *     ?IsFullyReleased@CPointerInfoNode@@QEBAHXZ @ 0x1400511CC (-IsFullyReleased@CPointerInfoNode@@QEBAHXZ.c)
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x140051C6C (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x14006BE3C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x14006C3AC (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z @ 0x14016F40C (-GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerFrameDataWithHistory(
        PERESOURCE *this,
        unsigned int *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned int *a7,
        struct tagPOINTER_INFO *a8)
{
  int v11; // edx
  int v12; // r8d
  char v13; // bl
  PERESOURCE *v14; // r15
  int v15; // edx
  __int64 FrameById; // rax
  __int64 v17; // rbp
  CPointerInfoNode *v18; // r14
  unsigned int v19; // r13d
  int v20; // edx
  unsigned int PointerFrameData; // esi
  unsigned __int64 v22; // rdi
  CTouchProcessor *v24; // rcx
  unsigned int v25; // ecx
  unsigned int HistoryCount; // eax
  unsigned int v27; // r14d
  unsigned int v28; // r13d
  const struct CPointerInputFrame *PreviousFrameByDevice; // rbp
  CPointerInfoNode *v30; // r14
  unsigned int v31; // eax
  void *v32; // r8
  void *v33; // r8
  __int16 v34; // [rsp+30h] [rbp-78h]
  unsigned int v35; // [rsp+40h] [rbp-68h] BYREF
  int v36; // [rsp+44h] [rbp-64h]
  int v37; // [rsp+48h] [rbp-60h]
  unsigned int PointerInfoSize; // [rsp+4Ch] [rbp-5Ch]
  unsigned __int8 *v39; // [rsp+50h] [rbp-58h]
  int v41; // [rsp+B8h] [rbp+10h]
  unsigned int v42; // [rsp+C0h] [rbp+18h]
  int v43; // [rsp+C8h] [rbp+20h]
  bool IsLockedShared; // [rsp+D0h] [rbp+28h]

  v43 = a4;
  v42 = a3;
  v39 = (unsigned __int8 *)a8;
  v35 = 0;
  PointerInfoSize = GetPointerInfoSize((unsigned int)a3, a2, a3, a4);
  v13 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v11) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v11) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v12) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(v12) = 0;
  }
  if ( (_BYTE)v11 || (_BYTE)v12 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v12,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      123,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  v14 = this + 4;
  IsLockedShared = tagDomLock::IsLockedShared(this + 4);
  if ( !IsLockedShared )
    ExEnterCriticalRegionAndAcquireResourceShared(*v14);
  if ( !a2 )
  {
    v24 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v15) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v15) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v13 = 0;
    if ( !(_BYTE)v15 && !v13 )
      goto LABEL_41;
    v32 = &WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids;
    v34 = 124;
    goto LABEL_81;
  }
  if ( (a2[9] & 0x80u) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131073LL, 10641LL);
  FrameById = CTouchProcessor::FindFrameById(this, a2[7], 4LL);
  v17 = FrameById;
  if ( !FrameById )
  {
    v24 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v15) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v15) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v13 = 0;
    if ( !(_BYTE)v15 && !v13 )
      goto LABEL_41;
    v32 = &WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids;
    v34 = 125;
    goto LABEL_81;
  }
  if ( a2[8] >= *(_DWORD *)(FrameById + 48) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5248LL);
  v18 = (CPointerInfoNode *)(*(_QWORD *)(v17 + 240) + 480LL * a2[8]);
  if ( !(unsigned int)CPointerInfoNode::IsValid(v18) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5250LL);
  if ( (unsigned int)CPointerInfoNode::IsFullyReleased(v18) )
  {
    v24 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v15) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v15) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v13 = 0;
    if ( !(_BYTE)v15 && !v13 )
      goto LABEL_41;
    v32 = &WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids;
    v34 = 126;
LABEL_81:
    LOBYTE(v32) = v13;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)v24 + 3),
      v15,
      (_DWORD)v32,
      *((_QWORD *)v24 + 8),
      5,
      4,
      v34,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
LABEL_41:
    if ( !IsLockedShared )
      ExReleaseResourceAndLeaveCriticalRegion(*v14);
    return 0LL;
  }
  v19 = 1;
  v41 = 1;
  PointerFrameData = CTouchProcessor::GetPointerFrameData(
                       (CTouchProcessor *)this,
                       (const struct CPointerInputFrame *)v17,
                       v18,
                       v42,
                       a5,
                       &v35,
                       a8);
  if ( PointerFrameData )
  {
    v22 = v35 * (unsigned __int64)PointerInfoSize;
    if ( v22 <= 0xFFFFFFFF )
    {
      PointerFrameData = 1;
      if ( a5 >= (unsigned int)v22 )
      {
        if ( !(_DWORD)v22 )
        {
          v36 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5284LL);
        }
        v39 = (unsigned __int8 *)a8 + (unsigned int)v22;
        a5 -= v22;
      }
      if ( v43 )
      {
        HistoryCount = CPointerInfoNode::GetHistoryCount(v18);
        v27 = *((_DWORD *)v18 + 86);
        v28 = HistoryCount;
        PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(
                                  (CTouchProcessor *)this,
                                  (const struct CPointerInputFrame *)v17);
        while ( PreviousFrameByDevice )
        {
          if ( v28 > 1 )
          {
            if ( v27 >= *((_DWORD *)PreviousFrameByDevice + 12) )
            {
              v36 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5301LL);
            }
            v30 = (CPointerInfoNode *)(*((_QWORD *)PreviousFrameByDevice + 30) + 480LL * v27);
            if ( !(unsigned int)CPointerInfoNode::IsValid(v30) )
            {
              v37 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5303LL);
            }
            ++v41;
            if ( a5 >= (unsigned int)v22 )
            {
              PointerFrameData = CTouchProcessor::GetPointerHistoryFrameData(
                                   (CTouchProcessor *)this,
                                   PreviousFrameByDevice,
                                   v42,
                                   v35,
                                   v22,
                                   (unsigned __int8 *)a8,
                                   v39);
              if ( PointerFrameData )
              {
                v39 += (unsigned int)v22;
                a5 -= v22;
              }
            }
            if ( CPointerInfoNode::GetHistoryCount(v30) != v28 - 1 )
            {
              PointerInfoSize = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5323LL);
            }
            v31 = CPointerInfoNode::GetHistoryCount(v30);
            v27 = *((_DWORD *)v30 + 86);
            v28 = v31;
            PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(
                                      (CTouchProcessor *)this,
                                      PreviousFrameByDevice);
            if ( PointerFrameData )
              continue;
          }
          if ( !PointerFrameData )
            goto LABEL_22;
          break;
        }
        v19 = v41;
      }
      v25 = v35;
      *a6 = v19;
      *a7 = v25;
    }
    else
    {
      PointerFrameData = 0;
    }
  }
LABEL_22:
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v20) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v20) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v13 = 0;
  if ( (_BYTE)v20 || v13 )
  {
    v33 = &WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids;
    LOBYTE(v33) = v13;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v20,
      (_DWORD)v33,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      127,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  }
  if ( !IsLockedShared )
    ExReleaseResourceAndLeaveCriticalRegion(*v14);
  return PointerFrameData;
}
