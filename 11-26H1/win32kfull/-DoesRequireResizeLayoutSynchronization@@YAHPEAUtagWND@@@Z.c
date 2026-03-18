/*
 * XREFs of ?DoesRequireResizeLayoutSynchronization@@YAHPEAUtagWND@@@Z @ 0x140257B44
 * Callers:
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140250868 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 */

__int64 __fastcall DoesRequireResizeLayoutSynchronization(struct tagWND *a1)
{
  unsigned int v1; // r9d
  __int64 v2; // r10
  __int64 i; // rcx

  if ( IsTopLevelWindow((__int64)a1) && *(char *)(*(_QWORD *)(v2 + 40) + 25LL) < (char)v1 )
  {
    for ( i = *(_QWORD *)(v2 + 112); i; i = *(_QWORD *)(i + 88) )
    {
      if ( *(char *)(*(_QWORD *)(i + 40) + 25LL) < (char)v1 )
        return 1;
    }
  }
  return v1;
}
