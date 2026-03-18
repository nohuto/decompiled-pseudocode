/*
 * XREFs of ??0?$SEMOBJ@$0BL@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14031BD24
 * Callers:
 *     ?GetModuleHandleAndIncrementRefcount@@YAPEAXPEBG@Z @ 0x14031BD5C (-GetModuleHandleAndIncrementRefcount@@YAPEAXPEBG@Z.c)
 *     ?LoadModuleWorkHorse@@YAPEAXPEAGH@Z @ 0x14031BE44 (-LoadModuleWorkHorse@@YAPEAXPEAGH@Z.c)
 *     EngFreeModule @ 0x14031C020 (EngFreeModule.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$0BL@@@YAXXZ @ 0x14031BC9C (--$GrepAcquireLockValidate@$0BL@@@YAXXZ.c)
 */

HSEMAPHORE *__fastcall SEMOBJ<27>::SEMOBJ<27>(HSEMAPHORE *a1, _QWORD *a2)
{
  HSEMAPHORE v3; // rcx

  v3 = (HSEMAPHORE)(*a2 + 1616LL);
  *a1 = v3;
  GreAcquireSemaphoreInternal(v3);
  GrepAcquireLockValidate<27>();
  return a1;
}
