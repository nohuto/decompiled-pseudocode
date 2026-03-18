/*
 * XREFs of ?SendTrimWnf@VIDMM_GLOBAL@@QEBAXPEAVVIDMM_PROCESS@@UD3DDDI_TRIMRESIDENCYSET_FLAGS@@_K@Z @ 0x14010C8F8
 * Callers:
 *     TryTrimWnfProcess @ 0x1400A6574 (TryTrimWnfProcess.c)
 *     ?HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x14010C244 (-HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0ppqx_EtwWriteTransfer @ 0x14004DE18 (McTemplateK0ppqx_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     SendWnfNotificationToProcess @ 0x14010CA18 (SendWnfNotificationToProcess.c)
 */

void __fastcall VIDMM_GLOBAL::SendTrimWnf(VIDMM_GLOBAL *this, struct VIDMM_PROCESS *a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  VIDMM_GLOBAL *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  int v12; // [rsp+28h] [rbp-70h]
  _BYTE v13[20]; // [rsp+50h] [rbp-48h] BYREF
  int v14; // [rsp+64h] [rbp-34h]

  v5 = a3;
  v7 = this;
  if ( g_IsInternalReleaseOrDbg )
  {
    v8 = WdLogNewEntry5_WdTrace(this);
    this = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 2);
    *(_QWORD *)(v8 + 24) = this;
    WdLogGlobalForLineNumber = 24613;
  }
  if ( (byte_14008A201 & 0x10) != 0 )
  {
    v12 = v5;
    McTemplateK0ppqx_EtwWriteTransfer((__int64)this, (__int64)a2, a3, *((_QWORD *)v7 + 3), *((_QWORD *)a2 + 3), v12, a4);
  }
  v14 = 0;
  v9 = *((_QWORD *)v7 + 3);
  *(_OWORD *)&v13[4] = 0LL;
  *(_QWORD *)v13 = *(_QWORD *)(v9 + 412);
  *(_DWORD *)&v13[16] = v5;
  *(_QWORD *)&v13[8] = a4;
  v10 = SendWnfNotificationToProcess(a2, *(_QWORD *)v13, v13);
  if ( v10 < 0 )
  {
    WdLogSingleEntry1(1LL, v10);
    WdLogGlobalForLineNumber = 24636;
    DxgkLogInternalTriageEvent(v11, 0x40000LL);
  }
}
