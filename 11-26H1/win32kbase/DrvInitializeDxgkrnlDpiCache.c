/*
 * XREFs of DrvInitializeDxgkrnlDpiCache @ 0x140183730
 * Callers:
 *     <none>
 * Callees:
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B700 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GrepAcquireLockValidate@$0BD@@@YAXXZ @ 0x140028330 (--$GrepAcquireLockValidate@$0BD@@@YAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002845C (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvInitializeDxgkrnlDpiCache(_DWORD *a1, __int64 a2)
{
  __int64 DxgkWin32kInterface; // rax
  unsigned int v4; // ebp
  __int64 v5; // rcx
  __int64 v6; // r14
  struct _ERESOURCE *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // r8d
  __int64 *i; // rdi
  __int64 v12; // rax
  __int64 v13; // rax

  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1, a2);
  v4 = (*(__int64 (**)(void))(DxgkWin32kInterface + 616))();
  v6 = *(_QWORD *)(W32GetSessionState(v5) + 88);
  if ( a1 )
  {
    *a1 = 0;
    v7 = *(struct _ERESOURCE **)v6;
    GreAcquireSemaphoreInternal(*(struct _ERESOURCE **)v6);
    GrepAcquireLockValidate<19>();
    for ( i = *(__int64 **)(v6 + 3952); i; i = (__int64 *)*i )
    {
      if ( (i[5] & 0x401) == 1 )
      {
        v12 = i[321];
        if ( v12 )
        {
          if ( v12 != -4 && (*(_DWORD *)(v12 + 160) & 0x800000) != 0 )
          {
            v13 = DxDdGetDxgkWin32kInterface(v9, v8);
            if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))(v13 + 624))(
                   i[321] + 240,
                   *(unsigned int *)(i[321] + 248)) != *((_DWORD *)i + 631)
              || (*((_DWORD *)i + 633) & 0x20) != 0
              && (v9 = (unsigned int)(96 * *((_DWORD *)i + 612) + 50),
                  v8 = (unsigned int)v9 / 0x64,
                  (_DWORD)v8 != *(unsigned __int16 *)(v6 + 1168)) )
            {
              *a1 = 1;
              break;
            }
          }
        }
      }
    }
    if ( v7 )
      GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        (__int64)v7,
        v10);
  }
  return v4;
}
