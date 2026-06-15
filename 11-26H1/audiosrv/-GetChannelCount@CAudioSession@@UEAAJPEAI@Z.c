/*
 * XREFs of ?GetChannelCount@CAudioSession@@UEAAJPEAI@Z @ 0x180086630
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Sd @ 0x1800CF92C (WPP_SF_Sd.c)
 */

__int64 __fastcall CAudioSession::GetChannelCount(CAudioSession *this, unsigned int *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 736);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      21,
      (unsigned int)&WPP_ee85f21a7da73824226bb42893b0f656_Traceguids,
      *((_QWORD *)this + 82),
      *((_DWORD *)this + 222));
  }
  *a2 = *((_DWORD *)this + 222);
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
