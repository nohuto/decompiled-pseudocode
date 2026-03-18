/*
 * XREFs of ChangeComposableCursor @ 0x140214560
 * Callers:
 *     NtUserEnableSoftwareCursorForScreenCapture @ 0x14019CEA0 (NtUserEnableSoftwareCursorForScreenCapture.c)
 *     MagpDestroyLensContext @ 0x1401B80B8 (MagpDestroyLensContext.c)
 *     MagSetLensContextInformation @ 0x1401B93FC (MagSetLensContextInformation.c)
 *     ?DisableDwmSwCursorMoveSize@@YAHH@Z @ 0x140250758 (-DisableDwmSwCursorMoveSize@@YAHH@Z.c)
 *     ?EnableDwmSwCursorMoveSize@@YAXPEAH@Z @ 0x140250778 (-EnableDwmSwCursorMoveSize@@YAXPEAH@Z.c)
 *     MagContextThreadCallout @ 0x140270AF0 (MagContextThreadCallout.c)
 *     xxxDwmStopRedirection @ 0x1402B5280 (xxxDwmStopRedirection.c)
 * Callees:
 *     SetPointer @ 0x140123830 (SetPointer.c)
 */

__int64 __fastcall ChangeComposableCursor(__int64 a1, __int64 a2)
{
  int v2; // edi
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx

  v2 = a1;
  v3 = *(_DWORD *)(W32GetUserSessionState(a1, a2) + 36288) + ((_DWORD)a1 != 0 ? 1 : -1);
  if ( !*(_DWORD *)(W32GetUserSessionState(v4, (unsigned int)-v2) + 36288) && v2 )
  {
    SetPointer(0LL);
    *(_DWORD *)(W32GetUserSessionState(v11, v10) + 36292) = 1;
LABEL_8:
    SetPointer(1LL);
    goto LABEL_3;
  }
  if ( *(_DWORD *)(W32GetUserSessionState(v6, v5) + 36288) == 1 && !v2 )
  {
    SetPointer(0LL);
    *(_DWORD *)(W32GetUserSessionState(v13, v12) + 36292) = 0;
    goto LABEL_8;
  }
LABEL_3:
  result = W32GetUserSessionState(v8, v7);
  *(_DWORD *)(result + 36288) = v3;
  return result;
}
