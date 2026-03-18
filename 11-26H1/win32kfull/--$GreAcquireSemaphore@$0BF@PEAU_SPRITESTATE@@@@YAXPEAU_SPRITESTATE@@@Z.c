/*
 * XREFs of ??$GreAcquireSemaphore@$0BF@PEAU_SPRITESTATE@@@@YAXPEAU_SPRITESTATE@@@Z @ 0x1403129D0
 * Callers:
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140167254 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z @ 0x1401F2424 (-GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z.c)
 *     ??$GrepAcquireLockValidate@$0BF@@@YAXXZ @ 0x140312A8C (--$GrepAcquireLockValidate@$0BF@@@YAXXZ.c)
 */

__int64 __fastcall GreAcquireSemaphore<21,_SPRITESTATE *>(__int64 a1)
{
  HSEMAPHORE v1; // rbx
  const wchar_t *GlobalLockName; // rax

  v1 = *(HSEMAPHORE *)(a1 + 136);
  GlobalLockName = GrepGetGlobalLockName(21);
  EtwTraceGreLockAcquireSemaphoreExclusive(GlobalLockName, v1, 0LL);
  GreAcquireSemaphoreInternal(v1);
  return GrepAcquireLockValidate<21>();
}
