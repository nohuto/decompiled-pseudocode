/*
 * XREFs of ?CreateResource@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x1800F7E3C
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1800FE020 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDevice@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z @ 0x1800F7B80 (-Create@CD3DConstantBuffer@@SAJPEAVCD3DDevice@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z.c)
 */

__int64 __fastcall CRenderingTechnique::CreateResource(
        CRenderingTechnique *this,
        struct CD3DDevice *a2,
        struct CD3DConstantBuffer **a3)
{
  int v4; // eax
  unsigned int v5; // ebx

  v4 = CD3DConstantBuffer::Create(a2, *((_DWORD *)this + 64) + *((_DWORD *)this + 68), (enum D3D11_USAGE)a3, 0LL, a3);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x2D0u, 0LL);
  }
  else
  {
    *((_BYTE *)this + 276) = 1;
    return 0;
  }
  return v5;
}
