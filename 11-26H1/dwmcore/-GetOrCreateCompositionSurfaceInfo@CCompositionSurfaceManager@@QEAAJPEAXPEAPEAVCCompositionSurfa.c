/*
 * XREFs of ?GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfaceInfo@@@Z @ 0x18012DA04
 * Callers:
 *     ?ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSURFACEBITMAP@@@Z @ 0x18012C310 (-ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSURF.c)
 *     ?CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x1801CA050 (-CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CCompositionSurfaceInfo@@SAJPEAXU_LUID@@PEAVCCompositionSurfaceManager@@PEAPEAV1@@Z @ 0x1800F6614 (-Create@CCompositionSurfaceInfo@@SAJPEAXU_LUID@@PEAVCCompositionSurfaceManager@@PEAPEAV1@@Z.c)
 *     ?TryGetVtrSurfaceManager@@YAPEAVIVtrSurfaceManager@@XZ @ 0x18012EBFC (-TryGetVtrSurfaceManager@@YAPEAVIVtrSurfaceManager@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompositionSurfaceManager::GetOrCreateCompositionSurfaceInfo(
        CCompositionSurfaceManager *this,
        void *a2,
        struct CCompositionSurfaceInfo **a3)
{
  int v6; // ebx
  int v7; // eax
  struct IVtrSurfaceManager *VtrSurfaceManager; // rax
  struct CCompositionSurfaceInfo *v9; // rdi
  char v10; // si
  PVOID v11; // rax
  int v13; // eax
  _QWORD Buffer[7]; // [rsp+30h] [rbp-38h] BYREF
  struct CCompositionSurfaceInfo *v15; // [rsp+80h] [rbp+18h] BYREF
  struct _LUID v16; // [rsp+88h] [rbp+20h] BYREF

  v16 = 0LL;
  *a3 = 0LL;
  v6 = 0;
  v7 = NtValidateCompositionSurfaceHandle(a2, &v16);
  if ( v7 < 0 )
  {
    v6 = v7 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7 | 0x10000000, 0x36u, 0LL);
  }
  else
  {
    VtrSurfaceManager = TryGetVtrSurfaceManager();
    if ( VtrSurfaceManager )
    {
      (*(void (__fastcall **)(struct IVtrSurfaceManager *, void *, struct _LUID *))(*(_QWORD *)VtrSurfaceManager + 40LL))(
        VtrSurfaceManager,
        a2,
        &v16);
      goto LABEL_4;
    }
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x36u, 0LL);
    return (unsigned int)v6;
  }
LABEL_4:
  v9 = 0LL;
  Buffer[0] = v16;
  Buffer[1] = 0LL;
  v10 = 1;
  v11 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
  if ( v11 )
    v9 = (struct CCompositionSurfaceInfo *)*((_QWORD *)v11 + 1);
  v15 = v9;
  if ( v9 )
  {
    (*(void (__fastcall **)(struct CCompositionSurfaceInfo *))(*(_QWORD *)v9 + 8LL))(v9);
  }
  else
  {
    v13 = CCompositionSurfaceInfo::Create(a2, v16, this, &v15);
    v6 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x46u, 0LL);
      goto LABEL_9;
    }
    v9 = v15;
    v10 = 0;
  }
  *a3 = v9;
  if ( v10 )
LABEL_9:
    CloseHandle(a2);
  return (unsigned int)v6;
}
