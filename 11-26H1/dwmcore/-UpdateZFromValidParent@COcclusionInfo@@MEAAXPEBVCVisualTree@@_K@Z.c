/*
 * XREFs of ?UpdateZFromValidParent@COcclusionInfo@@MEAAXPEBVCVisualTree@@_K@Z @ 0x1800777B0
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180077EA0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?clear_region@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18008B790 (-clear_region@-$vector_facade@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall COcclusionInfo::UpdateZFromValidParent(COcclusionInfo *this, const struct CVisualTree *a2, __int64 a3)
{
  _QWORD *v3; // rbp
  bool i; // zf
  __int64 *v7; // rsi
  __int64 *v8; // rbx
  __int64 v9; // rdi
  __int64 *v10; // rcx
  __int64 *v11; // rax
  __int64 v12; // r12
  __int64 *v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rax
  _BYTE *v16; // r8
  __int64 v17; // rcx
  __int64 ****v18; // rcx
  __int64 ***v19; // rcx
  __int64 **j; // rax
  __int64 v21; // rcx
  __int64 v22; // rbx

  v3 = (_QWORD *)*((_QWORD *)this + 1);
  for ( i = v3 == *((_QWORD **)a2 + 9); ; i = v3 == *((_QWORD **)a2 + 9) )
  {
    v3 = i ? 0LL : (_QWORD *)v3[11];
    if ( !v3 )
      break;
    v7 = 0LL;
    if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 192LL))(a2) )
    {
      v7 = v3 + 40;
      goto LABEL_7;
    }
    v14 = v3[28];
    if ( *(int *)v14 >= 0 )
      goto LABEL_7;
    v15 = *(unsigned int *)(v14 + 4);
    v16 = (_BYTE *)(v14 + 8);
    v17 = 0LL;
    if ( (_DWORD)v15 )
    {
      while ( *v16 != 1 )
      {
        v17 = (unsigned int)(v17 + 1);
        ++v16;
        if ( (unsigned int)v17 >= (unsigned int)v15 )
          goto LABEL_36;
      }
LABEL_24:
      v18 = (__int64 ****)(v14 + ((v15 + 15) & 0xFFFFFFFFFFFFFFF8uLL) + 8 * v17);
      goto LABEL_25;
    }
LABEL_36:
    if ( (unsigned int)v17 < (unsigned int)v15 )
      goto LABEL_24;
    v18 = 0LL;
LABEL_25:
    v19 = *v18;
    if ( v19 )
    {
      for ( j = *v19; j != (__int64 **)v19; j = (__int64 **)*j )
      {
        if ( j[4] == (__int64 *)a2 )
        {
          v7 = (__int64 *)(j - 44);
          break;
        }
      }
    }
LABEL_7:
    v8 = (__int64 *)v7[22];
    v9 = 0LL;
    v10 = v8;
    v11 = (__int64 *)v7[23];
    while ( v10 != v11 )
    {
      if ( *(_DWORD *)(*v10 + 32) == *((_DWORD *)this + 8) )
      {
        v9 = *v10;
        break;
      }
      ++v10;
    }
    v12 = *(_QWORD *)(*(_QWORD *)(v7[31] + 24) + 880LL);
    if ( v7[27] != v12 )
    {
      v7[27] = v12;
      if ( (unsigned __int64)(v11 - v8) > 1 )
      {
        v13 = v8;
        while ( v8 != (__int64 *)v7[23] )
        {
          if ( *v8 != v9 && (v21 = *(_QWORD *)(*v8 + 16)) != 0 && (unsigned __int64)(v12 - v21) >= 0xA )
          {
            v22 = v8 - v13;
            detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::clear_region(
              v7 + 22,
              v22,
              1LL);
            v13 = (__int64 *)v7[22];
            v8 = &v13[v22];
          }
          else
          {
            ++v8;
          }
        }
      }
    }
    if ( v9 && *(_QWORD *)(v9 + 16) == a3 )
    {
      *((_DWORD *)this + 9) = *(_DWORD *)(v9 + 40);
      *((_DWORD *)this + 10) = *(_DWORD *)(v9 + 40);
      *((_QWORD *)this + 2) = a3;
      return;
    }
  }
}
