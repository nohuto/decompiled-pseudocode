/*
 * XREFs of ?EnsureByteSpace@CD3DDynamicAppendBuffer@@QEAAJI_N@Z @ 0x18011AC50
 * Callers:
 *     ?EmitGeometry@CWarpRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x180066020 (-EmitGeometry@CWarpRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchComma.c)
 *     ?EmitGeometry@CMegaRectBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@@Z @ 0x180067310 (-EmitGeometry@CMegaRectBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@@Z.c)
 *     ?PrepareIndexBuffer@CD3DBatchExecutionContext@@AEAAJI@Z @ 0x1800687E0 (-PrepareIndexBuffer@CD3DBatchExecutionContext@@AEAAJI@Z.c)
 *     ?Initialize@CD3DDynamicAppendBuffer@@QEAAJPEAVCD3DDevice@@I@Z @ 0x18011A700 (-Initialize@CD3DDynamicAppendBuffer@@QEAAJPEAVCD3DDevice@@I@Z.c)
 *     ?EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x18011B180 (-EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchComm.c)
 *     ?EmitGeometry@CCpuClipAntialiasBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z @ 0x18011C0F0 (-EmitGeometry@CCpuClipAntialiasBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateBuffer@CD3DDevice@@QEAAJAEBUD3D11_BUFFER_DESC@@PEBUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Buffer@@@Z @ 0x18011A4FC (-CreateBuffer@CD3DDevice@@QEAAJAEBUD3D11_BUFFER_DESC@@PEBUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11B.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDynamicAppendBuffer::EnsureByteSpace(CD3DDynamicAppendBuffer *this, UINT a2, char a3)
{
  struct ID3D11Buffer *v3; // rbx
  UINT v5; // ecx
  unsigned int v6; // r14d
  UINT v7; // esi
  UINT v8; // eax
  UINT v9; // edx
  UINT v10; // eax
  CD3DDevice *v11; // rbx
  int v12; // eax
  struct ID3D11Buffer *v14; // [rsp+30h] [rbp-30h] BYREF
  __int64 v15; // [rsp+38h] [rbp-28h] BYREF
  D3D11_BUFFER_DESC v16; // [rsp+40h] [rbp-20h] BYREF

  v3 = 0LL;
  v5 = *((_DWORD *)this + 10);
  v6 = 0;
  v14 = 0LL;
  v7 = a2;
  if ( a2 > v5 )
  {
    if ( !a3 )
    {
      v8 = v5;
      if ( !v5 )
        v8 = a2;
      v9 = v5 + a2;
      while ( v8 < v9 )
        v8 *= 2;
      v7 = v8;
      if ( v8 > *((_DWORD *)this + 11) )
        v7 = *((_DWORD *)this + 11);
    }
    v10 = *((_DWORD *)this + 4);
    v16.StructureByteStride = 0;
    v11 = *(CD3DDevice **)this;
    v16.BindFlags = v10;
    v16.ByteWidth = v7;
    v16.Usage = D3D11_USAGE_DYNAMIC;
    *(_QWORD *)&v16.CPUAccessFlags = 0x10000LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
    v12 = CD3DDevice::CreateBuffer(v11, &v16, 0LL, &v14);
    v6 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x48u, 0LL);
      v3 = v14;
    }
    else
    {
      v3 = v14;
      if ( *((struct ID3D11Buffer **)this + 1) != v14 )
      {
        if ( v14 )
          ((void (__fastcall *)(struct ID3D11Buffer *))v14->lpVtbl->AddRef)(v14);
        v15 = *((_QWORD *)this + 1);
        *((_QWORD *)this + 1) = v3;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
        v3 = v14;
      }
      *((_DWORD *)this + 10) = v7;
      *((_DWORD *)this + 9) = 0;
    }
  }
  if ( v3 )
  {
    v14 = 0LL;
    ((void (__fastcall *)(struct ID3D11Buffer *))v3->lpVtbl->Release)(v3);
  }
  return v6;
}
