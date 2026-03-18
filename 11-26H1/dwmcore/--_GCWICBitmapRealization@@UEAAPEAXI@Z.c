/*
 * XREFs of ??_GCWICBitmapRealization@@UEAAPEAXI@Z @ 0x1801CAE60
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD2DBitmapCache@@MEAA@XZ @ 0x1800F55C8 (--1CD2DBitmapCache@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

CWICBitmapRealization *__fastcall CWICBitmapRealization::`scalar deleting destructor'(
        CWICBitmapRealization *this,
        char a2)
{
  CD2DBitmapCache::~CD2DBitmapCache(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x60uLL);
  return this;
}
