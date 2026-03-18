/*
 * XREFs of pProcessDfbSurfaces2 @ 0x140070C90
 * Callers:
 *     bDynamicProcessAllDriverRealizations @ 0x140071620 (bDynamicProcessAllDriverRealizations.c)
 *     pProcessDfbSurfaces @ 0x1401C6850 (pProcessDfbSurfaces.c)
 * Callees:
 *     bDfbSurfacesMigrated @ 0x14006FE30 (bDfbSurfacesMigrated.c)
 *     pProcessDfbSurfacesInternal @ 0x1400700D0 (pProcessDfbSurfacesInternal.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400730C4 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140073114 (--$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     IsDwmActive @ 0x1400FC134 (IsDwmActive.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall pProcessDfbSurfaces2(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
  __int64 v8; // rdi
  __int64 v9; // rax
  struct OBJECT *v11; // rbx
  int (*v12)(void); // rax
  __int64 (__fastcall *v13)(__int64, __int64); // rax
  int v14; // eax
  int (*v15)(void); // rax
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64); // rax

  v8 = **(_QWORD **)(W32GetSessionState(a1) + 88) + 520LL;
  GreAcquireSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal, v8);
  if ( a3 && !(unsigned int)IsDwmActive() )
    goto LABEL_19;
  if ( (*(_DWORD *)(a1 + 116) & 1) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 48);
    if ( _bittest((const signed __int32 *)(v9 + 2112), 0x10u)
      && a5
      && _bittest((const signed __int32 *)(a5 + 2112), 0x10u) )
    {
      if ( _bittest((const signed __int32 *)(v9 + 40), 0x11u) && _bittest((const signed __int32 *)(a5 + 40), 0x11u) )
      {
        v12 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 720LL);
        if ( !v12 || v12() < 0 )
        {
LABEL_19:
          if ( v8 )
            GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v8);
          return 0LL;
        }
        v13 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 728LL);
        if ( v13 )
        {
          v14 = v13((a1 + 24) & -(__int64)(a1 != 0), a5);
LABEL_28:
          v11 = (struct OBJECT *)v14;
          goto LABEL_15;
        }
LABEL_27:
        v14 = 0;
        goto LABEL_28;
      }
      bDfbSurfacesMigrated(a5, a1);
    }
    else if ( !_bittest((const signed __int32 *)(v9 + 40), 0x11u)
           && _bittest((const signed __int32 *)(*(_QWORD *)(v9 + 24) + 40LL), 0x11u) )
    {
      if ( a4 )
      {
        if ( v8 )
          GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v8);
        return 1LL;
      }
      v15 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 704LL);
      if ( !v15 || v15() < 0 )
        goto LABEL_19;
      v16 = *(_QWORD *)(a1 + 144);
      v17 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 712LL);
      if ( v17 )
      {
        v14 = v17(v16);
        goto LABEL_28;
      }
      goto LABEL_27;
    }
  }
  v11 = pProcessDfbSurfacesInternal((struct SURFACE *)a1);
LABEL_15:
  if ( v8 )
    GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v8);
  return (__int64)v11;
}
