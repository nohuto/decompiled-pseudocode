/*
 * XREFs of ??1CCachedBorderBrush@CWindowBorder@@QEAA@XZ @ 0x18003E834
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VCCachedBorderBrush@CWindowBorder@@@std@@EEAAXXZ @ 0x180085D60 (-_Destroy@-$_Ref_count_obj2@VCCachedBorderBrush@CWindowBorder@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18003D79C (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18003E6C0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CWindowBorder::CCachedBorderBrush::~CCachedBorderBrush(CWindowBorder::CCachedBorderBrush *this)
{
  __int64 v1; // rdi
  _QWORD *i; // rbx
  __int64 v4; // rax
  _QWORD *v5; // rsi
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  std::_Ref_count_base *v9; // rcx
  __int64 *v10; // rax
  __int64 v11; // rbx
  std::_Ref_count_base *v12; // rcx
  _QWORD *v13; // rbp

  v1 = CWindowBorder::CCachedBorderBrush::s_cache;
  for ( i = *(_QWORD **)CWindowBorder::CCachedBorderBrush::s_cache; ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)CWindowBorder::CCachedBorderBrush::s_cache )
    {
      v5 = i;
      goto LABEL_12;
    }
    v4 = i[3];
    if ( !v4 || !*(_DWORD *)(v4 + 8) )
      break;
  }
  v5 = i;
  while ( 1 )
  {
    v6 = (_QWORD *)*i;
    i = v6;
    if ( v6 == (_QWORD *)v1 )
      break;
    v7 = v6[3];
    if ( v7 && *(_DWORD *)(v7 + 8) )
    {
      v6[3] = 0LL;
      v8 = v6[2];
      i[2] = 0LL;
      v5[2] = v8;
      v9 = (std::_Ref_count_base *)v5[3];
      v5[3] = v7;
      if ( v9 )
        std::_Ref_count_base::_Decwref(v9);
      v5 = (_QWORD *)*v5;
    }
  }
  v1 = CWindowBorder::CCachedBorderBrush::s_cache;
LABEL_12:
  if ( v5 != (_QWORD *)v1 )
  {
    v10 = (__int64 *)v5[1];
    v11 = 0LL;
    *v10 = v1;
    *(_QWORD *)(v1 + 8) = v10;
    do
    {
      v12 = (std::_Ref_count_base *)v5[3];
      v13 = (_QWORD *)*v5;
      if ( v12 )
        std::_Ref_count_base::_Decwref(v12);
      std::_Deallocate<16,0>(v5, (const struct std::nothrow_t *)0x20);
      ++v11;
      v5 = v13;
    }
    while ( v13 != (_QWORD *)v1 );
    qword_180119970 -= v11;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 6);
}
