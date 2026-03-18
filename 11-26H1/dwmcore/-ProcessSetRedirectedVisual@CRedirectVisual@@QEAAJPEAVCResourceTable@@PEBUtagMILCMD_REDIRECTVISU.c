/*
 * XREFs of ?ProcessSetRedirectedVisual@CRedirectVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REDIRECTVISUAL_SETREDIRECTEDVISUAL@@@Z @ 0x18014C9A8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18014CFD0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Create@CRedirectedVisualContent@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x18014DA44 (-Create@CRedirectedVisualContent@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRedirectVisual::ProcessSetRedirectedVisual(
        CRedirectVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_REDIRECTVISUAL_SETREDIRECTEDVISUAL *a3)
{
  struct CResourceTable *v3; // r9
  unsigned int v4; // edi
  __int64 v5; // rdx
  struct CVisual *Resource; // rax
  __int64 v8; // rdx
  struct CVisual *v9; // rcx
  struct CRedirectedVisualContent *v10; // rbx
  int v11; // eax
  struct CRedirectedVisualContent *v13; // [rsp+50h] [rbp+18h] BYREF

  v3 = a2;
  v4 = 0;
  v5 = *((unsigned int *)a3 + 2);
  Resource = 0LL;
  if ( (_DWORD)v5 && (Resource = (struct CVisual *)CResourceTable::GetResource(v3, v5, 156LL)) == 0LL )
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x18u, 0LL);
  }
  else
  {
    v8 = *((_QWORD *)this + 31);
    v9 = 0LL;
    if ( v8 )
      v9 = *(struct CVisual **)(v8 + 72);
    if ( Resource != v9 )
    {
      v10 = 0LL;
      v13 = 0LL;
      if ( Resource )
      {
        v11 = CRedirectedVisualContent::Create(Resource, &v13);
        v4 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x2Au, 0LL);
          return v4;
        }
        v10 = v13;
      }
      (*(void (__fastcall **)(CRedirectVisual *, struct CRedirectedVisualContent *, const struct tagMILCMD_REDIRECTVISUAL_SETREDIRECTEDVISUAL *, struct CResourceTable *))(*(_QWORD *)this + 328LL))(
        this,
        v10,
        a3,
        v3);
      if ( v10 )
        (*(void (__fastcall **)(struct CRedirectedVisualContent *))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  return v4;
}
