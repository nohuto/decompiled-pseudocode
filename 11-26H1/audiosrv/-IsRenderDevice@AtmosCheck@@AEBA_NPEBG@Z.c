/*
 * XREFs of ?IsRenderDevice@AtmosCheck@@AEBA_NPEBG@Z @ 0x180156644
 * Callers:
 *     ?OnDeviceStateChanged@AtmosCheck@@UEAAJPEBGK@Z @ 0x1800875F0 (-OnDeviceStateChanged@AtmosCheck@@UEAAJPEBGK@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall AtmosCheck::IsRenderDevice(AtmosCheck *this, const unsigned __int16 *a2)
{
  bool v3; // r14
  __int64 v4; // rdi
  int (__fastcall *v5)(__int64, const unsigned __int16 *, _QWORD); // rbx
  int v7; // [rsp+50h] [rbp+30h] BYREF
  __int64 v8; // [rsp+60h] [rbp+40h] BYREF
  int (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // [rsp+68h] [rbp+48h] BYREF

  v3 = 1;
  v9 = 0LL;
  v4 = *((_QWORD *)this + 28);
  v5 = *(int (__fastcall **)(__int64, const unsigned __int16 *, _QWORD))(*(_QWORD *)v4 + 40LL);
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v9);
  if ( v5(v4, a2, &v9) >= 0 )
  {
    v8 = 0LL;
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v8);
    if ( (**v9)(v9, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5, &v8) >= 0 )
    {
      v7 = 0;
      if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v8 + 24LL))(v8, &v7) >= 0 )
        v3 = v7 != 1;
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v8);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v9);
  return v3;
}
