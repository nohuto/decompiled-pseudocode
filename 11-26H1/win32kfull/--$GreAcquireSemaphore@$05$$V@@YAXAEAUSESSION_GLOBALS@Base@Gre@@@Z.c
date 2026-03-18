/*
 * XREFs of ??$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400BC8B8
 * Callers:
 *     GreUpdateSpriteVisRgn @ 0x1400384E0 (GreUpdateSpriteVisRgn.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x14006A21C (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??0ENTER_DWM_CRIT@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@@Z @ 0x1400BBF54 (--0ENTER_DWM_CRIT@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@@Z.c)
 *     GreLockDisplayArea @ 0x140213BB8 (GreLockDisplayArea.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x14028DA20 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?GrepDrawEscape@@YAHAEAVXDCOBJ@@HAEBV?$umptr_r@D@@@Z @ 0x140310A4C (-GrepDrawEscape@@YAHAEAVXDCOBJ@@HAEBV-$umptr_r@D@@@Z.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$05@@YAXXZ @ 0x140072750 (--$GrepAcquireLockValidate@$05@@YAXXZ.c)
 */

struct _GRETHREAD *__fastcall GreAcquireSemaphore<6,>(__int64 *a1)
{
  __int64 v1; // rbx

  v1 = *a1;
  EtwTraceGreLockAcquireSemaphoreExclusive(L"Sprite", *a1 + 1040, 0LL);
  GreAcquireSemaphoreInternal((HSEMAPHORE)(v1 + 1040));
  return GrepAcquireLockValidate<6>();
}
