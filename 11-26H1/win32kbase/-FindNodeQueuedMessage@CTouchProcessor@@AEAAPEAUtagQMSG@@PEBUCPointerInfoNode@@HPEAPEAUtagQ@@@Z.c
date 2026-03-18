/*
 * XREFs of ?FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z @ 0x140163A1C
 * Callers:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x14006DC54 (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x14006BE3C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x14006CD40 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandleNoSecure @ 0x14006E810 (HMValidateHandleNoSecure.c)
 *     ApiSetEditionFindNodeQueuedMessage @ 0x140163C00 (ApiSetEditionFindNodeQueuedMessage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct tagQMSG *__fastcall CTouchProcessor::FindNodeQueuedMessage(
        PERESOURCE *this,
        const struct CPointerInfoNode *a2,
        __int64 a3,
        struct tagQ **a4)
{
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rcx
  char v9; // di
  __int64 v10; // rsi
  __int64 v11; // rax
  struct tagTHREADINFO *ThreadInfo; // rax
  _OWORD *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int64 v23; // rdi
  __int64 v24; // rax
  _OWORD v25[7]; // [rsp+20h] [rbp-88h] BYREF

  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 15773LL);
  if ( !(unsigned int)CPointerInfoNode::IsValid(a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 15775LL);
  v7 = *((_DWORD *)a2 + 111);
  if ( v7 && !gbIgnoreStressedOutStuff )
  {
    v8 = *((_QWORD *)a2 + 24);
    v9 = 1;
    if ( v7 == 2 )
    {
      v10 = *((_QWORD *)a2 + 54);
      LOBYTE(v6) = 1;
      v11 = HMValidateHandleNoSecure(v8, v6);
      if ( !v11 || v11 != v10 )
        v9 = 0;
      if ( v9 )
        goto LABEL_11;
    }
    else if ( v7 == 1 )
    {
      v23 = *((_QWORD *)a2 + 54);
      LOBYTE(v6) = 23;
      v24 = HMValidateHandleNoSecure(v8, v6);
      if ( v24 )
      {
        if ( v24 == v23 )
          goto LABEL_11;
      }
    }
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 15781LL);
  }
LABEL_11:
  if ( !*((_DWORD *)a2 + 88) )
    return 0LL;
  ThreadInfo = CInputDest::GetThreadInfo((const struct CPointerInfoNode *)((char *)a2 + 352));
  if ( !ThreadInfo || !*((_QWORD *)ThreadInfo + 58) )
    return 0LL;
  v15 = *((_QWORD *)a2 + 2);
  v16 = v13[1];
  v25[0] = *v13;
  v17 = v13[2];
  v25[1] = v16;
  v18 = v13[3];
  v25[2] = v17;
  v19 = v13[4];
  v25[3] = v18;
  v20 = v13[5];
  v25[4] = v19;
  v21 = v13[6];
  v25[5] = v20;
  v25[6] = v21;
  return (struct tagQMSG *)((__int64 (__fastcall *)(_OWORD *, __int64, __int64, struct tagQ **))ApiSetEditionFindNodeQueuedMessage)(
                             v25,
                             v15,
                             v14,
                             a4);
}
