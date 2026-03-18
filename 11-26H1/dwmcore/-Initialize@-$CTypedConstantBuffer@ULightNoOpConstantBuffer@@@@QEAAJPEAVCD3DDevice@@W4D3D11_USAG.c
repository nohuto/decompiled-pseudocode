/*
 * XREFs of ?Initialize@?$CTypedConstantBuffer@ULightNoOpConstantBuffer@@@@QEAAJPEAVCD3DDevice@@W4D3D11_USAGE@@@Z @ 0x18011AAA0
 * Callers:
 *     ?Init@CSharedDirect3DResources@CDrawListEntryBatch@@AEAAJPEAVCD3DDevice@@@Z @ 0x18011A590 (-Init@CSharedDirect3DResources@CDrawListEntryBatch@@AEAAJPEAVCD3DDevice@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180069080 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTypedConstantBuffer<LightNoOpConstantBuffer>::Initialize(__int64 *a1, __int64 a2)
{
  unsigned int v2; // edi
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  _QWORD v9[2]; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v10[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v11; // [rsp+48h] [rbp-20h]
  __int64 v12; // [rsp+50h] [rbp-18h]

  v2 = 0;
  if ( !*a1 )
  {
    v10[0] = 272;
    v10[1] = 1;
    v9[0] = a1 + 2;
    v11 = 4LL;
    v12 = 0LL;
    v9[1] = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1);
    *a1 = 0LL;
    if ( *(_DWORD *)(a2 + 1124) )
    {
      v6 = -2003304307;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304307, 0x6C2u, 0LL);
    }
    else
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD *, __int64 *))(**(_QWORD **)(a2 + 544) + 24LL))(
             *(_QWORD *)(a2 + 544),
             v10,
             v9,
             a1);
      v6 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x6C6u, 0LL);
    }
    v7 = CD3DDevice::TranslateDXGIorD3DErrorInContext(a2, v6, 0);
    v2 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x44u, 0LL);
  }
  return v2;
}
