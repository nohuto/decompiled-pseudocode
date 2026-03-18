/*
 * XREFs of ApiSetEditionAllocThreadPointerData @ 0x1401C15D4
 * Callers:
 *     ?AddThreadPointerHookData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@@Z @ 0x140147600 (-AddThreadPointerHookData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDES.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionAllocThreadPointerData(__int64 a1)
{
  __int64 v1; // rbx
  int (*v2)(void); // rax
  __int64 v3; // rcx
  __int64 (*v4)(void); // rax

  v1 = 0LL;
  v2 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 5984LL);
  if ( v2 )
  {
    if ( v2() >= 0 )
    {
      v4 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v3) + 48) + 5992LL);
      if ( v4 )
        return v4();
    }
  }
  return v1;
}
