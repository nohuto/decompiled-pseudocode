/*
 * XREFs of ?OnDisplayRequiredChange@CIT_USER_ACTIVE_TRACKER@@QEAAXII@Z @ 0x1400D7BC8
 * Callers:
 *     CitDisplayRequestChange @ 0x1400D7C64 (CitDisplayRequestChange.c)
 * Callees:
 *     ?CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1400D61F4 (-CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z.c)
 *     ?SetActive@CIT_USER_ACTIVITY_STAT@@QEAAXI@Z @ 0x14012E294 (-SetActive@CIT_USER_ACTIVITY_STAT@@QEAAXI@Z.c)
 */

void __fastcall CIT_USER_ACTIVE_TRACKER::OnDisplayRequiredChange(CIT_USER_ACTIVE_TRACKER *this, int a2, int a3)
{
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // eax

  CIT_USER_ACTIVE_TRACKER::CalculateUpToTime(this, a2, a3);
  if ( a3 )
  {
    v8 = *((_DWORD *)this + 5);
    if ( v8 >= 0 )
      *((_DWORD *)this + 5) = (v8 + 1) | 0x80000000;
  }
  else if ( *(_DWORD *)this
         && (unsigned int)(*((_DWORD *)this + 1)
                         + *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v6, v5, v7) + 18952) + 8LL)) < *((_DWORD *)this + 2) )
  {
    CIT_USER_ACTIVITY_STAT::SetActive((CIT_USER_ACTIVE_TRACKER *)((char *)this + 16), 0);
  }
  *(_DWORD *)this = a3;
}
