/*
 * XREFs of ??_GIUndockedSearchAppExperienceManagerConfig@@UEAAPEAXI@Z @ 0x1803A6920
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

IUndockedSearchAppExperienceManagerConfig *__fastcall IUndockedSearchAppExperienceManagerConfig::`scalar deleting destructor'(
        IUndockedSearchAppExperienceManagerConfig *this,
        char a2)
{
  *(_QWORD *)this = &IUndockedSearchAppExperienceManagerConfig::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)8);
  return this;
}
