/*
 * XREFs of _GetWindowPlacement @ 0x1400904B8
 * Callers:
 *     NtUserGetWindowPlacement @ 0x14024A7E0 (NtUserGetWindowPlacement.c)
 * Callees:
 *     UpdateCheckpoint @ 0x14009075C (UpdateCheckpoint.c)
 *     GetMonitorRectForDpi @ 0x140091044 (GetMonitorRectForDpi.c)
 *     ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x14009119C (-GetCurrentThreadCompositedDpiContext@@YAKXZ.c)
 *     GetMonitorWorkRectForDpi @ 0x1400911FC (GetMonitorWorkRectForDpi.c)
 *     _MonitorFromRect @ 0x1400913B0 (_MonitorFromRect.c)
 */

__int64 __fastcall GetWindowPlacement(struct tagWND *a1, __int64 a2)
{
  int v4; // esi
  __int64 updated; // r14
  __int64 v6; // rcx
  char v7; // al
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  char v9; // r15
  _QWORD *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbx
  unsigned int CurrentThreadCompositedDpiContext; // eax
  unsigned int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  int v20; // [rsp+20h] [rbp-38h] BYREF
  int v21; // [rsp+24h] [rbp-34h]
  _QWORD v22[5]; // [rsp+30h] [rbp-28h] BYREF

  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
    return 0LL;
  v4 = 0;
  updated = UpdateCheckpoint(a1);
  if ( !updated )
    return 0LL;
  v6 = *((_QWORD *)a1 + 5);
  v7 = *(_BYTE *)(v6 + 31);
  if ( (v7 & 0x20) != 0 )
    *(_DWORD *)(a2 + 8) = 2;
  else
    *(_DWORD *)(a2 + 8) = (2 * (v7 & 1)) | 1;
  *(_OWORD *)(a2 + 28) = *(_OWORD *)(updated + 20);
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v6);
  v9 = ShouldVirtualizeWindowRect(a1, CurrentThreadDpiAwarenessContext);
  if ( v9 )
    TransformRectBetweenCoordinateSpaces(a2 + 28, a2 + 28, 0LL, a1);
  v10 = (_QWORD *)(a2 + 12);
  if ( (*(_DWORD *)(updated + 16) & 0x10) != 0 )
  {
    *v10 = *(_QWORD *)updated;
    if ( v9 )
      TransformPointBetweenCoordinateSpaces(v10, v10, 0LL, a1);
  }
  else
  {
    *(_DWORD *)(a2 + 16) = -1;
    *(_DWORD *)v10 = -1;
  }
  if ( (*(_DWORD *)(updated + 16) & 0x20) == 0 || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 19LL) & 0x40) != 0 )
  {
    *(_DWORD *)(a2 + 24) = -1;
    *(_DWORD *)(a2 + 20) = -1;
  }
  else
  {
    *(_QWORD *)(a2 + 20) = *(_QWORD *)(updated + 8);
    if ( v9 )
      TransformPointBetweenCoordinateSpaces(a2 + 20, a2 + 20, 0LL, a1);
  }
  v11 = *((_QWORD *)a1 + 3);
  v12 = 0LL;
  if ( v11 )
  {
    v13 = *(_QWORD *)(v11 + 8);
    if ( v13 )
      v12 = *(_QWORD *)(v13 + 24);
  }
  if ( *((_QWORD *)a1 + 13) == v12 && *(char *)(*((_QWORD *)a1 + 5) + 24LL) >= 0 )
  {
    v14 = MonitorFromRect(a2 + 28, 1LL, 0LL);
    CurrentThreadCompositedDpiContext = GetCurrentThreadCompositedDpiContext();
    GetMonitorWorkRectForDpi(&v20, v14, (CurrentThreadCompositedDpiContext >> 8) & 0x1FF);
    v16 = GetCurrentThreadCompositedDpiContext();
    GetMonitorRectForDpi(v22, v14, (v16 >> 8) & 0x1FF);
    v17 = v22[0];
    if ( (*(_DWORD *)(updated + 16) & 0x10) != 0 )
    {
      *(_DWORD *)(a2 + 12) = LODWORD(v22[0]) + *(_DWORD *)(a2 + 12) - v20;
      *(_DWORD *)(a2 + 16) += HIDWORD(v17) - v21;
    }
    LODWORD(v17) = v17 - v20;
    *(_DWORD *)(a2 + 28) += v17;
    *(_DWORD *)(a2 + 36) += v17;
    v18 = HIDWORD(v17) - v21;
    *(_DWORD *)(a2 + 40) += HIDWORD(v17) - v21;
    *(_DWORD *)(a2 + 32) += v18;
  }
  *(_DWORD *)(a2 + 4) = 0;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 && (*(_DWORD *)(updated + 16) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 4) = 1;
    v4 = 1;
  }
  if ( (*(_DWORD *)(updated + 16) & 2) != 0 || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0 )
    *(_DWORD *)(a2 + 4) = v4 | 2;
  *(_DWORD *)a2 = 44;
  return 1LL;
}
