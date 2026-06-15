/*
 * XREFs of ?ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ @ 0x180012C70
 * Callers:
 *     ?SoundLevelChangeCompletionCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180029820 (-SoundLevelChangeCompletionCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIME.c)
 * Callees:
 *     ?SendSoundLevelNotification@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x180012250 (-SendSoundLevelNotification@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z.c)
 */

void __fastcall CApplication::ProcessPendingSoundLevelNotification(CApplication *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  DWORD CurrentThreadId; // eax
  unsigned int v4; // esi

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 280);
  while ( 1 )
  {
    EnterCriticalSection(v2);
    if ( *((_DWORD *)this + 80) )
    {
      if ( *((_DWORD *)this + 80) != GetCurrentThreadId() )
        break;
    }
    if ( *((_DWORD *)this + 81) == *((_DWORD *)this + 82) && !*((_DWORD *)this + 171) )
    {
      *((_DWORD *)this + 80) = 0;
      if ( !v2 )
        return;
      goto LABEL_6;
    }
    CurrentThreadId = GetCurrentThreadId();
    v4 = *((_DWORD *)this + 81);
    *((_DWORD *)this + 80) = CurrentThreadId;
    *((_DWORD *)this + 82) = v4;
    *((_DWORD *)this + 171) = 0;
    if ( v2 )
      LeaveCriticalSection(v2);
    CApplication::SendSoundLevelNotification((__int64)this, v4);
  }
  if ( v2 )
LABEL_6:
    LeaveCriticalSection(v2);
}
