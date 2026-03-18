/*
 * XREFs of ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x14020C254
 * Callers:
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x14018900C (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 *     ?EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@_K@Z @ 0x1401FEE94 (-EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPoi.c)
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x140206828 (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLET.c)
 * Callees:
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1400C4964 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?TrackCoalesceOnArrival@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x1400E0B44 (-TrackCoalesceOnArrival@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z.c)
 *     EtwTraceBeginPointerFrameCoalesce @ 0x1400ECD20 (EtwTraceBeginPointerFrameCoalesce.c)
 *     EtwTraceEndPointerFrameCoalesce @ 0x1400ECD80 (EtwTraceEndPointerFrameCoalesce.c)
 *     EtwTracePointerNoCoalesce @ 0x140105180 (EtwTracePointerNoCoalesce.c)
 *     ?CoalesceFrame@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@@Z @ 0x14014AD50 (-CoalesceFrame@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@KH@Z @ 0x1401FBF18 (-CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@.c)
 *     ?CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKW4tagHPD_TYPE@@KIH@Z @ 0x1401FC964 (-CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKW4tagHPD_TYPE@@KIH@Z.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x140200170 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase.c)
 */

void __fastcall CTouchProcessor::TryCoalesceQFrame(
        PERESOURCE *this,
        struct CPointerInputFrame *a2,
        const struct CPointerInputFrame *a3,
        const struct CPointerQFrame *a4)
{
  __int64 v4; // rbx
  int v5; // r8d
  unsigned int v7; // edx
  int v8; // eax
  int v10; // ebp
  int v11; // r13d
  int v12; // r12d
  unsigned int v13; // esi
  int v14; // eax
  unsigned int v15; // edx
  __int64 v16; // rcx
  unsigned int v17; // edx
  unsigned int v18; // r14d
  _DWORD *i; // rsi
  __int64 v20; // rbx
  unsigned __int64 v21; // rax
  __int16 v22; // dx
  int v23; // ecx
  int v24; // eax
  unsigned int v25; // eax
  int v26; // [rsp+44h] [rbp-54h]
  int v28; // [rsp+A8h] [rbp+10h]

  v4 = *((_QWORD *)a2 + 31);
  v5 = 0;
  v26 = 0;
  v7 = *((_DWORD *)a2 + 12);
  v8 = 0;
  v28 = 0;
  v10 = 1;
  v11 = 0;
  v12 = 1;
  v13 = 0;
  if ( v7 )
  {
    do
    {
      if ( *(_DWORD *)v4 == -1 )
        break;
      if ( !a4 || a4 == (const struct CPointerQFrame *)v4 )
      {
        v14 = *(_DWORD *)(v4 + 140);
        if ( ((v14 & 1) == 0 || (v14 & 8) != 0 || *(_QWORD *)(v4 + 8) == -1LL) && (v14 & 2) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9288);
        v15 = *(_DWORD *)(v4 + 140);
        if ( (v15 & 2) == 0 )
          goto LABEL_17;
        v16 = *(unsigned int *)(*(_QWORD *)(v4 + 152) + 136LL);
        if ( *(_DWORD *)(v4 + 136) != (_DWORD)v16 )
        {
          CTouchProcessor::TrackCoalesceOnArrival(v16, v4, 17);
          v15 = *(_DWORD *)(v4 + 140) & 0xFFFFFFFD;
          *(_DWORD *)(v4 + 140) = v15;
        }
        if ( (v15 & 2) != 0 )
        {
          if ( *(_DWORD *)(v4 + 144) != 1 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9299);
          *(_DWORD *)(v4 + 140) |= 4u;
          v8 = 1;
          v28 = 1;
        }
        else
        {
LABEL_17:
          v8 = v28;
        }
        *(_QWORD *)(v4 + 152) = 0LL;
      }
      v7 = *((_DWORD *)a2 + 12);
      ++v13;
      v4 += 160LL;
    }
    while ( v13 < v7 );
    if ( v8 )
      EtwTraceBeginPointerFrameCoalesce(*((unsigned int *)a2 + 10), v7, 0LL);
    v5 = 0;
  }
  v17 = *((_DWORD *)a2 + 12);
  v18 = 0;
  for ( i = (_DWORD *)*((_QWORD *)a2 + 30); v18 < v17; i += 120 )
  {
    if ( (unsigned __int64)i >= *((_QWORD *)a2 + 30) + 480 * (unsigned __int64)v17 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9331);
    if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)i) )
    {
      v20 = *((_QWORD *)a2 + 31) + 160LL * (unsigned int)i[2];
      if ( (a4 || *(_QWORD *)(v20 + 8) == -1LL) && a4 != (const struct CPointerQFrame *)v20 )
      {
        v10 = (*(_BYTE *)(v20 + 140) & 4) != 0 ? v10 : 0;
      }
      else
      {
        *(_DWORD *)(v20 + 140) |= 0x10u;
        if ( (*(_DWORD *)(v20 + 140) & 2) != 0 )
        {
          *((_QWORD *)i + 2) = CTouchProcessor::CoalesceNodeWithPrevious(
                                 this,
                                 a2,
                                 a3,
                                 (struct CPointerInfoNode *)i,
                                 v18,
                                 v5);
        }
        else
        {
          v10 = v5;
          v21 = CTouchProcessor::CreateAndReferenceMsgData(
                  this,
                  *((_WORD *)i + 86),
                  *((_DWORD *)a2 + 10),
                  *(_DWORD *)(*((_QWORD *)a2 + 32) + 24LL),
                  v18,
                  i[45],
                  -__CFSHR__(*i, 7));
          v22 = *((_WORD *)i + 86);
          v23 = *((unsigned __int16 *)i + 80);
          *((_QWORD *)i + 2) = v21;
          EtwTracePointerNoCoalesce(v23, v22, *(_DWORD *)(v20 + 144), 0);
        }
        v5 = 0;
        if ( !*((_QWORD *)i + 2) )
        {
          CTouchProcessor::FreePointerInfoNodeInt((__int64)this, (__int64)a2, v18);
          v5 = 0;
        }
      }
      if ( *(_QWORD *)(v20 + 8) != -1LL )
        v12 = v5;
    }
    if ( !a4 )
    {
      if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)i) )
      {
        v24 = i[45];
        if ( (v24 & 0x2000) != 0 )
        {
          v26 = 1;
          if ( (v24 & 0x10000) != 0 )
            v11 = 1;
        }
      }
    }
    v17 = *((_DWORD *)a2 + 12);
    ++v18;
  }
  if ( v28 != v5 )
    EtwTraceEndPointerFrameCoalesce(*((unsigned int *)a2 + 10), v17, 0LL);
  if ( v10 )
    InputTraceLogging::Pointer::CoalesceFrame(a2);
  v25 = v10 ^ (*((_DWORD *)a2 + 57) ^ v10) & 0xFFFFFFFE;
  *((_DWORD *)a2 + 57) = v25;
  if ( !a4 )
    *((_DWORD *)a2 + 57) = (2 * v12) ^ ((4 * v26) ^ (8 * v11)) & 0xFFFFFFF5 ^ ((8 * v11) ^ (2 * v12)) & 0xFFFFFFFD ^ (v25 ^ (4 * v26)) & 0xFFFFFFF1;
}
