/*
 * XREFs of ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1402046FC
 * Callers:
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x140204910 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 * Callees:
 *     ??1CInputDest@@QEAA@XZ @ 0x140037980 (--1CInputDest@@QEAA@XZ.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x14009F128 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x1400B9D78 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     ApiSetEditionIsCompositeAppOrSelfDisabled @ 0x1400B9D90 (ApiSetEditionIsCompositeAppOrSelfDisabled.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1400C45CC (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1400C4788 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8574 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1400F46E0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ApiSetEditionPointerActivate @ 0x1401962B4 (ApiSetEditionPointerActivate.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1401F6D74 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1401F701C (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F9E38 (--0CInpUnlockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x14020AABC (-SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall CTouchProcessor::HandleMTNodeTargetWindow(PERESOURCE *this, struct CPointerInfoNode *a2)
{
  int v4; // ecx
  struct tagWND *UserWindow; // rax
  __int64 v6; // rdx
  bool v7; // zf
  __int64 v8; // r8
  __int128 v9; // xmm1
  __int64 v10; // rdx
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  PERESOURCE *v16[6]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v17[56]; // [rsp+68h] [rbp-98h] BYREF
  _OWORD v18[8]; // [rsp+A0h] [rbp-60h] BYREF

  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11749);
  if ( (*((_DWORD *)PtiCurrent() + 340) & 0x2000LL) == 0 && (*((_QWORD *)PtiCurrent() + 170) & 0x2000000000LL) == 0 )
  {
    v4 = *((_DWORD *)a2 + 1);
    if ( (v4 & 0x200) != 0
      && (*(_DWORD *)a2 & 0x400) != 0
      && (v4 & 0x80u) != 0
      && *((_DWORD *)a2 + 111)
      && CInputDest::IsEqualByWindowHandle((__int64)a2 + 352, *((_QWORD *)a2 + 24), 1) )
    {
      if ( *((_DWORD *)a2 + 111) == 1 )
      {
        v7 = (*(_BYTE *)(*((_QWORD *)a2 + 54) + 39LL) & 8) == 0;
      }
      else
      {
        if ( *((_DWORD *)a2 + 111) != 2 )
        {
LABEL_17:
          if ( (unsigned int)CPointerInfoNode::ShouldForegroundActivate(a2) )
          {
            CThreadLockInputDest::CThreadLockInputDest(
              (CThreadLockInputDest *)v17,
              (struct CPointerInfoNode *)((char *)a2 + 352));
            CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
              (CInpUnlockGuardExclusive *)v16,
              (struct CEResourceLock *)(this + 4),
              *((void **)a2 + 2));
            v8 = *((_QWORD *)a2 + 2);
            v9 = *((_OWORD *)a2 + 23);
            v10 = *((unsigned __int16 *)a2 + 72);
            v18[0] = *((_OWORD *)a2 + 22);
            v11 = *((_OWORD *)a2 + 24);
            v18[1] = v9;
            v12 = *((_OWORD *)a2 + 25);
            v18[2] = v11;
            v13 = *((_OWORD *)a2 + 26);
            v18[3] = v12;
            v14 = *((_OWORD *)a2 + 27);
            v18[4] = v13;
            v15 = *((_OWORD *)a2 + 28);
            v18[5] = v14;
            v18[6] = v15;
            ApiSetEditionPointerActivate(v18, v10, v8, (__int64)a2 + 160);
            CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v16);
            CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v17);
          }
          return;
        }
        UserWindow = CInputDest::GetUserWindow((struct CPointerInfoNode *)((char *)a2 + 352));
        v7 = (unsigned int)ApiSetEditionIsCompositeAppOrSelfDisabled((__int64)UserWindow, v6) == 0;
      }
      if ( !v7 )
      {
        v7 = (*((_DWORD *)a2 + 45) & 0x10000) == 0;
        *((_DWORD *)a2 + 36) = -2;
        if ( !v7 )
        {
          CInputDest::CInputDest((CInputDest *)v18, (struct CPointerInfoNode *)((char *)a2 + 352));
          CTouchProcessor::SetPointerImplicitCapture(
            (CTouchProcessor *)this,
            *((_QWORD *)a2 + 2),
            (const struct CInputDest *)v18,
            -2,
            0);
          CInputDest::~CInputDest((CInputDest *)v18);
        }
        return;
      }
      goto LABEL_17;
    }
  }
}
