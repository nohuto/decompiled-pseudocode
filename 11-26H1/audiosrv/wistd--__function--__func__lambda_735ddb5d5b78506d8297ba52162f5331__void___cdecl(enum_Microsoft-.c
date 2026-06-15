/*
 * XREFs of wistd::__function::__func__lambda_735ddb5d5b78506d8297ba52162f5331__void___cdecl(enum_Microsoft::Bluetooth::Audio::Internal::BluetoothLEAudioSupportedState_const_&)_::operator() @ 0x1800EAFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x18001BB70 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ @ 0x180040624 (-GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ.c)
 */

__int64 __fastcall wistd::__function::__func__lambda_735ddb5d5b78506d8297ba52162f5331__void___cdecl_enum_Microsoft::Bluetooth::Audio::Internal::BluetoothLEAudioSupportedState_const____::operator()(
        __int64 a1,
        __int16 *a2)
{
  struct CSerialWorkQueue *SerialWorkQueue; // rax
  int v6; // [rsp+2Ah] [rbp-4Eh]
  __int16 v7; // [rsp+2Eh] [rbp-4Ah]
  __int64 v8[2]; // [rsp+30h] [rbp-48h] BYREF
  __int16 v9; // [rsp+40h] [rbp-38h]
  int v10; // [rsp+42h] [rbp-36h]
  __int16 v11; // [rsp+46h] [rbp-32h]
  __int64 *v12; // [rsp+68h] [rbp-10h]

  SerialWorkQueue = GetSerialWorkQueue();
  v8[0] = (__int64)off_180176298;
  v8[1] = *(_QWORD *)(a1 + 8);
  v9 = *a2;
  v10 = v6;
  v11 = v7;
  v12 = v8;
  return CSerialWorkQueue::QueueWorkItem((__int64)SerialWorkQueue, v8);
}
