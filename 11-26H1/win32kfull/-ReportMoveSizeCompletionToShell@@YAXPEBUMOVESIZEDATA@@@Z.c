/*
 * XREFs of ?ReportMoveSizeCompletionToShell@@YAXPEBUMOVESIZEDATA@@@Z @ 0x1402C4D20
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14005C548 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 * Callees:
 *     ?IsShellParticipatesInSizing@@YA_NPEBUtagWND@@@Z @ 0x1400110B0 (-IsShellParticipatesInSizing@@YA_NPEBUtagWND@@@Z.c)
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x1400326CC (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x1401D65B4 (-ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z.c)
 *     ?DragSizeInfo@NotifyShell@@YAXPEBUtagWND@@W4DRAG_SIZE_STAGE@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1401D6848 (-DragSizeInfo@NotifyShell@@YAXPEBUtagWND@@W4DRAG_SIZE_STAGE@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     ?WindowSizingCompleted@NotifyShell@@YAXPEAUtagWND@@KW4ARRANGED_WINDOW_SIZE_RESULT@@@Z @ 0x1402DC310 (-WindowSizingCompleted@NotifyShell@@YAXPEAUtagWND@@KW4ARRANGED_WINDOW_SIZE_RESULT@@@Z.c)
 */

void __fastcall ReportMoveSizeCompletionToShell(const struct MOVESIZEDATA *a1)
{
  int v1; // eax
  char v3; // bp
  unsigned __int8 v4; // si
  unsigned int v5; // edx
  __int64 v6; // r14
  __int64 v7; // rdx

  v1 = *((_DWORD *)a1 + 50);
  if ( (v1 & 0x800000) == 0 )
  {
    v3 = 1;
LABEL_3:
    v4 = 0;
    goto LABEL_4;
  }
  v3 = 0;
  if ( (v1 & 0x8000) != 0 )
    goto LABEL_3;
  v4 = 1;
LABEL_4:
  v6 = *(_QWORD *)(*((_QWORD *)PtiCurrent((__int64)a1) + 61) + 328LL);
  if ( v6 )
  {
    if ( IsShellParticipatesInSizing(*((const struct tagWND **)a1 + 2), v5) )
    {
      if ( (*((_DWORD *)a1 + 95) & 2) != 0 )
        NotifyShell::WindowSizingCompleted(*((_QWORD *)a1 + 2), *((unsigned int *)a1 + 94), v4);
    }
    else if ( !v3 && !v4 )
    {
      if ( IsArranged(*((const struct tagWND **)a1 + 2)) )
      {
        NotifyShell::ArrangementCompleted(*((__int64 **)a1 + 2), *((unsigned int *)a1 + 94), 1);
        LastWokenThread::Set(*(_QWORD *)(v6 + 16), 1LL, 0LL);
      }
      else if ( (*((_DWORD *)a1 + 50) & 0x20000000) != 0 )
      {
        NotifyShell::ArrangementCompleted(*((__int64 **)a1 + 2), *((unsigned int *)a1 + 94), 2);
      }
    }
    v7 = 3LL;
    if ( *((_DWORD *)a1 + 44) != 9 )
      v7 = 1LL;
    NotifyShell::DragSizeInfo(*((_QWORD **)a1 + 2), v7, 0);
  }
}
