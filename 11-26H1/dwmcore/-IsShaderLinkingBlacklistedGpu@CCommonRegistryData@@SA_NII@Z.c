/*
 * XREFs of ?IsShaderLinkingBlacklistedGpu@CCommonRegistryData@@SA_NII@Z @ 0x180133B94
 * Callers:
 *     ?Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z @ 0x180133624 (-Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z.c)
 * Callees:
 *     ?ParseGpuIdListKey@CCommonRegistryData@@CA_NPEBGPEAPEAUGpuId@1@PEAI@Z @ 0x1801E425C (-ParseGpuIdListKey@CCommonRegistryData@@CA_NPEBGPEAPEAUGpuId@1@PEAI@Z.c)
 */

char __fastcall CCommonRegistryData::IsShaderLinkingBlacklistedGpu(const unsigned __int16 *a1, unsigned __int16 a2)
{
  struct CCommonRegistryData::GpuId *v2; // r8
  unsigned int v3; // ebx
  int v5; // esi
  unsigned int v6; // ecx
  unsigned int v8; // [rsp+40h] [rbp+18h] BYREF
  struct CCommonRegistryData::GpuId *v9; // [rsp+48h] [rbp+20h] BYREF

  v2 = CCommonRegistryData::m_rgwShaderLinkingBlacklistedGpuIds;
  v3 = 0;
  v5 = (int)a1;
  if ( CCommonRegistryData::m_rgwShaderLinkingBlacklistedGpuIds )
  {
    v6 = (unsigned int)CCommonRegistryData::m_cShaderLinkingBlacklistedGpuIds;
  }
  else
  {
    v9 = 0LL;
    v8 = 0;
    if ( CCommonRegistryData::ParseGpuIdListKey(a1, &v9, &v8) )
    {
      v2 = v9;
      v6 = v8;
      CCommonRegistryData::m_rgwShaderLinkingBlacklistedGpuIds = v9;
      LODWORD(CCommonRegistryData::m_cShaderLinkingBlacklistedGpuIds) = v8;
    }
    else
    {
      v2 = (struct CCommonRegistryData::GpuId *)&unk_1803A1B4C;
      LODWORD(CCommonRegistryData::m_cShaderLinkingBlacklistedGpuIds) = 0;
      CCommonRegistryData::m_rgwShaderLinkingBlacklistedGpuIds = (const struct CCommonRegistryData::GpuId *const)&unk_1803A1B4C;
      v6 = 0;
    }
  }
  while ( 1 )
  {
    if ( v3 >= v6 )
      return 0;
    if ( v5 == *((unsigned __int16 *)v2 + 3 * v3) && (a2 & *((_WORD *)v2 + 3 * v3 + 2)) == *((_WORD *)v2 + 3 * v3 + 1) )
      break;
    ++v3;
  }
  return 1;
}
