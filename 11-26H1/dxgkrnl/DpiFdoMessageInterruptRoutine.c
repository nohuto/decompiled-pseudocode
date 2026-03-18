/*
 * XREFs of DpiFdoMessageInterruptRoutine @ 0x1400100F0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A6920 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DpiFdoMessageInterruptRoutine(__int64 a1, __int64 a2, unsigned int a3)
{
  struct DXGTHREAD *v3; // rbx
  __int64 v6; // rdi
  struct DXGTHREAD *Current; // rax
  int v8; // eax
  __int64 v9; // rcx
  unsigned __int8 v10; // si

  v3 = 0LL;
  v6 = qword_1401664C0 & 2;
  if ( (qword_1401664C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter);
  if ( KeGetCurrentIrql() < 2u )
  {
    Current = DXGTHREAD::GetCurrent();
    v3 = Current;
    if ( Current )
    {
      if ( *((int *)Current + 13) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 186;
        DxgkLogInternalTriageEvent(0, 262146, -1, (unsigned int)L"m_ProfilerEntryCount >= 0", 186LL, 0LL, 0LL, 0LL, 0LL);
      }
      v8 = *((_DWORD *)v3 + 13);
      if ( !v8 )
        *((_DWORD *)v3 + 14) = 4014;
      *((_DWORD *)v3 + 13) = v8 + 1;
    }
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(a2 + 64) + 40LL) + 184LL))(
          *(_QWORD *)(*(_QWORD *)(a2 + 64) + 48LL),
          a3);
  if ( v3 )
  {
    if ( *((int *)v3 + 13) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 196;
      DxgkLogInternalTriageEvent(0, 262146, -1, (unsigned int)L"m_ProfilerEntryCount > 0", 196LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( (*((_DWORD *)v3 + 13))-- == 1 )
      *((_DWORD *)v3 + 14) = -1;
  }
  if ( v6 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit);
  return v10;
}
