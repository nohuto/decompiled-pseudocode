/*
 * XREFs of ?EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@_K@Z @ 0x1401FEE94
 * Callers:
 *     ?AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z @ 0x1401FA670 (-AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z.c)
 * Callees:
 *     ??1CInputDest@@QEAA@XZ @ 0x140037980 (--1CInputDest@@QEAA@XZ.c)
 *     ??0CInputDest@@QEAA@QEAUtagWND@@@Z @ 0x1400C462C (--0CInputDest@@QEAA@QEAUtagWND@@@Z.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8574 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z @ 0x1400DEB64 (-InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1400DED58 (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ApiSetEditionGetInputDelegate @ 0x140195368 (ApiSetEditionGetInputDelegate.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x140209150 (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x14020C254 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14020C984 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall CTouchProcessor::EndQFrameNodeDeferment(
        PERESOURCE *this,
        struct CPointerQFrame *a2,
        struct CPointerInfoNode *a3,
        struct CPointerInputFrame *a4,
        unsigned __int64 a5)
{
  CTouchProcessor *v9; // rcx
  const struct CPointerInputFrame *v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 UserSessionState; // rax
  __int64 v15; // rdx
  _OWORD v16[7]; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v17[5]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v18; // [rsp+F0h] [rbp-10h]
  __int128 v19; // [rsp+100h] [rbp+0h]

  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15798);
  v10 = CTouchProcessor::ReferencePreviousFrameByDeviceInt((CTouchProcessor *)this, a4);
  if ( *((_QWORD *)a2 + 1) != -1LL )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15802);
  *((_DWORD *)a3 + 1) &= ~0x100u;
  *((_DWORD *)a4 + 57) &= ~2u;
  *((_QWORD *)a2 + 1) = a5;
  CTouchProcessor::InitializeQFrameCoalesceState(v9, a2, v10 != 0LL);
  v11 = (unsigned __int16)*((_DWORD *)a3 + 48);
  UserSessionState = W32GetUserSessionState(v13, v12);
  CInputDest::CInputDest((CInputDest *)v17, *(struct tagWND *const *)(*(_QWORD *)(UserSessionState + 19832) + 40 * v11));
  if ( HIDWORD(v18) )
  {
    v16[0] = v17[0];
    v16[2] = v17[2];
    v16[1] = v17[1];
    v16[4] = v17[4];
    v16[3] = v17[3];
    v16[6] = v19;
    v16[5] = v18;
    if ( ApiSetEditionGetInputDelegate(v16, v15) )
      *(_DWORD *)a3 |= 0x100000u;
  }
  CTouchProcessor::ProcessQFrameNode((CTouchProcessor *)this, a2, v10, a3);
  CTouchProcessor::TryCoalesceQFrame((CTouchProcessor *)this, a4, v10, a2);
  if ( v10 )
    CTouchProcessor::UnreferenceFrameInt(this, v10);
  CInputDest::~CInputDest((CInputDest *)v17);
}
