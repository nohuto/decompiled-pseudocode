/*
 * XREFs of ?DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z @ 0x14021482C
 * Callers:
 *     ?DelegateImplictCaptureAndReleaseIfNeeded@CTouchProcessor@@QEAAX_K@Z @ 0x14015BF20 (-DelegateImplictCaptureAndReleaseIfNeeded@CTouchProcessor@@QEAAX_K@Z.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x140071D30 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14009B880 (--1CInputDest@@QEAA@XZ.c)
 *     ?DelegateCapture@CTouchProcessor@@AEAA?AUtagINPUTDEST@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x14015B950 (-DelegateCapture@CTouchProcessor@@AEAA-AUtagINPUTDEST@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall CTouchProcessor::DelegateCapturePointerImplicit(PERESOURCE *this, unsigned __int64 a2)
{
  unsigned int v4; // ebx
  char v5; // di
  __int64 v6; // r9
  __int64 v7; // rcx
  char v8; // si
  int (*v10)(void); // rax
  __int64 v11; // rcx
  unsigned int (__fastcall *v12)(__int64, _DWORD *); // rax
  _DWORD v13[32]; // [rsp+40h] [rbp-128h] BYREF
  _OWORD v14[8]; // [rsp+C0h] [rbp-A8h] BYREF

  v4 = 0;
  v5 = 0;
  memset(v13, 0, sizeof(v13));
  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 11149);
  CTouchProcessor::DelegateCapture(this, v14, a2, v6, (__int64)v13);
  if ( !LOWORD(v13[0])
    || !v13[1]
    || (v5 = 1, v8 = 0, !*(_DWORD *)CInputDest::CInputDest((CInputDest *)v14, (const struct tagINPUTDEST *)&v13[2])) )
  {
    v8 = 1;
  }
  if ( (v5 & 1) != 0 )
    CInputDest::~CInputDest((CInputDest *)v14);
  if ( v8 )
    return 0LL;
  v10 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v7) + 48) + 6192LL);
  if ( v10 && v10() >= 0 )
  {
    v12 = *(unsigned int (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v11) + 48) + 6200LL);
    if ( v12 )
      return v12(1LL, v13);
  }
  return v4;
}
