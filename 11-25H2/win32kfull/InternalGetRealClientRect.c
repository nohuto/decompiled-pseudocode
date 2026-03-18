/*
 * XREFs of InternalGetRealClientRect @ 0x1400431B4
 * Callers:
 *     SetTiledRect @ 0x140043080 (SetTiledRect.c)
 *     ParkIcon @ 0x1401EA1E8 (ParkIcon.c)
 *     xxxArrangeIconicWindows @ 0x1402EB4A4 (xxxArrangeIconicWindows.c)
 * Callees:
 *     GetDpiForSystem @ 0x1400433C4 (GetDpiForSystem.c)
 *     GetDpiDependentMetric @ 0x14004B938 (GetDpiDependentMetric.c)
 *     GetRect @ 0x140052B80 (GetRect.c)
 *     GetMonitorRectForDpi @ 0x140091044 (GetMonitorRectForDpi.c)
 *     GetMonitorWorkRectForDpi @ 0x1400911FC (GetMonitorWorkRectForDpi.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall InternalGetRealClientRect(__int64 a1, __int64 a2, char a3, __int64 a4, int a5)
{
  __int64 v6; // rdi
  unsigned __int16 v9; // ax
  __int128 *MonitorRectForDpi; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int128 v13; // xmm0
  __int64 result; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned int DpiForSystem; // eax
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rdx
  _BYTE v21[16]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v22; // [rsp+30h] [rbp-48h] BYREF

  v6 = a4;
  if ( (*(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x2FFF) == 0x29D )
  {
    if ( !a4 )
      v6 = *(_QWORD *)(GetDispInfo() + 104);
    if ( a5 )
      v9 = 0;
    else
      v9 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext() >> 8) & 0x1FF;
    if ( (a3 & 4) != 0 )
      MonitorRectForDpi = (__int128 *)GetMonitorRectForDpi(&v22, v6, v9);
    else
      MonitorRectForDpi = (__int128 *)GetMonitorWorkRectForDpi(v21, v6, v9);
    v13 = *MonitorRectForDpi;
    result = (__int64)&v22;
    v22 = v13;
    *(_OWORD *)a2 = v13;
  }
  else
  {
    result = GetRect(a1, a2, 17LL);
    if ( (a3 & 1) != 0 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 16LL) & 4) != 0 )
      {
        DpiForSystem = GetDpiForSystem();
        *(_DWORD *)(a2 + 12) += GetDpiDependentMetric(1LL, DpiForSystem);
      }
      result = *(_QWORD *)(a1 + 40);
      if ( (*(_BYTE *)(result + 16) & 2) != 0 )
      {
        v18 = GetDpiForSystem();
        result = GetDpiDependentMetric(0LL, v18);
        *(_DWORD *)(a2 + 8) += result;
      }
    }
  }
  if ( (a3 & 2) != 0 )
  {
    result = W32GetUserSessionState(v12, v11);
    v15 = *(_QWORD *)(result + 19872);
    v16 = *(_DWORD *)(v15 + 2120) & 0xFFFFFFF7;
    if ( (*(_DWORD *)(v15 + 2120) & 0xFFFFFFF7) == 0 || (v16 = (unsigned int)(v16 - 1), !(_DWORD)v16) )
    {
      result = *(unsigned int *)(*(_QWORD *)(W32GetUserSessionState(v15, v16) + 19872) + 2088LL);
      *(_DWORD *)(a2 + 12) -= result;
      return result;
    }
    v19 = (unsigned int)(v16 - 1);
    if ( !(_DWORD)v19 || (v19 = (unsigned int)(v19 - 1), !(_DWORD)v19) )
    {
      result = *(unsigned int *)(*(_QWORD *)(W32GetUserSessionState(v15, v19) + 19872) + 2088LL);
      *(_DWORD *)(a2 + 4) += result;
      return result;
    }
    v20 = (unsigned int)(v19 - 1);
    if ( !(_DWORD)v20 )
      goto LABEL_28;
    v20 = (unsigned int)(v20 - 1);
    if ( !(_DWORD)v20 )
    {
LABEL_27:
      result = *(unsigned int *)(*(_QWORD *)(W32GetUserSessionState(v15, v20) + 19872) + 2084LL);
      *(_DWORD *)(a2 + 8) -= result;
      return result;
    }
    v20 = (unsigned int)(v20 - 1);
    if ( !(_DWORD)v20 )
    {
LABEL_28:
      result = *(unsigned int *)(*(_QWORD *)(W32GetUserSessionState(v15, v20) + 19872) + 2084LL);
      *(_DWORD *)a2 += result;
      return result;
    }
    if ( (_DWORD)v20 == 1 )
      goto LABEL_27;
  }
  return result;
}
