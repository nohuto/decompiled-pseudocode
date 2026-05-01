/*
 * XREFs of ??_EInputAppViewCoodinatorHandler@@UEAAPEAXI@Z @ 0x18045F8A0
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VInputAppViewCoodinatorHandler@@@std@@EEAAXXZ @ 0x1804682E0 (-_Destroy@-$_Ref_count_obj2@VInputAppViewCoodinatorHandler@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1InputAppViewCoodinatorHandler@@UEAA@XZ @ 0x18045C7AC (--1InputAppViewCoodinatorHandler@@UEAA@XZ.c)
 */

InputAppViewCoodinatorHandler *__fastcall InputAppViewCoodinatorHandler::`vector deleting destructor'(
        InputAppViewCoodinatorHandler *this,
        char a2)
{
  InputAppViewCoodinatorHandler::~InputAppViewCoodinatorHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x50);
  return this;
}
