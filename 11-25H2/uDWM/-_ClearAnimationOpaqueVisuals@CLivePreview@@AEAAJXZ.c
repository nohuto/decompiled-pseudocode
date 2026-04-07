/*
 * XREFs of ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x18003769C
 * Callers:
 *     ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x180036F70 (-ValidateVisual@CLivePreview@@UEAAJXZ.c)
 *     ?Activate@CLivePreview@@QEAAJXZ @ 0x180045718 (-Activate@CLivePreview@@QEAAJXZ.c)
 *     ??1CLivePreview@@MEAA@XZ @ 0x1800B9E54 (--1CLivePreview@@MEAA@XZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800079C0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x1800101D0 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?RemoveAllChildren@CContainerVisual@@QEAAXXZ @ 0x180014114 (-RemoveAllChildren@CContainerVisual@@QEAAXXZ.c)
 *     ?RenderRecursive@CContainerVisual@@UEAAJXZ @ 0x1800161B0 (-RenderRecursive@CContainerVisual@@UEAAJXZ.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001C7A4 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CLivePreview::_ClearAnimationOpaqueVisuals(CLivePreview *this, __int64 a2, __int64 a3)
{
  char *v3; // rdi
  unsigned int v4; // ebx
  int v6; // eax
  __int64 v7; // r14
  CContainerVisual *v8; // rcx
  __int64 v10; // rsi
  CContainerVisual **v11; // rbx
  int v12; // eax
  CBaseObject *v13; // rcx
  struct CVisualProxy **v14; // rdx
  CContainerVisual *v15; // rcx
  int v16; // eax

  v3 = (char *)this + 296;
  v4 = 0;
  v6 = *((_DWORD *)this + 80) - 1;
  v7 = v6;
  if ( v6 >= 0 )
  {
    v10 = 48LL * v6;
    do
    {
      v11 = *(CContainerVisual ***)(v10 + *(_QWORD *)v3);
      CContainerVisual::RenderRecursive((CContainerVisual *)v11, a2, a3);
      CTopLevelWindow::StopLivePreviewAnimation((CTopLevelWindow *)v11);
      v12 = CContainerVisual::RemoveChild(v11[3], v11);
      v4 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x89u, 0LL);
      v13 = *(CBaseObject **)(*(_QWORD *)v3 + v10 + 16);
      if ( v13 )
      {
        CBaseObject::Release(v13);
        *(_QWORD *)(*(_QWORD *)v3 + v10 + 16) = 0LL;
      }
      v10 -= 48LL;
      --v7;
    }
    while ( v7 >= 0 );
  }
  *((_DWORD *)v3 + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)v3, 0x30u);
  v8 = (CContainerVisual *)*((_QWORD *)this + 52);
  if ( v8 )
  {
    CContainerVisual::RemoveAllChildren(v8);
    v14 = (struct CVisualProxy **)*((_QWORD *)this + 52);
    v15 = v14[3];
    if ( v15 )
    {
      v16 = CContainerVisual::RemoveChild(v15, v14);
      v4 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x95u, 0LL);
    }
    *((_DWORD *)this + 96) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 360, 0x10u);
  }
  return v4;
}
