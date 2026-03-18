/*
 * XREFs of ?Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@@PEAPEAV1@@Z @ 0x180111FC0
 * Callers:
 *     ?OnSurfaceChanging@CGdiSpriteBitmap@@QEAAJPEAUHLSURF__@@@Z @ 0x1801BB220 (-OnSurfaceChanging@CGdiSpriteBitmap@@QEAAJPEAUHLSURF__@@@Z.c)
 * Callees:
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18001F360 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180110AD4 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Initialize@CRedirectedGDISurface@@IEAAJXZ @ 0x180112104 (-Initialize@CRedirectedGDISurface@@IEAAJXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CRedirectedGDISurface::Create(
        HLSURF a1,
        struct CGdiSpriteBitmap *a2,
        struct CLegacySurfaceManager *a3,
        struct CRedirectedGDISurface **a4)
{
  _DWORD *v8; // rax
  _DWORD *v9; // rbx
  _QWORD *inserted; // rax
  int v11; // eax
  unsigned int v12; // edi
  _QWORD Buffer[4]; // [rsp+30h] [rbp-38h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  unsigned __int8 NewElement; // [rsp+88h] [rbp+20h] BYREF

  *a4 = 0LL;
  v8 = DefaultHeap::AllocClear(0x30uLL);
  v9 = v8;
  if ( !v8 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v8[2] = 0;
  *((_QWORD *)v8 + 2) = a3;
  *(_QWORD *)v8 = &CRedirectedGDISurface::`vftable';
  *((_QWORD *)v8 + 3) = a1;
  *((_QWORD *)v8 + 4) = a2;
  NewElement = 0;
  Buffer[0] = a1;
  Buffer[1] = v8;
  Buffer[2] = a2;
  inserted = RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)a3 + 8), Buffer, 0x18u, &NewElement);
  if ( !inserted )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  if ( !NewElement )
  {
    inserted[2] = a2;
    inserted[1] = v9;
  }
  CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v9 + 2));
  v11 = CRedirectedGDISurface::Initialize((CRedirectedGDISurface *)v9);
  v12 = v11;
  if ( v11 >= 0 )
  {
    *a4 = (struct CRedirectedGDISurface *)v9;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x1Au, 0LL);
    CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release(v9);
  }
  return v12;
}
