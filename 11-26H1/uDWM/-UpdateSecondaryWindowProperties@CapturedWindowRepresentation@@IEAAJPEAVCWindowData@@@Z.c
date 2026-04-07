/*
 * XREFs of ?UpdateSecondaryWindowProperties@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z @ 0x18009C614
 * Callers:
 *     ?ReevaluateSecondaryWindow@CapturedWindowRepresentation@@QEAAJPEAVCWindowData@@@Z @ 0x18003A504 (-ReevaluateSecondaryWindow@CapturedWindowRepresentation@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?AddSecondaryWindow@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z @ 0x18009C02C (-AddSecondaryWindow@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?SetOffset@CVisualProxy@@QEAAJNNN@Z @ 0x18000A7A0 (-SetOffset@CVisualProxy@@QEAAJNNN@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180021870 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?FindSecondaryWindow@CapturedWindowRepresentation@@IEAAHPEAVCWindowData@@@Z @ 0x18003AC28 (-FindSecondaryWindow@CapturedWindowRepresentation@@IEAAHPEAVCWindowData@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CapturedWindowRepresentation::UpdateSecondaryWindowProperties(HWND *this, struct CWindowData *a2)
{
  int SecondaryWindow; // eax
  __int64 v5; // rsi
  HWND v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CWindowData *v13; // [rsp+40h] [rbp+18h] BYREF

  SecondaryWindow = CapturedWindowRepresentation::FindSecondaryWindow((CapturedWindowRepresentation *)this, a2);
  v5 = (unsigned int)SecondaryWindow;
  if ( SecondaryWindow < 0 )
    return 2147942487LL;
  v7 = this[2];
  v13 = 0LL;
  CWindowList::GetSyncedWindowDataByHwnd(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53), v7, &v13);
  v8 = *((_QWORD *)v13 + 55);
  if ( !v8 )
    return 0LL;
  v9 = *((_QWORD *)a2 + 55);
  if ( !v9 )
    return 0LL;
  _mm_lfence();
  v10 = CVisualProxy::SetOffset(
          *(CVisualProxy **)(*((_QWORD *)this[6] + v5) + 8LL),
          (double)(int)(*(_QWORD *)(v9 + 56) - *(_DWORD *)(v8 + 56)),
          (double)(int)(HIDWORD(*(_QWORD *)(v9 + 56)) - HIDWORD(*(_QWORD *)(v8 + 56))),
          0.0);
  v11 = v10;
  if ( v10 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xAF,
    (int)"clientcore\\windows\\dwm\\udwm\\capturedwindowrepresentation.cpp",
    (const char *)(unsigned int)v10);
  return v11;
}
