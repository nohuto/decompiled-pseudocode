/*
 * XREFs of ??_GCapturedWindowRepresentation@@MEAAPEAXI@Z @ 0x18009BFC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 *     ??1CapturedWindowRepresentation@@MEAA@XZ @ 0x18009BEE4 (--1CapturedWindowRepresentation@@MEAA@XZ.c)
 */

CapturedWindowRepresentation *__fastcall CapturedWindowRepresentation::`scalar deleting destructor'(
        CapturedWindowRepresentation *this,
        unsigned int a2)
{
  char v2; // bl

  v2 = a2;
  CapturedWindowRepresentation::~CapturedWindowRepresentation(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x50);
  return this;
}
