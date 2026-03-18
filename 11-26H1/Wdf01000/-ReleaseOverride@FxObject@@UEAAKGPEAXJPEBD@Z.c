/*
 * XREFs of ?ReleaseOverride@FxObject@@UEAAKGPEAXJPEBD@Z @ 0x140087910
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxObject::ReleaseOverride(
        FxObject *this,
        unsigned __int16 Offset,
        void *Tag,
        unsigned int Line,
        const char *File)
{
  return ((__int64 (__fastcall *)(FxObject *, void *, _QWORD, const char *))this->Release)(this, Tag, Line, File);
}
