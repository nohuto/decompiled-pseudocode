/*
 * XREFs of ?_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowState@@PEAVCVisual@@2@Z @ 0x180051D8C
 * Callers:
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x180057C74 (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?_SetupOwneePreview@CLivePreview@@AEAAJPEBVCWindowData@@PEAUHWND__@@W4Enum@LivePreviewWindowState@@@Z @ 0x18008DC00 (-_SetupOwneePreview@CLivePreview@@AEAAJPEBVCWindowData@@PEAUHWND__@@W4Enum@LivePreviewWindowStat.c)
 * Callees:
 *     ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x1800078BC (-InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x18004CCDC (-InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z @ 0x180051F68 (-GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@ULivePreviewWindow@@$0A@@@QEAAJPEFBULivePreviewWindow@@I@Z @ 0x180052134 (-AddMultipleAndSet@-$DynArray@ULivePreviewWindow@@$0A@@@QEAAJPEFBULivePreviewWindow@@I@Z.c)
 *     ?_SetupOwneePreview@CLivePreview@@AEAAJPEBVCWindowData@@PEAUHWND__@@W4Enum@LivePreviewWindowState@@@Z @ 0x18008DC00 (-_SetupOwneePreview@CLivePreview@@AEAAJPEBVCWindowData@@PEAUHWND__@@W4Enum@LivePreviewWindowStat.c)
 *     ?_FindLivePreviewWindow@CLivePreview@@AEAAPEAVCTopLevelWindow@@PEAUHWND__@@@Z @ 0x1800BA21C (-_FindLivePreviewWindow@CLivePreview@@AEAAPEAVCTopLevelWindow@@PEAUHWND__@@@Z.c)
 */

__int64 __fastcall CLivePreview::_SetupWindowPreview(
        CLivePreview *a1,
        __int64 a2,
        __int64 a3,
        char a4,
        unsigned int a5,
        CMILRefCountBase ***a6,
        char a7)
{
  int v7; // ebx
  int LivePreviewVisual; // eax
  CMILRefCountBase ***v12; // rdi
  CBaseObject *v13; // r12
  unsigned int v14; // eax
  CContainerVisual *v16; // rcx
  int inserted; // eax
  CBaseObject *LivePreviewWindow; // rax
  int v19; // eax
  int v20; // eax
  CBaseObject *v21; // [rsp+30h] [rbp-40h] BYREF
  CBaseObject *v22; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v23[5]; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v24; // [rsp+68h] [rbp-8h]
  int v25; // [rsp+6Ch] [rbp-4h]

  v7 = 0;
  v21 = 0LL;
  v22 = 0LL;
  if ( a4 )
  {
    LivePreviewWindow = CLivePreview::_FindLivePreviewWindow(a1, *(HWND *)(a2 + 40));
    v21 = LivePreviewWindow;
    v12 = (CMILRefCountBase ***)LivePreviewWindow;
    if ( LivePreviewWindow )
    {
      CMILRefCountBase::AddRef(LivePreviewWindow);
      goto LABEL_7;
    }
  }
  LivePreviewVisual = CTopLevelWindow::GetLivePreviewVisual((struct CWindowData *)a2, &v21, &v22);
  v12 = (CMILRefCountBase ***)v21;
  v7 = LivePreviewVisual;
  v13 = v22;
  if ( LivePreviewVisual < 0 )
  {
    v14 = 402;
LABEL_5:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, v14, 0LL);
    if ( v13 )
      CBaseObject::Release(v13);
    goto LABEL_7;
  }
  v23[3] = *(_QWORD *)(a2 + 40);
  v25 = 0;
  v23[0] = v21;
  v23[1] = a2;
  v23[2] = v22;
  v23[4] = a3;
  v24 = a5;
  v7 = DynArray<LivePreviewWindow,0>::AddMultipleAndSet((char *)a1 + 296, v23);
  if ( v7 < 0 )
  {
    v14 = 414;
    goto LABEL_5;
  }
  if ( *(_DWORD *)(a2 + 128) == 1 || *(_QWORD *)(a2 + 856) )
    v16 = a1;
  else
    v16 = (CContainerVisual *)*((_QWORD *)a1 + 52);
  if ( a7 )
  {
    inserted = CContainerVisual::InsertChildBefore(v16, v12, a6);
    v7 = inserted;
    if ( inserted < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x1B3u, 0LL);
      goto LABEL_7;
    }
  }
  else
  {
    v19 = CContainerVisual::InsertChildAfter(v16, (struct CVisual *)v12, (struct CVisual *)a6);
    v7 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x1B7u, 0LL);
      goto LABEL_7;
    }
  }
  v20 = CLivePreview::_SetupOwneePreview(a1, a2, a3, a5);
  v7 = v20;
  if ( v20 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x1BAu, 0LL);
LABEL_7:
  if ( v12 )
    CBaseObject::Release((CBaseObject *)v12);
  return (unsigned int)v7;
}
