/*
 * XREFs of ?GetProcessId@CAudioSession@@UEAAJPEAK@Z @ 0x180071690
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_S @ 0x180082A54 (WPP_SF_S.c)
 */

__int64 __fastcall CAudioSession::GetProcessId(CAudioSession *this, unsigned int *a2)
{
  __int64 result; // rax

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      13LL,
      &WPP_ee85f21a7da73824226bb42893b0f656_Traceguids,
      *((_QWORD *)this + 82));
  }
  result = *((_DWORD *)this + 162) != 0 ? 0x889000D : 0;
  *a2 = *(_DWORD *)((char *)this + (-(__int64)(*((_DWORD *)this + 162) != 0) & 0xFFFFFFFFFFFFFE4CuLL) + 640);
  return result;
}
