/*
 * XREFs of ?CreateMiniportBlackboxLiveDump@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJXZ @ 0x1401CA8A8
 * Callers:
 *     ?LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401CB5C8 (-LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1401B4170 (-DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINF.c)
 */

__int64 __fastcall DISPLAYDIAGNOSTICADAPTERDATA::CreateMiniportBlackboxLiveDump(DISPLAYDIAGNOSTICADAPTERDATA *this)
{
  __int64 v1; // rsi
  unsigned int LiveDumpWithDriverBlob; // edi
  __int128 v4; // xmm0
  __int64 v5; // r8
  struct _DEVICE_OBJECT *v6; // rcx
  int v8; // [rsp+50h] [rbp-28h] BYREF
  __int128 v9; // [rsp+54h] [rbp-24h]

  v1 = *(_QWORD *)this;
  LiveDumpWithDriverBlob = 0;
  if ( !*(_QWORD *)this )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1465;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 1465LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_BYTE *)this + 3488) )
  {
    v4 = *(_OWORD *)((char *)this + 28);
    v5 = *((int *)this + 6);
    *((_QWORD *)this + 433) = &v8;
    v6 = *(struct _DEVICE_OBJECT **)(v1 + 216);
    v9 = v4;
    v8 = 16;
    LiveDumpWithDriverBlob = DxgCreateLiveDumpWithDriverBlob(
                               v6,
                               0x1B8u,
                               v5,
                               0LL,
                               0LL,
                               0LL,
                               (DISPLAYDIAGNOSTICADAPTERDATA *)((char *)this + 3256));
    *((_QWORD *)this + 433) = 0LL;
  }
  return LiveDumpWithDriverBlob;
}
