/*
 * XREFs of ?OnDeviceCommandStatic@InputStateManager@@SAJPEAX0H@Z @ 0x1800CCCE0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall InputStateManager::OnDeviceCommandStatic(char *a1, char *a2)
{
  int v2; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a1 || !a2 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x345,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
      (const char *)0x8000FFFFLL,
      v4);
  v2 = (*(__int64 (__fastcall **)(char *, _QWORD, char *))(*((_QWORD *)a1 + 1) + 80LL))(
         a1 + 8,
         *(unsigned int *)a2,
         a2 + 8);
  if ( v2 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x34D,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
      (const char *)(unsigned int)v2,
      v4);
  return 0LL;
}
