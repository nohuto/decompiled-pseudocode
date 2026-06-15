/*
 * XREFs of ?GetMute@BluetoothMute@BluetoothControls@@UEAAJPEAH@Z @ 0x180075390
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetTargetedControl@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEBA?AV?$com_ptr_t@VIVolumeControlHandler@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18007547C (-GetTargetedControl@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControl.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BluetoothControls::BluetoothMute::GetMute(RTL_SRWLOCK *this, int *a2)
{
  RTL_SRWLOCK *v4; // rbx
  _QWORD *TargetedControl; // rax
  int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = this + 21;
  AcquireSRWLockExclusive(this + 21);
  TargetedControl = (_QWORD *)BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::GetTargetedControl(
                                this,
                                &v9);
  v6 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)*TargetedControl + 96LL))(*TargetedControl, a2);
  if ( v9 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28D,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
      (const char *)(unsigned int)v6);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    return (unsigned int)v6;
  }
  else
  {
    LODWORD(v9) = *a2;
    BYTE4(v9) = 1;
    this[22].Ptr = v9;
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    return 0LL;
  }
}
