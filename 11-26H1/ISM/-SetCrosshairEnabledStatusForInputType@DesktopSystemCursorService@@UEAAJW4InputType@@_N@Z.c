/*
 * XREFs of ?SetCrosshairEnabledStatusForInputType@DesktopSystemCursorService@@UEAAJW4InputType@@_N@Z @ 0x1800FD830
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DesktopSystemCursorService::SetCrosshairEnabledStatusForInputType(
        __int64 a1,
        __int64 a2,
        char a3,
        const char *a4)
{
  __int64 v4; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (_DWORD)a2 != 2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xD0,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\desktops"
           "ystemcursorservice.cpp",
      a4);
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 )
  {
    LOBYTE(a2) = a3;
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v4 + 40) + 40LL))(*(_QWORD *)(v4 + 40), a2);
  }
  return 0LL;
}
