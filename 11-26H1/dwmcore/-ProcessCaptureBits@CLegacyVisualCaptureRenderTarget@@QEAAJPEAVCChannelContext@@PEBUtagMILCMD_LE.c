/*
 * XREFs of ?ProcessCaptureBits@CLegacyVisualCaptureRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_LEGACYVISUALCAPTURERENDERTARGET_CAPTUREBITS@@@Z @ 0x18014BA2C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x1800AEB40 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ?GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ @ 0x1800D3570 (-GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ.c)
 *     ??0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@MAEBUWICRect@@W4DXGI_FORMAT@@_K@Z @ 0x180149E78 (--0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@MA.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18014CFD0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??2CaptureBitsResponse@@SAPEAX_K@Z @ 0x1801E1FE0 (--2CaptureBitsResponse@@SAPEAX_K@Z.c)
 *     ?AddCaptureBitsResponse@CLegacySurfaceManager@@QEAAJPEAVCaptureBitsResponse@@@Z @ 0x1801E3730 (-AddCaptureBitsResponse@CLegacySurfaceManager@@QEAAJPEAVCaptureBitsResponse@@@Z.c)
 *     ?Create@CVisualTree@@KAXPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x180261514 (-Create@CVisualTree@@KAXPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyVisualCaptureRenderTarget::ProcessCaptureBits(
        CLegacyVisualCaptureRenderTarget *this,
        struct CChannelContext *a2,
        const struct tagMILCMD_LEGACYVISUALCAPTURERENDERTARGET_CAPTUREBITS *a3)
{
  struct CVisualTree *v4; // rdi
  __int64 v5; // rdx
  unsigned int v7; // ebx
  CVisual *Resource; // rax
  struct CVisualTree *VisualTreeNoRef; // rax
  struct CComposition **v11; // r10
  unsigned __int64 v12; // rcx
  CaptureBitsResponse *v13; // rax
  struct CaptureBitsResponse *v14; // rsi
  int v15; // eax
  unsigned int v16; // [rsp+20h] [rbp-38h]
  struct WICRect v17; // [rsp+40h] [rbp-18h] BYREF
  struct CVisualTree *v18; // [rsp+60h] [rbp+8h] BYREF

  v18 = this;
  v4 = 0LL;
  v5 = *((unsigned int *)a3 + 2);
  if ( !(_DWORD)v5 || COERCE_FLOAT(*((_DWORD *)a3 + 3) & _xmm) < 0.0000011920929 )
  {
    v16 = 28;
LABEL_3:
    v7 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, v16, 0LL);
    goto LABEL_4;
  }
  Resource = (CVisual *)CResourceTable::GetResource(*((_QWORD *)a2 + 6), v5, 156LL);
  if ( !Resource )
  {
    v16 = 34;
    goto LABEL_3;
  }
  VisualTreeNoRef = CVisual::GetVisualTreeNoRef(Resource);
  v18 = VisualTreeNoRef;
  v4 = VisualTreeNoRef;
  if ( VisualTreeNoRef )
  {
    (*(void (__fastcall **)(struct CVisualTree *))(*(_QWORD *)VisualTreeNoRef + 8LL))(VisualTreeNoRef);
  }
  else
  {
    CVisualTree::Create(v11[3], (struct CVisual *)v11, &v18);
    v4 = v18;
  }
  v17 = (struct WICRect)*((_OWORD *)a3 + 1);
  v13 = (CaptureBitsResponse *)CaptureBitsResponse::operator new(v12);
  if ( v13
    && (v14 = CaptureBitsResponse::CaptureBitsResponse(
                v13,
                *((struct CGlobalSurfaceManager **)g_pComposition + 78),
                a2,
                v4,
                1.0 / *((float *)a3 + 3),
                &v17,
                (enum DXGI_FORMAT)*((_DWORD *)a3 + 10),
                *((_QWORD *)a3 + 4))) != 0LL )
  {
    v15 = CLegacySurfaceManager::AddCaptureBitsResponse(
            (CLegacySurfaceManager *)(*((_QWORD *)g_pComposition + 78) + 152LL),
            v14);
    v7 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x38u, 0LL);
    (*(void (__fastcall **)(struct CaptureBitsResponse *))(*(_QWORD *)v14 + 40LL))(v14);
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x32u, 0LL);
  }
LABEL_4:
  ReleaseInterfaceNoNULL<ID2D1Ink>((__int64)v4);
  return v7;
}
