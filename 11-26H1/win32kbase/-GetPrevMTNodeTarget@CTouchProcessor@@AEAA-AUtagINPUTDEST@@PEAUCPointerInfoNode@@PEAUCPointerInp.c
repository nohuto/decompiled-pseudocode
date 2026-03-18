/*
 * XREFs of ?GetPrevMTNodeTarget@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@@Z @ 0x1400CBF28
 * Callers:
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x140214300 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 * Callees:
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14006D41C (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x14006D51C (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     HMValidateHandleNoSecure @ 0x14006E810 (HMValidateHandleNoSecure.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1400CDED0 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

_OWORD *__fastcall CTouchProcessor::GetPrevMTNodeTarget(
        PERESOURCE *a1,
        _OWORD *a2,
        __int64 a3,
        const struct CPointerInputFrame *a4)
{
  struct CPointerInputFrame *v8; // rax
  __int64 v9; // rbp
  struct CPointerInfoNode *ValidNodeInFrame; // rax
  __int64 v11; // rdx
  struct CPointerInfoNode *v12; // rbx
  __int64 v13; // rbx
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  _OWORD v21[7]; // [rsp+20h] [rbp-88h] BYREF

  memset(a2, 0, 0x70uLL);
  v8 = CTouchProcessor::ReferencePreviousFrameByDeviceInt(a1, a4);
  v9 = (__int64)v8;
  if ( v8 )
  {
    ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame((CTouchProcessor *)a1, v8, *(_WORD *)(a3 + 172), 0LL);
    v12 = ValidNodeInFrame;
    if ( ValidNodeInFrame )
    {
      if ( *((_WORD *)ValidNodeInFrame + 86) != *(_WORD *)(a3 + 172) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 10793LL);
      LOBYTE(v11) = 1;
      v13 = HMValidateHandleNoSecure(*((_QWORD *)v12 + 24), v11);
      memset(v21, 0, sizeof(v21));
      if ( v13 )
      {
        LODWORD(v21[0]) = 4;
        *(_QWORD *)&v21[5] = v13;
        HIDWORD(v21[5]) = 2;
      }
      v14 = v21[1];
      *a2 = v21[0];
      v15 = v21[2];
      a2[1] = v14;
      v16 = v21[3];
      a2[2] = v15;
      v17 = v21[4];
      a2[3] = v16;
      v18 = v21[5];
      a2[4] = v17;
      v19 = v21[6];
      a2[5] = v18;
      a2[6] = v19;
    }
    CTouchProcessor::UnreferenceFrameInt(a1, v9);
  }
  return a2;
}
