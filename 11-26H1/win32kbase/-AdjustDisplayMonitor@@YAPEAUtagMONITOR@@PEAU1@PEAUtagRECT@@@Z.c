/*
 * XREFs of ?AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z @ 0x140166B7C
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x140086930 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     GetMonitorRect @ 0x140083AF4 (GetMonitorRect.c)
 *     IntersectRect @ 0x14011D9FC (IntersectRect.c)
 */

struct tagMONITOR *__fastcall AdjustDisplayMonitor(struct tagMONITOR *a1, struct tagRECT *a2, int a3)
{
  struct tagMONITOR *v4; // rdi
  __int64 i; // rbx
  __int128 v7; // [rsp+20h] [rbp-38h] BYREF
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v9[24]; // [rsp+40h] [rbp-18h] BYREF

  v4 = a1;
  for ( i = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState((_DWORD)a1, (_DWORD)a2, a3) + 56968) + 104LL);
        i;
        i = *(_QWORD *)(i + 56) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) == 0 )
    {
      v8 = 0LL;
      v7 = *(_OWORD *)GetMonitorRect((__int64)v9, i);
      if ( (unsigned int)IntersectRect(&v8, &a2->left, (int *)&v7) )
        return (struct tagMONITOR *)i;
    }
  }
  return v4;
}
