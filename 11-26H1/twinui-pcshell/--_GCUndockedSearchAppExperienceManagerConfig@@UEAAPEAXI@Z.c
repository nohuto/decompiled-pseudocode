/*
 * XREFs of ??_GCUndockedSearchAppExperienceManagerConfig@@UEAAPEAXI@Z @ 0x1803AFCA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CUndockedSearchAppExperienceManagerConfig@@UEAA@XZ @ 0x1803AE41C (--1CUndockedSearchAppExperienceManagerConfig@@UEAA@XZ.c)
 */

CUndockedSearchAppExperienceManagerConfig *__fastcall CUndockedSearchAppExperienceManagerConfig::`scalar deleting destructor'(
        CUndockedSearchAppExperienceManagerConfig *this,
        char a2)
{
  CUndockedSearchAppExperienceManagerConfig::~CUndockedSearchAppExperienceManagerConfig(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
