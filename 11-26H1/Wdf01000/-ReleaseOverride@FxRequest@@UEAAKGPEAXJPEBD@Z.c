/*
 * XREFs of ?ReleaseOverride@FxRequest@@UEAAKGPEAXJPEBD@Z @ 0x140094B50
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@FxObject@@UEAAKPEAXJPEBD@Z @ 0x14002D660 (-Release@FxObject@@UEAAKPEAXJPEBD@Z.c)
 *     ?ReleaseIrpReference@FxRequest@@QEAAXXZ @ 0x140052700 (-ReleaseIrpReference@FxRequest@@QEAAXXZ.c)
 */

__int64 __fastcall FxRequest::ReleaseOverride(
        FxRequest *this,
        unsigned __int16 Offset,
        void *Tag,
        unsigned int Line,
        char *File)
{
  if ( !Offset )
    return FxObject::Release(this, Tag, Line, File);
  FxRequest::ReleaseIrpReference(this);
  return 1LL;
}
