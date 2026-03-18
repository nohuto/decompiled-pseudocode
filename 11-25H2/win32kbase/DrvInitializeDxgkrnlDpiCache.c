/*
 * XREFs of DrvInitializeDxgkrnlDpiCache @ 0x14014E210
 * Callers:
 *     <none>
 * Callees:
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001A7F0 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140046C24 (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GrepAcquireLockValidate@$0BD@@@YAXXZ @ 0x14004E320 (--$GrepAcquireLockValidate@$0BD@@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvInitializeDxgkrnlDpiCache(_DWORD *a1)
{
  __int64 DxgkWin32kInterface; // rax
  unsigned int v3; // ebp
  __int64 v4; // rcx
  __int64 v5; // r14
  struct _ERESOURCE *v6; // rbx
  __int64 *i; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax

  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1);
  v3 = (*(__int64 (**)(void))(DxgkWin32kInterface + 616))();
  v5 = *(_QWORD *)(W32GetSessionState(v4) + 88);
  if ( a1 )
  {
    *a1 = 0;
    v6 = *(struct _ERESOURCE **)v5;
    GreAcquireSemaphoreInternal(*(struct _ERESOURCE **)v5);
    GrepAcquireLockValidate<19>();
    for ( i = *(__int64 **)(v5 + 3848); i; i = (__int64 *)*i )
    {
      if ( (i[5] & 0x401) == 1 )
      {
        v8 = i[321];
        if ( ((v8 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 && (*(_DWORD *)(v8 + 160) & 0x800000) != 0 )
        {
          v9 = DxDdGetDxgkWin32kInterface(v8);
          if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))(v9 + 624))(
                 i[321] + 240,
                 *(unsigned int *)(i[321] + 248)) != *((_DWORD *)i + 631)
            || (*((_DWORD *)i + 633) & 0x20) != 0
            && (96 * *((_DWORD *)i + 612) + 50) / 0x64u != *(unsigned __int16 *)(v5 + 1080) )
          {
            *a1 = 1;
            break;
          }
        }
      }
    }
    if ( v6 )
      GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        (__int64)v6);
  }
  return v3;
}
