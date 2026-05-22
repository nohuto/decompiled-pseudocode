/*
 * XREFs of ??0MPCHolographicInputManager@@AEAA@XZ @ 0x180056C50
 * Callers:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18000DD50 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x180056F88 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?Create@MPCManager@@SAXXZ @ 0x1800894DC (-Create@MPCManager@@SAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterFor3DHitTestingAvailabilityChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x1800912C4 (-RegisterFor3DHitTestingAvailabilityChanged@MPC3DStateHelper@@QEAAXV-$function@$$A6AX_N@Z@std@@P.c)
 *     ??$?0P8MPCHolographicInputManager@@EAAX_N@ZPEAV0@AEBU?$_Ph@$00@std@@@?$_Compressed_pair@P8MPCHolographicInputManager@@EAAX_N@ZV?$tuple@PEAVMPCHolographicInputManager@@U?$_Ph@$00@std@@@std@@$0A@@std@@QEAA@U_One_then_variadic_args_t@1@$$QEAP8MPCHolographicInputManager@@EAAX_N@Z$$QEAPEAV3@AEBU?$_Ph@$00@1@@Z @ 0x1800943C0 (--$-0P8MPCHolographicInputManager@@EAAX_N@ZPEAV0@AEBU-$_Ph@$00@std@@@-$_Compressed_pair@P8MPCHol.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     ?OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z @ 0x1800BB190 (-OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=17
MPCHolographicInputManager *__fastcall MPCHolographicInputManager::MPCHolographicInputManager(
        MPCHolographicInputManager *this)
{
  char *v2; // rbx
  int v3; // eax
  __int64 v4; // rdx
  PSRWLOCK v5; // r11
  struct MPC3DStateHelper *Instance; // rdi
  char v7; // bl
  int v9; // [rsp+20h] [rbp-39h]
  __int64 v10; // [rsp+30h] [rbp-29h] BYREF
  char v11; // [rsp+38h] [rbp-21h]
  __int64 v12; // [rsp+40h] [rbp-19h]
  _QWORD v13[2]; // [rsp+48h] [rbp-11h] BYREF
  char v14; // [rsp+58h] [rbp-1h]
  __int64 v15; // [rsp+60h] [rbp+7h]
  _QWORD *v16; // [rsp+80h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  MPCHolographicInputManager *v18; // [rsp+C8h] [rbp+6Fh] BYREF
  void (__fastcall *v19)(MPCHolographicInputManager *__hidden, bool); // [rsp+D0h] [rbp+77h] BYREF

  v2 = (char *)this + 264;
  memset_0((char *)this + 264, 0, 0xBC0uLL);
  *((_DWORD *)v2 + 6) = 3008;
  *((_QWORD *)this + 410) = 0LL;
  *((_QWORD *)this + 411) = 0LL;
  *((_QWORD *)this + 412) = 0LL;
  *((_QWORD *)this + 413) = 0LL;
  *((_QWORD *)this + 414) = 0LL;
  *((_QWORD *)this + 415) = 0LL;
  *((_QWORD *)this + 416) = 0LL;
  *((_QWORD *)this + 417) = 0LL;
  *((_QWORD *)this + 418) = 0LL;
  *((_QWORD *)this + 419) = 0LL;
  *((_QWORD *)this + 420) = 512LL;
  *((_BYTE *)this + 3368) = 0;
  *((_DWORD *)this + 843) = 0;
  *((_QWORD *)this + 422) = 0LL;
  *((_QWORD *)this + 423) = 0LL;
  *((_QWORD *)this + 424) = 0LL;
  memset_0((char *)this + 3400, 0, 0xC8uLL);
  *((_QWORD *)this + 450) = 0LL;
  *((_QWORD *)this + 451) = 0LL;
  *((_QWORD *)this + 452) = 0LL;
  *((_QWORD *)this + 453) = 0LL;
  *((_QWORD *)this + 454) = 0LL;
  *((_QWORD *)this + 455) = 0LL;
  *((_DWORD *)this + 912) = 1;
  *((_QWORD *)this + 457) = 0LL;
  *((_DWORD *)this + 916) = 0;
  *((_DWORD *)this + 917) = 0;
  *((_BYTE *)this + 3672) = 0;
  *(_QWORD *)((char *)this + 3676) = 0LL;
  *((_DWORD *)this + 921) = 50;
  *((_DWORD *)this + 922) = 50;
  *((_QWORD *)this + 462) = 0LL;
  *((_QWORD *)this + 463) = 0LL;
  *((_QWORD *)this + 464) = 0LL;
  *((_QWORD *)this + 465) = 0LL;
  *((_QWORD *)this + 466) = 0LL;
  *((_QWORD *)this + 467) = 0LL;
  MPCManager::Create();
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 453);
  v3 = CoreUICreate((char *)this + 3624);
  if ( v3 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x29,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v3,
      v9);
  *((_BYTE *)this + 3272) = 0;
  MPC3DStateHelper::GetInstance();
  v18 = this;
  v19 = MPCHolographicInputManager::OnHitTestingStateChanged;
  std::_Compressed_pair<void (MPCHolographicInputManager::*)(bool),std::tuple<MPCHolographicInputManager *,std::_Ph<1>>,0>::_Compressed_pair<void (MPCHolographicInputManager::*)(bool),std::tuple<MPCHolographicInputManager *,std::_Ph<1>>,0>(
    &v10,
    v4,
    &v19,
    &v18);
  v13[0] = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (MPCHolographicInputManager::*)(bool),MPCHolographicInputManager *,std::_Ph<1> const &>,void,bool>::`vftable';
  v13[1] = v10;
  v14 = v11;
  v15 = v12;
  v16 = v13;
  MPC3DStateHelper::RegisterFor3DHitTestingAvailabilityChanged(v5);
  Instance = MPC3DStateHelper::GetInstance();
  AcquireSRWLockShared((PSRWLOCK)Instance);
  v7 = *((_BYTE *)Instance + 21);
  ReleaseSRWLockShared((PSRWLOCK)Instance);
  if ( v7 )
    MPCHolographicInputManager::OnHitTestingStateChanged(this, 1);
  return this;
}
