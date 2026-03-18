/*
 * XREFs of ?AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z @ 0x140213800
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x140068490 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x14006A5D4 (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x14006BE3C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x140071D30 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14009B880 (--1CInputDest@@QEAA@XZ.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x140117D38 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x140160CCC (--0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x14017406C (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ?SetPointerInputCapture@CTouchProcessor@@AEAAHGVCInputDest@@H@Z @ 0x14017E504 (-SetPointerInputCapture@CTouchProcessor@@AEAAHGVCInputDest@@H@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@_K@Z @ 0x140214E4C (-EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPoi.c)
 *     ?GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1402157D4 (-GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall CTouchProcessor::AdjustEdgyFrameInputDest(
        __int64 a1,
        const struct CPointerInputFrame *NextFrame,
        const struct tagINPUTDEST *a3)
{
  CInputDest *v6; // rax
  struct CPointerInfoNode *v7; // rbx
  __int64 v8; // rbp
  unsigned __int64 Queue; // rax
  __int64 v10; // rdx
  PERESOURCE *v11[6]; // [rsp+58h] [rbp-160h] BYREF
  _BYTE v12[120]; // [rsp+88h] [rbp-130h] BYREF
  _DWORD v13[32]; // [rsp+100h] [rbp-B8h] BYREF

  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v11, (PERESOURCE *)(a1 + 32), 0LL);
  CInputDest::CInputDest((CInputDest *)v13, a3);
  if ( !v13[0] )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 13148);
  v6 = CInputDest::CInputDest((CInputDest *)v12, (const struct CInputDest *)v13);
  CTouchProcessor::SetPointerInputCapture(a1, *(_WORD *)(*((_QWORD *)NextFrame + 30) + 172LL), v6);
  do
  {
    v7 = (struct CPointerInfoNode *)*((_QWORD *)NextFrame + 30);
    if ( (unsigned int)CPointerInfoNode::IsValid(v7) )
    {
      CTouchProcessor::SetPointerInfoNodeTarget(
        (CTouchProcessor *)a1,
        NextFrame,
        0,
        (const struct CInputDest *)v13,
        1,
        0LL,
        0,
        1,
        0,
        0);
      v8 = *((_QWORD *)NextFrame + 31);
      if ( *(_QWORD *)(v8 + 8) == -1LL )
      {
        Queue = CInputDest::GetQueue((__int64)v13, 2);
        CTouchProcessor::EndQFrameNodeDeferment(
          (CTouchProcessor *)a1,
          (struct CPointerQFrame *)v8,
          v7,
          NextFrame,
          Queue);
      }
      NextFrame = CTouchProcessor::GetNextFrame((CTouchProcessor *)a1, NextFrame, (struct _LIST_ENTRY *)(a1 + 48));
    }
  }
  while ( NextFrame );
  CInputDest::~CInputDest((CInputDest *)v13);
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v11, v10);
}
