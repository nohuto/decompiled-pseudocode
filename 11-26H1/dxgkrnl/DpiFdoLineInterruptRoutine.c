/*
 * XREFs of DpiFdoLineInterruptRoutine @ 0x14003C0F0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A6920 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

char __fastcall DpiFdoLineInterruptRoutine(__int64 a1, __int64 a2)
{
  struct DXGTHREAD *v2; // rbx
  __int64 v4; // rdi
  struct DXGTHREAD *Current; // rax
  int v6; // eax
  __int64 v7; // rcx
  char v8; // si

  v2 = 0LL;
  v4 = qword_1401664C0 & 2;
  if ( (qword_1401664C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter);
  if ( KeGetCurrentIrql() < 2u )
  {
    Current = DXGTHREAD::GetCurrent();
    v2 = Current;
    if ( Current )
    {
      if ( *((int *)Current + 13) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 186;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_ProfilerEntryCount >= 0", 186LL, 0LL, 0LL, 0LL, 0LL);
      }
      v6 = *((_DWORD *)v2 + 13);
      if ( !v6 )
        *((_DWORD *)v2 + 14) = 4014;
      *((_DWORD *)v2 + 13) = v6 + 1;
    }
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(a2 + 64) + 40LL) + 184LL))(
         *(_QWORD *)(*(_QWORD *)(a2 + 64) + 48LL),
         0LL);
  if ( v2 )
  {
    if ( *((int *)v2 + 13) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 196;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_ProfilerEntryCount > 0", 196LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( (*((_DWORD *)v2 + 13))-- == 1 )
      *((_DWORD *)v2 + 14) = -1;
  }
  if ( v4 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerExit);
  return v8;
}
