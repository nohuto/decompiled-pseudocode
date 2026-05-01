/*
 * XREFs of CImmersiveApp::CImmersiveWindowCollection::ForEach__lambda_40cee9db11f6b344e17a9fb4653285fc___ @ 0x1802FB2E8
 * Callers:
 *     ?QueryService@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_QUERY_SERVICE_OPTION@@KAEBU_GUID@@1PEAPEAX@Z @ 0x1802FEDC0 (-QueryService@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_QUERY_SERVICE_OPTION@@KAEBU_GUID@@1PEA.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_DWORD *__fastcall CImmersiveApp::CImmersiveWindowCollection::ForEach__lambda_40cee9db11f6b344e17a9fb4653285fc___(
        __int64 a1,
        __int64 a2)
{
  _DWORD *result; // rax
  unsigned __int64 v3; // r15
  __int64 v4; // rbp
  char v7; // si
  int v8; // ecx
  __int64 v9; // r14
  int v10; // ecx
  __int64 v11; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = *(_QWORD *)(a1 + 168);
  v4 = 0LL;
  v7 = 1;
  if ( v3 )
  {
    while ( 1 )
    {
      if ( !v7 )
        return result;
      result = *(_DWORD **)(a1 + 160);
      v7 = 1;
      v8 = *(_DWORD *)(a2 + 16);
      v9 = *(_QWORD *)&result[2 * v4];
      if ( !v8 )
        break;
      v10 = v8 - 1;
      if ( !v10 )
        break;
      if ( v10 != 1 )
        goto LABEL_8;
      v11 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 32LL))(*(_QWORD *)&result[2 * v4]);
      result = (_DWORD *)CoreIsWindowServiceSupported(v11, a2 + 20);
      if ( (int)result >= 0 )
        break;
LABEL_9:
      if ( ++v4 >= v3 )
        return result;
    }
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(*(__int64 **)(a2 + 8), v9);
    result = *(_DWORD **)a2;
    **(_DWORD **)a2 = 0;
LABEL_8:
    v7 = 0;
    goto LABEL_9;
  }
  return result;
}
