/*
 * XREFs of ?Release@CAudioMediaType@@UEAAKXZ @ 0x1800B4F00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180037A10 (--3@YAXPEAX@Z.c)
 *     ??1CAudioMediaType@@MEAA@XZ @ 0x1800B4880 (--1CAudioMediaType@@MEAA@XZ.c)
 */

__int64 __fastcall CAudioMediaType::Release(CAudioMediaType *this)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 && this )
  {
    CAudioMediaType::~CAudioMediaType((void **)this);
    operator delete(this);
  }
  return v2;
}
