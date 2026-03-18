/*
 * XREFs of IsProcessHidRawInputSupported @ 0x14002A95C
 * Callers:
 *     RIMIDECreateHIDDesc @ 0x14002A1AC (RIMIDECreateHIDDesc.c)
 *     ApiSetProcessHidRawInput @ 0x14013F2A0 (ApiSetProcessHidRawInput.c)
 *     RIMCreateHidDesc @ 0x1401DF458 (RIMCreateHidDesc.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 IsProcessHidRawInputSupported()
{
  __int64 (*v0)(void); // rax

  v0 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 4544LL);
  if ( v0 )
    return v0();
  else
    return 3221225659LL;
}
