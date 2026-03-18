/*
 * XREFs of ApiSetEditionAllocAndLinkThreadPointerData @ 0x1401C057C
 * Callers:
 *     ?AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H@Z @ 0x14004DC00 (-AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionAllocAndLinkThreadPointerData(__int64 a1)
{
  __int64 v2; // rbx
  int (*v3)(void); // rax
  __int64 v4; // rcx
  __int64 (__fastcall *v5)(__int64); // rax

  v2 = 0LL;
  v3 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 5968LL);
  if ( v3 )
  {
    if ( v3() >= 0 )
    {
      v5 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v4) + 48) + 5976LL);
      if ( v5 )
        return v5(a1);
    }
  }
  return v2;
}
