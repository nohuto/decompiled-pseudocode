/*
 * XREFs of ApiSetEditionNotifyDwmForSystemVisualCreation @ 0x1401624D8
 * Callers:
 *     ?SetSystemVisual@CHwndTargetProp@@QEAAJW4_HwndTargetType@@PEAUCompositionObject@@@Z @ 0x140162460 (-SetSystemVisual@CHwndTargetProp@@QEAAJW4_HwndTargetType@@PEAUCompositionObject@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionNotifyDwmForSystemVisualCreation(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v6; // ebx
  int (*v7)(void); // rax
  __int64 v8; // rcx
  unsigned int (__fastcall *v9)(__int64, _QWORD, __int64); // rax

  v6 = 0;
  v7 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 6960LL);
  if ( !v7 || v7() < 0 )
    return 0LL;
  v9 = *(unsigned int (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v8) + 48)
                                                               + 6968LL);
  if ( v9 )
    return v9(a1, a2, a3);
  return v6;
}
