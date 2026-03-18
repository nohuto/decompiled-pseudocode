/*
 * XREFs of ?TrackZorder@@YAPEAUtagWND@@PEAUtagWINDOWPOS@@PEAU1@11PEAPEAUHWND__@@2@Z @ 0x140049100
 * Callers:
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1400487E4 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 * Callees:
 *     GetLastTopMostWindow @ 0x140048390 (GetLastTopMostWindow.c)
 *     ?IsLastTopMostWindow@@YAHPEBUtagWND@@@Z @ 0x1400492F4 (-IsLastTopMostWindow@@YAHPEBUtagWND@@@Z.c)
 *     CalcForegroundInsertAfter @ 0x140049328 (CalcForegroundInsertAfter.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1400494F0 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x140179D6C (-GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

struct tagWND *__fastcall TrackZorder(
        struct tagWINDOWPOS *a1,
        struct tagWND *a2,
        struct tagWND *LastTopMostWindow,
        struct tagWND *a4,
        HWND *a5,
        HWND *a6)
{
  struct tagWND *result; // rax
  __int64 v11; // rdx
  __int64 v12; // rbx
  struct tagWND *v13; // rdi
  HWND v14; // rcx
  __int64 v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbp
  HWND v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx

  result = (struct tagWND *)_HMObjectFromHandle(*(_QWORD *)a1);
  v12 = 0LL;
  v13 = result;
  if ( result )
  {
    v14 = *a6;
    if ( *a6 )
      v15 = _HMObjectFromHandle(v14);
    else
      v15 = 0LL;
    if ( !a2
      || *((_QWORD *)v13 + 2) == *(_QWORD *)(W32GetUserSessionState(v14, v11) + 18944)
      || ((*(_BYTE *)(*((_QWORD *)a2 + 5) + 19LL) & 4 ^ (*(unsigned __int8 *)(*((_QWORD *)a2 + 5) + 24LL) >> 1) & 4) & 0xFFFFFFFC) == 0
      || (*(_BYTE *)(*((_QWORD *)v13 + 5) + 24LL) & 8) != 0 )
    {
      goto LABEL_13;
    }
    if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline()
      && LastTopMostWindow
      || (LastTopMostWindow = (struct tagWND *)CalcForegroundInsertAfter(v13)) != 0LL )
    {
      if ( v15
        && *(_QWORD *)(*((_QWORD *)v13 + 2) + 464LL) == *(_QWORD *)(W32GetUserSessionState(v17, v16) + 18928)
        && (unsigned int)IsLastTopMostWindow(LastTopMostWindow) )
      {
LABEL_13:
        if ( (*(_BYTE *)(*((_QWORD *)v13 + 5) + 19LL) & 4) == ((*(_BYTE *)(*((_QWORD *)v13 + 5) + 24LL) >> 1) & 4) )
          a5 = a6;
        if ( *a5 )
          *((_QWORD *)a1 + 1) = *a5;
        *a5 = *(HWND *)a1;
        return v13;
      }
      if ( (unsigned int)IsLastTopMostWindow(LastTopMostWindow)
        || a4 != GetRootOwner(v13)
        || (v21 = *((_QWORD *)a4 + 2), !*(_QWORD *)(v21 + 1584))
        || (v24 = *(_QWORD *)(W32GetUserSessionState(v20, v19) + 18928), *(_QWORD *)(v21 + 464) != v24)
        || a4 != *(struct tagWND **)(*(_QWORD *)(W32GetUserSessionState(v24, v23) + 18928) + 128LL)
        || (LastTopMostWindow = (struct tagWND *)GetLastTopMostWindow((__int64)v13)) != 0LL )
      {
        v12 = *(_QWORD *)LastTopMostWindow;
      }
    }
    v22 = *(HWND *)a1;
    *((_QWORD *)a1 + 1) = v12;
    *a6 = v22;
    return v13;
  }
  return result;
}
