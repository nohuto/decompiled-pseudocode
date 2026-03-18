/*
 * XREFs of ?_GetOwnerTransformedMonitorRect@@YAXPEAUtagWND@@PEAUtagMONITOR@@HPEAUtagRECT@@@Z @ 0x1402E1378
 * Callers:
 *     NtUserGetOwnerTransformedMonitorRect @ 0x1402B41E0 (NtUserGetOwnerTransformedMonitorRect.c)
 * Callees:
 *     GetMonitorRect @ 0x140030144 (GetMonitorRect.c)
 *     GetMonitorWorkRect @ 0x1400307D4 (GetMonitorWorkRect.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall _GetOwnerTransformedMonitorRect(struct tagWND *a1, struct tagMONITOR *a2, int a3, struct tagRECT *a4)
{
  struct tagRECT *MonitorWorkRect; // rax
  __int64 v9; // rcx
  struct tagMONITOR *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  _QWORD v14[2]; // [rsp+20h] [rbp-58h] BYREF
  __m128i v15; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT v16; // [rsp+40h] [rbp-38h] BYREF

  if ( a3 )
    MonitorWorkRect = (struct tagRECT *)GetMonitorWorkRect((__int64)v14, (__int64)a2);
  else
    MonitorWorkRect = (struct tagRECT *)GetMonitorRect(&v15, (__int64)a2);
  v9 = *((_QWORD *)a1 + 5);
  v16 = *MonitorWorkRect;
  if ( (*(_DWORD *)(v9 + 288) & 0xF) != 2 )
  {
    v10 = (struct tagMONITOR *)ValidateHmonitorNoRip(*(_QWORD *)(v9 + 256));
    v14[0] = v10;
    if ( v10 )
    {
      if ( v10 != a2 )
      {
        v11 = a3 != 0 ? 44LL : 28LL;
        v12 = v11 + *((_QWORD *)a2 + 5);
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v11);
        PhysicalToLogicalDPIRect(&v16, v12, CurrentThreadDpiAwarenessContext, v14);
      }
    }
  }
  *a4 = v16;
}
