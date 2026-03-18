/*
 * XREFs of SetTiledRect @ 0x140043080
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 * Callees:
 *     _GetDesktopWindow @ 0x140034670 (_GetDesktopWindow.c)
 *     InternalGetRealClientRect @ 0x1400431B4 (InternalGetRealClientRect.c)
 *     GetDpiForSystem @ 0x1400433C4 (GetDpiForSystem.c)
 *     GetDpiDependentMetric @ 0x14004B938 (GetDpiDependentMetric.c)
 */

__int64 __fastcall SetTiledRect(__int64 a1, _DWORD *a2, __int64 a3)
{
  int DesktopWindow; // eax
  int v6; // r8d
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // esi
  unsigned int v9; // eax
  int v10; // esi
  unsigned int v11; // eax
  int v12; // ebp
  unsigned int v13; // eax
  int v14; // eax
  int v15; // r11d
  int v16; // ebp
  int v17; // r9d
  int v18; // r10d
  int v19; // r8d
  int v20; // ecx
  int v21; // r8d
  int v22; // ecx
  __int64 result; // rax
  __int128 v24; // [rsp+30h] [rbp-28h] BYREF

  v24 = 0LL;
  DesktopWindow = GetDesktopWindow(a1);
  InternalGetRealClientRect(DesktopWindow, (unsigned int)&v24, 2, v6, 0);
  ++*(_WORD *)(a3 + 74);
  DpiForSystem = GetDpiForSystem();
  DpiDependentMetric = GetDpiDependentMetric(14LL, DpiForSystem);
  v9 = GetDpiForSystem();
  v10 = GetDpiDependentMetric(12LL, v9) + DpiDependentMetric;
  v11 = GetDpiForSystem();
  v12 = GetDpiDependentMetric(15LL, v11);
  v13 = GetDpiForSystem();
  v14 = GetDpiDependentMetric(13LL, v13);
  v15 = DWORD2(v24) - v24;
  v16 = v14 + v12;
  v17 = HIDWORD(v24);
  v18 = DWORD1(v24);
  v19 = v10 * *(__int16 *)(a3 + 74);
  v20 = v16 * *(__int16 *)(a3 + 74);
  if ( v19 > (DWORD2(v24) - (int)v24) / 4 || v20 > (HIDWORD(v24) - DWORD1(v24)) / 4 )
  {
    *(_WORD *)(a3 + 74) = 0;
    v19 = v10;
    v20 = v16;
  }
  v21 = v24 + v19;
  *a2 = v21;
  v22 = v18 + v20;
  a2[2] = v21 + (v15 + 2 * (v15 + 1)) / 4;
  a2[1] = v22;
  result = (unsigned int)(v22 + (v17 - v18 + 2 * (v17 - v18 + 1)) / 4);
  a2[3] = result;
  return result;
}
