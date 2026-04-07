/*
 * XREFs of ?InitializeVisualTreeClone@CContainerVisual@@QEAAJPEAV1@W4CloneOptions@@@Z @ 0x180016C4C
 * Callers:
 *     ?InitializeVisualTreeClone@CWindowBorder@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18000FF48 (-InitializeVisualTreeClone@CWindowBorder@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?CloneVisualTree@CCanvasVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800214C0 (-CloneVisualTree@CCanvasVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?InitializeVisualTreeClone@CWindowBackgroundTreatmentVisual@@QEAAJPEAV1@W4CloneOptions@@@Z @ 0x180023554 (-InitializeVisualTreeClone@CWindowBackgroundTreatmentVisual@@QEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z @ 0x180023778 (-InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?InitializeVisualTreeClone@CSystemBackdropVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180027914 (-InitializeVisualTreeClone@CSystemBackdropVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?InitializeVisualTreeClone@CDWriteText@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180038458 (-InitializeVisualTreeClone@CDWriteText@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?InitializeVisualTreeClone@CRectangleVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800500A0 (-InitializeVisualTreeClone@CRectangleVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?InitializeVisualTreeClone@CButton@@QEAAJPEAV1@W4CloneOptions@@@Z @ 0x18005D3D4 (-InitializeVisualTreeClone@CButton@@QEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?CloneVisualTree@CContainerVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800737E0 (-CloneVisualTree@CContainerVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?InitializeVisualTreeClone@CPrimitiveGroupVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180083114 (-InitializeVisualTreeClone@CPrimitiveGroupVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?CloneVisualTree@CSpriteVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800BFB40 (-CloneVisualTree@CSpriteVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180013D20 (-InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?GetIterator@VisualCollection@@QEAA?AVVisualCollectionIterator@@XZ @ 0x180016430 (-GetIterator@VisualCollection@@QEAA-AVVisualCollectionIterator@@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x18001BD7C (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CContainerVisual::InitializeVisualTreeClone(__int64 a1, CContainerVisual *a2, unsigned int a3)
{
  __int64 v6; // r13
  char v7; // di
  char v8; // bp
  unsigned int v9; // esi
  _BYTE *v10; // rcx
  int v11; // eax
  bool v12; // r8
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // eax
  __int64 v17; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v18; // [rsp+3Ch] [rbp-3Ch]
  char v19; // [rsp+40h] [rbp-38h]
  char v20; // [rsp+41h] [rbp-37h]
  CBaseObject *v21; // [rsp+80h] [rbp+8h] BYREF

  v21 = 0LL;
  VisualCollection::GetIterator(a1 + 136, (__int64)&v17);
  v6 = v17;
  v7 = v20;
  v8 = v19;
  v9 = v18;
  while ( 1 )
  {
    if ( v8 )
    {
      if ( !v7 )
        ++v9;
    }
    else
    {
      v8 = 1;
      v9 = 0;
    }
    if ( v9 >= *(_DWORD *)(v6 + 32) )
      v7 = 1;
    if ( v7 )
      break;
    v10 = *(_BYTE **)(*(_QWORD *)(v6 + 8) + 8LL * v9);
    if ( (v10[36] & 8) == 0 )
    {
      v11 = (*(__int64 (__fastcall **)(_BYTE *, CBaseObject **, _QWORD))(*(_QWORD *)v10 + 120LL))(v10, &v21, a3);
      v13 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xD0u, 0LL);
        goto LABEL_14;
      }
      v14 = CContainerVisual::AddChild(a2, v21, v12);
      v13 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xD2u, 0LL);
        goto LABEL_14;
      }
      if ( v21 )
      {
        CBaseObject::Release(v21);
        v21 = 0LL;
      }
    }
  }
  v15 = CVisual::InitializeVisualTreeClone(a1, a2);
  v13 = v15;
  if ( v15 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xD9u, 0LL);
LABEL_14:
  if ( v21 )
    CBaseObject::Release(v21);
  return v13;
}
