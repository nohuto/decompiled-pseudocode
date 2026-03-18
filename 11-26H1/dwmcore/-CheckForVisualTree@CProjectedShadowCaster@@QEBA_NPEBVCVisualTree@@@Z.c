/*
 * XREFs of ?CheckForVisualTree@CProjectedShadowCaster@@QEBA_NPEBVCVisualTree@@@Z @ 0x1800D7464
 * Callers:
 *     ?Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800D72A0 (-Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CProjectedShadowCaster::CheckForVisualTree(CProjectedShadowCaster *this, const struct CVisualTree *a2)
{
  __int64 v2; // r10
  __int64 v3; // r8
  char v4; // cl
  __int64 i; // r9
  __int64 *v6; // rax

  v2 = *((_QWORD *)this + 11);
  v3 = v2;
  v4 = 0;
  for ( i = *(_QWORD *)(v2 + 8); !*(_BYTE *)(i + 25); i = *v6 )
  {
    v6 = (__int64 *)(i + 16);
    if ( *(_QWORD *)(i + 32) >= (unsigned __int64)a2 )
    {
      v6 = (__int64 *)i;
      v3 = i;
    }
  }
  if ( v3 != v2 && !*(_BYTE *)(v3 + 25) && (unsigned __int64)a2 >= *(_QWORD *)(v3 + 32) )
    return 1;
  return v4;
}
