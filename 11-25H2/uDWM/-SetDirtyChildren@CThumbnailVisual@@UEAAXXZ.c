/*
 * XREFs of ?SetDirtyChildren@CThumbnailVisual@@UEAAXXZ @ 0x1800830A0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOfDirtyDCompThumbnail@CTopLevelWindow@@QEAAXXZ @ 0x1800133D8 (-NotifyOfDirtyDCompThumbnail@CTopLevelWindow@@QEAAXXZ.c)
 */

void __fastcall CThumbnailVisual::SetDirtyChildren(CThumbnailVisual *this)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  CTopLevelWindow *v4; // rcx

  v1 = *((_QWORD *)this + 41);
  if ( v1 )
  {
    if ( *(_BYTE *)(v1 + 34) )
    {
      v3 = *(_QWORD *)(v1 + 16);
      if ( v3 )
      {
        v4 = *(CTopLevelWindow **)(v3 + 440);
        if ( v4 )
          CTopLevelWindow::NotifyOfDirtyDCompThumbnail(v4);
      }
    }
  }
  *((_DWORD *)this + 8) |= 1u;
}
