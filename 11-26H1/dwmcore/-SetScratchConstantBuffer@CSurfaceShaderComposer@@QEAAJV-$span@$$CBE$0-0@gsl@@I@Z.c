/*
 * XREFs of ?SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV?$span@$$CBE$0?0@gsl@@I@Z @ 0x180101E34
 * Callers:
 *     ?FillXBRPass1Buffer@@YAJPEAVCSurfaceShaderComposer@@II@Z @ 0x180101C78 (-FillXBRPass1Buffer@@YAJPEAVCSurfaceShaderComposer@@II@Z.c)
 *     ?UpdateSDRBoostConstantBuffer@CSurfaceShaderComposer@@QEAAJM@Z @ 0x180101DAC (-UpdateSDRBoostConstantBuffer@CSurfaceShaderComposer@@QEAAJM@Z.c)
 *     ?FillXBRPass2Buffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z @ 0x180102004 (-FillXBRPass2Buffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z.c)
 *     ?ComputeLanczosKernel@@YAJPEAVCSurfaceShaderComposer@@IIII@Z @ 0x18025116C (-ComputeLanczosKernel@@YAJPEAVCSurfaceShaderComposer@@IIII@Z.c)
 *     ?FillLanczosUpBuffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z @ 0x1802512D4 (-FillLanczosUpBuffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDevice@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z @ 0x1800F7B80 (-Create@CD3DConstantBuffer@@SAJPEAVCD3DDevice@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z.c)
 *     ?SetData@CD3DConstantBuffer@@QEAAJV?$span@$$CBE$0?0@gsl@@@Z @ 0x180101F0C (-SetData@CD3DConstantBuffer@@QEAAJV-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCD3DConstantBuffer@@@WRL@Microsoft@@IEAAKXZ @ 0x180101FDC (-InternalRelease@-$ComPtr@VCD3DConstantBuffer@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CSurfaceShaderComposer::SetScratchConstantBuffer(__int64 a1, const void **a2, int a3)
{
  unsigned int v3; // ebp
  struct CD3DConstantBuffer **v4; // rbx
  __int64 v7; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  enum D3D11_USAGE v12; // r8d
  int v13; // eax
  __int128 v14; // [rsp+30h] [rbp-18h] BYREF

  v3 = *(_DWORD *)a2;
  v4 = (struct CD3DConstantBuffer **)(a1 + 80);
  v7 = *(_QWORD *)(a1 + 80);
  if ( v7 && *(_DWORD *)(v7 + 128) >= v3 )
  {
    v14 = *(_OWORD *)a2;
    v9 = CD3DConstantBuffer::SetData(v7, &v14);
    v10 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x1EEu, 0LL);
      return v10;
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<CD3DConstantBuffer>::InternalRelease(v4);
    Microsoft::WRL::ComPtr<CD3DConstantBuffer>::InternalRelease(v4);
    v13 = CD3DConstantBuffer::Create(*(struct CD3DDevice **)(a1 + 96), v3, v12, a2[1], v4);
    v10 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x1EAu, 0LL);
      return v10;
    }
  }
  *(_DWORD *)(a1 + 88) = a3;
  return v10;
}
