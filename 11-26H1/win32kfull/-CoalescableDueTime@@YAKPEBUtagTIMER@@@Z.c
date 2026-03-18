/*
 * XREFs of ?CoalescableDueTime@@YAKPEBUtagTIMER@@@Z @ 0x14011CAC0
 * Callers:
 *     InternalSetTimer @ 0x140021294 (InternalSetTimer.c)
 *     xxxTimersProc @ 0x140098800 (xxxTimersProc.c)
 *     xxxTimersProc_Old @ 0x14009A98C (xxxTimersProc_Old.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CoalescableDueTime(const struct tagTIMER *a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // edx
  int v11; // eax
  unsigned int v13; // ecx

  if ( (*((_DWORD *)a1 + 12) & 0x200) == 0 )
    return *((unsigned int *)a1 + 13);
  UserSessionState = W32GetUserSessionState(a1, a2);
  v5 = *((unsigned int *)a1 + 11);
  if ( (unsigned int)v5 <= *(_DWORD *)(UserSessionState + 62732) )
    LODWORD(v5) = *(_DWORD *)(W32GetUserSessionState(v5, v4) + 62732);
  v6 = (unsigned int)(*((_DWORD *)a1 + 13) + v5);
  if ( (unsigned int)v6 >= 0x7FFFFFFF )
  {
    v10 = 0x7FFFFFFF;
  }
  else
  {
    v7 = W32GetUserSessionState(v6, v4);
    v9 = *((unsigned int *)a1 + 11);
    if ( (unsigned int)v9 <= *(_DWORD *)(v7 + 62732) )
      LODWORD(v9) = *(_DWORD *)(W32GetUserSessionState(v9, v8) + 62732);
    v10 = v9 + *((_DWORD *)a1 + 13);
  }
  v11 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 456LL) + 1024LL);
  if ( v11 )
  {
    v13 = v11 + v10;
    v10 = 0x7FFFFFFF;
    if ( v13 < 0x7FFFFFFF )
      return v13;
  }
  return v10;
}
