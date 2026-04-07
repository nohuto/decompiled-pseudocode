/*
 * XREFs of ?OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180087CB0
 * Callers:
 *     ?TextChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180031630 (-TextChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180038650 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetTitle@CWindowData@@QEAAJPEAGH@Z @ 0x180031788 (-SetTitle@CWindowData@@QEAAJPEAGH@Z.c)
 *     ?OnTitleUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180031950 (-OnTitleUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?RenderRecursive@CContainerVisual@@UEAAXXZ @ 0x1800853F0 (-RenderRecursive@CContainerVisual@@UEAAXXZ.c)
 */

__int64 __fastcall CWindowIconic::OnTitleUpdated(CWindowIconic *this, char a2)
{
  __int64 v2; // rax
  char *v5; // rdx
  _WORD *v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v9; // r9d
  int v10; // eax

  v2 = *((_QWORD *)this + 9);
  v5 = *(char **)(v2 + 16);
  if ( !v5 )
  {
    v9 = -2147024809;
    v8 = -2147024809;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x2A3u, 0LL);
    return v8;
  }
  v6 = *(_WORD **)(v2 + 16);
  v7 = 0x7FFFFFFFLL;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v7;
  }
  while ( v7 );
  v8 = v7 == 0 ? 0x80070057 : 0;
  v9 = v8;
  if ( !v7 )
    goto LABEL_11;
  v10 = CWindowData::SetTitle(*((CWindowData **)this + 10), v5, v7 != 0 ? 0x7FFFFFFF - v7 : 0);
  v8 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x2A5u, 0LL);
  }
  else
  {
    CTopLevelWindow::OnTitleUpdated(*((CTopLevelWindow **)this + 11));
    if ( a2 )
      CContainerVisual::RenderRecursive(*((CContainerVisual **)this + 11));
  }
  return v8;
}
