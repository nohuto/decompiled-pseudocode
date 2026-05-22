/*
 * XREFs of ?ForEachActiveProvider@MPCHolographicInputManager@@AEAAXV?$function@$$A6AXPEAUIMPCInputProviderBase@@@Z@std@@@Z @ 0x18000D3AC
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x18000CB74 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@.c)
 *     ?TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@Z @ 0x1800BB7B8 (-TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV-$ComPtr@UIMPCInputProviderBase@@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall MPCHolographicInputManager::ForEachActiveProvider(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 *v3; // rdi
  __int64 *v4; // rbp
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h]
  __int64 v11; // [rsp+50h] [rbp+18h]

  v10 = a2;
  v2 = a2;
  v3 = *(__int64 **)(a1 + 3600);
  v4 = *(__int64 **)(a1 + 3608);
  while ( v3 != v4 )
  {
    v7 = *v3;
    v11 = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v9 = v7;
    v8 = *(_QWORD *)(v2 + 56);
    if ( !v8 )
    {
      std::_Xbad_function_call();
      __debugbreak();
      JUMPOUT(0x18000D46CLL);
    }
    result = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 16LL))(v8, &v9);
    if ( v7 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    ++v3;
  }
  v5 = *(_QWORD *)(v2 + 56);
  if ( v5 )
  {
    LOBYTE(a2) = v5 != v2;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 32LL))(v5, a2);
    *(_QWORD *)(v2 + 56) = 0LL;
  }
  return result;
}
