/*
 * XREFs of ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x14006BF24
 * Callers:
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@@Z @ 0x140064808 (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETE.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x140108F24 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 *     ?EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@_K@Z @ 0x140214E4C (-EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPoi.c)
 * Callees:
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x14006C298 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?TrackCoalesceOnArrival@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x14006C2BC (-TrackCoalesceOnArrival@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1400CCC34 (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1400CEB40 (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 */

void __fastcall CTouchProcessor::ProcessQFrameNode(
        CTouchProcessor *this,
        struct CPointerQFrame *a2,
        const struct CPointerInputFrame *a3,
        struct CPointerInfoNode *a4)
{
  const struct CPointerInputFrame *v5; // r13
  struct CPointerQFrame *v6; // rsi
  char v7; // bl
  int v8; // eax
  int v9; // edx
  __int64 v10; // rcx
  __int16 v11; // r8
  CTouchProcessor *v12; // r9
  int v13; // r10d
  int v14; // r12d
  unsigned int *v15; // rdi
  unsigned int *v16; // rbp
  unsigned int v17; // edx
  int v18; // ecx
  int v19; // eax
  int CanCoalesceNodeWithPrevious; // eax
  __int64 v21; // rcx
  void *v22; // r8
  unsigned int v24; // [rsp+88h] [rbp+10h] BYREF

  v5 = a3;
  v6 = a2;
  v7 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(a2) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      (_DWORD)a2,
      (_DWORD)a3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      70,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  v8 = CPointerInfoNode::IsForManipulationThread(a4);
  if ( !v8 || (v14 = 1, (*((_DWORD *)a4 + 1) & 0x200) != 0) )
    v14 = v13;
  if ( (v9 || v8 && (v11 & 0x400) != 0) && !v14 )
    CTouchProcessor::ProcessEnterLeave(v12, v5, a4);
  v15 = (unsigned int *)((char *)v6 + 140);
  v16 = (unsigned int *)((char *)v6 + 140);
  v17 = *((_DWORD *)v6 + 35);
  if ( (v17 & 1) != 0 && v14 )
  {
    v17 &= ~1u;
    *((_DWORD *)v6 + 36) = 22;
    *v15 = v17;
    v16 = (unsigned int *)((char *)v6 + 140);
  }
  if ( (v17 & 1) != 0 )
  {
    if ( (*(_DWORD *)a4 & 1) == 0 )
    {
      CTouchProcessor::TrackCoalesceOnArrival(v10, v6, 2LL);
      *v15 &= ~1u;
      v17 = *v15;
    }
    if ( (v17 & 1) != 0 )
    {
      v19 = *(_DWORD *)a4;
      if ( (*(_DWORD *)a4 & 8) != 0 || (v19 & 0x10) != 0 || (v19 & 0x40) != 0 || (v19 & 0x20) != 0 )
      {
        CTouchProcessor::TrackCoalesceOnArrival(v10, v6, 16LL);
        *v16 &= ~1u;
        v17 = *v16;
      }
    }
  }
  v18 = v17;
  if ( (v17 & 8) == 0 && (*(_DWORD *)a4 & 0x100000) != 0 && !v14 )
  {
    CTouchProcessor::TrackCoalesceOnArrival(v17, v6, 9LL);
    v18 = *((_DWORD *)v6 + 35) | 8;
    *((_DWORD *)v6 + 35) = v18;
  }
  if ( (v18 & 1) == 0 || (v18 & 8) != 0 )
  {
    v18 &= ~2u;
    *((_DWORD *)v6 + 35) = v18;
  }
  if ( (v18 & 2) != 0 )
  {
    v24 = 1;
    CanCoalesceNodeWithPrevious = CTouchProcessor::CanCoalesceNodeWithPrevious(
                                    this,
                                    v5,
                                    a4,
                                    0LL,
                                    v6,
                                    (enum CPointerCoalesce *)&v24);
    v21 = (2 * CanCoalesceNodeWithPrevious) ^ (*((_DWORD *)v6 + 35) ^ (2 * CanCoalesceNodeWithPrevious)) & 0xFFFFFFFD;
    *((_DWORD *)v6 + 35) = v21;
    if ( (v21 & 2) == 0 )
      CTouchProcessor::TrackCoalesceOnArrival(v21, v6, v24);
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v17) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v17) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v7 = 0;
  if ( (_BYTE)v17 || v7 )
  {
    v22 = &WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids;
    LOBYTE(v22) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v17,
      (_DWORD)v22,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      71,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  }
}
