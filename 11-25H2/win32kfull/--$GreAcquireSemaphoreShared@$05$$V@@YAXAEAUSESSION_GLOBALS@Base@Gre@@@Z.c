/*
 * XREFs of ??$GreAcquireSemaphoreShared@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14008E758
 * Callers:
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x140011E3C (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     DxgkEngAcquireStableSprite @ 0x14008FAE0 (DxgkEngAcquireStableSprite.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$05@@YAXXZ @ 0x14008E7A8 (--$GrepAcquireLockValidate@$05@@YAXXZ.c)
 */

__int64 __fastcall GreAcquireSemaphoreShared<6,>(_QWORD *a1)
{
  EtwTraceGreLockAcquireSemaphoreShared(L"Sprite", *a1 + 1040LL);
  GreAcquireSemaphoreSharedInternal((HSEMAPHORE)(*a1 + 1040LL));
  return GrepAcquireLockValidate<6>();
}
