/*
 * XREFs of ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1400CAD6C
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x14006AA00 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1400CA7A4 (-DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInput.c)
 * Callees:
 *     ?ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x14004B9C0 (-ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x14004BEE0 (-ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x14004C8A0 (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1400685B8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x14006A274 (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x14006BE3C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z @ 0x14006D0CC (-UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x140071D30 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x140087568 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x140087B68 (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x140089F40 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14009B880 (--1CInputDest@@QEAA@XZ.c)
 *     HMAssignmentUnlock @ 0x14009B8C0 (HMAssignmentUnlock.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x14009C7BC (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z @ 0x1400CB240 (-GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z.c)
 *     ApiSetEditionPointerWindowHitTest @ 0x1400CB2F4 (ApiSetEditionPointerWindowHitTest.c)
 *     ?SecondaryHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@_KHAEBVCInputDest@@AEBUtagPOINT@@@Z @ 0x1400CB448 (-SecondaryHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@_KHAEBVCInputDest@@AEBUtag.c)
 *     ?SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z @ 0x1400CB620 (-SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z.c)
 *     ?PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z @ 0x1400CB6D4 (-PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z.c)
 *     ?IsHover@CPointerInfoNode@@QEBAHXZ @ 0x1400CB7B4 (-IsHover@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ApiSetValidatePointerOffset @ 0x1401BB5B4 (ApiSetValidatePointerOffset.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall CTouchProcessor::DeterminePointerTargetWindow(
        PERESOURCE *this,
        struct tagTHREADINFO *a2,
        struct CPointerInfoNode *a3,
        struct tagQ *a4,
        int a5,
        int *a6,
        struct tagPOINT *a7,
        struct CInputDest *a8)
{
  const struct tagQ *v10; // r14
  __int64 v11; // r12
  int IsTargetSetForRetrieval; // eax
  int v14; // ebx
  __int64 v15; // rdx
  CTouchProcessor *v16; // rcx
  union POINTERINFOUNION *v17; // rbx
  unsigned int v18; // eax
  int v19; // r14d
  __int64 v20; // rcx
  __int64 v21; // rbx
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // r12
  int v24; // edx
  int v25; // r8d
  __int64 v26; // rax
  int v27; // ebx
  struct tagTHREADINFO *v28; // r14
  _OWORD *v29; // rax
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  int v36; // r8d
  __int64 v37; // rdx
  __int64 v38; // rdx
  int v39; // r8d
  CPointerInfoNode *v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // [rsp+28h] [rbp-D8h]
  __int64 v43; // [rsp+38h] [rbp-C8h]
  int v44; // [rsp+60h] [rbp-A0h] BYREF
  int v45; // [rsp+64h] [rbp-9Ch] BYREF
  struct CInputDest *v46; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int16 v47; // [rsp+70h] [rbp-90h]
  struct tagPOINT v48; // [rsp+78h] [rbp-88h] BYREF
  struct tagTHREADINFO *v49; // [rsp+80h] [rbp-80h] BYREF
  union POINTERINFOUNION *v50; // [rsp+88h] [rbp-78h]
  struct tagQ *v51; // [rsp+90h] [rbp-70h]
  _QWORD v52[4]; // [rsp+98h] [rbp-68h] BYREF
  char v53; // [rsp+B8h] [rbp-48h]
  PERESOURCE *v54; // [rsp+C0h] [rbp-40h]
  int *v55; // [rsp+C8h] [rbp-38h]
  _OWORD v56[7]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v57[56]; // [rsp+140h] [rbp+40h] BYREF
  char v58; // [rsp+178h] [rbp+78h] BYREF
  _QWORD v59[10]; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v60; // [rsp+240h] [rbp+140h] BYREF
  int v61; // [rsp+24Ch] [rbp+14Ch]

  v55 = a6;
  v10 = a4;
  v51 = a4;
  v11 = *((unsigned __int16 *)a3 + 86);
  v47 = *((_WORD *)a3 + 86);
  v49 = a2;
  v50 = (struct CPointerInfoNode *)((char *)a3 + 168);
  v48 = 0LL;
  v45 = 0;
  if ( !(unsigned int)CPointerInfoNode::IsValid(a3) )
  {
    v44 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 12199LL);
  }
  IsTargetSetForRetrieval = CPointerInfoNode::IsTargetSetForRetrieval(a3, a2);
  v14 = 0;
  if ( IsTargetSetForRetrieval )
  {
    v44 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 12200LL);
  }
  CInputDest::~CInputDest(a8);
  v15 = *((_QWORD *)a3 + 2);
  v46 = 0LL;
  v44 = 0;
  CTouchProcessor::GetPointerCapture(this, v15, a5, &v46, &v44);
  if ( v46 )
  {
    v45 = v44;
    v14 = 1;
    CInputDest::operator=((__int64)a8, (__int64)v46);
  }
  else if ( !(unsigned int)CPointerInfoNode::IsHover(a3) && (*((_DWORD *)a3 + 45) & 0x10000) == 0 )
  {
    return;
  }
  CTouchProcessor::GetPointerOffset((CTouchProcessor *)this, *((_WORD *)a3 + 86), &v48);
  if ( v14 )
  {
    v17 = v50;
  }
  else
  {
    v18 = CTouchProcessor::PointerFlagsToMessage(v16, *((_DWORD *)a3 + 45));
    v19 = *((unsigned __int16 *)a3 + 90);
    v20 = *((unsigned __int16 *)a3 + 100);
    v21 = *((_QWORD *)a3 + 25);
    LODWORD(v46) = v18;
    v22 = v11 | ((unsigned __int64)(v19 & 0xFFFFE1F7) << 16);
    v23 = v20 | ((unsigned __int64)*((unsigned __int16 *)a3 + 102) << 16);
    if ( *(_DWORD *)a8 )
    {
      v44 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 12258LL);
    }
    CThreadLockInputDest::CThreadLockInputDest(
      (CThreadLockInputDest *)v57,
      (struct CPointerInfoNode *)((char *)a3 + 352));
    v26 = *((_QWORD *)a3 + 2);
    v53 = 0;
    if ( v26 == -1 )
      v26 = 0LL;
    v52[0] = v26;
    v54 = this + 4;
    CRefUnRefPointerMsgId::ReferenceAndThreadLock((CRefUnRefPointerMsgId *)v52, v24, v25);
    ExReleaseResourceAndLeaveCriticalRegion(*v54);
    v43 = v21;
    v27 = (int)v46;
    v42 = v22;
    v28 = v49;
    v29 = (_OWORD *)ApiSetEditionPointerWindowHitTest(
                      (unsigned int)&v58,
                      (_DWORD)v49,
                      (int)a3 + 352,
                      -__CFSHR__(*((_DWORD *)a3 + 1), 8),
                      (_DWORD)v46,
                      v42,
                      v23,
                      v43,
                      (__int64)&v45,
                      (__int64)a3 + 160,
                      *((_QWORD *)a3 + 2),
                      (__int64)&v48);
    v30 = v29[1];
    v56[0] = *v29;
    v31 = v29[2];
    v56[1] = v30;
    v32 = v29[3];
    v56[2] = v31;
    v33 = v29[4];
    v56[3] = v32;
    v34 = v29[5];
    v56[4] = v33;
    v35 = v29[6];
    v56[5] = v34;
    v56[6] = v35;
    CInputDest::CInputDest((CInputDest *)v59, (const struct tagINPUTDEST *)v56);
    CInputDest::operator=(a8, v59, v36);
    if ( v61 )
      HMAssignmentUnlock(&v60);
    ExEnterCriticalRegionAndAcquireResourceExclusive(*v54);
    CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v52, v37);
    CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v57, v38);
    v39 = v27;
    v17 = v50;
    InputTraceLogging::Pointer::SecondaryHitTest(v50, *((_QWORD *)a3 + 2), v39, a8, &v48);
    if ( *(_DWORD *)a8 )
    {
      if ( v45 == -1 )
      {
        LODWORD(v46) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 12296LL);
      }
      if ( CInputDest::TestWindowFlag(a8, 1152) || CInputDest::TestWindowFlag(a8, 896) )
        CInputDest::~CInputDest(a8);
      if ( *(_DWORD *)a8 )
        CTouchProcessor::SetPointerOffset((CTouchProcessor *)this, v47, &v48);
    }
    if ( !(unsigned int)CPointerInfoNode::IsValid(a3)
      || (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval(v40, v28) )
    {
      CInputDest::~CInputDest(a8);
      return;
    }
    v41 = *((_QWORD *)a3 + 2);
    v49 = 0LL;
    LODWORD(v46) = 0;
    CTouchProcessor::GetPointerCapture(this, v41, a5, &v49, (int *)&v46);
    if ( v49 )
    {
      v45 = (int)v46;
      CInputDest::operator=((__int64)a8, (__int64)v49);
    }
    v10 = v51;
  }
  if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ApiSetValidatePointerOffset)(
                        *((_QWORD *)v17 + 4),
                        (char *)a3 + 160,
                        v48,
                        a7) )
    *a7 = 0LL;
  if ( *(_DWORD *)a8 )
  {
    if ( v10 && !CInputDest::UsesQueue(a8, v10) )
      CInputDest::~CInputDest(a8);
    if ( *(_DWORD *)a8 )
      *v55 = v45;
  }
}
