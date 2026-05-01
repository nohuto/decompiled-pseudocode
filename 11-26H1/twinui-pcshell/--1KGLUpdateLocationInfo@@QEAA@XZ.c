/*
 * XREFs of ??1KGLUpdateLocationInfo@@QEAA@XZ @ 0x1800F0850
 * Callers:
 *     <none>
 * Callees:
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x1800F0B54 (--1String@Internal@Windows@@QEAA@XZ.c)
 */

void __fastcall KGLUpdateLocationInfo::~KGLUpdateLocationInfo(KGLUpdateLocationInfo *this)
{
  Windows::Internal::String::~String((KGLUpdateLocationInfo *)((char *)this + 64));
  Windows::Internal::String::~String((KGLUpdateLocationInfo *)((char *)this + 56));
  Windows::Internal::String::~String((KGLUpdateLocationInfo *)((char *)this + 48));
}
