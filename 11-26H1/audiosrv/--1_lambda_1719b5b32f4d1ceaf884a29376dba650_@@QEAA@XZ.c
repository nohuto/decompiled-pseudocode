/*
 * XREFs of ??1_lambda_1719b5b32f4d1ceaf884a29376dba650_@@QEAA@XZ @ 0x1800DC5CC
 * Callers:
 *     _BluetoothControls::BluetoothControl_IVolumeControlHandler_BluetoothControls::BluetoothVolume_::RuntimeClassInitialize_::_1_::dtor$4 @ 0x180166EAE (_BluetoothControls--BluetoothControl_IVolumeControlHandler_BluetoothControls--BluetoothVolume_--.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall _lambda_1719b5b32f4d1ceaf884a29376dba650_::~_lambda_1719b5b32f4d1ceaf884a29376dba650_(
        _lambda_1719b5b32f4d1ceaf884a29376dba650_ *this)
{
  std::_Ref_count_base *v1; // rcx

  v1 = (std::_Ref_count_base *)*((_QWORD *)this + 2);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
