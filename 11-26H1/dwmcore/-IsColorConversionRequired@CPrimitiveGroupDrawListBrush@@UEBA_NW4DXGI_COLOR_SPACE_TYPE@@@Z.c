/*
 * XREFs of ?IsColorConversionRequired@CPrimitiveGroupDrawListBrush@@UEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1802B38E0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsMatchingColorSpace@CDrawListBitmap@@QEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801A476C (-IsMatchingColorSpace@CDrawListBitmap@@QEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 */

char __fastcall CPrimitiveGroupDrawListBrush::IsColorConversionRequired(
        CPrimitiveGroupDrawListBrush *this,
        unsigned int a2)
{
  __int64 i; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax

  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v5 = *((_QWORD *)this + 9);
    v6 = *(_QWORD *)(v5 + 16);
    if ( (unsigned int)i >= *(_DWORD *)(v6 + 8) )
      break;
    if ( *(_DWORD *)(*(_QWORD *)v6 + 144 * i) )
    {
      v7 = *(unsigned int *)(*(_QWORD *)v6 + 144 * i + 40);
      if ( (unsigned int)v7 < *(_DWORD *)(v5 + 32)
        && !CDrawListBitmap::IsMatchingColorSpace((CDrawListBitmap *)(*(_QWORD *)(v5 + 80) + 24 * v7), a2) )
      {
        return 1;
      }
    }
  }
  return 0;
}
