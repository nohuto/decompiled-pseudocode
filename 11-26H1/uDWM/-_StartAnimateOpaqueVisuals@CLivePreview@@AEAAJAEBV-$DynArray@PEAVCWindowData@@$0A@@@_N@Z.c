/*
 * XREFs of ?_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV?$DynArray@PEAVCWindowData@@$0A@@@_N@Z @ 0x1800322BC
 * Callers:
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x18003137C (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 * Callees:
 *     ?UpdateOpacity@CVisual@@UEAAJXZ @ 0x180005470 (-UpdateOpacity@CVisual@@UEAAJXZ.c)
 *     ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x180005914 (-StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z @ 0x180031E4C (-AddMultipleAndSet@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z.c)
 *     ?_ContainsWindow@CLivePreview@@AEAA_NAEBV?$DynArray@PEAVCWindowData@@$0A@@@PEAUHWND__@@@Z @ 0x18003249C (-_ContainsWindow@CLivePreview@@AEAA_NAEBV-$DynArray@PEAVCWindowData@@$0A@@@PEAUHWND__@@@Z.c)
 *     ?_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ @ 0x1800330C0 (-_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ.c)
 *     ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x180033AB8 (-GetMDIOwner@CWindowData@@QEAAPEAV1@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLivePreview::_StartAnimateOpaqueVisuals(CVisual **this, __int64 a2, char a3)
{
  CVisual **v5; // rbp
  unsigned int v6; // edi
  __int64 i; // rbx
  __int64 v8; // rsi
  CVisual ***v9; // r14
  int updated; // eax
  __int64 v11; // r8
  __int64 v12; // r10
  __int64 v13; // r8
  int v14; // eax
  int started; // eax
  void *lpMem[3]; // [rsp+30h] [rbp-48h] BYREF
  int v18; // [rsp+48h] [rbp-30h]
  struct CWindowData *MDIOwner; // [rsp+80h] [rbp+8h] BYREF

  v5 = this;
  v6 = 0;
  memset(lpMem, 0, sizeof(lpMem));
  v18 = 0;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 24); i = (unsigned int)(i + 1) )
  {
    MDIOwner = CWindowData::GetMDIOwner(*(CWindowData **)(*(_QWORD *)a2 + 8 * i));
    if ( MDIOwner )
      DynArray<CWindowData *,0>::AddMultipleAndSet((__int64)lpMem, &MDIOwner);
  }
  LODWORD(v8) = *((_DWORD *)v5 + 66);
  while ( 1 )
  {
    v8 = (unsigned int)(v8 - 1);
    if ( (int)v8 < 0 )
      break;
    v9 = (CVisual ***)(v5 + 30);
    if ( !a3 || (this = *v9, LODWORD((*v9)[6 * v8 + 5])) )
    {
      if ( (unsigned __int8)CLivePreview::_ContainsWindow(this, a2, (*v9)[6 * v8 + 3])
        || (unsigned __int8)CLivePreview::_ContainsWindow(this, lpMem, v11)
        || (unsigned __int8)CLivePreview::_ContainsWindow(this, a2, *(_QWORD *)(v12 + 48 * v8 + 32))
        || (unsigned __int8)CLivePreview::_ContainsWindow(this, lpMem, v13) )
      {
        if ( *(_DWORD *)(v12 + 48 * v8 + 40) == 1 )
        {
          started = CTopLevelWindow::StartLivePreviewAnimation(*(_QWORD *)(v12 + 48 * v8), 4);
          v6 = started;
          if ( started < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x1F4u, 0LL);
            goto LABEL_25;
          }
          LODWORD((*v9)[6 * v8 + 5]) = 0;
        }
      }
      else if ( !*(_DWORD *)(v12 + 48 * v8 + 40) )
      {
        v14 = CTopLevelWindow::StartLivePreviewAnimation(*(_QWORD *)(v12 + 48 * v8), 3);
        v6 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x1FDu, 0LL);
          goto LABEL_25;
        }
        LODWORD((*v9)[6 * v8 + 5]) = 1;
      }
    }
    else
    {
      updated = CVisual::UpdateOpacity(this[6 * v8]);
      v6 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x1E8u, 0LL);
        goto LABEL_25;
      }
    }
  }
  CLivePreview::_ShowHideImmersiveBackground((CLivePreview *)v5);
LABEL_25:
  if ( lpMem[0] != lpMem[1] )
    DefaultHeap::Free(lpMem[0]);
  return v6;
}
