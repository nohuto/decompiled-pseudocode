/*
 * XREFs of ?AddClientReference@CAudioSession@@UEAAJ_N@Z @ 0x18005CF70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qdd @ 0x1800CFF08 (WPP_SF_qdd.c)
 */

__int64 __fastcall CAudioSession::AddClientReference(CAudioSession *this, char a2)
{
  _InterlockedIncrement((volatile signed __int32 *)this + 82);
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)this + 83);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qdd(*((_QWORD *)WPP_GLOBAL_Control + 2), 59LL, &WPP_ee85f21a7da73824226bb42893b0f656_Traceguids, this);
  }
  return 0LL;
}
