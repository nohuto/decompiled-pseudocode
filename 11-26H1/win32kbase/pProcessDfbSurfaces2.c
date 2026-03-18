/*
 * XREFs of pProcessDfbSurfaces2 @ 0x140030400
 * Callers:
 *     bDynamicProcessAllDriverRealizations @ 0x140030BE0 (bDynamicProcessAllDriverRealizations.c)
 *     pProcessDfbSurfaces @ 0x1401F1420 (pProcessDfbSurfaces.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B700 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     bDfbSurfacesMigrated @ 0x14002EBF0 (bDfbSurfacesMigrated.c)
 *     pProcessDfbSurfacesInternal @ 0x14002F2C0 (pProcessDfbSurfacesInternal.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140044440 (EtwTraceGreLockReleaseSemaphore.c)
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x1400B31BC (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 *     IsDwmActive @ 0x140140458 (IsDwmActive.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall pProcessDfbSurfaces2(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
  struct _ERESOURCE *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int *v11; // rbx
  struct _GRETHREAD *v12; // rax
  bool v13; // zf
  __int64 v15; // rcx
  struct _GRETHREAD *v16; // rax
  int (*v17)(void); // rax
  __int64 v18; // rcx
  __int64 (__fastcall *v19)(__int64, __int64); // rax
  int v20; // eax
  int v21; // ebx
  struct _GRETHREAD *v22; // rax
  struct _GRETHREAD *v23; // rax
  int (*v24)(void); // rax
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 (__fastcall *v27)(__int64); // rax

  v8 = (struct _ERESOURCE *)(**(_QWORD **)(W32GetSessionState(a1) + 88) + 520LL);
  GreAcquireSemaphoreInternal(v8);
  GrepAcquireLockValidate<7>();
  if ( a3 && !(unsigned int)IsDwmActive() )
    goto LABEL_36;
  if ( (*(_DWORD *)(a1 + 116) & 1) == 0 )
    goto LABEL_8;
  v10 = *(_QWORD *)(a1 + 48);
  if ( _bittest((const signed __int32 *)(v10 + 2112), 0x10u)
    && a5
    && _bittest((const signed __int32 *)(a5 + 2112), 0x10u) )
  {
    if ( _bittest((const signed __int32 *)(v10 + 40), 0x11u) && _bittest((const signed __int32 *)(a5 + 40), 0x11u) )
    {
      v17 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v9) + 24) + 720LL);
      if ( v17 && v17() >= 0 )
      {
        v19 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v18) + 24) + 728LL);
        if ( v19 )
        {
          v20 = v19((a1 + 24) & -(__int64)(a1 != 0), a5);
LABEL_28:
          v21 = v20;
LABEL_29:
          if ( v8 )
          {
            EtwTraceGreLockReleaseSemaphore(L"DwmState", v8);
            v22 = GreGetCurrentThreadCrossSessionCheck();
            if ( v22 )
            {
              v13 = (*((_BYTE *)v22 + 15))-- == 1;
              if ( v13 )
                *(_QWORD *)v22 &= ~0x80uLL;
            }
            GreReleaseSemaphoreSharedInternal(v8);
          }
          return v21;
        }
        goto LABEL_42;
      }
      goto LABEL_36;
    }
    bDfbSurfacesMigrated(a5, a1);
    goto LABEL_8;
  }
  if ( _bittest((const signed __int32 *)(v10 + 40), 0x11u)
    || (v15 = *(_QWORD *)(v10 + 24), !_bittest((const signed __int32 *)(v15 + 40), 0x11u)) )
  {
LABEL_8:
    v11 = pProcessDfbSurfacesInternal((struct SURFACE *)a1);
    if ( v8 )
    {
      EtwTraceGreLockReleaseSemaphore(L"DwmState", v8);
      v12 = GreGetCurrentThreadCrossSessionCheck();
      if ( v12 )
      {
        v13 = (*((_BYTE *)v12 + 15))-- == 1;
        if ( v13 )
          *(_QWORD *)v12 &= ~0x80uLL;
      }
      GreReleaseSemaphoreSharedInternal(v8);
    }
    return (__int64)v11;
  }
  if ( !a4 )
  {
    v24 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v15) + 24) + 704LL);
    if ( v24 && v24() >= 0 )
    {
      v26 = *(_QWORD *)(a1 + 144);
      v27 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v25) + 24) + 712LL);
      if ( v27 )
      {
        v20 = v27(v26);
        goto LABEL_28;
      }
LABEL_42:
      v21 = 0;
      goto LABEL_29;
    }
LABEL_36:
    if ( v8 )
    {
      EtwTraceGreLockReleaseSemaphore(L"DwmState", v8);
      v23 = GreGetCurrentThreadCrossSessionCheck();
      if ( v23 )
      {
        v13 = (*((_BYTE *)v23 + 15))-- == 1;
        if ( v13 )
          *(_QWORD *)v23 &= ~0x80uLL;
      }
      GreReleaseSemaphoreSharedInternal(v8);
    }
    return 0LL;
  }
  if ( v8 )
  {
    EtwTraceGreLockReleaseSemaphore(L"DwmState", v8);
    v16 = GreGetCurrentThreadCrossSessionCheck();
    if ( v16 )
    {
      v13 = (*((_BYTE *)v16 + 15))-- == 1;
      if ( v13 )
        *(_QWORD *)v16 &= ~0x80uLL;
    }
    GreReleaseSemaphoreSharedInternal(v8);
  }
  return 1LL;
}
