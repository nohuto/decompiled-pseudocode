/*
 * XREFs of ?InitializeVisualTreeClone@CContainerVisual@@QEAAJPEAV1@W4CloneOptions@@@Z @ 0x180015BB8
 * Callers:
 *     ?InitializeVisualTreeClone@CWindowBackgroundTreatmentVisual@@QEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800124F0 (-InitializeVisualTreeClone@CWindowBackgroundTreatmentVisual@@QEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180013D7C (-InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?InitializeVisualTreeClone@CRenderDataVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800156F8 (-InitializeVisualTreeClone@CRenderDataVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z @ 0x180020A4C (-InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?InitializeVisualTreeClone@CWindowBorder@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18006D448 (-InitializeVisualTreeClone@CWindowBorder@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?CloneVisualTree@CContainerVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800E1620 (-CloneVisualTree@CContainerVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180007D54 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetIterator@VisualCollection@@QEAA?AVVisualCollectionIterator@@XZ @ 0x180016330 (-GetIterator@VisualCollection@@QEAA-AVVisualCollectionIterator@@XZ.c)
 *     ?InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180016920 (-InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CContainerVisual::InitializeVisualTreeClone(__int64 a1, CContainerVisual *a2, __int64 a3)
{
  unsigned int v5; // r12d
  __int64 v6; // r13
  char v7; // di
  char v8; // bp
  unsigned int v9; // esi
  _BYTE *v10; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  int v14; // eax
  __int64 v16; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v17; // [rsp+3Ch] [rbp-3Ch]
  char v18; // [rsp+40h] [rbp-38h]
  char v19; // [rsp+41h] [rbp-37h]
  CBaseObject *v20; // [rsp+80h] [rbp+8h] BYREF

  v20 = 0LL;
  v5 = a3;
  VisualCollection::GetIterator(a1 + 144, &v16, a3);
  v6 = v16;
  v7 = v19;
  v8 = v18;
  v9 = v17;
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
      v11 = (*(__int64 (__fastcall **)(_BYTE *, CBaseObject **, _QWORD))(*(_QWORD *)v10 + 136LL))(v10, &v20, v5);
      v12 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0xEAu, 0LL);
        goto LABEL_14;
      }
      v13 = CContainerVisual::AddChild(a2, v20);
      v12 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0xECu, 0LL);
        goto LABEL_14;
      }
      if ( v20 )
      {
        CBaseObject::Release(v20);
        v20 = 0LL;
      }
    }
  }
  v14 = CVisual::InitializeVisualTreeClone(a1, a2);
  v12 = v14;
  if ( v14 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0xF3u, 0LL);
LABEL_14:
  if ( v20 )
    CBaseObject::Release(v20);
  return v12;
}
