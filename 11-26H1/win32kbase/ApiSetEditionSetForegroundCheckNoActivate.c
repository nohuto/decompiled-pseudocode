/*
 * XREFs of ApiSetEditionSetForegroundCheckNoActivate @ 0x1401C02CC
 * Callers:
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@_N@Z @ 0x1400CC07C (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionSetForegroundCheckNoActivate(__int64 a1)
{
  unsigned int v2; // ebx
  int (*v3)(void); // rax
  __int64 v4; // rcx
  unsigned int (__fastcall *v5)(__int64); // rax

  v2 = 1;
  v3 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 4696LL);
  if ( v3 && v3() >= 0 )
  {
    v5 = *(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v4) + 48) + 4704LL);
    if ( v5 )
      return v5(a1);
    else
      return 0;
  }
  return v2;
}
