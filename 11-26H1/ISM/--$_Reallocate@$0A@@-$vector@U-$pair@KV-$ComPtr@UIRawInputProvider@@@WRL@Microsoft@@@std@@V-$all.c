/*
 * XREFs of ??$_Reallocate@$0A@@?$vector@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@2@@std@@AEAAXAEA_K@Z @ 0x1800CC880
 * Callers:
 *     ?SendDeviceCommand@InputStateManager@@UEAAJKPEAUDeviceCommandMessage@@@Z @ 0x180075520 (-SendDeviceCommand@InputStateManager@@UEAAJKPEAUDeviceCommandMessage@@@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x18002DF80 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAU?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@2@@std@@YAPEAU?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@0@QEAU10@0PEAU10@AEAV?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@0@@Z @ 0x18008B8E8 (--$_Uninitialized_move@PEAU-$pair@KV-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V-$alloca.c)
 *     ?_Change_array@?$vector@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@2@@std@@AEAAXQEAU?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@2@_K1@Z @ 0x18008E9C8 (-_Change_array@-$vector@U-$pair@KV-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V-$allocato.c)
 *     ??1_Reallocation_guard@?$vector@U?$pair@KPEAVInputRedirectionTarget@@@std@@V?$allocator@U?$pair@KPEAVInputRedirectionTarget@@@std@@@2@@std@@QEAA@XZ @ 0x1800CCB50 (--1_Reallocation_guard@-$vector@U-$pair@KPEAVInputRedirectionTarget@@@std@@V-$allocator@U-$pair@.c)
 */

__int64 __fastcall std::vector<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>::_Reallocate<0>(
        char **a1,
        unsigned __int64 *a2)
{
  __int64 v4; // rdi
  unsigned __int64 size_of; // rax
  void *v6; // rax
  char *v7; // rdx
  __int64 v8; // rbx
  char *v9; // rcx
  __int64 v10; // r9
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = (a1[1] - *a1) >> 4;
  size_of = std::_Get_size_of_n<16>(*a2);
  v6 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v7 = a1[1];
  v8 = (__int64)v6;
  v12[2] = *a2;
  v9 = *a1;
  v12[0] = a1;
  std::_Uninitialized_move<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>> *,std::allocator<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>>(
    v9,
    v7,
    (__int64)v6);
  v10 = *a2;
  v12[1] = 0LL;
  std::vector<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>::_Change_array(
    (__int64)a1,
    v8,
    v4,
    v10);
  return std::vector<std::pair<unsigned long,InputRedirectionTarget *>>::_Reallocation_guard::~_Reallocation_guard(v12);
}
