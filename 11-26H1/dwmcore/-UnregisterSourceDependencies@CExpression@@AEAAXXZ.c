/*
 * XREFs of ?UnregisterSourceDependencies@CExpression@@AEAAXXZ @ 0x18010C9F4
 * Callers:
 *     ??1CExpression@@MEAA@XZ @ 0x18010D67C (--1CExpression@@MEAA@XZ.c)
 * Callees:
 *     ?GetTargetResource@?$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ @ 0x18004C1C0 (-GetTargetResource@-$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ.c)
 *     ?RemoveAnimationFromList@CAnimationDependencies@@CAXPEAVCBaseExpression@@PEAV?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@@Z @ 0x18004D0C4 (-RemoveAnimationFromList@CAnimationDependencies@@CAXPEAVCBaseExpression@@PEAV-$vector_facade@PEA.c)
 */

void __fastcall CExpression::UnregisterSourceDependencies(CExpression *this)
{
  unsigned int i; // edi
  __int64 v3; // rbp
  __int64 v4; // rsi
  unsigned int v5; // eax
  __int64 v6; // rcx
  __int64 TargetResource; // rax
  __int64 v8; // rax
  unsigned int v9; // ecx
  __int64 v10; // rdx

  for ( i = 0; i < *((_DWORD *)this + 81); ++i )
  {
    v3 = *((_QWORD *)this + 38);
    v4 = 28LL * i;
    v5 = *(_DWORD *)(v4 + v3 + 16);
    if ( v5 >= *((_DWORD *)this + 80) )
      continue;
    _mm_lfence();
    v6 = *(_QWORD *)(*((_QWORD *)this + 37) + 8LL * v5);
    if ( !v6 )
      continue;
    TargetResource = CWeakReference<CGdiSpriteBitmap>::GetTargetResource(v6);
    if ( !TargetResource )
      continue;
    v8 = *(_QWORD *)(TargetResource + 48);
    v9 = *(_DWORD *)(v4 + v3) & 0x7FFFFFFF;
    if ( !v8 )
      continue;
    v10 = *(_QWORD *)(v8 + 8);
    if ( *(_DWORD *)v8 )
    {
      while ( v10 != *(_QWORD *)(v8 + 16) )
      {
        if ( *(_DWORD *)(v10 + 16) == v9 )
          goto LABEL_12;
        v10 += 24LL;
      }
    }
    else if ( v9 < (unsigned __int64)((*(_QWORD *)(v8 + 16) - v10) >> 4) )
    {
      v10 = *(_QWORD *)(v8 + 8) + 16LL * v9;
      goto LABEL_12;
    }
    v10 = 0LL;
LABEL_12:
    if ( v10 )
      CAnimationDependencies::RemoveAnimationFromList((__int64)this, (_QWORD *)v10);
  }
}
