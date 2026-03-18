/*
 * XREFs of ?OnDisplayRequiredChange@CIT_USER_ACTIVE_TRACKER@@QEAAXII@Z @ 0x14007F064
 * Callers:
 *     CitDisplayRequestChange @ 0x14007EB1C (CitDisplayRequestChange.c)
 * Callees:
 *     ?CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x14007C19C (-CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z.c)
 *     ?SetActive@CIT_USER_ACTIVITY_STAT@@QEAAXI@Z @ 0x1400E7D34 (-SetActive@CIT_USER_ACTIVITY_STAT@@QEAAXI@Z.c)
 */

void __fastcall CIT_USER_ACTIVE_TRACKER::OnDisplayRequiredChange(CIT_USER_ACTIVE_TRACKER *this, __int64 a2, int a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax

  CIT_USER_ACTIVE_TRACKER::CalculateUpToTime(this, a2);
  if ( a3 )
  {
    v7 = *((_DWORD *)this + 5);
    if ( v7 >= 0 )
      *((_DWORD *)this + 5) = (v7 + 1) | 0x80000000;
  }
  else if ( *(_DWORD *)this
         && (unsigned int)(*((_DWORD *)this + 1) + *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v6, v5) + 18912) + 8LL)) < *((_DWORD *)this + 2) )
  {
    CIT_USER_ACTIVITY_STAT::SetActive((CIT_USER_ACTIVE_TRACKER *)((char *)this + 16), 0);
  }
  *(_DWORD *)this = a3;
}
