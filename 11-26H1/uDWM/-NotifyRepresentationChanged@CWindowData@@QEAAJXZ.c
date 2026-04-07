/*
 * XREFs of ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x1800181AC
 * Callers:
 *     ?OnVisibilityUpdated@CWindowData@@QEAAJXZ @ 0x1800180D0 (-OnVisibilityUpdated@CWindowData@@QEAAJXZ.c)
 *     ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x180019DF0 (-SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18001A824 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x18003416C (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180035AA0 (-FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180035BE0 (-GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003BC30 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ChildContentChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180062C70 (-ChildContentChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18007BBD0 (-ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180081070 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z @ 0x18008ADF4 (-OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z.c)
 *     ?OnThumbnailRemoved@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z @ 0x18008B81C (-OnThumbnailRemoved@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z.c)
 *     ?ContentProtectionChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800DFF90 (-ContentProtectionChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18001C390 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180028E98 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     memcpy_0 @ 0x18008EF24 (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowData::NotifyRepresentationChanged(CWindowData *this, __int64 a2, __int64 a3, int a4)
{
  unsigned int v4; // esi
  int v5; // edi
  int v7; // eax
  CSecondaryWindowRepresentation **v8; // rbx
  unsigned int v9; // r14d
  unsigned int v10; // r14d
  __int64 i; // rdi
  int v12; // eax
  void *lpMem[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v14; // [rsp+40h] [rbp-10h]
  unsigned int v15; // [rsp+48h] [rbp-8h]
  void *Src; // [rsp+70h] [rbp+20h] BYREF

  v4 = 0;
  v5 = *((_DWORD *)this + 130);
  if ( v5 )
  {
    *(_OWORD *)lpMem = 0LL;
    v14 = 0LL;
    v15 = 0;
    Src = (void *)*((_QWORD *)this + 62);
    v7 = DynArrayImpl<0>::Grow((unsigned int)lpMem, 8, v5, a4, (__int64)&Src);
    v8 = (CSecondaryWindowRepresentation **)lpMem[0];
    if ( v7 >= 0 )
    {
      v9 = v15;
      memcpy_0((char *)lpMem[0] + 8 * v15, Src, (unsigned int)(8 * v5));
      v10 = v5 + v9;
      v15 = v10;
      for ( i = 0LL; (unsigned int)i < v10; i = (unsigned int)(i + 1) )
      {
        v12 = CSecondaryWindowRepresentation::OnRepresentationUpdated(v8[i]);
        v4 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x541u, 0LL);
          break;
        }
      }
    }
    if ( v8 != lpMem[1] )
      DefaultHeap::Free(v8);
  }
  return v4;
}
