/*
 * XREFs of ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x140069CB8
 * Callers:
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@@Z @ 0x140064808 (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETE.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x140108F24 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 *     ?EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@_K@Z @ 0x140214E4C (-EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPoi.c)
 * Callees:
 *     ?CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKW4tagHPD_TYPE@@KIH@Z @ 0x14004D2F8 (-CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKW4tagHPD_TYPE@@KIH@Z.c)
 *     ?CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@KH@Z @ 0x140064CC8 (-CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@.c)
 *     McTemplateK0hhq_EtwWriteTransfer @ 0x1400653D8 (McTemplateK0hhq_EtwWriteTransfer.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x140066268 (McTemplateK0qqq_EtwWriteTransfer.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x14006BE3C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?TrackCoalesceOnArrival@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x14006C2BC (-TrackCoalesceOnArrival@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x14006D2C4 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase.c)
 *     ?CoalesceFrame@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@@Z @ 0x140184814 (-CoalesceFrame@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CTouchProcessor::TryCoalesceQFrame(
        CTouchProcessor *this,
        struct CPointerInputFrame *a2,
        const struct CPointerInputFrame *a3,
        const struct CPointerQFrame *a4)
{
  __int64 v4; // rbx
  __int64 v5; // r8
  unsigned int v7; // edx
  int v9; // r12d
  int v10; // ebp
  int v11; // r13d
  unsigned int v12; // esi
  __int64 v13; // rcx
  unsigned int v14; // r14d
  _DWORD *v15; // rsi
  int v16; // r12d
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // r8
  __int16 v20; // dx
  __int16 v21; // r9
  int v22; // eax
  unsigned int v23; // eax
  int v24; // eax
  unsigned int v25; // edx
  int v26; // [rsp+44h] [rbp-54h]
  CTouchProcessor *v27; // [rsp+A0h] [rbp+8h]
  int v28; // [rsp+A8h] [rbp+10h]
  int v30; // [rsp+B8h] [rbp+20h]

  v27 = this;
  v4 = *((_QWORD *)a2 + 31);
  v5 = 0LL;
  v30 = 0;
  v7 = *((_DWORD *)a2 + 12);
  v26 = 0;
  v9 = 0;
  v28 = 0;
  v10 = 1;
  v11 = 1;
  v12 = 0;
  if ( v7 )
  {
    do
    {
      if ( *(_DWORD *)v4 == -1 )
        break;
      if ( !a4 || a4 == (const struct CPointerQFrame *)v4 )
      {
        v24 = *(_DWORD *)(v4 + 140);
        if ( ((v24 & 1) == 0 || (v24 & 8) != 0 || *(_QWORD *)(v4 + 8) == -1LL) && (v24 & 2) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9271LL);
        v25 = *(_DWORD *)(v4 + 140);
        if ( (v25 & 2) != 0 )
        {
          this = (CTouchProcessor *)*(unsigned int *)(*(_QWORD *)(v4 + 152) + 136LL);
          if ( *(_DWORD *)(v4 + 136) != (_DWORD)this )
          {
            CTouchProcessor::TrackCoalesceOnArrival(this, v4, 17LL);
            v25 = *(_DWORD *)(v4 + 140) & 0xFFFFFFFD;
            *(_DWORD *)(v4 + 140) = v25;
          }
          if ( (v25 & 2) != 0 )
          {
            if ( *(_DWORD *)(v4 + 144) != 1 )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9282LL);
            *(_DWORD *)(v4 + 140) |= 4u;
            v9 = 1;
          }
        }
        *(_QWORD *)(v4 + 152) = 0LL;
      }
      v7 = *((_DWORD *)a2 + 12);
      ++v12;
      v4 += 160LL;
    }
    while ( v12 < v7 );
    v30 = v9;
    v11 = 1;
    if ( v9 && (Microsoft_Windows_Win32kEnableBits & 0x40000) != 0 )
      McTemplateK0qqq_EtwWriteTransfer((__int64)this, &BeginPointerFrameCoalesce, v5, *((_DWORD *)a2 + 10), v7, 0);
    v5 = 0LL;
  }
  v13 = *((unsigned int *)a2 + 12);
  v14 = 0;
  v15 = (_DWORD *)*((_QWORD *)a2 + 30);
  if ( (_DWORD)v13 )
  {
    v16 = 0;
    do
    {
      if ( (unsigned __int64)v15 >= *((_QWORD *)a2 + 30) + 480 * (unsigned __int64)(unsigned int)v13 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9314LL);
      if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v15) )
      {
        v17 = *((_QWORD *)a2 + 31) + 160LL * (unsigned int)v15[2];
        if ( (a4 || *(_QWORD *)(v17 + 8) == -1LL) && a4 != (const struct CPointerQFrame *)v17 )
        {
          v10 = (*(_BYTE *)(v17 + 140) & 4) != 0 ? v10 : 0;
        }
        else
        {
          *(_DWORD *)(v17 + 140) |= 0x10u;
          if ( (*(_DWORD *)(v17 + 140) & 2) != 0 )
          {
            *((_QWORD *)v15 + 2) = CTouchProcessor::CoalesceNodeWithPrevious(
                                     (PERESOURCE *)v27,
                                     a2,
                                     a3,
                                     (struct CPointerInfoNode *)v15,
                                     v14,
                                     v5);
          }
          else
          {
            v10 = v5;
            v18 = CTouchProcessor::CreateAndReferenceMsgData(
                    (__int64)v27,
                    *((_WORD *)v15 + 86),
                    *((_DWORD *)a2 + 10),
                    *(_DWORD *)(*((_QWORD *)a2 + 32) + 24LL),
                    v14,
                    v15[45],
                    -__CFSHR__(*v15, 7));
            v20 = *((_WORD *)v15 + 86);
            v21 = *((_WORD *)v15 + 80);
            *((_QWORD *)v15 + 2) = v18;
            if ( (Microsoft_Windows_Win32kEnableBits & 0x40000) != 0 )
              McTemplateK0hhq_EtwWriteTransfer(
                *(unsigned int *)(v17 + 144),
                &PointerNoCoalesce,
                v19,
                v21,
                v20,
                *(_DWORD *)(v17 + 144));
          }
          v5 = 0LL;
          if ( !*((_QWORD *)v15 + 2) )
          {
            CTouchProcessor::FreePointerInfoNodeInt(v27, a2, v14);
            v5 = 0LL;
          }
        }
        if ( *(_QWORD *)(v17 + 8) != -1LL )
          v11 = v5;
      }
      if ( !a4 )
      {
        if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v15) )
        {
          v22 = v15[45];
          if ( (v22 & 0x2000) != 0 )
          {
            v26 = 1;
            if ( (v22 & 0x10000) != 0 )
              v16 = 1;
          }
        }
      }
      ++v14;
      v15 += 120;
      v13 = *((unsigned int *)a2 + 12);
    }
    while ( v14 < (unsigned int)v13 );
    v28 = v16;
    v9 = v30;
  }
  if ( v9 && (Microsoft_Windows_Win32kEnableBits & 0x40000) != 0 )
    McTemplateK0qqq_EtwWriteTransfer(v13, &EndPointerFrameCoalesce, v5, *((_DWORD *)a2 + 10), v13, v5);
  if ( v10 )
    InputTraceLogging::Pointer::CoalesceFrame(a2);
  v23 = v10 ^ (*((_DWORD *)a2 + 57) ^ v10) & 0xFFFFFFFE;
  *((_DWORD *)a2 + 57) = v23;
  if ( !a4 )
    *((_DWORD *)a2 + 57) = (2 * v11) ^ ((4 * v26) ^ (8 * v28)) & 0xFFFFFFF5 ^ ((8 * v28) ^ (2 * v11)) & 0xFFFFFFFD ^ (v23 ^ (4 * v26)) & 0xFFFFFFF1;
}
