/*
 * XREFs of ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1402B05CC
 * Callers:
 *     ?CloseConsumerResources@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1401ECD40 (-CloseConsumerResources@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1401ECE1C (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1402B0A14 (-ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1403ABAFC (-ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETP.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1403B75BC (-DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1403B77F0 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 */

void __fastcall DXGDXGIKEYEDMUTEX::CloseLocalMutex(__int64 a1, int a2, int a3)
{
  __int64 v3; // rdi
  __int64 v6; // rdi
  unsigned int v7; // ecx
  __int64 v8; // rcx
  __int64 v9; // rax
  const wchar_t *v10; // r9
  int v11; // [rsp+50h] [rbp-28h] BYREF
  __int64 v12; // [rsp+58h] [rbp-20h]
  char v13; // [rsp+60h] [rbp-18h]

  v3 = a2;
  v11 = -1;
  v12 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v13 = 1;
    v11 = 11001;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v13 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v11, 11001);
  v6 = 3 * v3;
  v7 = *(_DWORD *)(a1 + 8 * v6 + 16);
  if ( a3 )
  {
    if ( (int)DXGKEYEDMUTEX::DestroyLocal(v7) >= 0 )
      goto LABEL_7;
    WdLogSingleEntry0(1LL);
    v9 = 665LL;
    v10 = L"NT_SUCCESS(Status)";
  }
  else
  {
    if ( DXGKEYEDMUTEX::DestroyHandle(v7) )
      goto LABEL_7;
    WdLogSingleEntry0(1LL);
    v9 = 660LL;
    v10 = L"bStatus";
  }
  WdLogGlobalForLineNumber = v9;
  DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)v10, v9, 0LL, 0LL, 0LL, 0LL);
LABEL_7:
  *(_DWORD *)(a1 + 8 * v6 + 16) = 0;
  *(_QWORD *)(a1 + 8 * v6 + 24) = 0LL;
  *(_QWORD *)(a1 + 8 * v6 + 32) = 0LL;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v11);
  if ( v13 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v8, (__int64)&EventProfilerExit);
  }
}
