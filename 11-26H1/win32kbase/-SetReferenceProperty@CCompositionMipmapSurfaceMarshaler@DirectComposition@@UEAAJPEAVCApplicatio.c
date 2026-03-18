/*
 * XREFs of ?SetReferenceProperty@CCompositionMipmapSurfaceMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x140247130
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1400AE290 (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2.c)
 */

__int64 __fastcall DirectComposition::CCompositionMipmapSurfaceMarshaler::SetReferenceProperty(
        __int64 a1,
        struct _RTL_GENERIC_TABLE *a2,
        int a3,
        unsigned int *a4,
        _BYTE *a5)
{
  __int64 v6; // rax
  __int64 result; // rax
  _BYTE *v8; // rcx
  char v9; // [rsp+70h] [rbp+18h] BYREF

  if ( a3 != 3 )
    return 3221225485LL;
  v6 = *(unsigned int *)(a1 + 64);
  if ( (unsigned int)v6 >= *(_DWORD *)(a1 + 76) )
    return 3221225485LL;
  v9 = 0;
  result = DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a1,
             a2,
             (struct DirectComposition::CResourceMarshaler **)(*(_QWORD *)(a1 + 56) + 24 * v6),
             a4,
             1,
             31,
             (int *)(a1 + 16),
             128,
             0,
             &v9);
  if ( v9 )
  {
    v8 = a5;
    *(_DWORD *)(a1 + 88) |= 1 << *(_BYTE *)(a1 + 64);
    *v8 = 1;
  }
  return result;
}
