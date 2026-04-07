/*
 * XREFs of ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x1800747B8
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJXZ @ 0x18002C448 (-Activate@CLivePreview@@QEAAJXZ.c)
 *     ??1CLivePreview@@MEAA@XZ @ 0x1800B902C (--1CLivePreview@@MEAA@XZ.c)
 *     ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x1800B9460 (-ValidateVisual@CLivePreview@@UEAAJXZ.c)
 * Callees:
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x180005A98 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180008110 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?RemoveAllChildren@CContainerVisual@@QEAAXXZ @ 0x18001B49C (-RemoveAllChildren@CContainerVisual@@QEAAXXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x180025A2C (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?RenderRecursive@CContainerVisual@@UEAAXXZ @ 0x1800853F0 (-RenderRecursive@CContainerVisual@@UEAAXXZ.c)
 */

__int64 __fastcall CLivePreview::_ClearAnimationOpaqueVisuals(CLivePreview *this)
{
  char *v1; // rdi
  unsigned int v2; // ebx
  int v4; // eax
  __int64 v5; // r14
  CContainerVisual *v6; // rcx
  __int64 v8; // rsi
  CContainerVisual **v9; // rbx
  int v10; // eax
  CBaseObject *v11; // rcx
  struct CVisual *v12; // rdx
  CContainerVisual *v13; // rcx
  int v14; // eax

  v1 = (char *)this + 240;
  v2 = 0;
  v4 = *((_DWORD *)this + 66) - 1;
  v5 = v4;
  if ( v4 >= 0 )
  {
    v8 = 48LL * v4;
    do
    {
      v9 = *(CContainerVisual ***)(v8 + *(_QWORD *)v1);
      CContainerVisual::RenderRecursive((CContainerVisual *)v9);
      CTopLevelWindow::StopLivePreviewAnimation((CTopLevelWindow *)v9);
      v10 = CContainerVisual::RemoveChild(v9[3], (struct CVisual *)v9);
      v2 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x7Fu, 0LL);
      v11 = *(CBaseObject **)(*(_QWORD *)v1 + v8 + 16);
      if ( v11 )
      {
        CBaseObject::Release(v11);
        *(_QWORD *)(*(_QWORD *)v1 + v8 + 16) = 0LL;
      }
      v8 -= 48LL;
      --v5;
    }
    while ( v5 >= 0 );
  }
  *((_DWORD *)v1 + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)v1, 0x30u);
  v6 = (CContainerVisual *)*((_QWORD *)this + 42);
  if ( v6 )
  {
    CContainerVisual::RemoveAllChildren(v6);
    v12 = (struct CVisual *)*((_QWORD *)this + 42);
    v13 = (CContainerVisual *)*((_QWORD *)v12 + 3);
    if ( v13 )
    {
      v14 = CContainerVisual::RemoveChild(v13, v12);
      v2 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x8Bu, 0LL);
    }
    *((_DWORD *)this + 80) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 296, 0x10u);
  }
  return v2;
}
