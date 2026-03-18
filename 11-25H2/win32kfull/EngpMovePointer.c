/*
 * XREFs of EngpMovePointer @ 0x14008F2A8
 * Callers:
 *     GreMovePointer @ 0x14008E890 (GreMovePointer.c)
 *     EngMovePointer @ 0x140322A20 (EngMovePointer.c)
 * Callees:
 *     IsDwmActive @ 0x14008D760 (IsDwmActive.c)
 *     ??$GreAcquireSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14008D78C (--$GreAcquireSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GrepAcquireLockValidate@$03@@YAXXZ @ 0x14008D8A4 (--$GrepAcquireLockValidate@$03@@YAXXZ.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x14008D9F8 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x14008DF34 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140093A10 (--$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140094B50 (--$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

void __fastcall EngpMovePointer(struct _SURFOBJ *a1, int a2, int a3, __int64 a4, char a5)
{
  HDEV hdev; // rbx
  Gre::Base *v9; // rcx
  struct _RECTL *v10; // r9
  struct Gre::Base::SESSION_GLOBALS *v11; // rax
  HSEMAPHORE v12; // rbx
  struct Gre::Base::SESSION_GLOBALS *v13; // rdi
  __int64 v14; // rdi
  Gre::Base *v15; // rcx
  struct _RECTL *v16; // r9

  hdev = a1->hdev;
  if ( !IsDwmActive((Gre::Base *)a1) )
  {
LABEL_8:
    GdiMovePointer(a1, a2, a3, v10, 0);
    return;
  }
  v11 = Gre::Base::Globals(v9);
  v12 = (HSEMAPHORE)*((_QWORD *)hdev + 7);
  v13 = v11;
  GreAcquireSemaphoreInternal(v12);
  GrepAcquireLockValidate<4>();
  v14 = *(_QWORD *)v13 + 1040LL;
  EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive(L"Sprite", v14);
  GreAcquireSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(
    (void (__fastcall *)(__int64))GreAcquireSemaphoreSharedStarveExclusiveInternal,
    v14);
  if ( !IsDwmActive(v15) )
  {
    GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v14);
    if ( v12 )
      GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v12);
    goto LABEL_8;
  }
  DwmMovePointer(a1, a2, a3, v16, a5);
  GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v14);
  if ( v12 )
    GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v12);
}
