/*
 * XREFs of _lambda_ad178af92e927515c26622316a1d075b_::operator() @ 0x1800C17C4
 * Callers:
 *     ?IsStaleToken@@YA_NPEAUIUnknown@@@Z @ 0x1800C207C (-IsStaleToken@@YA_NPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIAudioPumpDspResourceTrackerToken@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800AE644 (--1-$com_ptr_t@UIAudioPumpDspResourceTrackerToken@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall lambda_ad178af92e927515c26622316a1d075b_::operator()(_QWORD **a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  int v3; // eax
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(__int64, __int64 *); // rdi
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 v9; // [rsp+40h] [rbp+20h] BYREF
  __int64 v10; // [rsp+48h] [rbp+28h] BYREF
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp+30h] BYREF
  __int64 v12; // [rsp+58h] [rbp+38h] BYREF

  v12 = 0LL;
  v1 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))**a1)(
         **a1,
         &GUID_8c664f90_67ed_42d8_bb70_03a237d43466,
         &v12);
  v2 = v1;
  if ( v1 >= 0 )
  {
    (*(void (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v12 + 32LL))(
      v12,
      &v11);
    v9 = 0LL;
    v3 = (**v11)(v11, &GUID_fcd7e6c2_78c6_4a7a_a294_ed88ce25446a, &v9);
    v2 = v3;
    if ( v3 >= 0 )
    {
      v10 = 0LL;
      v4 = v9;
      v5 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 24LL);
      wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v10);
      v6 = v5(v4, &v10);
      v2 = v6;
      if ( v6 >= 0 )
      {
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v10);
        wil::com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>::~com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>(&v9);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v11);
        v2 = 0;
        goto LABEL_9;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7E,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiopumpdspmanager.cpp",
        (const char *)(unsigned int)v6);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v10);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x79,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiopumpdspmanager.cpp",
        (const char *)(unsigned int)v3);
    }
    wil::com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>::~com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>(&v9);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v11);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x73,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiopumpdspmanager.cpp",
      (const char *)(unsigned int)v1);
  }
LABEL_9:
  wil::com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>::~com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>(&v12);
  return v2;
}
