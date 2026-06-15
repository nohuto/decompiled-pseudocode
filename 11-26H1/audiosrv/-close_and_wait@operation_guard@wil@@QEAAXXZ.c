/*
 * XREFs of ?close_and_wait@operation_guard@wil@@QEAAXXZ @ 0x1800DF058
 * Callers:
 *     ??1operation_guard@wil@@QEAA@XZ @ 0x1800DC740 (--1operation_guard@wil@@QEAA@XZ.c)
 *     ?ProviderFinalRelease@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@UEAAXXZ @ 0x1800DD560 (-ProviderFinalRelease@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothContr.c)
 * Callees:
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800B70A4 (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::operation_guard::close_and_wait(wil::operation_guard *this)
{
  __int64 v2; // r8
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int CompareAddress; // [rsp+30h] [rbp+8h] BYREF

  *((_BYTE *)this + 8) = 1;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 1, 0xFFFFFFFF) > 1 )
  {
    while ( !*(_DWORD *)this )
    {
      CompareAddress = 0;
      if ( !WaitOnAddress(this, &CompareAddress, 4uLL, 0xFFFFFFFF) )
      {
        if ( GetLastError() != 1460 )
          wil::details::in1diag3::FailFast_Unexpected(retaddr, 3496LL, v2, v3);
        return;
      }
    }
  }
}
