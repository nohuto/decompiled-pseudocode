/*
 * XREFs of ?AddRef@FxRequestSystemBuffer@@UEAAKPEAXJPEBD@Z @ 0x1400748B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddIrpReference@FxRequest@@QEAAXXZ @ 0x1400181B4 (-AddIrpReference@FxRequest@@QEAAXXZ.c)
 */

__int64 __fastcall FxRequestSystemBuffer::AddRef(
        FxRequestSystemBuffer *this,
        __int64 Tag,
        unsigned __int8 Line,
        const char *File)
{
  FxRequest::AddIrpReference((FxRequest *)&this[-16], Tag, Line);
  return 2LL;
}
