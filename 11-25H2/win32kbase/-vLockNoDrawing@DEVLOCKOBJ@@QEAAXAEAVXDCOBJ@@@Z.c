/*
 * XREFs of ?vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x140090490
 * Callers:
 *     GreGetNearestColor @ 0x14008EEF0 (GreGetNearestColor.c)
 * Callees:
 *     ??$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001B6B0 (--$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400458F8 (--$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14008675C (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall DEVLOCKOBJ::vLockNoDrawing(DEVLOCKOBJ *this, struct XDCOBJ *a2)
{
  struct _ERESOURCE **v4; // rdi
  int v5; // r8d
  struct _ERESOURCE *v6; // rdx
  __int64 v7; // rcx
  int (*v8)(void); // rax
  void (__fastcall *v9)(DEVLOCKOBJ *, _QWORD); // rax

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 1;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 48LL) + 40LL) & 1) != 0 )
  {
    v4 = (struct _ERESOURCE **)*((_QWORD *)a2 + 2);
    *((_QWORD *)this + 1) = *v4 + 6;
    GreAcquireSemaphoreShared<1,>(v4);
    v5 = *((_DWORD *)this + 6) | 8;
    *((_DWORD *)this + 6) = v5;
    v6 = *(struct _ERESOURCE **)(*(_QWORD *)a2 + 64LL);
    *(_QWORD *)this = v6;
    v7 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
    *((_QWORD *)this + 2) = v7;
    if ( v6 == &(*v4)[11] )
    {
      *((_DWORD *)this + 6) = v5 | 0x100000;
      GreAcquireSemaphore<2,>(v4);
    }
    else
    {
      GreAcquireSemaphore<8,PDEVOBJ>(v7);
    }
  }
  v8 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 768LL);
  if ( v8 && v8() >= 0 )
  {
    v9 = *(void (__fastcall **)(DEVLOCKOBJ *, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 776LL);
    if ( v9 )
      v9(this, 0LL);
  }
}
