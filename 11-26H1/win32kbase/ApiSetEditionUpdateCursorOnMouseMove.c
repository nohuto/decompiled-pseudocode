/*
 * XREFs of ApiSetEditionUpdateCursorOnMouseMove @ 0x14016E904
 * Callers:
 *     ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14009C52C (-UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAG.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionUpdateCursorOnMouseMove(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  int (*v5)(void); // rax
  __int64 v6; // rcx
  __int64 (__fastcall *v7)(__int64, __int64); // rax

  v4 = 0LL;
  v5 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 6520LL);
  if ( v5 )
  {
    if ( v5() >= 0 )
    {
      v7 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6) + 48) + 6528LL);
      if ( v7 )
        return v7(a1, a2);
    }
  }
  return v4;
}
