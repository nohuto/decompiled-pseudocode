/*
 * XREFs of ??0CSuperWetInkScribbleBase@@QEAA@PEAUIDCompositionDirectInkSuperWetStrokePartner@@IAEBUTelemetryInfo@0@@Z @ 0x18012329C
 * Callers:
 *     ?CreateScribble@CSynchronousSuperWetInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComputeScribble@@@Z @ 0x180122DC0 (-CreateScribble@CSynchronousSuperWetInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@.c)
 *     ?CreateScribble@CGenericInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComputeScribble@@@Z @ 0x1801246F0 (-CreateScribble@CGenericInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComp.c)
 *     ?CreateScribble@CDelegatedInkCanvas@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComputeScribble@@@Z @ 0x18026CAB0 (-CreateScribble@CDelegatedInkCanvas@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAP.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CSuperWetInkScribbleBase *__fastcall CSuperWetInkScribbleBase::CSuperWetInkScribbleBase(
        CSuperWetInkScribbleBase *this,
        struct IDCompositionDirectInkSuperWetStrokePartner *a2,
        int a3,
        const struct CSuperWetInkScribbleBase::TelemetryInfo *a4)
{
  CSuperWetInkScribbleBase *result; // rax

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CSuperWetInkScribbleBase::`vftable';
  *((_QWORD *)this + 2) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IDCompositionDirectInkSuperWetStrokePartner *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_DWORD *)this + 6) = a3;
  result = this;
  *((_OWORD *)this + 2) = *(_OWORD *)a4;
  *((_QWORD *)this + 6) = *((_QWORD *)a4 + 2);
  return result;
}
