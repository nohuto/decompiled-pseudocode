/*
 * XREFs of LdrpHandlePendingModuleReplaced @ 0x1800C7548
 * Callers:
 *     LdrpFreeLoadContext @ 0x1800C7460 (LdrpFreeLoadContext.c)
 * Callees:
 *     LdrpFreeReplacedModule @ 0x1800C750C (LdrpFreeReplacedModule.c)
 *     LdrpHandleReplacedModule @ 0x1800C7590 (LdrpHandleReplacedModule.c)
 */

void __fastcall LdrpHandlePendingModuleReplaced(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rcx

  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 )
  {
    v3 = LdrpHandleReplacedModule(v2);
    v4 = *(_QWORD *)(a1 + 80);
    if ( v3 != v4 )
      LdrpFreeReplacedModule(v4);
    *(_QWORD *)(a1 + 80) = 0LL;
  }
}
