/*
 * XREFs of ?SetReferenceProperty@CVisualSurfaceMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x140240210
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1400AE290 (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2.c)
 */

__int64 __fastcall DirectComposition::CVisualSurfaceMarshaler::SetReferenceProperty(
        __int64 a1,
        struct _RTL_GENERIC_TABLE *a2,
        int a3,
        unsigned int *a4,
        _BYTE *a5)
{
  __int64 result; // rax
  unsigned int *v7; // rdi
  unsigned int v8; // ecx

  if ( a3 )
    return 3221225485LL;
  v7 = (unsigned int *)(a1 + 16);
  result = DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a1,
             a2,
             (struct DirectComposition::CResourceMarshaler **)(a1 + 56),
             a4,
             1,
             156,
             (int *)(a1 + 16),
             64,
             0,
             a5);
  if ( (int)result >= 0 && *(_BYTE *)(a1 + 96) )
  {
    v8 = *v7;
    if ( *(_QWORD *)(a1 + 56) )
    {
      *(_BYTE *)(a1 + 96) = 0;
      *v7 = v8 & 0xFFFFF03F | 0x7C0;
      *a5 = 1;
    }
    else
    {
      *v7 = v8 & 0xFFFFFFBF;
      *a5 = 0;
    }
  }
  return result;
}
