/*
 * XREFs of ?Channel_VisualCaptureBits@CGlobalComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_VISUALCAPTUREBITS@@@Z @ 0x1801E2A9C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x1800AEB40 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ?GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ @ 0x1800D3570 (-GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ.c)
 *     ??2VisualCaptureBitsResponse@@SAPEAX_K@Z @ 0x180149CC0 (--2VisualCaptureBitsResponse@@SAPEAX_K@Z.c)
 *     ??0VisualCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@AEBUWICRect@@W4DXGI_FORMAT@@_KPEAX6@Z @ 0x180149DE0 (--0VisualCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTr.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18014CFD0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Create@CVisualTree@@KAXPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x180261514 (-Create@CVisualTree@@KAXPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGlobalComposition::Channel_VisualCaptureBits(
        struct CGlobalSurfaceManager **this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_CHANNEL_VISUALCAPTUREBITS *a4)
{
  unsigned int v6; // edx
  CVisual *Resource; // rax
  struct CVisualTree *VisualTreeNoRef; // rax
  struct CComposition **v10; // r10
  struct CVisualTree *v11; // rbx
  VisualCaptureBitsResponse *v12; // rax
  VisualCaptureBitsResponse *v13; // rax
  struct WICRect v15; // [rsp+50h] [rbp-18h] BYREF
  struct CVisualTree *v16; // [rsp+88h] [rbp+20h] BYREF

  v15.X = *((_DWORD *)a4 + 1);
  v6 = *((_DWORD *)a4 + 10);
  v15.Y = *((_DWORD *)a4 + 2);
  v15.Width = *((_DWORD *)a4 + 3);
  v15.Height = *((_DWORD *)a4 + 4);
  Resource = (CVisual *)CResourceTable::GetResource((__int64)a3, v6, 0x9Cu);
  VisualTreeNoRef = CVisual::GetVisualTreeNoRef(Resource);
  v16 = VisualTreeNoRef;
  v11 = VisualTreeNoRef;
  if ( VisualTreeNoRef )
  {
    (*(void (__fastcall **)(struct CVisualTree *))(*(_QWORD *)VisualTreeNoRef + 8LL))(VisualTreeNoRef);
  }
  else
  {
    CVisualTree::Create(v10[3], (struct CVisual *)v10, &v16);
    v11 = v16;
  }
  v12 = (VisualCaptureBitsResponse *)VisualCaptureBitsResponse::operator new();
  if ( v12
    && (v13 = VisualCaptureBitsResponse::VisualCaptureBitsResponse(
                v12,
                this[78],
                a2,
                v11,
                &v15,
                (enum DXGI_FORMAT)*((_DWORD *)a4 + 5),
                0LL,
                *((void **)a4 + 3),
                *((void **)a4 + 4))) != 0LL )
  {
    (*(void (__fastcall **)(VisualCaptureBitsResponse *))(*(_QWORD *)v13 + 40LL))(v13);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x9Eu, 0LL);
    SetEvent(*((HANDLE *)a4 + 3));
    CloseHandle(*((HANDLE *)a4 + 3));
    CloseHandle(*((HANDLE *)a4 + 4));
  }
  ReleaseInterfaceNoNULL<ID2D1Ink>((__int64)v11);
  return 0LL;
}
