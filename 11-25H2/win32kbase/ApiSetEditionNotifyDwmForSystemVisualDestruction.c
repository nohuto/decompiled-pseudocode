/*
 * XREFs of ApiSetEditionNotifyDwmForSystemVisualDestruction @ 0x14011586C
 * Callers:
 *     ?ClearSystemVisual@CHwndTargetProp@@QEAAHW4_HwndTargetType@@@Z @ 0x140115800 (-ClearSystemVisual@CHwndTargetProp@@QEAAHW4_HwndTargetType@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionNotifyDwmForSystemVisualDestruction(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned int v4; // ebx
  int (*v5)(void); // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int (__fastcall *v8)(__int64, _QWORD); // rax

  v2 = a2;
  v4 = 0;
  v5 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 7416LL);
  if ( !v5 || v5() < 0 )
    return 0LL;
  v8 = *(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v7, v6) + 48) + 7424LL);
  if ( v8 )
    return v8(a1, v2);
  return v4;
}
