/*
 * XREFs of ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1400CBA8C
 * Callers:
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1400CB810 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x14004B9C0 (-ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x14004BEE0 (-ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x140068490 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x14006CD74 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     HMValidateHandleNoSecure @ 0x14006E810 (HMValidateHandleNoSecure.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x140087568 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x140089F40 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14009B880 (--1CInputDest@@QEAA@XZ.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1400CBD48 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetEditionIsCompositeAppOrSelfDisabled @ 0x1400CBDC8 (ApiSetEditionIsCompositeAppOrSelfDisabled.c)
 *     ?SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x140108EA0 (-SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ApiSetEditionPointerActivate @ 0x1401BC0C0 (ApiSetEditionPointerActivate.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall CTouchProcessor::HandleMTNodeTargetWindow(PERESOURCE *this, struct CPointerInfoNode *a2)
{
  PERESOURCE *v2; // r12
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // eax
  __int64 v12; // rcx
  char v13; // si
  __int64 v14; // r14
  __int64 v15; // rax
  struct tagWND *UserWindow; // rax
  bool v17; // zf
  int v18; // edx
  int v19; // r8d
  __int64 v20; // rax
  __int64 v21; // r8
  __int128 v22; // xmm1
  __int64 v23; // rdx
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // rax
  _QWORD v33[4]; // [rsp+38h] [rbp-C8h] BYREF
  char v34; // [rsp+58h] [rbp-A8h]
  PERESOURCE *v35; // [rsp+60h] [rbp-A0h]
  _BYTE v36[56]; // [rsp+68h] [rbp-98h] BYREF
  _OWORD v37[8]; // [rsp+A0h] [rbp-60h] BYREF

  v2 = this + 4;
  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 11726LL);
  v8 = *((unsigned int *)PtiCurrent(v6, v5) + 340);
  if ( (v8 & 0x2000) == 0 && !_bittest64((const signed __int64 *)PtiCurrent(v8, v7) + 170, 0x25u) )
  {
    v10 = *((_DWORD *)a2 + 1);
    if ( (v10 & 0x200) != 0 && (*(_DWORD *)a2 & 0x400) != 0 && (v10 & 0x80u) != 0 )
    {
      v11 = *((_DWORD *)a2 + 111);
      if ( v11 )
      {
        v12 = *((_QWORD *)a2 + 24);
        v13 = 1;
        if ( v11 == 2 )
        {
          v14 = *((_QWORD *)a2 + 54);
          LOBYTE(v9) = 1;
          v15 = HMValidateHandleNoSecure(v12, v9);
          if ( !v15 || v15 != v14 )
            v13 = 0;
          if ( !v13 )
            return;
        }
        else
        {
          if ( v11 != 1 )
            return;
          v31 = *((_QWORD *)a2 + 54);
          LOBYTE(v9) = 23;
          v32 = HMValidateHandleNoSecure(v12, v9);
          if ( !v32 || v32 != v31 )
            return;
        }
        if ( *((_DWORD *)a2 + 111) == 1 )
        {
          v17 = (*(_BYTE *)(*((_QWORD *)a2 + 54) + 39LL) & 8) == 0;
        }
        else
        {
          if ( *((_DWORD *)a2 + 111) != 2 )
            goto LABEL_17;
          UserWindow = CInputDest::GetUserWindow((struct CPointerInfoNode *)((char *)a2 + 352));
          v17 = (unsigned int)ApiSetEditionIsCompositeAppOrSelfDisabled(UserWindow) == 0;
        }
        if ( v17 )
        {
LABEL_17:
          if ( (unsigned int)CPointerInfoNode::ShouldForegroundActivate(a2) )
          {
            CThreadLockInputDest::CThreadLockInputDest(
              (CThreadLockInputDest *)v36,
              (struct CPointerInfoNode *)((char *)a2 + 352));
            v20 = *((_QWORD *)a2 + 2);
            v34 = 0;
            v35 = v2;
            if ( v20 == -1 )
              v20 = 0LL;
            v33[0] = v20;
            CRefUnRefPointerMsgId::ReferenceAndThreadLock((CRefUnRefPointerMsgId *)v33, v18, v19);
            ExReleaseResourceAndLeaveCriticalRegion(*v35);
            v21 = *((_QWORD *)a2 + 2);
            v22 = *((_OWORD *)a2 + 23);
            v23 = *((unsigned __int16 *)a2 + 72);
            v37[0] = *((_OWORD *)a2 + 22);
            v24 = *((_OWORD *)a2 + 24);
            v37[1] = v22;
            v25 = *((_OWORD *)a2 + 25);
            v37[2] = v24;
            v26 = *((_OWORD *)a2 + 26);
            v37[3] = v25;
            v27 = *((_OWORD *)a2 + 27);
            v37[4] = v26;
            v28 = *((_OWORD *)a2 + 28);
            v37[5] = v27;
            v37[6] = v28;
            ApiSetEditionPointerActivate(v37, v23, v21, (char *)a2 + 160);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*v35);
            CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v33, v29);
            CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v36, v30);
          }
          return;
        }
        v17 = (*((_DWORD *)a2 + 45) & 0x10000) == 0;
        *((_DWORD *)a2 + 36) = -2;
        if ( !v17 )
        {
          CInputDest::CInputDest((CInputDest *)v37, (struct CPointerInfoNode *)((char *)a2 + 352));
          CTouchProcessor::SetPointerImplicitCapture(
            (CTouchProcessor *)this,
            *((_QWORD *)a2 + 2),
            (const struct CInputDest *)v37,
            -2,
            0);
          CInputDest::~CInputDest((CInputDest *)v37);
        }
      }
    }
  }
}
