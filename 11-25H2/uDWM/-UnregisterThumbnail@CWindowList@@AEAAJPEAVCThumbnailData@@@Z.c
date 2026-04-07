/*
 * XREFs of ?UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z @ 0x180060E14
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001A2DC (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?UnregisterThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_UNREGISTERTHUMBNAIL@@@Z @ 0x1800601EC (-UnregisterThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_UNREGISTERTHUMBNAIL@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001C7A4 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCThumbnailData@@$0A@@@QEAAHAEBQEAVCThumbnailData@@@Z @ 0x180060F88 (-Remove@-$DynArray@PEAVCThumbnailData@@$0A@@@QEAAHAEBQEAVCThumbnailData@@@Z.c)
 *     ?SetThumbnailData@CThumbnailVisual@@QEAAXPEAVCThumbnailData@@@Z @ 0x180060FF8 (-SetThumbnailData@CThumbnailVisual@@QEAAXPEAVCThumbnailData@@@Z.c)
 *     ?OnThumbnailRemoved@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z @ 0x180098678 (-OnThumbnailRemoved@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowList::UnregisterThumbnail(CWindowList *this, struct CThumbnailData *a2)
{
  unsigned int v2; // edi
  CContainerVisual *v5; // rcx
  struct CVisualProxy **v6; // rdx
  struct CVisualProxy **v7; // rdx
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx
  __int64 v10; // rcx
  CThumbnailVisual *v11; // rcx
  CBaseObject *v12; // rcx
  CBaseObject *v14; // rcx
  CTopLevelWindow *v15; // rcx
  struct CVisual *v16; // rdx
  int v17; // eax
  struct CThumbnailData *v18; // [rsp+48h] [rbp+10h] BYREF

  v18 = a2;
  v2 = 0;
  if ( *((_BYTE *)a2 + 34) )
  {
    v5 = (CContainerVisual *)*((_QWORD *)a2 + 13);
    if ( v5 )
    {
      v6 = (struct CVisualProxy **)*((_QWORD *)a2 + 14);
      if ( v6 )
      {
        CContainerVisual::RemoveChild(v5, v6);
        v14 = (CBaseObject *)*((_QWORD *)a2 + 14);
        if ( v14 )
        {
          CBaseObject::Release(v14);
          *((_QWORD *)a2 + 14) = 0LL;
        }
      }
      v7 = (struct CVisualProxy **)*((_QWORD *)a2 + 11);
      if ( v7 )
        CContainerVisual::RemoveChild(*((CContainerVisual **)a2 + 13), v7);
      v8 = (CBaseObject *)*((_QWORD *)a2 + 12);
      if ( v8 )
      {
        CBaseObject::Release(v8);
        *((_QWORD *)a2 + 12) = 0LL;
      }
      v9 = (CBaseObject *)*((_QWORD *)a2 + 13);
      if ( v9 )
      {
        CBaseObject::Release(v9);
        *((_QWORD *)a2 + 13) = 0LL;
      }
    }
  }
  else
  {
    v15 = *(CTopLevelWindow **)(*((_QWORD *)a2 + 2) + 440LL);
    if ( v15 )
    {
      v16 = (struct CVisual *)*((_QWORD *)a2 + 11);
      if ( v16 )
      {
        v17 = CTopLevelWindow::OnThumbnailRemoved(v15, v16);
        v2 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x1965u, 0LL);
          return v2;
        }
      }
    }
  }
  DynArray<CThumbnailData *,0>::Remove(*((_QWORD *)a2 + 2) + 536LL, &v18);
  v10 = *((_QWORD *)a2 + 3);
  if ( v10 )
    DynArray<CThumbnailData *,0>::Remove(v10 + 568, &v18);
  v11 = (CThumbnailVisual *)*((_QWORD *)a2 + 11);
  if ( v11 )
    CThumbnailVisual::SetThumbnailData(v11, 0LL);
  v12 = (CBaseObject *)*((_QWORD *)a2 + 11);
  if ( v12 )
  {
    CBaseObject::Release(v12);
    *((_QWORD *)a2 + 11) = 0LL;
  }
  (**(void (__fastcall ***)(struct CThumbnailData *, __int64))a2)(a2, 1LL);
  DynArray<CThumbnailData *,0>::Remove((char *)this + 384, &v18);
  return v2;
}
