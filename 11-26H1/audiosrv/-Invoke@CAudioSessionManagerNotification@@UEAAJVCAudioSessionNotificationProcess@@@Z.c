/*
 * XREFs of ?Invoke@CAudioSessionManagerNotification@@UEAAJVCAudioSessionNotificationProcess@@@Z @ 0x18006BA10
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_d @ 0x1800CCA44 (WPP_SF_d.c)
 *     WPP_SF_dd @ 0x1800CFC30 (WPP_SF_dd.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionManagerNotification::Invoke(__int64 a1, _QWORD *a2)
{
  int MediaEvent; // edi
  int v5; // ebx
  unsigned int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // eax
  unsigned int v11; // eax

  MediaEvent = 0;
  v5 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 644LL);
  if ( !v5 || v5 == (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 48LL))(*a2) )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 40LL))(*a2);
    MediaEvent = GenerateMediaEvent(*(_QWORD *)(a1 + 8), v7, v8, v9);
    if ( MediaEvent )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 40LL))(*a2);
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 26LL, &WPP_26c2f811cba6303e2e635ec6759b9dab_Traceguids, v11);
      }
      if ( MediaEvent < 0 )
        AudSrvTraceLoggingErrorHelper("CAudioSessionManagerNotification::Invoke", 784, MediaEvent);
    }
    else if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
           && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 40LL))(*a2);
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        (unsigned int)(MediaEvent + 27),
        &WPP_26c2f811cba6303e2e635ec6759b9dab_Traceguids,
        v10);
    }
  }
  else if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 48LL))(*a2);
    WPP_SF_dd(*((_QWORD *)WPP_GLOBAL_Control + 2), 28LL, &WPP_26c2f811cba6303e2e635ec6759b9dab_Traceguids);
  }
  if ( *a2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
  return (unsigned int)MediaEvent;
}
