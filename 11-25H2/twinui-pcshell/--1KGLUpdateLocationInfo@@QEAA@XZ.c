/*
 * XREFs of ??1KGLUpdateLocationInfo@@QEAA@XZ @ 0x180222C40
 * Callers:
 *     <none>
 * Callees:
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x1800FEDD8 (--1String@Internal@Windows@@QEAA@XZ.c)
 */

void __fastcall KGLUpdateLocationInfo::~KGLUpdateLocationInfo(HSTRING *this)
{
  Windows::Internal::String::~String(this + 8);
  Windows::Internal::String::~String(this + 7);
  Windows::Internal::String::~String(this + 6);
}
