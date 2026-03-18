/*
 * XREFs of ?ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z @ 0x1400C9F70
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_b1e571efbfc61821245745bd1df533a0_::operator() @ 0x1400C9DEC (_lambda_b1e571efbfc61821245745bd1df533a0_--operator().c)
 *     ?DoFinalProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CA09C (-DoFinalProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?DoTPGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CA388 (-DoTPGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CA76C (-ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?DoTPDiscreteButtonProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CAEBC (-DoTPDiscreteButtonProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CB168 (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?DoTPButtonAndDragProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CB7E8 (-DoTPButtonAndDragProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 */

__int64 __fastcall CPTPEngine::ProcessInput(CPTPEngine *this, struct PTPInput *a2)
{
  int v3; // eax
  unsigned int v5; // edx
  CPTPEngine *v7[3]; // [rsp+20h] [rbp-18h] BYREF
  struct PTPInput *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = a2;
  v3 = *((_DWORD *)a2 + 17);
  v5 = *((_DWORD *)this + 770);
  *((_DWORD *)this + 705) = v3 & 0x70;
  v7[1] = (CPTPEngine *)&v8;
  v7[0] = this;
  if ( (v5 & 1) == 0 )
  {
    v5 = *((_DWORD *)this + 770) & 0xFFFFFDFF | ((unsigned __int8)lambda_b1e571efbfc61821245745bd1df533a0_::operator()(
                                                                    v7,
                                                                    (unsigned __int16)(v5 & 0x200) >> 9,
                                                                    16) << 9);
    *((_DWORD *)this + 770) = v5;
  }
  if ( (v5 & 2) == 0 )
  {
    v5 = *((_DWORD *)this + 770) & 0xFFFFFBFF | ((unsigned __int8)lambda_b1e571efbfc61821245745bd1df533a0_::operator()(
                                                                    v7,
                                                                    (unsigned __int16)(v5 & 0x400) >> 10,
                                                                    32) << 10);
    *((_DWORD *)this + 770) = v5;
  }
  if ( (v5 & 4) == 0 )
    *((_DWORD *)this + 770) = *((_DWORD *)this + 770) & 0xFFFFF7FF | ((unsigned __int8)lambda_b1e571efbfc61821245745bd1df533a0_::operator()(
                                                                                         v7,
                                                                                         (unsigned __int16)(v5 & 0x800) >> 11,
                                                                                         64) << 11);
  CPTPEngine::ProcessInputFrame(this, a2);
  CPTPEngine::DoTPButtonAndDragProcessing(this, a2);
  CPTPEngine::DoTPDiscreteButtonProcessing(this, a2);
  CPTPEngine::DoTPGestureProcessing(this, a2);
  CPTPEngine::DoTPMouseProcessing(this, a2);
  CPTPEngine::DoFinalProcessing(this, a2);
  return 0LL;
}
