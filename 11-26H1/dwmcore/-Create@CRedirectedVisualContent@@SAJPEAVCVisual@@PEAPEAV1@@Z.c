/*
 * XREFs of ?Create@CRedirectedVisualContent@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x18014DA44
 * Callers:
 *     ?ProcessSetRedirectedVisual@CRedirectVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REDIRECTVISUAL_SETREDIRECTEDVISUAL@@@Z @ 0x18014C9A8 (-ProcessSetRedirectedVisual@CRedirectVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REDIRECTVISU.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180110AD4 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CRedirectedVisualContent@@IEAA@PEAVCVisual@@@Z @ 0x18014DB08 (--0CRedirectedVisualContent@@IEAA@PEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRedirectedVisualContent::Create(struct CVisual *a1, struct CRedirectedVisualContent **a2)
{
  CRedirectedVisualContent *v4; // rax
  CRedirectedVisualContent *v5; // rax
  struct CRedirectedVisualContent *v6; // rbx
  int v7; // edi
  unsigned int v8; // eax

  *a2 = 0LL;
  v4 = (CRedirectedVisualContent *)DefaultHeap::AllocClear(0x70uLL);
  if ( !v4 )
  {
    v6 = 0LL;
    goto LABEL_9;
  }
  v5 = CRedirectedVisualContent::CRedirectedVisualContent(v4, a1);
  v6 = v5;
  if ( !v5 )
  {
LABEL_9:
    v7 = -2147024882;
    v8 = 20;
    goto LABEL_5;
  }
  (*(void (__fastcall **)(CRedirectedVisualContent *))(*(_QWORD *)v5 + 8LL))(v5);
  v7 = (*(__int64 (__fastcall **)(struct CRedirectedVisualContent *))(*(_QWORD *)v6 + 56LL))(v6);
  if ( v7 >= 0 )
  {
    *a2 = v6;
    return (unsigned int)v7;
  }
  v8 = 22;
LABEL_5:
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, v8, 0LL);
  if ( v6 )
    (*(void (__fastcall **)(struct CRedirectedVisualContent *))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)v7;
}
