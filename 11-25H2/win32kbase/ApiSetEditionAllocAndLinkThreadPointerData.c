/*
 * XREFs of ApiSetEditionAllocAndLinkThreadPointerData @ 0x140194B54
 * Callers:
 *     ?AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H@Z @ 0x1401FA0F0 (-AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionAllocAndLinkThreadPointerData(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  int (*v4)(void); // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 (__fastcall *v7)(__int64); // rax

  v3 = 0LL;
  v4 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 6408LL);
  if ( v4 )
  {
    if ( v4() >= 0 )
    {
      v7 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6, v5) + 48) + 6416LL);
      if ( v7 )
        return v7(a1);
    }
  }
  return v3;
}
