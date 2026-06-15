/*
 * XREFs of ?CChannels@BluetoothVolume@BluetoothControls@@UEBAIXZ @ 0x180079080
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall BluetoothControls::BluetoothVolume::CChannels(BluetoothControls::BluetoothVolume *this)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx

  v1 = *((_QWORD *)this + 15);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 40LL))(v1);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return v2;
}
