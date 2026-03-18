/*
 * XREFs of ?Partition_Synchronize@CGlobalComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SYNCHRONIZE@@@Z @ 0x180149CF0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?reserve_region@?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEBVCRenderingTechniqueFragment@@_K0@Z @ 0x1800FCA84 (-reserve_region@-$vector_facade@PEBVCRenderingTechniqueFragment@@V-$buffer_impl@PEBVCRenderingTe.c)
 *     ??0CResponseItem@@IEAA@PEAVCGlobalSurfaceManager@@@Z @ 0x180149FB8 (--0CResponseItem@@IEAA@PEAVCGlobalSurfaceManager@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGlobalComposition::Partition_Synchronize(
        CGlobalComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_PARTITION_SYNCHRONIZE *a4)
{
  CResponseItem *v6; // rax
  CResponseItem *v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // r8

  v6 = (CResponseItem *)operator new(0x38uLL);
  v7 = v6;
  if ( v6 )
  {
    v8 = *((_QWORD *)a4 + 1);
    CResponseItem::CResponseItem(v6, *((struct CGlobalSurfaceManager **)this + 78));
    *((_QWORD *)v7 + 5) = v8;
    *(_QWORD *)v7 = &CEventResponse::`vftable';
    *((_BYTE *)v7 + 48) = 0;
    if ( *((_BYTE *)a4 + 16) )
    {
      ((void (__fastcall *)(CResponseItem *))*(&CEventResponse::`vftable' + 4))(v7);
      *(_QWORD *)detail::vector_facade<CRenderingTechniqueFragment const *,detail::buffer_impl<CRenderingTechniqueFragment const *,16,1,detail::liberal_expansion_policy>>::reserve_region(
                   (__int64 *)this + 40,
                   (__int64)(*((_QWORD *)this + 41) - *((_QWORD *)this + 40)) >> 3,
                   v9) = v7;
    }
    (*(void (__fastcall **)(CResponseItem *))(*(_QWORD *)v7 + 40LL))(v7);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0xC8u, 0LL);
    SetEvent(*((HANDLE *)a4 + 1));
    CloseHandle(*((HANDLE *)a4 + 1));
  }
  return 0LL;
}
