/*
 * XREFs of ?GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11Module@@@Z @ 0x180146B90
 * Callers:
 *     PrepareSamplers @ 0x180145AF4 (PrepareSamplers.c)
 *     UseFragmentsModuleNoRef @ 0x180145C30 (UseFragmentsModuleNoRef.c)
 *     LoadShaderBody @ 0x180146764 (LoadShaderBody.c)
 *     ?LinkCompositingShader@@YAJW4D3DShaderProfileVersion@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x18025E2F8 (-LinkCompositingShader@@YAJW4D3DShaderProfileVersion@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CShaderLinkingGraphBuilder::GetFragmentsModuleNoRef(char a1, struct ID3D11Module **a2)
{
  unsigned int v2; // ebx
  struct ID3D11Module *v4; // rax
  HRESULT v6; // eax
  unsigned int v7; // [rsp+20h] [rbp-18h]

  v2 = 0;
  if ( !a1 )
  {
    v4 = qword_1803DEC78;
    if ( qword_1803DEC78 )
      goto LABEL_4;
    v6 = D3DLoadModule(&unk_1803821A0, 0x1E0FAuLL, &qword_1803DEC78);
    v2 = v6;
    if ( v6 >= 0 )
    {
      v4 = qword_1803DEC78;
      goto LABEL_4;
    }
    v7 = 294;
    goto LABEL_18;
  }
  if ( a1 == 1 )
  {
    v4 = qword_1803DEC70;
    if ( qword_1803DEC70 )
      goto LABEL_4;
    v6 = D3DLoadModule(&unk_180318660, 0x2FCDAuLL, &qword_1803DEC70);
    v2 = v6;
    if ( v6 >= 0 )
    {
      v4 = qword_1803DEC70;
      goto LABEL_4;
    }
    v7 = 306;
LABEL_18:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, v7, 0LL);
    return v2;
  }
  if ( a1 != 2 )
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x146u, 0LL);
    return v2;
  }
  v4 = ppModule;
  if ( !ppModule )
  {
    v6 = D3DLoadModule(&unk_1802F5E00, 0x22842uLL, &ppModule);
    v2 = v6;
    if ( v6 >= 0 )
    {
      v4 = ppModule;
      goto LABEL_4;
    }
    v7 = 318;
    goto LABEL_18;
  }
LABEL_4:
  *a2 = v4;
  return v2;
}
