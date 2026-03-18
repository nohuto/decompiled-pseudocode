/*
 * XREFs of ?Initialize@?$CTypedConstantBuffer@M@@QEAAJPEAVCD3DDevice@@W4D3D11_USAGE@@@Z @ 0x18011A74C
 * Callers:
 *     ?Init@CSharedDirect3DResources@CDrawListEntryBatch@@AEAAJPEAVCD3DDevice@@@Z @ 0x18011A590 (-Init@CSharedDirect3DResources@CDrawListEntryBatch@@AEAAJPEAVCD3DDevice@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180069080 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTypedConstantBuffer<float>::Initialize(__int64 *a1, __int64 a2)
{
  unsigned int v2; // edi
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  _QWORD v9[2]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v10[3]; // [rsp+40h] [rbp-28h] BYREF

  v2 = 0;
  if ( !*a1 )
  {
    v10[0] = 16LL;
    v9[0] = a1 + 2;
    v10[1] = 4LL;
    v10[2] = 0LL;
    v9[1] = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1);
    *a1 = 0LL;
    if ( *(_DWORD *)(a2 + 1124) )
    {
      v7 = -2003304307;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304307, 0x6C2u, 0LL);
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, _QWORD *, __int64 *))(**(_QWORD **)(a2 + 544) + 24LL))(
             *(_QWORD *)(a2 + 544),
             v10,
             v9,
             a1);
      v7 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x6C6u, 0LL);
    }
    v8 = CD3DDevice::TranslateDXGIorD3DErrorInContext(a2, v7, 0);
    v2 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x44u, 0LL);
  }
  return v2;
}
