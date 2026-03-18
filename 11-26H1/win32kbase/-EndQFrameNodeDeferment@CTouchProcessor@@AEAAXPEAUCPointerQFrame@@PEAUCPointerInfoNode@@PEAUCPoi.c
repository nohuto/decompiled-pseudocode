/*
 * XREFs of ?EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@_K@Z @ 0x140214E4C
 * Callers:
 *     ?AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z @ 0x140213800 (-AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z @ 0x14006855C (-InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x140069CB8 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x14006BF24 (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14006D41C (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x14006D51C (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14009B880 (--1CInputDest@@QEAA@XZ.c)
 *     ApiSetEditionGetInputDelegate @ 0x14010A470 (ApiSetEditionGetInputDelegate.c)
 *     ??0CInputDest@@QEAA@QEAUtagWND@@@Z @ 0x140189EF4 (--0CInputDest@@QEAA@QEAUtagWND@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall CTouchProcessor::EndQFrameNodeDeferment(
        PERESOURCE *this,
        struct CPointerQFrame *a2,
        struct CPointerInfoNode *a3,
        struct CPointerInputFrame *a4,
        unsigned __int64 a5)
{
  CTouchProcessor *v9; // rcx
  struct CPointerInputFrame *v10; // rdi
  __int64 v11; // rbx
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  __int64 UserSessionState; // rax
  _OWORD v16[7]; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v17[5]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v18; // [rsp+F0h] [rbp-10h]
  __int128 v19; // [rsp+100h] [rbp+0h]

  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 15722);
  v10 = CTouchProcessor::ReferencePreviousFrameByDeviceInt(this, a4);
  if ( *((_QWORD *)a2 + 1) != -1LL )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 15726);
  *((_DWORD *)a3 + 1) &= ~0x100u;
  *((_DWORD *)a4 + 57) &= ~2u;
  *((_QWORD *)a2 + 1) = a5;
  CTouchProcessor::InitializeQFrameCoalesceState(v9, a2, v10 != 0LL);
  v11 = *((_QWORD *)a3 + 24);
  UserSessionState = W32GetUserSessionState(v13, v12, v14);
  CInputDest::CInputDest(
    (CInputDest *)v17,
    *(struct tagWND *const *)(*(_QWORD *)(UserSessionState + 19864) + 40LL * (unsigned __int16)v11));
  if ( HIDWORD(v18) )
  {
    v16[0] = v17[0];
    v16[2] = v17[2];
    v16[1] = v17[1];
    v16[4] = v17[4];
    v16[3] = v17[3];
    v16[6] = v19;
    v16[5] = v18;
    if ( ApiSetEditionGetInputDelegate(v16) )
      *(_DWORD *)a3 |= 0x100000u;
  }
  CTouchProcessor::ProcessQFrameNode((CTouchProcessor *)this, a2, v10, a3);
  CTouchProcessor::TryCoalesceQFrame((CTouchProcessor *)this, a4, v10, a2);
  if ( v10 )
    CTouchProcessor::UnreferenceFrameInt(this, (__int64)v10);
  CInputDest::~CInputDest((CInputDest *)v17);
}
