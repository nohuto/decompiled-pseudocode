/*
 * XREFs of ?ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ @ 0x180012700
 * Callers:
 *     ?SoundLevelChangeCompletionCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180029820 (-SoundLevelChangeCompletionCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIME.c)
 * Callees:
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x180011340 (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplication::ProcessPendingPLMExemptionChange(CApplication *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  int v3; // edi
  int v4; // r14d
  _QWORD *v5; // rdi
  __int64 v6; // rcx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 336);
  while ( 1 )
  {
    EnterCriticalSection(v2);
    if ( *((_DWORD *)this + 94) )
    {
      v3 = *((_DWORD *)this + 94);
      if ( v3 != GetCurrentThreadId() )
        break;
    }
    if ( !*((_DWORD *)this + 95) )
    {
      *((_DWORD *)this + 94) = 0;
      if ( !v2 )
        return;
      goto LABEL_6;
    }
    *((_DWORD *)this + 94) = GetCurrentThreadId();
    v4 = *((_DWORD *)this + 95);
    *((_DWORD *)this + 95) = 0;
    if ( v2 )
      LeaveCriticalSection(v2);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
    v5 = (_QWORD *)*((_QWORD *)this + 9);
    while ( v5 )
    {
      v6 = v5[2];
      v5 = (_QWORD *)*v5;
      CProcess::NotifyPLM(v6, v4);
    }
    if ( this != (CApplication *)-32LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  }
  if ( v2 )
LABEL_6:
    LeaveCriticalSection(v2);
}
