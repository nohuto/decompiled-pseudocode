/*
 * XREFs of IsProcessHidRawInputSupported @ 0x140079B40
 * Callers:
 *     RIMCreateHidDesc @ 0x1400780EC (RIMCreateHidDesc.c)
 *     rimDoApiSetHidRawInputWorkItem @ 0x140079AE4 (rimDoApiSetHidRawInputWorkItem.c)
 *     ApiSetProcessHidRawInput @ 0x1400A1C74 (ApiSetProcessHidRawInput.c)
 *     RIMIDECreateHIDDesc @ 0x14020749C (RIMIDECreateHIDDesc.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IsProcessHidRawInputSupported(__int64 a1)
{
  __int64 (*v1)(void); // rax

  v1 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 4096LL);
  if ( v1 )
    return v1();
  else
    return 3221225659LL;
}
