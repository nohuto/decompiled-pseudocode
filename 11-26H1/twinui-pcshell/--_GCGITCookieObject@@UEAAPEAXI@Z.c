/*
 * XREFs of ??_GCGITCookieObject@@UEAAPEAXI@Z @ 0x180085D10
 * Callers:
 *     <none>
 * Callees:
 *     ??1CGITCookieObject@@UEAA@XZ @ 0x180085D48 (--1CGITCookieObject@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1802C9C24 (--3@YAXPEAX@Z.c)
 */

CGITCookieObject *__fastcall CGITCookieObject::`scalar deleting destructor'(CGITCookieObject *this, char a2)
{
  CGITCookieObject::~CGITCookieObject(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
