/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_532f1f640b749836e78f2398ba6696dd__&_::Run @ 0x1802995C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180165294 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_532f1f640b749836e78f2398ba6696dd____::Run(
        __int64 a1)
{
  unsigned int *v1; // rbx
  __int64 result; // rax
  void *v3; // rcx
  void *v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = (unsigned int *)(a1 + 16);
  v4 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v4);
  result = CMarshaledInterface::_Unmarshal(
             (CMarshaledInterface *)v1,
             &GUID_ea8a389b_437d_4791_aa14_5dca004bc92a,
             &v4,
             0);
  if ( (int)result >= 0 )
    result = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v4 + 24LL))(v4, v1[2]);
  v3 = v4;
  if ( v4 )
  {
    v4 = 0LL;
    return (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
