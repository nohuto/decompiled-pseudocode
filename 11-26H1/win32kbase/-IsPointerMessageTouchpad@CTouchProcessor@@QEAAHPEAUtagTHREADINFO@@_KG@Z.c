/*
 * XREFs of ?IsPointerMessageTouchpad@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KG@Z @ 0x14004AE90
 * Callers:
 *     <none>
 * Callees:
 *     ?ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x14004B9C0 (-ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x14004BEE0 (-ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ApiSetEditionFindThreadPointerData @ 0x14004C460 (ApiSetEditionFindThreadPointerData.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14004C5B4 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x14004C77C (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?IsTouchpad@CPointerInfoNode@@QEBAHXZ @ 0x14015E9A4 (-IsTouchpad@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::IsPointerMessageTouchpad(
        PERESOURCE *this,
        struct tagTHREADINFO *a2,
        unsigned int *a3,
        unsigned __int16 a4)
{
  unsigned int IsTouchpad; // ebx
  __int64 v6; // r8
  __int64 v10; // rsi
  __int64 ThreadPointerData; // rax
  _QWORD v13[4]; // [rsp+20h] [rbp-30h] BYREF
  char v14; // [rsp+40h] [rbp-10h]
  PERESOURCE *v15; // [rsp+48h] [rbp-8h]

  IsTouchpad = 0;
  v6 = *((_QWORD *)a2 + 170);
  if ( (v6 & 0x2000) != 0 || (v6 & 0x2000000000LL) != 0 )
    return 0LL;
  if ( !a3 )
  {
    v13[0] = 0LL;
    v14 = 0;
    v15 = this + 4;
    ExEnterCriticalRegionAndAcquireResourceExclusive(this[4]);
    CRefUnRefPointerMsgId::ReferenceAndThreadLock((CRefUnRefPointerMsgId *)v13);
    ThreadPointerData = ApiSetEditionFindThreadPointerData((char *)a2 + 1208, a4);
    if ( ThreadPointerData )
      IsTouchpad = *(_DWORD *)(ThreadPointerData + 20) == 5;
    goto LABEL_16;
  }
  if ( a3 == (unsigned int *)-1LL )
    return 1;
  if ( !*((_QWORD *)a2 + 80)
    && ((*(_BYTE *)(*((_QWORD *)a2 + 57) + 808LL) & 4) != 0
     || (*((_QWORD *)a2 + 170) & 0x2000000LL) != 0
     || (v6 & 0x4000000) != 0)
    && a4 )
  {
    return IsTouchpad;
  }
  v13[0] = a3;
  v15 = this + 4;
  v14 = 0;
  ExEnterCriticalRegionAndAcquireResourceExclusive(this[4]);
  CRefUnRefPointerMsgId::ReferenceAndThreadLock((CRefUnRefPointerMsgId *)v13);
  if ( (a3[9] & 0x80u) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131073LL, 10641LL);
  v10 = CTouchProcessor::ReferenceFrame(this, a3[7]);
  if ( !v10 )
  {
    CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v13);
    ExReleaseResourceAndLeaveCriticalRegion(*v15);
    return 0LL;
  }
  IsTouchpad = CPointerInfoNode::IsTouchpad((CPointerInfoNode *)(*(_QWORD *)(v10 + 240) + 480LL * a3[8]));
  CTouchProcessor::UnreferenceFrame(this, v10);
LABEL_16:
  CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v13);
  ExReleaseResourceAndLeaveCriticalRegion(*v15);
  return IsTouchpad;
}
