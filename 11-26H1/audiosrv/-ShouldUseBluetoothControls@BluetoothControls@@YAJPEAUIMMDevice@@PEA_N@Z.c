/*
 * XREFs of ?ShouldUseBluetoothControls@BluetoothControls@@YAJPEAUIMMDevice@@PEA_N@Z @ 0x1800848D4
 * Callers:
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x1800621EC (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall BluetoothControls::ShouldUseBluetoothControls(
        BluetoothControls *this,
        struct IMMDevice *a2,
        bool *a3)
{
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rax
  char v9; // al
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_QWORD *)this;
  v14 = 0LL;
  v5 = (*(__int64 (__fastcall **)(BluetoothControls *, _QWORD, __int64 *))(v4 + 32))(this, 0LL, &v14);
  v6 = v5;
  if ( v5 >= 0 )
  {
    *(_OWORD *)pvar = 0LL;
    v12 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v14 + 40LL))(
           v14,
           &PKEY_Endpoint_CustomResourceManager,
           pvar);
    v6 = v7;
    if ( v7 >= 0 )
    {
      if ( LOWORD(pvar[0]) != 72 )
        goto LABEL_12;
      v8 = *(_QWORD *)pvar[1] - BLUETOOTH_AUDIO_RESOURCE_MANAGER;
      if ( *(_QWORD *)pvar[1] == BLUETOOTH_AUDIO_RESOURCE_MANAGER )
        v8 = *((_QWORD *)pvar[1] + 1) + 0x12C28937D3A30176LL;
      if ( v8 )
LABEL_12:
        v9 = 0;
      else
        v9 = 1;
      LOBYTE(a2->lpVtbl) = v9;
      v6 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
        (const char *)(unsigned int)v7);
    }
    PropVariantClear(pvar);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v14);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
      (const char *)(unsigned int)v5);
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return v6;
}
