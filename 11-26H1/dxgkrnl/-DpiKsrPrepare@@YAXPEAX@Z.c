/*
 * XREFs of ?DpiKsrPrepare@@YAXPEAX@Z @ 0x140251BE4
 * Callers:
 *     DpiKsrCallback @ 0x140252220 (DpiKsrCallback.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DpiKsrPrepare(_DWORD *a1)
{
  bool v1; // zf

  v1 = a1[370] == 0;
  *((_BYTE *)a1 + 1465) = 1;
  *((_BYTE *)a1 + 1488) = v1;
  *((_BYTE *)DXGGLOBAL::GetGlobal() + 305636) = 1;
  a1[371] = 0;
  DxgkLogInternalTriageEvent(
    0LL,
    65537,
    -1,
    (__int64)L"KSR Prepare was called - will defer save until all VMs have quiesced",
    0LL,
    0LL,
    0LL,
    0LL,
    0LL);
}
