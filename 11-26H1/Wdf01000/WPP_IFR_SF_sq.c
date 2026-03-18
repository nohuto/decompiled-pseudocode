/*
 * XREFs of WPP_IFR_SF_sq @ 0x140026708
 * Callers:
 *     imp_WdfPdoGetParent @ 0x1400263F0 (imp_WdfPdoGetParent.c)
 *     ?GetPdoPackageFromDeviceHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEADPEAPEAVFxPkgPdo@@PEAPEAU1@PEAPEAVFxDevice@@@Z @ 0x140026580 (-GetPdoPackageFromDeviceHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEADPEAPEAVFxPkgPdo@.c)
 *     imp_WdfObjectGetTypedContextWorker @ 0x14004D7B0 (imp_WdfObjectGetTypedContextWorker.c)
 *     ?FxObjectGetTypedContext@@YAPEAXPEAVFxObject@@PEBU_WDF_OBJECT_CONTEXT_TYPE_INFO@@@Z @ 0x14004D880 (-FxObjectGetTypedContext@@YAPEAXPEAVFxObject@@PEBU_WDF_OBJECT_CONTEXT_TYPE_INFO@@@Z.c)
 *     imp_WdfPdoRetrieveIdentificationDescription @ 0x140059960 (imp_WdfPdoRetrieveIdentificationDescription.c)
 *     VfWdfObjectGetTypedContext @ 0x1400E3330 (VfWdfObjectGetTypedContext.c)
 * Callees:
 *     FxIFR @ 0x140032A50 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x140056738 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_sq(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 level,
        unsigned int flags,
        unsigned __int16 id,
        const _GUID *traceGuid,
        const char *_a1,
        const void *_a2)
{
  const char *v7; // rbx
  __int64 v8; // rdi
  unsigned __int64 v11; // rsi
  __int64 v14; // rbp
  int v15; // eax
  bool v16; // zf
  unsigned __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rcx
  const char *v20; // rax

  v7 = _a1;
  v8 = -1LL;
  v11 = (unsigned __int64)flags >> 16;
  v14 = 5LL;
  v15 = *(&WPP_GLOBAL_WDF_Control.Characteristics + 16 * v11 + (((flags - 1) >> 5) & 0x7FF));
  if ( _bittest(&v15, (flags - 1) & 0x1F) )
  {
    v17 = v11 << 6;
    if ( *((_BYTE *)&WPP_GLOBAL_WDF_Control.Flags + v17 + 1) >= level )
    {
      if ( _a1 )
      {
        v18 = -1LL;
        do
          ++v18;
        while ( _a1[v18] );
        v19 = v18 + 1;
      }
      else
      {
        v19 = 5LL;
      }
      v20 = _a1;
      if ( !_a1 )
        v20 = "NULL";
      FxWmiTraceMessage(
        *(unsigned __int64 *)((char *)&WPP_GLOBAL_WDF_Control.CurrentIrp + v17),
        0x2Bu,
        traceGuid,
        id,
        v20,
        v19,
        &_a2,
        8LL,
        0LL);
    }
  }
  v16 = _a1 == 0LL;
  if ( _a1 )
  {
    do
      ++v8;
    while ( _a1[v8] );
    v14 = v8 + 1;
    v16 = _a1 == 0LL;
  }
  if ( v16 )
    v7 = "NULL";
  FxIFR(globals, level, flags, traceGuid, id, v7, v14, &_a2, 8LL, 0LL);
}
