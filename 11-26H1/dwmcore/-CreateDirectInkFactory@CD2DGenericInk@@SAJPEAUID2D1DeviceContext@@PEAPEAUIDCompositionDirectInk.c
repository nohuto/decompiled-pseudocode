/*
 * XREFs of ?CreateDirectInkFactory@CD2DGenericInk@@SAJPEAUID2D1DeviceContext@@PEAPEAUIDCompositionDirectInkFactoryPartner@@@Z @ 0x18020BB60
 * Callers:
 *     ?LazyInitDirectInkFactory@CD2DContext@@AEAAJXZ @ 0x180125250 (-LazyInitDirectInkFactory@CD2DContext@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     GetLPCreateDCompositionDirectInkFactoryPartner @ 0x18020BBF0 (GetLPCreateDCompositionDirectInkFactoryPartner.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DGenericInk::CreateDirectInkFactory(
        struct ID2D1DeviceContext *a1,
        struct IDCompositionDirectInkFactoryPartner **a2)
{
  int LPCreateDCompositionDirectInkFactoryPartner; // eax
  unsigned int v5; // ebx
  int v6; // eax
  __int64 (__fastcall *v8)(struct ID2D1DeviceContext *, struct IDCompositionDirectInkFactoryPartner **); // [rsp+50h] [rbp+18h] BYREF

  v8 = 0LL;
  LPCreateDCompositionDirectInkFactoryPartner = GetLPCreateDCompositionDirectInkFactoryPartner(&v8);
  v5 = LPCreateDCompositionDirectInkFactoryPartner;
  if ( LPCreateDCompositionDirectInkFactoryPartner < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, LPCreateDCompositionDirectInkFactoryPartner, 0x36u, 0LL);
  }
  else
  {
    v6 = v8(a1, a2);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x37u, 0LL);
  }
  return v5;
}
