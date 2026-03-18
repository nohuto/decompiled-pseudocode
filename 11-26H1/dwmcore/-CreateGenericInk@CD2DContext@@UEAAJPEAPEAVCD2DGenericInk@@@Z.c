/*
 * XREFs of ?CreateGenericInk@CD2DContext@@UEAAJPEAPEAVCD2DGenericInk@@@Z @ 0x18019E090
 * Callers:
 *     ?CreateResource@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DGenericInk@@@Z @ 0x18026F644 (-CreateResource@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DGenericInk@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?LazyInitDirectInkFactory@CD2DContext@@AEAAJXZ @ 0x180125250 (-LazyInitDirectInkFactory@CD2DContext@@AEAAJXZ.c)
 *     ?Create@CD2DGenericInk@@SAJPEAVCD2DResourceManager@@PEAUIDCompositionDirectInkWetStrokePartner@@PEAPEAV1@@Z @ 0x1802132E4 (-Create@CD2DGenericInk@@SAJPEAVCD2DResourceManager@@PEAUIDCompositionDirectInkWetStrokePartner@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DContext::CreateGenericInk(struct CD2DResourceManager **this, struct CD2DGenericInk **a2)
{
  int inited; // eax
  unsigned int v5; // ebx
  struct CD2DResourceManager *v6; // rdi
  __int64 (__fastcall *v7)(struct CD2DResourceManager *, struct IDCompositionDirectInkWetStrokePartner **); // rbx
  int v8; // eax
  int v9; // eax
  struct IDCompositionDirectInkWetStrokePartner *v10; // rcx
  struct IDCompositionDirectInkWetStrokePartner *v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = 0LL;
  inited = CD2DContext::LazyInitDirectInkFactory((CD2DContext *)this);
  v5 = inited;
  if ( inited < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, inited, 0x14Fu, 0LL);
  }
  else
  {
    v6 = this[39];
    v7 = *(__int64 (__fastcall **)(struct CD2DResourceManager *, struct IDCompositionDirectInkWetStrokePartner **))(*(_QWORD *)v6 + 24LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
    v8 = v7(v6, &v12);
    v5 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x150u, 0LL);
    }
    else
    {
      v9 = CD2DGenericInk::Create(this[21], v12, a2);
      v5 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x151u, 0LL);
    }
  }
  v10 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(struct IDCompositionDirectInkWetStrokePartner *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return v5;
}
