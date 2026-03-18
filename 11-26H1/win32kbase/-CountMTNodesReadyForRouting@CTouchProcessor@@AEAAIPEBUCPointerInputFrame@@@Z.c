/*
 * XREFs of ?CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z @ 0x14006A300
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1400686C8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTEROP_CALLBACK@@@Z @ 0x14008A620 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTE.c)
 *     ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerInputFrame@@@Z @ 0x14008BFEC (-BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerI.c)
 * Callees:
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x14006C298 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 */

__int64 __fastcall CTouchProcessor::CountMTNodesReadyForRouting(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2)
{
  unsigned int v2; // r8d
  CPointerInfoNode *v3; // r9
  int v4; // eax
  __int64 v5; // rdx
  unsigned int v6; // r8d
  __int64 v7; // r9
  unsigned int v8; // ecx

  v2 = 0;
  if ( *((_DWORD *)a2 + 12) )
  {
    v3 = (CPointerInfoNode *)*((_QWORD *)a2 + 30);
    do
    {
      v4 = CPointerInfoNode::IsForManipulationThread(v3);
      v8 = v6 + 1;
      if ( !v4 )
        v8 = v6;
      v3 = (CPointerInfoNode *)(v7 + 480);
      v2 = v8;
    }
    while ( v5 != 1 );
  }
  return v2;
}
