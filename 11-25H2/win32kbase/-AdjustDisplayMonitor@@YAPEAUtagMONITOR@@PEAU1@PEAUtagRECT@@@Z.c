/*
 * XREFs of ?AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z @ 0x14012B338
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x14003FE60 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     GetMonitorRect @ 0x140063BC4 (GetMonitorRect.c)
 *     IntersectRect @ 0x1400CE748 (IntersectRect.c)
 */

struct tagMONITOR *__fastcall AdjustDisplayMonitor(struct tagMONITOR *a1, struct tagRECT *a2)
{
  struct tagMONITOR *v3; // rdi
  __int64 i; // rbx
  __int128 v6; // [rsp+20h] [rbp-38h] BYREF
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v8[24]; // [rsp+40h] [rbp-18h] BYREF

  v3 = a1;
  for ( i = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 56968) + 112LL); i; i = *(_QWORD *)(i + 56) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) == 0 )
    {
      v7 = 0LL;
      v6 = *(_OWORD *)GetMonitorRect((__int64)v8, i);
      if ( (unsigned int)IntersectRect(&v7, &a2->left, (int *)&v6) )
        return (struct tagMONITOR *)i;
    }
  }
  return v3;
}
