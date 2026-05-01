/*
 * XREFs of ??_ECAppLayout@@UEAAPEAXI@Z @ 0x1801A9720
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAppLayout@@UEAA@XZ @ 0x1801A9760 (--1CAppLayout@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CAppLayout *__fastcall CAppLayout::`vector deleting destructor'(CAppLayout *this, char a2)
{
  CAppLayout::~CAppLayout(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x88);
  return this;
}
