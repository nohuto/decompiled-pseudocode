/*
 * XREFs of ?_TogglePinned@CPinnedList@@IEAAJW4PINNEDLISTMODIFYCALLER@@@Z @ 0x18067366C
 * Callers:
 *     ?Invoke@CPinnedList@@UEAAJPEAUIShellItemArray@@PEAUIBindCtx@@@Z @ 0x18066CF70 (-Invoke@CPinnedList@@UEAAJPEAUIShellItemArray@@PEAUIBindCtx@@@Z.c)
 *     ?InvokeCommand@CPinnedList@@UEAAJPEAU_CMINVOKECOMMANDINFO@@@Z @ 0x18066D010 (-InvokeCommand@CPinnedList@@UEAAJPEAU_CMINVOKECOMMANDINFO@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPinnedList::_TogglePinned(__int64 a1, unsigned int a2)
{
  __int64 v2; // r11
  __int64 v3; // r10
  __int64 v4; // r9
  bool v5; // zf
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx

  v2 = *(_QWORD *)(a1 + 104);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = a2;
  v5 = *(_DWORD *)(a1 + 96) == 0;
  v6 = a1 + 24;
  if ( v5 )
  {
    v7 = v2;
    v8 = 0LL;
  }
  else
  {
    v7 = 0LL;
    v8 = v2;
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v3 + 128))(v6, v8, v7, v4);
}
