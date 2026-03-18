/*
 * XREFs of ?Partition_DesktopCaptureBits@CGlobalComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_DESKTOPCAPTUREBITS@@@Z @ 0x180149A30
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x180093B60 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?GetDesktopTree@CGlobalComposition@@UEAAJU_LUID@@PEAPEAVCDesktopTree@@@Z @ 0x180149B80 (-GetDesktopTree@CGlobalComposition@@UEAAJU_LUID@@PEAPEAVCDesktopTree@@@Z.c)
 *     ??2VisualCaptureBitsResponse@@SAPEAX_K@Z @ 0x180149CC0 (--2VisualCaptureBitsResponse@@SAPEAX_K@Z.c)
 *     ??0VisualCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@AEBUWICRect@@W4DXGI_FORMAT@@_KPEAX6@Z @ 0x180149DE0 (--0VisualCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTr.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGlobalComposition::Partition_DesktopCaptureBits(
        struct CGlobalSurfaceManager **this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_PARTITION_DESKTOPCAPTUREBITS *a4)
{
  unsigned __int64 v7; // rcx
  int DesktopTree; // r9d
  VisualCaptureBitsResponse *v9; // rax
  VisualCaptureBitsResponse *v10; // rax
  unsigned int v12; // eax
  struct WICRect v13; // [rsp+50h] [rbp-18h] BYREF
  struct CVisualTree *v14; // [rsp+80h] [rbp+18h] BYREF

  v14 = 0LL;
  DesktopTree = CGlobalComposition::GetDesktopTree((CGlobalComposition *)this, *(struct _LUID *)((char *)a4 + 4), &v14);
  if ( DesktopTree < 0 )
  {
    v12 = 236;
  }
  else
  {
    v13 = *(struct WICRect *)((char *)a4 + 12);
    v9 = (VisualCaptureBitsResponse *)VisualCaptureBitsResponse::operator new(v7);
    if ( v9 )
    {
      v10 = VisualCaptureBitsResponse::VisualCaptureBitsResponse(
              v9,
              this[78],
              a2,
              v14,
              &v13,
              (enum DXGI_FORMAT)*((_DWORD *)a4 + 7),
              *((_QWORD *)a4 + 4),
              *((void **)a4 + 5),
              *((void **)a4 + 6));
      if ( v10 )
      {
        (*(void (__fastcall **)(VisualCaptureBitsResponse *))(*(_QWORD *)v10 + 40LL))(v10);
        goto LABEL_5;
      }
    }
    v12 = 253;
    DesktopTree = -2147024882;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DesktopTree, v12, 0LL);
  SetEvent(*((HANDLE *)a4 + 5));
  CloseHandle(*((HANDLE *)a4 + 5));
  CloseHandle(*((HANDLE *)a4 + 6));
LABEL_5:
  if ( v14 )
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v14);
  return 0LL;
}
