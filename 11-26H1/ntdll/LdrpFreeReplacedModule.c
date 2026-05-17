/*
 * XREFs of LdrpFreeReplacedModule @ 0x1800C750C
 * Callers:
 *     LdrpLoadDependentModuleInternal @ 0x18003AF90 (LdrpLoadDependentModuleInternal.c)
 *     LdrpLoadDllInternal @ 0x1800520B0 (LdrpLoadDllInternal.c)
 *     LdrpFreeLoadContext @ 0x1800C7460 (LdrpFreeLoadContext.c)
 *     LdrpHandlePendingModuleReplaced @ 0x1800C7548 (LdrpHandlePendingModuleReplaced.c)
 * Callees:
 *     LdrpFreeLoadContext @ 0x1800C7460 (LdrpFreeLoadContext.c)
 */

__int64 __fastcall LdrpFreeReplacedModule(__int64 a1)
{
  LdrpFreeLoadContext(*(_QWORD *)(a1 + 176));
  *(_DWORD *)(a1 + 276) = 1;
  *(_DWORD *)(a1 + 104) &= ~0x20u;
  return LdrpDereferenceModule(a1);
}
