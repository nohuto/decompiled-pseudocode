/*
 * XREFs of ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1401FDDC8
 * Callers:
 *     ?DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1401FE1EC (-DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInput.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x140209AA0 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ??1CInputDest@@QEAA@XZ @ 0x140037980 (--1CInputDest@@QEAA@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x14003821C (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x14009F128 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ?SecondaryHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@_KHAEBVCInputDest@@AEBUtagPOINT@@@Z @ 0x1400B7130 (-SecondaryHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@_KHAEBVCInputDest@@AEBUtag.c)
 *     ?UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z @ 0x1400B7D38 (-UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1400C45CC (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1400C4964 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1400C5510 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1400D14F0 (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1400F3CF8 (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     ?PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z @ 0x14010A0D4 (-PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z.c)
 *     ApiSetEditionPointerWindowHitTest @ 0x140196430 (ApiSetEditionPointerWindowHitTest.c)
 *     ApiSetValidatePointerOffset @ 0x140197724 (ApiSetValidatePointerOffset.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1401F6D74 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1401F6E78 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F9E38 (--0CInpUnlockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z @ 0x140203D5C (-GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z.c)
 *     ?IsHover@CPointerInfoNode@@QEBAHXZ @ 0x140204D38 (-IsHover@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1402054B0 (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ?SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z @ 0x14020B5AC (-SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall CTouchProcessor::DeterminePointerTargetWindow(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        struct CPointerInfoNode *a3,
        struct tagQ *a4,
        int a5,
        int *a6,
        struct tagPOINT *a7,
        struct CInputDest *a8)
{
  __int64 v8; // r12
  struct tagQ *v11; // r14
  unsigned __int64 v13; // rdx
  int v14; // ebx
  CTouchProcessor *v15; // rcx
  int v16; // eax
  int v17; // r14d
  __int64 v18; // rcx
  __int64 v19; // rbx
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // r12
  struct tagTHREADINFO *v22; // rbx
  unsigned int v23; // r14d
  _OWORD *v24; // rax
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  CPointerInfoNode *v31; // rcx
  __int64 v32; // [rsp+28h] [rbp-D8h]
  __int64 v33; // [rsp+38h] [rbp-C8h]
  int v34; // [rsp+64h] [rbp-9Ch] BYREF
  int v35; // [rsp+68h] [rbp-98h]
  unsigned __int16 v36; // [rsp+6Ch] [rbp-94h]
  struct tagPOINT v37; // [rsp+70h] [rbp-90h] BYREF
  struct CInputDest *v38; // [rsp+78h] [rbp-88h] BYREF
  struct tagTHREADINFO *v39; // [rsp+80h] [rbp-80h]
  struct tagQ *v40; // [rsp+88h] [rbp-78h]
  int *v41; // [rsp+90h] [rbp-70h]
  _OWORD v42[7]; // [rsp+A0h] [rbp-60h] BYREF
  PERESOURCE *v43[6]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v44[56]; // [rsp+140h] [rbp+40h] BYREF
  _OWORD v45[7]; // [rsp+178h] [rbp+78h] BYREF
  _QWORD v46[16]; // [rsp+1F0h] [rbp+F0h] BYREF

  v8 = *((unsigned __int16 *)a3 + 86);
  v37 = 0LL;
  v11 = a4;
  v34 = 0;
  v40 = a4;
  v39 = a2;
  v41 = a6;
  v36 = v8;
  if ( !(unsigned int)CPointerInfoNode::IsValid(a3) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12222);
  if ( (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval(a3, a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12223);
  CInputDest::~CInputDest(a8);
  v13 = *((_QWORD *)a3 + 2);
  v38 = 0LL;
  v14 = CTouchProcessor::RecheckPointerCapture(this, v13, a5, &v38, &v34);
  if ( v14 )
  {
    CInputDest::operator=((__int64)a8, (__int64)v38);
  }
  else if ( !(unsigned int)CPointerInfoNode::IsHover(a3) && (*((_DWORD *)a3 + 45) & 0x10000) == 0 )
  {
    return;
  }
  CTouchProcessor::GetPointerOffset(this, *((_WORD *)a3 + 86), &v37);
  if ( !v14 )
  {
    v16 = CTouchProcessor::PointerFlagsToMessage(v15, *((unsigned int *)a3 + 45));
    v17 = *((unsigned __int16 *)a3 + 90);
    v18 = *((unsigned __int16 *)a3 + 100);
    v19 = *((_QWORD *)a3 + 25);
    v35 = v16;
    v20 = v8 | ((unsigned __int64)(v17 & 0xFFFFE1F7) << 16);
    v21 = v18 | ((unsigned __int64)*((unsigned __int16 *)a3 + 102) << 16);
    if ( *(_DWORD *)a8 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12281);
    CThreadLockInputDest::CThreadLockInputDest(
      (CThreadLockInputDest *)v44,
      (struct CPointerInfoNode *)((char *)a3 + 352));
    CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
      (CInpUnlockGuardExclusive *)v43,
      (CTouchProcessor *)((char *)this + 32),
      *((void **)a3 + 2));
    v33 = v19;
    v22 = v39;
    v32 = v20;
    v23 = v35;
    v24 = ApiSetEditionPointerWindowHitTest(
            v45,
            (__int64)v39,
            (__int64)a3 + 352,
            -__CFSHR__(*((_DWORD *)a3 + 1), 8),
            v35,
            v32,
            v21,
            v33,
            (__int64)&v34,
            (__int64)a3 + 160,
            *((_QWORD *)a3 + 2),
            (__int64)&v37);
    v25 = v24[1];
    v42[0] = *v24;
    v26 = v24[2];
    v42[1] = v25;
    v27 = v24[3];
    v42[2] = v26;
    v28 = v24[4];
    v42[3] = v27;
    v29 = v24[5];
    v42[4] = v28;
    v30 = v24[6];
    v42[5] = v29;
    v42[6] = v30;
    CInputDest::CInputDest((CInputDest *)v46, (const struct tagINPUTDEST *)v42);
    CInputDest::operator=(a8, v46);
    CInputDest::~CInputDest((CInputDest *)v46);
    CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v43);
    CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v44);
    InputTraceLogging::Pointer::SecondaryHitTest(
      (struct CPointerInfoNode *)((char *)a3 + 168),
      *((_QWORD *)a3 + 2),
      v23,
      a8,
      &v37);
    if ( *(_DWORD *)a8 )
    {
      if ( v34 == -1 )
      {
        v35 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12319);
      }
      if ( CInputDest::TestWindowFlag(a8, 1152) || CInputDest::TestWindowFlag(a8, 896) )
        CInputDest::~CInputDest(a8);
      if ( *(_DWORD *)a8 )
        CTouchProcessor::SetPointerOffset(this, v36, &v37);
    }
    if ( !(unsigned int)CPointerInfoNode::IsValid(a3)
      || (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval(v31, v22) )
    {
      CInputDest::~CInputDest(a8);
      return;
    }
    if ( (unsigned int)CTouchProcessor::RecheckPointerCapture(this, *((_QWORD *)a3 + 2), a5, &v38, &v34) )
      CInputDest::operator=((__int64)a8, (__int64)v38);
    v11 = v40;
  }
  if ( !(unsigned int)ApiSetValidatePointerOffset(*((_QWORD *)a3 + 25), (__int64)a3 + 160, *(_QWORD *)&v37, (__int64)a7) )
    *a7 = 0LL;
  if ( *(_DWORD *)a8 )
  {
    if ( v11 && !CInputDest::UsesQueue(a8, v11) )
      CInputDest::~CInputDest(a8);
    if ( *(_DWORD *)a8 )
      *v41 = v34;
  }
}
