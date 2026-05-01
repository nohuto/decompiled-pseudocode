/*
 * XREFs of ??_E?$CTaskWrapper@V_lambda_600c533afc652c9fe48d9053db75c639_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180459A40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TabletModePositionerHandoffContext@@UEAA@XZ @ 0x1802E82CC (--1TabletModePositionerHandoffContext@@UEAA@XZ.c)
 */

TabletModePositionerHandoffContext *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_600c533afc652c9fe48d9053db75c639_>::`vector deleting destructor'(
        TabletModePositionerHandoffContext *a1,
        char a2)
{
  TabletModePositionerHandoffContext::~TabletModePositionerHandoffContext(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
  return a1;
}
