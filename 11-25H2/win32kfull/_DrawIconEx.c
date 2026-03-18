/*
 * XREFs of _DrawIconEx @ 0x140056464
 * Callers:
 *     NtUserDrawIconEx @ 0x140056290 (NtUserDrawIconEx.c)
 *     xxxRealDrawMenuItem @ 0x1401910EC (xxxRealDrawMenuItem.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x140192318 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     GetDpiForSystem @ 0x1400433C4 (GetDpiForSystem.c)
 *     GetDpiDependentMetric @ 0x14004B938 (GetDpiDependentMetric.c)
 *     GrePolyPatBlt @ 0x140055878 (GrePolyPatBlt.c)
 *     GreSetBrushOrg @ 0x140055A78 (GreSetBrushOrg.c)
 *     BltIcon @ 0x140056A38 (BltIcon.c)
 *     GreCreateCompatibleBitmapEx @ 0x14007C0C0 (GreCreateCompatibleBitmapEx.c)
 *     GreBitBltInternal @ 0x140084DC8 (GreBitBltInternal.c)
 *     GreGetBrushOrg @ 0x140208D4C (GreGetBrushOrg.c)
 *     ?GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z @ 0x1402738F0 (-GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z.c)
 *     ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PECH1@Z @ 0x140273994 (-GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PECH1@Z.c)
 */

__int64 __fastcall DrawIconEx(HDC a1, int a2, int a3, __int64 a4, int a5, int a6, int a7, __int64 a8, int a9)
{
  char v9; // r12
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // edi
  struct tagCURSOR *AnimatedCursorFrame; // rsi
  int v14; // r13d
  __int64 v15; // rdx
  int DpiDependentMetric; // r15d
  int v17; // eax
  int v18; // r14d
  __int64 v19; // rcx
  int v20; // eax
  __int64 UserSessionState; // rax
  HDC v22; // rdx
  int v23; // eax
  int v24; // r12d
  int v25; // ecx
  int v27; // eax
  unsigned int DpiForSystem; // eax
  unsigned int v29; // eax
  HDC v30; // r12
  __int64 CompatibleBitmap; // rax
  int v32; // ecx
  int v33; // eax
  int v34; // [rsp+68h] [rbp-41h]
  __int64 v35; // [rsp+78h] [rbp-31h]
  __int64 v36; // [rsp+80h] [rbp-29h]
  __int64 v37; // [rsp+88h] [rbp-21h] BYREF
  int v38; // [rsp+90h] [rbp-19h]
  int v39; // [rsp+94h] [rbp-15h]
  __int64 v40; // [rsp+98h] [rbp-11h]
  HDC CompatibleDC; // [rsp+110h] [rbp+67h] BYREF

  v9 = a9;
  v10 = 0;
  v11 = *(_DWORD *)(a4 + 80);
  v12 = a9 & 0x10;
  v34 = 0;
  a9 = 0;
  AnimatedCursorFrame = (struct tagCURSOR *)a4;
  LODWORD(CompatibleDC) = 0;
  v14 = 0;
  if ( (v11 & 8) == 0 || (AnimatedCursorFrame = GetAnimatedCursorFrame((struct tagACON *const)a4, a7)) != 0LL )
  {
    if ( *((_QWORD *)AnimatedCursorFrame + 16) )
    {
      if ( (v9 & 3) == 3 )
        v14 = 1;
      v34 = v14;
    }
    GetVirtualizedCursorSize(AnimatedCursorFrame, &a9, (volatile int *)&CompatibleDC);
    DpiDependentMetric = a5;
    v17 = v9 & 8;
    if ( !a5 )
    {
      if ( (v9 & 8) != 0 )
      {
        DpiForSystem = GetDpiForSystem();
        DpiDependentMetric = GetDpiDependentMetric(5, DpiForSystem);
        v17 = v9 & 8;
      }
      else
      {
        DpiDependentMetric = a9;
      }
    }
    v18 = a6;
    v19 = 2LL;
    if ( !a6 )
    {
      if ( v17 )
      {
        v29 = GetDpiForSystem();
        v20 = GetDpiDependentMetric(6, v29);
      }
      else
      {
        v15 = (unsigned int)((int)CompatibleDC >> 31);
        LODWORD(v15) = (int)CompatibleDC % 2;
        v20 = (int)CompatibleDC / 2;
      }
      v18 = v20;
    }
    UserSessionState = W32GetUserSessionState(v19, v15);
    CompatibleDC = (HDC)GreCreateCompatibleDC(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 64LL));
    v22 = CompatibleDC;
    if ( CompatibleDC )
    {
      if ( a8 )
      {
        v30 = (HDC)GreCreateCompatibleDC(a1);
        if ( v30 )
        {
          CompatibleBitmap = GreCreateCompatibleBitmapEx(a1, 0LL, 0LL);
          v36 = CompatibleBitmap;
          if ( CompatibleBitmap )
          {
            v35 = GreSelectBitmap(v30, CompatibleBitmap);
            GreGetBrushOrg(a1);
            GreSetBrushOrg(v30, 0, 0, 0LL);
            v40 = a8;
            v37 = 0LL;
            v38 = DpiDependentMetric;
            v39 = v18;
            GrePolyPatBlt(v30, 0xF00021u, (struct _POLYPATBLT *)&v37, 1u);
            if ( v34 )
            {
              v32 = 3;
              v33 = v12 != 0 ? -2134114272 : 13369376;
            }
            else
            {
              BltIcon(
                (int)v30,
                0,
                0,
                DpiDependentMetric,
                v18,
                CompatibleDC,
                (__int64)AnimatedCursorFrame,
                1,
                v12 != 0 ? -2138570554 : 8913094);
              v32 = 2;
              v33 = v12 != 0 ? -2140798906 : 6684742;
            }
            BltIcon((int)v30, 0, 0, DpiDependentMetric, v18, CompatibleDC, (__int64)AnimatedCursorFrame, v32, v33);
            GreBitBltInternal(a1, v18, v30, 0, 0, 13369376, -1, 0);
            GreSelectBitmap(v30, v35);
            GreDeleteObject(v36);
            v10 = 1;
          }
          GreDeleteDC(v30);
        }
      }
      else
      {
        if ( v14 )
        {
          BltIcon(
            (int)a1,
            a2,
            a3,
            DpiDependentMetric,
            v18,
            CompatibleDC,
            (__int64)AnimatedCursorFrame,
            3,
            v12 != 0 ? -2134114272 : 13369376);
        }
        else
        {
          v23 = v9 & 1;
          v24 = v9 & 2;
          a9 = v23;
          if ( v23 )
          {
            if ( v24 )
              v25 = v12 != 0 ? -2138570554 : 8913094;
            else
              v25 = v12 != 0 ? -2134114272 : 13369376;
            BltIcon((int)a1, a2, a3, DpiDependentMetric, v18, CompatibleDC, (__int64)AnimatedCursorFrame, 1, v25);
            v22 = CompatibleDC;
            v23 = a9;
          }
          if ( v24 )
          {
            if ( v23 )
              v27 = v12 != 0 ? -2140798906 : 6684742;
            else
              v27 = v12 != 0 ? -2134114272 : 13369376;
            BltIcon((int)a1, a2, a3, DpiDependentMetric, v18, v22, (__int64)AnimatedCursorFrame, 2, v27);
          }
        }
        v10 = 1;
      }
      GreDeleteDC(CompatibleDC);
    }
  }
  else
  {
    UserSetLastError(87);
  }
  return v10;
}
