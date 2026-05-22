/*
 * XREFs of ?SetCrosshairPropertiesForInputType@DesktopSystemCursorService@@UEAAJW4InputType@@K@Z @ 0x1800FD880
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DesktopSystemCursorService::SetCrosshairPropertiesForInputType(
        __int64 a1,
        int a2,
        unsigned int a3,
        const char *a4)
{
  __int64 v4; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 != 2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xDC,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\desktops"
           "ystemcursorservice.cpp",
      a4);
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v4 + 40) + 32LL))(*(_QWORD *)(v4 + 40), a3);
  return 0LL;
}
