/*
 * XREFs of ?GetLookupKey@ShaderLinkingConfig@@QEBA?AULookupKey@1@I@Z @ 0x180100AD0
 * Callers:
 *     ?CreateLinkedShader@CShaderCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x1800FD884 (-CreateLinkedShader@CShaderCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V-$span@.c)
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1800FE020 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?LookupShader@CShaderCache@@QEBAPEAVCLinkedShader@@IAEBUShaderLinkingConfig@@@Z @ 0x180100130 (-LookupShader@CShaderCache@@QEBAPEAVCLinkedShader@@IAEBUShaderLinkingConfig@@@Z.c)
 *     ?GetCommonRenderingShaderInternalNoRef@CCommonRenderingShaderCache@@AEAAJPEAVCD3DDevice@@AEBUCommonRenderingShaderDesc@@PEAIPEAPEAUID3D11PixelShader@@@Z @ 0x180100310 (-GetCommonRenderingShaderInternalNoRef@CCommonRenderingShaderCache@@AEAAJPEAVCD3DDevice@@AEBUCom.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall ShaderLinkingConfig::GetLookupKey(__int64 a1, _OWORD *a2, int a3)
{
  int v5; // r8d
  unsigned int v6; // edx
  _OWORD *result; // rax
  int v8; // r8d
  unsigned int v9; // r8d
  unsigned int v10; // r8d
  unsigned int v11; // r8d
  __int128 v12; // [rsp+0h] [rbp-18h]

  v12 = 0LL;
  if ( *(_BYTE *)(a1 + 18) )
  {
    if ( *(_BYTE *)(a1 + 20) )
      v8 = 5;
    else
      v8 = (*(_BYTE *)(a1 + 21) != 0) + 3;
    v6 = v8 & 0xFFCFCFFF | ((*(_BYTE *)(a1 + 16) & 3 | ((*(_BYTE *)(a1 + 17) & 3) << 8)) << 12);
    v5 = v6;
  }
  else if ( *(_BYTE *)(a1 + 21) )
  {
    v6 = 1;
    v5 = 1;
  }
  else
  {
    v5 = 0;
    if ( *(_BYTE *)(a1 + 23) )
    {
      v6 = 2;
      v5 = 2;
    }
    else
    {
      v6 = 0;
    }
  }
  if ( *(_BYTE *)(a1 + 50) )
  {
    if ( *(_BYTE *)(a1 + 52) )
    {
      v9 = v5 & 0xFFFFFFC7 | 0x28;
    }
    else if ( *(_BYTE *)(a1 + 53) )
    {
      v9 = v6 & 0xFFFFFFC7 | 0x20;
    }
    else
    {
      v9 = v6 & 0xFFFFFFC7 | 0x18;
    }
    v6 = v9 & 0xFF3F3FFF | ((*(_BYTE *)(a1 + 48) & 3 | ((*(_BYTE *)(a1 + 49) & 3) << 8)) << 14);
  }
  else if ( *(_BYTE *)(a1 + 53) )
  {
    v6 = v5 & 0xFFFFFFC7 | 8;
  }
  else if ( *(_BYTE *)(a1 + 55) )
  {
    v6 = v6 & 0xFFFFFFC7 | 0x10;
  }
  if ( *(_BYTE *)(a1 + 82) )
  {
    if ( *(_BYTE *)(a1 + 84) )
    {
      v10 = v6 & 0xFFFFFE3F | 0x140;
    }
    else if ( *(_BYTE *)(a1 + 85) )
    {
      v10 = v6 & 0xFFFFFE3F | 0x100;
    }
    else
    {
      v10 = v6 & 0xFFFFFE3F | 0xC0;
    }
    v6 = v10 & 0xFCFCFFFF | ((*(_BYTE *)(a1 + 80) & 3 | ((*(_BYTE *)(a1 + 81) & 3) << 8)) << 16);
  }
  else if ( *(_BYTE *)(a1 + 85) )
  {
    v6 = v6 & 0xFFFFFE3F | 0x40;
  }
  else if ( *(_BYTE *)(a1 + 87) )
  {
    v6 = v6 & 0xFFFFFE3F | 0x80;
  }
  if ( *(_BYTE *)(a1 + 114) )
  {
    if ( *(_BYTE *)(a1 + 116) )
    {
      v11 = v6 & 0xFFFFF1FF | 0xA00;
    }
    else if ( *(_BYTE *)(a1 + 117) )
    {
      v11 = v6 & 0xFFFFF1FF | 0x800;
    }
    else
    {
      v11 = v6 & 0xFFFFF1FF | 0x600;
    }
    v6 = v11 & 0xF3F3FFFF | ((*(_BYTE *)(a1 + 112) & 3 | ((*(_BYTE *)(a1 + 113) & 3) << 8)) << 18);
  }
  else if ( *(_BYTE *)(a1 + 117) )
  {
    v6 = v6 & 0xFFFFF1FF | 0x200;
  }
  else if ( *(_BYTE *)(a1 + 119) )
  {
    v6 = v6 & 0xFFFFF1FF | 0x400;
  }
  DWORD1(v12) = (*(_BYTE *)(a1 + 137) != 0 ? 0x80000000 : 0) | (*(_BYTE *)(a1 + 136) != 0 ? 0x40000000 : 0) | (*(_BYTE *)(a1 + 135) != 0 ? 0x20000000 : 0) | v6 & 0xFFFFFFF | (*(_BYTE *)(a1 + 133) != 0 ? 0x10000000 : 0);
  result = a2;
  DWORD2(v12) = (a3 << 17) | *(unsigned __int16 *)(a1 + 128) | (*(_BYTE *)(a1 + 132) != 0 ? 0x10000 : 0);
  LODWORD(v12) = *(_DWORD *)(a1 + 8) & 0x3F | ((*(_DWORD *)(a1 + 40) & 0x3F | ((*(_DWORD *)(a1 + 72) & 0x3F | ((*(_DWORD *)(a1 + 104) & 0x3F | ((*(_BYTE *)(a1 + 25) & 1 | (2 * (*(_BYTE *)(a1 + 57) & 1 | (2 * (*(_BYTE *)(a1 + 89) & 1 | (2 * (*(_BYTE *)(a1 + 121) & 1 | (2 * (*(_BYTE *)(a1 + 24) & 1 | (2 * (*(_BYTE *)(a1 + 56) & 1 | (2 * (*(_BYTE *)(a1 + 88) & 1 | (2 * *(unsigned __int8 *)(a1 + 120))))))))))))))) << 6)) << 6)) << 6)) << 6);
  *a2 = v12;
  return result;
}
