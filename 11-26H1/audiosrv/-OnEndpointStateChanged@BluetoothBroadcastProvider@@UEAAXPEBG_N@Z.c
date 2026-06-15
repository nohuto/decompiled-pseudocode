/*
 * XREFs of ?OnEndpointStateChanged@BluetoothBroadcastProvider@@UEAAXPEBG_N@Z @ 0x1800EC690
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x18001BB70 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ @ 0x180040624 (-GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ.c)
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x18005A368 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_shared@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBG@std@@YA?AV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEAPEBG@Z @ 0x1800C3CDC (--$make_shared@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAPEBG@std@@YA-AV-.c)
 *     ??0?$com_ptr_t@VBluetoothBroadcastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVBluetoothBroadcastProvider@@@Z @ 0x1800E9760 (--0-$com_ptr_t@VBluetoothBroadcastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVBluetooth.c)
 *     _lambda_2123d8e56b275a4b963be45688bccc2c_::__lambda_2123d8e56b275a4b963be45688bccc2c_ @ 0x1800E9F28 (_lambda_2123d8e56b275a4b963be45688bccc2c_--__lambda_2123d8e56b275a4b963be45688bccc2c_.c)
 *     ??1?$com_ptr_t@VBluetoothBroadcastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800E9FA0 (--1-$com_ptr_t@VBluetoothBroadcastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall BluetoothBroadcastProvider::OnEndpointStateChanged(
        BluetoothBroadcastProvider *this,
        const unsigned __int16 *a2,
        char a3)
{
  volatile int *v5; // rax
  __int64 v6; // r9
  int v7; // eax
  const char *v8; // r9
  int v9[2]; // [rsp+20h] [rbp-88h] BYREF
  __int128 v10; // [rsp+28h] [rbp-80h] BYREF
  char v11; // [rsp+38h] [rbp-70h]
  volatile int *v12; // [rsp+40h] [rbp-68h] BYREF
  __int64 v13; // [rsp+48h] [rbp-60h] BYREF
  std::_Ref_count_base *v14; // [rsp+50h] [rbp-58h]
  __int64 v15[2]; // [rsp+58h] [rbp-50h] BYREF
  __int128 v16; // [rsp+68h] [rbp-40h]
  char v17; // [rsp+78h] [rbp-30h]
  volatile int *v18; // [rsp+80h] [rbp-28h]
  __int64 *v19; // [rsp+90h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  _WORD *v21; // [rsp+B8h] [rbp+10h] BYREF
  volatile int *v22; // [rsp+C8h] [rbp+20h] BYREF

  v21 = a2;
  try
  {
    std::make_shared<std::wstring,unsigned short const * &>(&v13, &v21);
    wil::com_ptr_t<BluetoothBroadcastProvider,wil::err_returncode_policy>::com_ptr_t<BluetoothBroadcastProvider,wil::err_returncode_policy>(
      &v22,
      (volatile int *)this);
    GetSerialWorkQueue();
    *(_QWORD *)v9 = this;
    std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(&v10, &v13);
    v11 = a3;
    wil::com_ptr_t<BluetoothBroadcastProvider,wil::err_returncode_policy>::com_ptr_t<BluetoothBroadcastProvider,wil::err_returncode_policy>(
      &v12,
      v22);
    v15[0] = (__int64)off_180176268;
    v15[1] = (__int64)this;
    v16 = v10;
    v10 = 0LL;
    v17 = v11;
    v5 = v12;
    v12 = 0LL;
    v18 = v5;
    v19 = v15;
    v7 = CSerialWorkQueue::QueueWorkItem(v6, v15);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        272LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
        (const char *)(unsigned int)v7);
    lambda_2123d8e56b275a4b963be45688bccc2c_::__lambda_2123d8e56b275a4b963be45688bccc2c_((__int64)v9);
    wil::com_ptr_t<BluetoothBroadcastProvider,wil::err_returncode_policy>::~com_ptr_t<BluetoothBroadcastProvider,wil::err_returncode_policy>((__int64 *)&v22);
    if ( v14 )
      std::_Ref_count_base::_Decref(v14);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x112,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
      v8);
  }
}
