/*
 * XREFs of LogReferenceAllocations @ 0x14003A9E0
 * Callers:
 *     ?ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAIPEAT_LARGE_INTEGER@@PEA_KPEAPEAUVIDMM_ALLOC@@PEAUVIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1400EBE64 (-ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAI.c)
 * Callees:
 *     McTemplateK0ppqPR2TR2_EtwWriteTransfer @ 0x14003AAD0 (McTemplateK0ppqPR2TR2_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 */

__int64 __fastcall LogReferenceAllocations(int a1, char a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 i; // rbx
  unsigned int v10; // r8d
  unsigned int v11; // edx
  int *v12; // r9
  __int64 v13; // rax
  __int64 result; // rax
  _BYTE v15[512]; // [rsp+50h] [rbp-238h] BYREF

  if ( (byte_14008A201 & 0x20) != 0 )
  {
    for ( i = 0LL; (unsigned int)i < a3; i = (unsigned int)(i + 128) )
    {
      v10 = 0;
      v11 = a3 - i;
      if ( a3 - (unsigned int)i >= 0x80 )
      {
        v11 = 128;
      }
      else if ( !v11 )
      {
        goto LABEL_8;
      }
      v12 = (int *)v15;
      do
      {
        v13 = v10 + (unsigned int)i;
        ++v10;
        result = 3 * v13;
        *v12++ = *(_DWORD *)(a5 + 8 * result + 8) & 1;
      }
      while ( v10 < v11 );
LABEL_8:
      if ( (byte_14008A201 & 0x20) != 0 )
        result = McTemplateK0ppqPR2TR2_EtwWriteTransfer(
                   (int)a4 + 8 * (int)i,
                   v11,
                   v10,
                   a1,
                   a2,
                   v11,
                   a4 + 8 * i,
                   (__int64)v15);
    }
  }
  return result;
}
