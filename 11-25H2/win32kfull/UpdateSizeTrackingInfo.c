/*
 * XREFs of UpdateSizeTrackingInfo @ 0x1402AC3C0
 * Callers:
 *     NtUserUpdateWindowTrackingInfo @ 0x1402A3250 (NtUserUpdateWindowTrackingInfo.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x14009047C (GetMonitorWorkRectForWindow.c)
 */

__int64 __fastcall UpdateSizeTrackingInfo(const struct tagWND *a1, int *a2, int *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 MonitorWorkRectForWindow; // rax
  __int64 v8; // rcx
  int v9; // eax
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  __int64 result; // rax
  _BYTE v14[24]; // [rsp+20h] [rbp-18h] BYREF

  v5 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 712LL);
  v6 = *(_QWORD *)(v5 + 240);
  if ( *(_QWORD *)(v5 + 224) != v6 )
    return 0LL;
  MonitorWorkRectForWindow = GetMonitorWorkRectForWindow((__int64)v14, v6, a1);
  v8 = *(_QWORD *)(MonitorWorkRectForWindow + 8);
  if ( *a2 > (int)(v8 - *(_OWORD *)MonitorWorkRectForWindow)
    || a2[1] > (int)(HIDWORD(v8) - HIDWORD(*(_QWORD *)MonitorWorkRectForWindow)) )
  {
    return 0LL;
  }
  v9 = *(_DWORD *)(v5 + 112);
  v10 = *(_DWORD *)(v5 + 116);
  if ( v9 >= *a2 )
    v9 = *a2;
  *(_DWORD *)(v5 + 112) = v9;
  if ( v10 >= a2[1] )
    v10 = a2[1];
  *(_DWORD *)(v5 + 116) = v10;
  v11 = *(_DWORD *)(v5 + 104);
  if ( v11 <= *a3 )
    v11 = *a3;
  *(_DWORD *)(v5 + 104) = v11;
  v12 = *(_DWORD *)(v5 + 108);
  if ( v12 <= a3[1] )
    v12 = a3[1];
  result = 1LL;
  *(_DWORD *)(v5 + 108) = v12;
  return result;
}
