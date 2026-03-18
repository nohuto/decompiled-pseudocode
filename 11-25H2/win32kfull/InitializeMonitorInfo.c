/*
 * XREFs of InitializeMonitorInfo @ 0x1400901C8
 * Callers:
 *     UpdateWindowSpriteMonitor @ 0x140090008 (UpdateWindowSpriteMonitor.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1401F46B0 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 * Callees:
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x14003364C (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     GetAppCompatFlags2QuadWord @ 0x140034EB0 (GetAppCompatFlags2QuadWord.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     GetMonitorRectForDpi @ 0x140091044 (GetMonitorRectForDpi.c)
 *     ?_IsModernAppTopLevelWindow@@YAHQEAUtagWND@@@Z @ 0x1402AC9FC (-_IsModernAppTopLevelWindow@@YAHQEAUtagWND@@@Z.c)
 */

__int64 __fastcall InitializeMonitorInfo(__int64 a1, unsigned int a2, _QWORD *a3, __int64 a4)
{
  int v8; // r15d
  INT ScaledLogPixels; // ebp
  __int64 v10; // rdx
  __int64 v11; // rcx
  double v12; // xmm1_8
  int v13; // ecx
  __int64 result; // rax
  __int64 *v15; // rax
  INT v16; // eax
  INT v17; // ecx
  __int64 UserSessionState; // rax
  double v19; // xmm1_8
  int v20; // ecx
  _QWORD v21[5]; // [rsp+20h] [rbp-28h] BYREF

  v8 = *(unsigned __int16 *)(a3[5] + 60LL);
  LOWORD(ScaledLogPixels) = (a2 >> 8) & 0x1FF;
  *(_DWORD *)(a1 + 8) = v8;
  *(_DWORD *)(a1 + 12) = v8;
  GetMonitorRectForDpi(v21, a3, (unsigned __int16)ScaledLogPixels);
  *(_QWORD *)(a1 + 16) = v21[0];
  GetMonitorRectForDpi(v21, a3, 0LL);
  *(_DWORD *)(a1 + 36) &= 0xFFFFFFFA;
  *(_QWORD *)(a1 + 24) = v21[0];
  if ( v8 != 96 )
  {
    if ( PtiCurrent(v11, v10) )
    {
      if ( *((_QWORD *)PtiCurrent(v11, v10) + 62) )
      {
        v15 = *(__int64 **)(*((_QWORD *)PtiCurrent(v11, v10) + 62) + 8LL);
        v11 = *v15;
        LOBYTE(v11) = (*(_BYTE *)(*v15 + 64) & 1) != 0;
        if ( ((unsigned __int8)v11 & ((a2 & 0x4000000F) == 0x40000000)) != 0 )
        {
          ScaledLogPixels = (unsigned __int16)GreGetScaledLogPixels((unsigned __int16)v8);
          v16 = EngMulDiv(*(_DWORD *)(a1 + 16), ScaledLogPixels, 96);
          v17 = *(_DWORD *)(a1 + 20);
          *(_DWORD *)(a1 + 16) = v16;
          *(_DWORD *)(a1 + 20) = EngMulDiv(v17, ScaledLogPixels, 96);
        }
      }
    }
  }
  *(_DWORD *)(a1 + 32) = (unsigned __int16)ScaledLogPixels;
  if ( (_WORD)ScaledLogPixels )
  {
    UserSessionState = W32GetUserSessionState(v11, v10);
    if ( (unsigned int)DrvIsUniformSpaceMapping(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 16LL))
      && a4
      && IsTopLevelWindow(a4) )
    {
      v20 = *(unsigned __int16 *)(a3[5] + 64LL);
      *(_DWORD *)(a1 + 36) |= 1u;
      *(_DWORD *)(a1 + 12) = v20;
      v19 = (double)*(unsigned __int16 *)(a3[5] + 64LL);
    }
    else
    {
      v19 = (double)v8;
    }
    v12 = v19 / (double)(unsigned __int16)ScaledLogPixels;
  }
  else
  {
    if ( a4 && (*(_DWORD *)(a4 + 380) & 0x80000) == 0 )
      *(_DWORD *)(a1 + 12) = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a4 + 16) + 464LL) + 272LL);
    v12 = DOUBLE_1_0;
  }
  *(double *)a1 = v12;
  if ( a4 && IsChildWindowDpiBoundary((const struct tagWND *)a4) )
    *(_DWORD *)(a1 + 36) |= 4u;
  *(_QWORD *)(a1 + 48) = *a3;
  if ( a4
    && (GetAppCompatFlags2QuadWord(*(_QWORD *)(a4 + 16), v10) & 0x8400000000000000uLL) == 0x8000000000000000uLL
    && (IsTopLevelWindow(a4) || (unsigned int)_IsModernAppTopLevelWindow((struct tagWND *const)a4)) )
  {
    v13 = 8;
  }
  else
  {
    v13 = 0;
  }
  *(_DWORD *)(a1 + 36) = v13 | *(_DWORD *)(a1 + 36) & 0xFFFFFFF7;
  result = DrvGetWDDMAdapterInfo(a3[10], 0LL, a1 + 56, a1 + 64);
  if ( !(_DWORD)result )
  {
    result = 0LL;
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_DWORD *)(a1 + 64) = -1;
  }
  return result;
}
