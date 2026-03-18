/*
 * XREFs of ?Initialize@CInputSink@@IEAAJAEBUCOMPOSITION_INPUT_SINK_V2@@@Z @ 0x14009BE74
 * Callers:
 *     ?ObjectInit@CompositionInputObject@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z @ 0x14009BE0C (-ObjectInit@CompositionInputObject@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z.c)
 * Callees:
 *     ?CreateInputQueue@CInputSink@@CAJAEBUCOMPOSITION_INPUT_QUEUE@@AEBW4CompositionInputFlags@@PEAPEAVIInputQueue@@@Z @ 0x14009BF54 (-CreateInputQueue@CInputSink@@CAJAEBUCOMPOSITION_INPUT_QUEUE@@AEBW4CompositionInputFlags@@PEAPEA.c)
 *     ?InvalidateAndReleaseQueues@CInputSink@@IEAAXXZ @ 0x14009D67C (-InvalidateAndReleaseQueues@CInputSink@@IEAAXXZ.c)
 */

__int64 __fastcall CInputSink::Initialize(struct IInputQueue **this, const struct COMPOSITION_INPUT_SINK_V2 *a2)
{
  const enum CompositionInputFlags *v3; // rbp
  int InputQueue; // edi

  v3 = (const struct COMPOSITION_INPUT_SINK_V2 *)((char *)a2 + 288);
  InputQueue = CInputSink::CreateInputQueue(
                 (const struct COMPOSITION_INPUT_SINK_V2 *)((char *)a2 + 8),
                 (const struct COMPOSITION_INPUT_SINK_V2 *)((char *)a2 + 288),
                 this + 5);
  if ( InputQueue < 0
    || (InputQueue = CInputSink::CreateInputQueue(
                       (const struct COMPOSITION_INPUT_SINK_V2 *)((char *)a2 + 64),
                       v3,
                       this + 6),
        InputQueue < 0)
    || (InputQueue = CInputSink::CreateInputQueue(
                       (const struct COMPOSITION_INPUT_SINK_V2 *)((char *)a2 + 120),
                       v3,
                       this + 7),
        InputQueue < 0)
    || (InputQueue = CInputSink::CreateInputQueue(
                       (const struct COMPOSITION_INPUT_SINK_V2 *)((char *)a2 + 176),
                       v3,
                       this + 8),
        InputQueue < 0)
    || (InputQueue = CInputSink::CreateInputQueue(
                       (const struct COMPOSITION_INPUT_SINK_V2 *)((char *)a2 + 232),
                       v3,
                       this + 9),
        InputQueue < 0) )
  {
    CInputSink::InvalidateAndReleaseQueues((CInputSink *)this);
  }
  else
  {
    this[4] = (struct IInputQueue *)PsGetCurrentProcess();
    *((_DWORD *)this + 38) = *((_DWORD *)a2 + 1);
    *((_BYTE *)this + 24) = 1;
  }
  return (unsigned int)InputQueue;
}
