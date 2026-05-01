/*
 * XREFs of ??_GISearchAppPositionerConfig@@UEAAPEAXI@Z @ 0x1803CED60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ISearchAppPositionerConfig *__fastcall ISearchAppPositionerConfig::`scalar deleting destructor'(
        ISearchAppPositionerConfig *this,
        char a2)
{
  *(_QWORD *)this = &ISearchAppPositionerConfig::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)8);
  return this;
}
