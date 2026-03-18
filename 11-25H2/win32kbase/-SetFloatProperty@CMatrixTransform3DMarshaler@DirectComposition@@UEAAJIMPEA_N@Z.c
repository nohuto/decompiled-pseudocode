/*
 * XREFs of ?SetFloatProperty@CMatrixTransform3DMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x140234660
 * Callers:
 *     ?SetFloatProperty@?$CSharedResourceMarshaler@VCMatrixTransform3DMarshaler@DirectComposition@@$01@DirectComposition@@UEAAJIMPEA_N@Z @ 0x140230F10 (-SetFloatProperty@-$CSharedResourceMarshaler@VCMatrixTransform3DMarshaler@DirectComposition@@$01.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CMatrixTransform3DMarshaler::SetFloatProperty(
        DirectComposition::CMatrixTransform3DMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  unsigned int v4; // r8d
  __int64 v5; // rdx
  bool v6; // al

  v4 = 0;
  if ( (unsigned int)(a2 - 1) <= 0xF )
  {
    v5 = (unsigned int)(a2 - 1);
    if ( *((float *)this + v5 + 18) == a3 )
    {
      v6 = 0;
    }
    else
    {
      *((float *)this + v5 + 18) = a3;
      v6 = 1;
    }
    *a4 = v6;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
