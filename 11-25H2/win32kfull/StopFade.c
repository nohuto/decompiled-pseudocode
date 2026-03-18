/*
 * XREFs of StopFade @ 0x1401F4CB0
 * Callers:
 *     MNAnimate @ 0x140045C18 (MNAnimate.c)
 *     xxxSwitchDesktop @ 0x1401FD254 (xxxSwitchDesktop.c)
 *     zzzAnimateFade @ 0x140242188 (zzzAnimateFade.c)
 *     StopSonar @ 0x140287A2C (StopSonar.c)
 *     ?zzzDwmStartRedirection@@YAJXZ @ 0x1402B4DB4 (-zzzDwmStartRedirection@@YAJXZ.c)
 *     xxxDwmStopRedirection @ 0x1402B5280 (xxxDwmStopRedirection.c)
 * Callees:
 *     FindTimer @ 0x14001A310 (FindTimer.c)
 *     GreGetLayout @ 0x140054CD8 (GreGetLayout.c)
 *     GreBitBltInternal @ 0x140084DC8 (GreBitBltInternal.c)
 *     DeleteFadeSprite @ 0x1401F4E70 (DeleteFadeSprite.c)
 */

__int64 __fastcall StopFade(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // esi
  HDC DCEx; // rdi
  int v11; // ebp
  int Layout; // eax
  __int64 StockObject; // rax
  __int64 result; // rax
  __int64 v15; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  v5 = W32GetUserSessionState(v4, v3);
  FindTimer(*(_QWORD *)(v5 + 68472), 65526LL, 2u, 1, 0LL);
  v6 = DeleteFadeSprite();
  v8 = *(unsigned int *)(UserSessionState + 43032);
  if ( (v8 & 2) == 0 && (v8 & 1) != 0 )
  {
    if ( v6 )
    {
      v9 = 0;
      DCEx = (HDC)_GetDCEx(v6, 0LL, 3LL);
      v11 = 0;
    }
    else
    {
      v15 = W32GetUserSessionState(v8, v7);
      v9 = *(_DWORD *)(UserSessionState + 43008);
      v11 = *(_DWORD *)(UserSessionState + 43012);
      DCEx = *(HDC *)(*(_QWORD *)(v15 + 56968) + 64LL);
    }
    Layout = GreGetLayout(DCEx);
    GreBitBltInternal(
      DCEx,
      v9,
      v11,
      *(_DWORD *)(UserSessionState + 43016),
      *(_DWORD *)(UserSessionState + 43020),
      *(HDC *)(UserSessionState + 42992),
      0,
      0,
      (Layout << 31) + 13369376,
      0,
      0);
    _ReleaseDC(DCEx);
  }
  StockObject = GreGetStockObject(21LL);
  GreSelectBitmap(*(_QWORD *)(UserSessionState + 42992), StockObject);
  GreCleanDC(*(_QWORD *)(UserSessionState + 42992));
  GreSetDCOwnerEx(*(_QWORD *)(UserSessionState + 42992), 0LL, 0LL, 1LL);
  result = GreDeleteObject(*(_QWORD *)(UserSessionState + 43000));
  *(_QWORD *)(UserSessionState + 43000) = 0LL;
  *(_DWORD *)(UserSessionState + 43032) = 0;
  return result;
}
