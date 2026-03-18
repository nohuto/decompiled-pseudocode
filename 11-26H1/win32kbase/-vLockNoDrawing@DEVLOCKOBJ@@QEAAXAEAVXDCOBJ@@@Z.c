/*
 * XREFs of ?vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x14003B480
 * Callers:
 *     GreGetNearestColor @ 0x14003AA70 (GreGetNearestColor.c)
 * Callees:
 *     ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001B1F0 (--$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14003B5D4 (--$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400C66D4 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall DEVLOCKOBJ::vLockNoDrawing(DEVLOCKOBJ *this, struct XDCOBJ *a2, int a3)
{
  __int64 v5; // rcx
  _DWORD *v6; // rdi
  int v7; // r8d
  __int64 v8; // rdx
  __int64 v9; // rcx
  int (*v10)(void); // rax
  __int64 v11; // rcx
  void (__fastcall *v12)(DEVLOCKOBJ *, _QWORD); // rax

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 1;
  v5 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  if ( (*(_DWORD *)(v5 + 40) & 1) != 0 )
  {
    v6 = (_DWORD *)*((_QWORD *)a2 + 2);
    *((_QWORD *)this + 1) = *(_QWORD *)v6 + 624LL;
    GreAcquireSemaphoreShared<1,>(v6, (__int64)a2, a3);
    v7 = *((_DWORD *)this + 6) | 8;
    *((_DWORD *)this + 6) = v7;
    v8 = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
    *(_QWORD *)this = v8;
    v9 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
    *((_QWORD *)this + 2) = v9;
    if ( v8 == *(_QWORD *)v6 + 1144LL )
    {
      *((_DWORD *)this + 6) = v7 | 0x100000;
      GreAcquireSemaphore<2,>(v6);
    }
    else
    {
      GreAcquireSemaphore<8,PDEVOBJ>(v9);
    }
  }
  v10 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5) + 24) + 768LL);
  if ( v10 && v10() >= 0 )
  {
    v12 = *(void (__fastcall **)(DEVLOCKOBJ *, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v11) + 24) + 776LL);
    if ( v12 )
      v12(this, 0LL);
  }
}
