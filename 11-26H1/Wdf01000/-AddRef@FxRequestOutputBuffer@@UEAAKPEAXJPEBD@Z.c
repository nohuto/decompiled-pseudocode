/*
 * XREFs of ?AddRef@FxRequestOutputBuffer@@UEAAKPEAXJPEBD@Z @ 0x140018190
 * Callers:
 *     <none>
 * Callees:
 *     ?AddIrpReference@FxRequest@@QEAAXXZ @ 0x1400181B4 (-AddIrpReference@FxRequest@@QEAAXXZ.c)
 */

__int64 __fastcall FxRequestOutputBuffer::AddRef(FxRequestOutputBuffer *this, void *Tag, int Line, const char *File)
{
  FxRequest::AddIrpReference((FxRequest *)&this[-17]);
  return 2LL;
}
