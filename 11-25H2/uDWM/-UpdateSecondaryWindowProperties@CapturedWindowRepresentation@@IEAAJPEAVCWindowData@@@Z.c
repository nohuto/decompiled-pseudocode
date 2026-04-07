/*
 * XREFs of ?UpdateSecondaryWindowProperties@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z @ 0x1800A9454
 * Callers:
 *     ?ReevaluateSecondaryWindow@CapturedWindowRepresentation@@QEAAJPEAVCWindowData@@@Z @ 0x180025224 (-ReevaluateSecondaryWindow@CapturedWindowRepresentation@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?AddSecondaryWindow@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z @ 0x1800A8E74 (-AddSecondaryWindow@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?SetOffset@CVisualProxy@@QEAAJNNN@Z @ 0x180003DEC (-SetOffset@CVisualProxy@@QEAAJNNN@Z.c)
 *     ?FindSecondaryWindow@CapturedWindowRepresentation@@IEAAHPEAVCWindowData@@@Z @ 0x1800251EC (-FindSecondaryWindow@CapturedWindowRepresentation@@IEAAHPEAVCWindowData@@@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180092FBC (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CapturedWindowRepresentation::UpdateSecondaryWindowProperties(HWND *this, struct CWindowData *a2)
{
  int SecondaryWindow; // eax
  __int64 v5; // rsi
  HWND v7; // rdx
  __int64 v8; // rdx
  HWND v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CWindowData *v13; // [rsp+40h] [rbp+18h] BYREF
  __int64 v14; // [rsp+48h] [rbp+20h]

  SecondaryWindow = CapturedWindowRepresentation::FindSecondaryWindow((CapturedWindowRepresentation *)this, a2);
  v5 = (unsigned int)SecondaryWindow;
  if ( SecondaryWindow < 0 )
    return 2147942487LL;
  v7 = this[2];
  v13 = 0LL;
  CWindowList::GetSyncedWindowDataByHwnd(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53), v7, &v13);
  if ( !*((_QWORD *)v13 + 55) )
    return 0LL;
  if ( !*((_QWORD *)a2 + 55) )
    return 0LL;
  _mm_lfence();
  v8 = *((_QWORD *)v13 + 55);
  v9 = this[6];
  v14 = *(_QWORD *)(*((_QWORD *)a2 + 55) + 64LL);
  v10 = CVisualProxy::SetOffset(
          *(CVisualProxy **)(*((_QWORD *)v9 + v5) + 8LL),
          (double)((int)v14 - *(_DWORD *)(v8 + 64)),
          (double)(int)(HIDWORD(v14) - HIDWORD(*(_QWORD *)(v8 + 64))),
          0.0);
  v11 = v10;
  if ( v10 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xAF,
    (__int64)"clientcore\\windows\\dwm\\udwm\\capturedwindowrepresentation.cpp",
    (const char *)(unsigned int)v10);
  return v11;
}
