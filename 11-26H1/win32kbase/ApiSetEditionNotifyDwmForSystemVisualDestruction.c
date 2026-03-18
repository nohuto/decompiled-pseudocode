/*
 * XREFs of ApiSetEditionNotifyDwmForSystemVisualDestruction @ 0x1401B97EC
 * Callers:
 *     ?ClearSystemVisual@CHwndTargetProp@@QEAAHW4_HwndTargetType@@@Z @ 0x140156330 (-ClearSystemVisual@CHwndTargetProp@@QEAAHW4_HwndTargetType@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionNotifyDwmForSystemVisualDestruction(__int64 a1, unsigned int a2)
{
  unsigned int v4; // ebx
  int (*v5)(void); // rax
  __int64 v6; // rcx
  unsigned int (__fastcall *v7)(__int64, _QWORD); // rax

  v4 = 0;
  v5 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 6976LL);
  if ( !v5 || v5() < 0 )
    return 0LL;
  v7 = *(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6) + 48) + 6984LL);
  if ( v7 )
    return v7(a1, a2);
  return v4;
}
