/*
 * XREFs of ??_EGamingPosturePositioner@@UEAAPEAXI@Z @ 0x1804E1DE8
 * Callers:
 *     ??_EGamingPosturePositioner@@WGA@EAAPEAXI@Z @ 0x1804E1D20 (--_EGamingPosturePositioner@@WGA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1GamingPosturePositioner@@UEAA@XZ @ 0x1804E172C (--1GamingPosturePositioner@@UEAA@XZ.c)
 */

GamingPosturePositioner *__fastcall GamingPosturePositioner::`vector deleting destructor'(
        GamingPosturePositioner *this,
        char a2)
{
  GamingPosturePositioner::~GamingPosturePositioner(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x2E0);
  return this;
}
