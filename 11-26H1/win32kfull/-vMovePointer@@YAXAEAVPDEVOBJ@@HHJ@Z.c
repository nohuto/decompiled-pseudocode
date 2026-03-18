/*
 * XREFs of ?vMovePointer@@YAXAEAVPDEVOBJ@@HHJ@Z @ 0x14001C0F4
 * Callers:
 *     GreMovePointer @ 0x14006B170 (GreMovePointer.c)
 *     ?GreHidePointerInternal@@YAXAEAVPDEVOBJ@@@Z @ 0x14024A848 (-GreHidePointerInternal@@YAXAEAVPDEVOBJ@@@Z.c)
 * Callees:
 *     IsDwmActive @ 0x14001C660 (IsDwmActive.c)
 *     ??$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001C6B4 (--$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001C78C (--$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001C868 (--$GreAcquireSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x14001C97C (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ??$GrepAcquireLockValidate@$03@@YAXXZ @ 0x14006B768 (--$GrepAcquireLockValidate@$03@@YAXXZ.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x14028DA20 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall vMovePointer(struct PDEVOBJ *a1, unsigned int a2, __int64 a3, char a4)
{
  __int64 v6; // rdx
  int v7; // esi
  __int64 v9; // rax
  int v10; // ecx
  __int64 v11; // r14
  Gre::Base *v12; // rcx
  __int64 v13; // rbx
  Gre::Base *v14; // rcx
  struct _RECTL *v15; // r9
  struct Gre::Base::SESSION_GLOBALS *v16; // rax
  HSEMAPHORE v17; // rbx
  struct Gre::Base::SESSION_GLOBALS *v18; // rdi
  __int64 v19; // rdi
  struct _RECTL *v20; // r9
  int v21; // edx
  void (__fastcall *v22)(__int64, _QWORD, _QWORD, _QWORD); // rax
  void (__fastcall *v23)(__int64, _QWORD, __int64, _QWORD); // rax

  v6 = *(_QWORD *)a1;
  v7 = a3;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 64LL) != __PAIR64__(a3, a2) || (*(_DWORD *)(v6 + 40) & 0x100000) != 0 )
  {
    *(_DWORD *)(v6 + 64) = a2;
    *(_DWORD *)(*(_QWORD *)a1 + 68LL) = a3;
    v9 = *(_QWORD *)a1;
    v10 = *(_DWORD *)(*(_QWORD *)a1 + 40LL);
    if ( (v10 & 0x400) == 0 )
    {
      v11 = *(_QWORD *)(v9 + 2544);
      if ( v11 )
      {
        if ( (v10 & 2) != 0 )
        {
          if ( *(_QWORD *)(v9 + 3416) )
          {
            (*(void (__fastcall **)(__int64, _QWORD))(v9 + 3416))(v11 + 24, a2);
          }
          else
          {
            v23 = *(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(v9 + 2920);
            if ( v23 )
              v23(v11 + 24, a2, a3, 0LL);
          }
        }
        v12 = (Gre::Base *)*(unsigned int *)(*(_QWORD *)a1 + 40LL);
        if ( ((unsigned __int8)v12 & 4) == 0 )
          goto LABEL_12;
        v13 = *(_QWORD *)(v11 + 48);
        if ( *((_QWORD *)Gre::Base::Globals(v12) + 28) )
        {
          v16 = Gre::Base::Globals(v14);
          v17 = *(HSEMAPHORE *)(v13 + 56);
          v18 = v16;
          GreAcquireSemaphoreInternal(v17);
          GrepAcquireLockValidate<4>();
          v19 = *(_QWORD *)v18 + 1040LL;
          EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive(L"Sprite", v19);
          GreAcquireSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreSharedStarveExclusiveInternal, v19);
          if ( (unsigned int)IsDwmActive() )
          {
            DwmMovePointer((struct _SURFOBJ *)(v11 + 24), a2, v7, v20, a4 & 0xF4);
            GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v19);
            if ( v17 )
              GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v17);
            goto LABEL_12;
          }
          GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v19);
          if ( v17 )
            GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v17);
        }
        GdiMovePointer((struct _SURFOBJ *)(v11 + 24), a2, v7, v15, 0);
LABEL_12:
        if ( (*(_DWORD *)(*(_QWORD *)a1 + 1808LL) & 0x10000) != 0 && v7 != -1 && (signed int)a2 < *(_DWORD *)(v11 + 56) )
        {
          v21 = *(_DWORD *)(v11 + 60);
          if ( v7 < v21 )
          {
            v22 = *(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a1 + 2920LL);
            if ( v22 )
              v22(v11 + 24, a2, (unsigned int)(v7 - v21), 0LL);
          }
        }
      }
    }
  }
}
