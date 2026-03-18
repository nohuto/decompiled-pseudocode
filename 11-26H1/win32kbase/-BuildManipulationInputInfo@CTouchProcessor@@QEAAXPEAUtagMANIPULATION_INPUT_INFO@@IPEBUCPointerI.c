/*
 * XREFs of ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerInputFrame@@@Z @ 0x14008BFEC
 * Callers:
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTEROP_CALLBACK@@@Z @ 0x14008A620 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTE.c)
 * Callees:
 *     GetPointerInfoSize @ 0x140050B38 (GetPointerInfoSize.c)
 *     ?CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z @ 0x14006A300 (-CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x14006C298 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     HMValidateHandleNoSecure @ 0x14006E810 (HMValidateHandleNoSecure.c)
 *     ApiSetAddMagnificationOutputTransform @ 0x140070F74 (ApiSetAddMagnificationOutputTransform.c)
 *     ?CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z @ 0x14008C3E4 (-CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z.c)
 *     ?GetInputProcessContext@CTouchProcessor@@AEAAPEAUtagPROCESSINFO@@PEAX@Z @ 0x14008CA94 (-GetInputProcessContext@CTouchProcessor@@AEAAPEAUtagPROCESSINFO@@PEAX@Z.c)
 *     ?IsInputPenAndTargetHandledByShellHandwriting@CTouchProcessor@@CAHPEBUCPointerInputFrame@@@Z @ 0x14008CB10 (-IsInputPenAndTargetHandledByShellHandwriting@CTouchProcessor@@CAHPEBUCPointerInputFrame@@@Z.c)
 *     ConvertPointCoordinates @ 0x140196130 (ConvertPointCoordinates.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

void __fastcall CTouchProcessor::BuildManipulationInputInfo(
        CTouchProcessor *this,
        struct tagMANIPULATION_INPUT_INFO *a2,
        unsigned int a3,
        const struct CPointerInputFrame *a4)
{
  unsigned int v7; // r15d
  CTouchProcessor *v8; // rcx
  CTouchProcessor *v9; // rcx
  CTouchProcessor *v10; // rcx
  size_t v11; // r13
  unsigned int PointerInfoSize; // eax
  struct tagPROCESSINFO *InputProcessContext; // rax
  int v14; // eax
  unsigned int v15; // ebp
  __int64 v16; // rsi
  _QWORD *v17; // r14
  __int128 v18; // xmm1
  __int128 v19; // xmm2
  __int64 v20; // rcx
  int v21; // edx
  int v22; // r12d
  int IsInputPenAndTargetHandledByShellHandwriting; // eax
  int v24; // edx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int128 v30; // xmm1
  __int64 v31; // rax
  __int64 v32; // rcx
  __int128 v33; // xmm1
  __int128 v34; // [rsp+20h] [rbp-58h] BYREF
  _OWORD v35[4]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v36; // [rsp+80h] [rbp+8h]

  v36 = CTouchProcessor::CountMTNodesReadyForRouting(this, a4);
  v7 = v36;
  if ( a3 < CTouchProcessor::CalcManipulationInputInfoSize(v8, v36) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 17341LL);
  if ( a3 >= CTouchProcessor::CalcManipulationInputInfoSize(v9, v36) )
  {
    v11 = 0LL;
    if ( *((_DWORD *)a4 + 12) )
    {
      PointerInfoSize = GetPointerInfoSize(*(_DWORD *)(*((_QWORD *)a4 + 30) + 168LL));
      v11 = PointerInfoSize;
      if ( !PointerInfoSize )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 17351LL);
    }
    InputProcessContext = CTouchProcessor::GetInputProcessContext(v10, *((void **)a4 + 8));
    if ( InputProcessContext )
      v14 = *((_DWORD *)InputProcessContext + 14);
    else
      v14 = 0;
    *((_DWORD *)a2 + 36) = v14;
    v15 = 0;
    *((_DWORD *)a2 + 37) = 0;
    if ( *((_DWORD *)a4 + 12) )
    {
      do
      {
        v16 = *((_QWORD *)a4 + 30) + 480LL * v15;
        if ( CPointerInfoNode::IsForManipulationThread((CPointerInfoNode *)v16) )
        {
          v17 = (_QWORD *)((char *)a2 + 240 * *((unsigned int *)a2 + 37) + 160);
          memmove(v17, (const void *)(v16 + 168), v11);
          v18 = *(_OWORD *)(v16 + 400);
          v19 = *(_OWORD *)(v16 + 416);
          v20 = 240LL * *((unsigned int *)a2 + 37);
          *(_OWORD *)((char *)a2 + v20 + 304) = *(_OWORD *)(v16 + 384);
          *(_OWORD *)((char *)a2 + v20 + 320) = v18;
          *(_OWORD *)((char *)a2 + v20 + 336) = v19;
          if ( (*(_DWORD *)(v16 + 4) & 0x80u) == 0 )
            v21 = 0;
          else
            v21 = *(_DWORD *)(v16 + 348);
          *((_DWORD *)a2 + 60 * *((unsigned int *)a2 + 37) + 88) = v21;
          *((_QWORD *)a2 + 30 * *((unsigned int *)a2 + 37) + 45) = *(_QWORD *)(v16 + 448);
          *((_DWORD *)a2 + 60 * *((unsigned int *)a2 + 37) + 92) = *(_DWORD *)(v16 + 456);
          v22 = *(_DWORD *)v17;
          v17[3] = 0LL;
          if ( (unsigned int)ApiSetAddMagnificationOutputTransform((__int64)(v17 + 4)) && v22 != 5 )
          {
            v28 = *((_QWORD *)a4 + 32);
            v29 = v17[4];
            v30 = *(_OWORD *)(v28 + 160);
            v34 = *(_OWORD *)(v28 + 176);
            v35[0] = v30;
            ((void (__fastcall *)(__int64, _OWORD *, __int128 *, _QWORD *))ConvertPointCoordinates)(
              v29,
              v35,
              &v34,
              v17 + 5);
          }
          if ( (unsigned int)ApiSetAddMagnificationOutputTransform((__int64)(v17 + 6)) && v22 != 5 )
          {
            v31 = *((_QWORD *)a4 + 32);
            v32 = v17[6];
            v33 = *(_OWORD *)(v31 + 160);
            v35[0] = *(_OWORD *)(v31 + 176);
            v34 = v33;
            ((void (__fastcall *)(__int64, __int128 *, _OWORD *, _QWORD *))ConvertPointCoordinates)(
              v32,
              &v34,
              v35,
              v17 + 7);
          }
          ++*((_DWORD *)a2 + 37);
        }
        ++v15;
      }
      while ( v15 < *((_DWORD *)a4 + 12) );
      v7 = v36;
    }
    if ( *((_DWORD *)a2 + 37) != v7 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 17417LL);
    *(_OWORD *)a2 = *(_OWORD *)((char *)a4 + 72);
    *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)a4 + 88);
    *((_OWORD *)a2 + 2) = *(_OWORD *)((char *)a4 + 104);
    *((_OWORD *)a2 + 3) = *(_OWORD *)((char *)a4 + 120);
    *((_OWORD *)a2 + 4) = *(_OWORD *)((char *)a4 + 136);
    *((_OWORD *)a2 + 5) = *(_OWORD *)((char *)a4 + 152);
    *((_OWORD *)a2 + 6) = *(_OWORD *)((char *)a4 + 168);
    *((_OWORD *)a2 + 7) = *(_OWORD *)((char *)a4 + 184);
    *((_OWORD *)a2 + 8) = *(_OWORD *)((char *)a4 + 200);
    *((_DWORD *)a2 + 38) = (*((int *)a4 + 57) >> 8) ^ (*((_DWORD *)a2 + 38) ^ (*((int *)a4 + 57) >> 8)) & 0xFFFFFFFE;
    IsInputPenAndTargetHandledByShellHandwriting = CTouchProcessor::IsInputPenAndTargetHandledByShellHandwriting(a4);
    v25 = (2 * IsInputPenAndTargetHandledByShellHandwriting) ^ ((2 * IsInputPenAndTargetHandledByShellHandwriting) ^ v24) & 0xFFFFFFFD;
    *((_DWORD *)a2 + 38) = v25;
    LOBYTE(v25) = 19;
    v26 = HMValidateHandleNoSecure(*((_QWORD *)a4 + 8), v25);
    if ( v26 )
    {
      v27 = *(_QWORD *)(v26 + 456);
      if ( v27 )
        *((_DWORD *)a2 + 39) = *(_DWORD *)(v27 + 968);
      else
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 17436LL);
    }
  }
}
