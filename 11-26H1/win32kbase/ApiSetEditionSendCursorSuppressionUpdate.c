/*
 * XREFs of ApiSetEditionSendCursorSuppressionUpdate @ 0x140227ED8
 * Callers:
 *     ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1401A26D4 (-GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1401A3748 (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionSendCursorSuppressionUpdate(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int v2; // ebx
  int (*v3)(void); // rax
  __int64 v4; // rcx
  unsigned int (__fastcall *v5)(_QWORD); // rax

  v1 = a1;
  v2 = 0;
  v3 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 6112LL);
  if ( v3 )
  {
    if ( v3() >= 0 )
    {
      v5 = *(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v4) + 48) + 6120LL);
      if ( v5 )
        return v5(v1);
    }
  }
  return v2;
}
