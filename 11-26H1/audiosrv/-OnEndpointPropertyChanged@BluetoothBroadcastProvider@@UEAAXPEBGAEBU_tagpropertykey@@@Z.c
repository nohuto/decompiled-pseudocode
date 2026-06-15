/*
 * XREFs of ?OnEndpointPropertyChanged@BluetoothBroadcastProvider@@UEAAXPEBGAEBU_tagpropertykey@@@Z @ 0x1800EC560
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x18001BB70 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ @ 0x180040624 (-GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ.c)
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x18005A368 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 *     ??8@YAHAEBU_tagpropertykey@@0@Z @ 0x180063CF0 (--8@YAHAEBU_tagpropertykey@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_shared@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBG@std@@YA?AV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEAPEBG@Z @ 0x1800C3CDC (--$make_shared@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAPEBG@std@@YA-AV-.c)
 *     ??0?$com_ptr_t@VBluetoothBroadcastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVBluetoothBroadcastProvider@@@Z @ 0x1800E9760 (--0-$com_ptr_t@VBluetoothBroadcastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVBluetooth.c)
 *     _lambda_891b0775d4eadc0ca5c992c8f07cc507_::__lambda_891b0775d4eadc0ca5c992c8f07cc507_ @ 0x1800E9F58 (_lambda_891b0775d4eadc0ca5c992c8f07cc507_--__lambda_891b0775d4eadc0ca5c992c8f07cc507_.c)
 *     ??1?$com_ptr_t@VBluetoothBroadcastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800E9FA0 (--1-$com_ptr_t@VBluetoothBroadcastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall BluetoothBroadcastProvider::OnEndpointPropertyChanged(
        BluetoothBroadcastProvider *this,
        const unsigned __int16 *a2,
        const struct _tagpropertykey *a3)
{
  volatile int *v4; // rax
  __int64 v5; // r9
  int v6; // eax
  const char *v7; // r9
  __int64 v8; // [rsp+28h] [rbp-70h] BYREF
  std::_Ref_count_base *v9; // [rsp+30h] [rbp-68h]
  volatile int *v10; // [rsp+38h] [rbp-60h] BYREF
  __int128 v11; // [rsp+40h] [rbp-58h] BYREF
  __int64 v12[2]; // [rsp+50h] [rbp-48h] BYREF
  __int128 v13; // [rsp+60h] [rbp-38h]
  __int64 *v14; // [rsp+88h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  _WORD *v16; // [rsp+A8h] [rbp+10h] BYREF
  volatile int *v17; // [rsp+B8h] [rbp+20h] BYREF

  v16 = a2;
  if ( (unsigned int)operator==((__int64)a3, (__int64)&PKEY_Multicast_Child_SessionDescriptor) )
  {
    try
    {
      std::make_shared<std::wstring,unsigned short const * &>(&v8, &v16);
      wil::com_ptr_t<BluetoothBroadcastProvider,wil::err_returncode_policy>::com_ptr_t<BluetoothBroadcastProvider,wil::err_returncode_policy>(
        &v17,
        (volatile int *)this);
      GetSerialWorkQueue();
      wil::com_ptr_t<BluetoothBroadcastProvider,wil::err_returncode_policy>::com_ptr_t<BluetoothBroadcastProvider,wil::err_returncode_policy>(
        &v10,
        v17);
      std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(&v11, &v8);
      v12[0] = (__int64)off_1801762C8;
      v4 = v10;
      v10 = 0LL;
      v12[1] = (__int64)v4;
      v13 = v11;
      v11 = 0LL;
      v14 = v12;
      v6 = CSerialWorkQueue::QueueWorkItem(v5, v12);
      if ( v6 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          194LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
          (const char *)(unsigned int)v6);
      lambda_891b0775d4eadc0ca5c992c8f07cc507_::__lambda_891b0775d4eadc0ca5c992c8f07cc507_((__int64)&v10);
      wil::com_ptr_t<BluetoothBroadcastProvider,wil::err_returncode_policy>::~com_ptr_t<BluetoothBroadcastProvider,wil::err_returncode_policy>((__int64 *)&v17);
      if ( v9 )
        std::_Ref_count_base::_Decref(v9);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0xC5,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
        v7);
    }
  }
}
