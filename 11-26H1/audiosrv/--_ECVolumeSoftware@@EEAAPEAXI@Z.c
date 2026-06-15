/*
 * XREFs of ??_ECVolumeSoftware@@EEAAPEAXI@Z @ 0x1801177C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CVolumeSoftware@@EEAA@XZ @ 0x18011761C (--1CVolumeSoftware@@EEAA@XZ.c)
 */

CVolumeSoftware *__fastcall CVolumeSoftware::`vector deleting destructor'(CVolumeSoftware *this, char a2)
{
  CVolumeSoftware::~CVolumeSoftware(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x138);
  return this;
}
