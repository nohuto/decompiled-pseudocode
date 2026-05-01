/*
 * XREFs of ??_GSwitchItemCollection@@UEAAPEAXI@Z @ 0x1804B0BD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SwitchItemCollection@@UEAA@XZ @ 0x1804B0AEC (--1SwitchItemCollection@@UEAA@XZ.c)
 */

SwitchItemCollection *__fastcall SwitchItemCollection::`scalar deleting destructor'(
        SwitchItemCollection *this,
        char a2)
{
  SwitchItemCollection::~SwitchItemCollection(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xE0);
  return this;
}
