/*
 * XREFs of MNAllocMenuState @ 0x14015BF08
 * Callers:
 *     xxxTrackPopupMenuEx @ 0x14015AE18 (xxxTrackPopupMenuEx.c)
 *     xxxMNStartMenuState @ 0x140256734 (xxxMNStartMenuState.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetDPIMetrics @ 0x140042DD8 (GetDPIMetrics.c)
 *     GreSelectFont @ 0x140054D30 (GreSelectFont.c)
 *     MNSetupAnimationDC @ 0x140219B14 (MNSetupAnimationDC.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

_QWORD *__fastcall MNAllocMenuState(_QWORD **a1, __int64 a2)
{
  struct tagTHREADINFO *v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rdi
  _QWORD *result; // rax
  __int64 UserSessionState; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  HFONT *DPIMetrics; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax

  v3 = PtiCurrent((__int64)a1, a2);
  if ( (*(_DWORD *)(W32GetUserSessionState(v5, v4) + 66800) & 0x2000000) != 0 )
  {
    v8 = (_QWORD *)Win32AllocPoolWithQuotaZInit(144LL, 1953330005LL);
    if ( !v8 )
      return 0LL;
    v8[17] = 0LL;
    if ( !(unsigned int)MNSetupAnimationDC(v8) )
    {
      Win32FreePool(v8);
      return 0LL;
    }
    GreSetDCOwnerEx(v8[17], 0LL, 0LL, 0LL);
  }
  else
  {
    UserSessionState = W32GetUserSessionState(v7, v6);
    v13 = W32GetUserSessionState(v12, v11);
    v8 = (_QWORD *)(UserSessionState + 65888);
    *(_DWORD *)(v13 + 66800) |= 0x2000000u;
    GreSetDCOwnerEx(*(_QWORD *)(UserSessionState + 66024), 2147483650LL, 0LL, 1LL);
    DPIMetrics = (HFONT *)GetDPIMetrics();
    GreSelectFont(*(HDC *)(UserSessionState + 66024), *DPIMetrics);
  }
  memset_0(v8, 0, 0x88uLL);
  v18 = *(_QWORD *)(W32GetUserSessionState(v16, v15) + 18888);
  if ( *((_QWORD *)v3 + 59) == v18 )
  {
    *((_DWORD *)v8 + 2) |= 0x2000000u;
    v19 = W32GetUserSessionState(v18, v17);
    ++*(_DWORD *)(v19 + 18848);
  }
  *v8 = **a1;
  v8[4] = v3;
  *(_DWORD *)**a1 |= 0x20000000u;
  v8[6] = *((_QWORD *)v3 + 81);
  result = v8;
  *((_QWORD *)v3 + 81) = v8;
  return result;
}
