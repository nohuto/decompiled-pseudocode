/*
 * XREFs of ?TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z @ 0x1401955C4
 * Callers:
 *     ?TrackZorder@@YAPEAUtagWND@@PEAUtagWINDOWPOS@@PEAU1@11PEAPEAUHWND__@@2@Z @ 0x1401954D4 (-TrackZorder@@YAPEAUtagWND@@PEAUtagWINDOWPOS@@PEAU1@11PEAPEAUHWND__@@2@Z.c)
 * Callees:
 *     CalcForegroundInsertAfter @ 0x140023FF0 (CalcForegroundInsertAfter.c)
 *     GetLastTopMostWindow @ 0x140065958 (GetLastTopMostWindow.c)
 *     ?GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x140152B10 (-GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?IsLastTopMostWindow@@YAHPEBUtagWND@@@Z @ 0x14020F28C (-IsLastTopMostWindow@@YAHPEBUtagWND@@@Z.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1402720AC (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall TrackBackground(
        struct tagWINDOWPOS *a1,
        struct tagWND *a2,
        struct tagWND *a3,
        struct tagWND *LastTopMostWindow,
        struct tagWND *a5,
        struct tagWND *a6)
{
  __int64 v6; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx

  v6 = 0LL;
  if ( a3 )
  {
    if ( *((_QWORD *)a2 + 2) != *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18904) )
    {
      v13 = *(_BYTE *)(*((_QWORD *)a3 + 5) + 19LL) & 4 ^ (*(unsigned __int8 *)(*((_QWORD *)a3 + 5) + 24LL) >> 1) & 4u;
      if ( (v13 & 0xFFFFFFFC) != 0 && (*(_BYTE *)(*((_QWORD *)a2 + 5) + 24LL) & 8) == 0 )
      {
        if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline(v13, v11, v12)
          || !LastTopMostWindow )
        {
          LastTopMostWindow = CalcForegroundInsertAfter((__int64)a2);
          if ( !LastTopMostWindow )
            goto LABEL_18;
        }
        if ( !a6
          || *(_QWORD *)(*((_QWORD *)a2 + 2) + 472LL) != *(_QWORD *)(W32GetUserSessionState(v15, v14) + 18888)
          || !(unsigned int)IsLastTopMostWindow(LastTopMostWindow) )
        {
          if ( (unsigned int)IsLastTopMostWindow(LastTopMostWindow)
            || a5 != GetRootOwner(a2)
            || (v18 = *((_QWORD *)a5 + 2), !*(_QWORD *)(v18 + 1584))
            || (v20 = *(_QWORD *)(W32GetUserSessionState(v17, v16) + 18888), *(_QWORD *)(v18 + 472) != v20)
            || a5 != *(struct tagWND **)(*(_QWORD *)(W32GetUserSessionState(v20, v19) + 18888) + 128LL)
            || (LastTopMostWindow = (struct tagWND *)GetLastTopMostWindow((__int64)a2, v21)) != 0LL )
          {
            v6 = *(_QWORD *)LastTopMostWindow;
          }
LABEL_18:
          *((_QWORD *)a1 + 1) = v6;
          return 1LL;
        }
      }
    }
  }
  return 0LL;
}
