/*
 * XREFs of ??_ECScrollButtonContainer@@UEAAPEAXI@Z @ 0x1804D7AA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CScrollButtonContainer@@UEAA@XZ @ 0x1804D7A3C (--1CScrollButtonContainer@@UEAA@XZ.c)
 */

CScrollButtonContainer *__fastcall CScrollButtonContainer::`vector deleting destructor'(
        CScrollButtonContainer *this,
        char a2)
{
  CScrollButtonContainer::~CScrollButtonContainer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1B8);
  return this;
}
