/*
 * XREFs of ?AddRefOverride@FxRequest@@UEAAKGPEAXJPEBD@Z @ 0x140094B10
 * Callers:
 *     <none>
 * Callees:
 *     ?AddIrpReference@FxRequest@@QEAAXXZ @ 0x1400181B4 (-AddIrpReference@FxRequest@@QEAAXXZ.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x140020570 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 */

__int64 __fastcall FxRequest::AddRefOverride(FxRequest *this, __int64 Offset, void *Tag, int Line, char *File)
{
  if ( !(_WORD)Offset )
    return FxObject::AddRef(this, Tag, Line, File);
  FxRequest::AddIrpReference(this, Offset, (unsigned __int8)Tag);
  return 2LL;
}
