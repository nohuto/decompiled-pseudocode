/*
 * XREFs of ?OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x1800569BC
 * Callers:
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x1800548B4 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?TextChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800579B0 (-TextChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RenderRecursive@CContainerVisual@@UEAAJXZ @ 0x1800161B0 (-RenderRecursive@CContainerVisual@@UEAAJXZ.c)
 *     ?OnTitleUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180019CBC (-OnTitleUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?SetTitle@CWindowData@@QEAAJPEAGH@Z @ 0x180057B00 (-SetTitle@CWindowData@@QEAAJPEAGH@Z.c)
 */

__int64 __fastcall CWindowIconic::OnTitleUpdated(CWindowIconic *this, char a2)
{
  __int64 v2; // rax
  unsigned __int16 *v5; // rdx
  _WORD *v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v9; // r9d
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned int v14; // [rsp+20h] [rbp-18h]

  v2 = *((_QWORD *)this + 9);
  v5 = *(unsigned __int16 **)(v2 + 16);
  if ( !v5 )
  {
    v9 = -2147024809;
    v8 = -2147024809;
LABEL_14:
    v14 = 637;
    goto LABEL_15;
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
    goto LABEL_14;
  v10 = CWindowData::SetTitle(*((CWindowData **)this + 10), v5, v7 != 0 ? 0x7FFFFFFF - v7 : 0);
  v8 = v10;
  if ( v10 < 0 )
  {
    v14 = 639;
    goto LABEL_12;
  }
  CTopLevelWindow::OnTitleUpdated(*((CTopLevelWindow **)this + 11));
  if ( a2 )
  {
    v10 = CContainerVisual::RenderRecursive(*((CContainerVisual **)this + 11), v11, v12);
    v8 = v10;
    if ( v10 < 0 )
    {
      v14 = 645;
LABEL_12:
      v9 = v10;
LABEL_15:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, v14, 0LL);
    }
  }
  return v8;
}
