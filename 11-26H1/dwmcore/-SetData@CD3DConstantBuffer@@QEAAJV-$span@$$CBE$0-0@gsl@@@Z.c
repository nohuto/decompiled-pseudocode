/*
 * XREFs of ?SetData@CD3DConstantBuffer@@QEAAJV?$span@$$CBE$0?0@gsl@@@Z @ 0x180101F0C
 * Callers:
 *     ?SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV?$span@$$CBE$0?0@gsl@@I@Z @ 0x180101E34 (-SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV-$span@$$CBE$0-0@gsl@@I@Z.c)
 * Callees:
 *     ?Map@CD3DDevice@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z @ 0x180068EB0 (-Map@CD3DDevice@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Unmap@CD3DDevice@@QEAAXPEAUID3D11Resource@@I@Z @ 0x180101FC0 (-Unmap@CD3DDevice@@QEAAXPEAUID3D11Resource@@I@Z.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 */

__int64 __fastcall CD3DConstantBuffer::SetData(__int64 a1, unsigned int *a2, int a3)
{
  __int64 v4; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  unsigned int v8; // ecx
  unsigned int v9; // r8d
  unsigned int v11; // [rsp+20h] [rbp-28h]
  struct D3D11_MAPPED_SUBRESOURCE v12; // [rsp+30h] [rbp-18h] BYREF

  v4 = *(_QWORD *)(a1 + 40);
  v12 = 0LL;
  v6 = CD3DDevice::Map(*(CD3DDevice **)(v4 + 80), *(struct ID3D11Resource **)(a1 + 120), a3, 4LL, v11, &v12);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x4Bu, 0LL);
  }
  else
  {
    v8 = *(_DWORD *)(a1 + 128);
    if ( v8 >= *a2 )
      v8 = *a2;
    memcpy_0(v12.pData, *((const void **)a2 + 1), v8);
    CD3DDevice::Unmap(*(CD3DDevice **)(*(_QWORD *)(a1 + 40) + 80LL), *(struct ID3D11Resource **)(a1 + 120), v9);
  }
  return v7;
}
