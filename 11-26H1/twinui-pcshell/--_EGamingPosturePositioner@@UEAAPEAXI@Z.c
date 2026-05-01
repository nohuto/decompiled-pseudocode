/*
 * XREFs of ??_EGamingPosturePositioner@@UEAAPEAXI@Z @ 0x1804F89A4
 * Callers:
 *     ??_EGamingPosturePositioner@@WGA@EAAPEAXI@Z @ 0x1804F87E0 (--_EGamingPosturePositioner@@WGA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1GamingPosturePositioner@@UEAA@XZ @ 0x1804F779C (--1GamingPosturePositioner@@UEAA@XZ.c)
 */

GamingPosturePositioner *__fastcall GamingPosturePositioner::`vector deleting destructor'(
        GamingPosturePositioner *this,
        char a2)
{
  GamingPosturePositioner::~GamingPosturePositioner(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x350);
  return this;
}
