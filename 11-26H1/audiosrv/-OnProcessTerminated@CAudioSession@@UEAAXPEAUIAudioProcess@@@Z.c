/*
 * XREFs of ?OnProcessTerminated@CAudioSession@@UEAAXPEAUIAudioProcess@@@Z @ 0x180081A20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1800CFD20 (WPP_SF_q.c)
 */

void __fastcall CAudioSession::OnProcessTerminated(CAudioSession *this, struct IAudioProcess *a2)
{
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      62LL,
      &WPP_ee85f21a7da73824226bb42893b0f656_Traceguids,
      (char *)this - 8);
  }
  CAudioSession::PostStateCheckExpirationWork((CAudioSession *)((char *)this - 8));
}
