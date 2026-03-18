/*
 * XREFs of ?Offset@CRgnData@Internal@FastRegion@@QEAA_NHH@Z @ 0x180228AC0
 * Callers:
 *     ?AddDirtyRegion@CGDISubSectionBitmapRealization@@EEAAXAEBVCRegion@@@Z @ 0x1802AAD50 (-AddDirtyRegion@CGDISubSectionBitmapRealization@@EEAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall FastRegion::Internal::CRgnData::Offset(FastRegion::Internal::CRgnData *this, int a2, int a3)
{
  int v3; // r14d
  int v5; // r15d
  _DWORD *v7; // rcx
  int v9; // r8d
  int v10; // edi
  __int64 v11; // r10
  int v12; // esi
  __int64 i; // rbx
  __int64 v15; // rdi
  _DWORD *j; // rdx

  v3 = *((_DWORD *)this + 1);
  v5 = *((_DWORD *)this + 2);
  v7 = (_DWORD *)((char *)this + 12);
  v9 = 0;
  v10 = v3 + a2;
  v11 = *(int *)this - 1LL;
  v12 = v5 + a2;
  if ( a2 <= 0 )
  {
    if ( v10 > v3 )
      return 0;
  }
  else if ( v12 < v5 )
  {
    return 0;
  }
  if ( a3 <= 0 )
  {
    if ( *v7 + a3 > *v7 )
      return 0;
  }
  else if ( *((_DWORD *)this + 2 * v11 + 3) + a3 < *((_DWORD *)this + 2 * v11 + 3) )
  {
    return 0;
  }
  *((_DWORD *)this + 1) = v10;
  *((_DWORD *)this + 2) = v12;
  if ( v11 > 0 )
  {
    for ( i = 0LL; i < v11; ++i )
    {
      *v7 += a3;
      v15 = (__int64)v7 + v7[3] + 8;
      for ( j = (_DWORD *)((char *)this + 8 * v9 + v7[1] + 12); j != (_DWORD *)v15; ++j )
        *j += a2;
      ++v9;
      v7 += 2;
    }
  }
  *((_DWORD *)this + 2 * v11 + 3) += a3;
  return 1;
}
