/*
 * XREFs of ?GetSpriteBitmapZ@CWindowOcclusionInfo@@QEBAHPEBVCVisualTree@@@Z @ 0x1800CB7D0
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180077EA0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?erase@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@2@V?$basic_iterator@$$CBV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@2@@Z @ 0x18008B8F0 (-erase@-$vector_facade@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo@@@std@@@.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800CC0E0 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowOcclusionInfo::GetSpriteBitmapZ(CWindowOcclusionInfo *this, const struct CVisualTree *a2)
{
  __int64 v2; // r13
  __int64 *v5; // rbp
  bool i; // zf
  __int64 *v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 k; // rax
  __int64 v11; // r12
  __int64 result; // rax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *j; // rcx
  __int64 v15; // rdx
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF
  __int64 v17; // [rsp+70h] [rbp+18h] BYREF

  v2 = 0LL;
  if ( g_pComposition )
    v2 = *((_QWORD *)g_pComposition + 110);
  if ( *((_QWORD *)this + 2) == v2 )
    return *((unsigned int *)this + 12);
  v5 = (__int64 *)*((_QWORD *)this + 1);
  for ( i = v5 == *((__int64 **)a2 + 9); ; i = v5 == *((__int64 **)a2 + 9) )
  {
    v5 = i ? 0LL : (__int64 *)v5[11];
    if ( !v5 )
      break;
    v7 = 0LL;
    if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 192LL))(a2) )
    {
      v7 = v5 + 40;
    }
    else
    {
      TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)v5);
      if ( TreeDataListHead )
      {
        for ( j = TreeDataListHead->Flink; j != TreeDataListHead; j = j->Flink )
        {
          if ( (const struct CVisualTree *)j[2].Flink == a2 )
          {
            v7 = (__int64 *)&j[-22];
            break;
          }
        }
      }
    }
    v8 = v7[22];
    v9 = 0LL;
    for ( k = v8; k != v7[23]; k += 8LL )
    {
      if ( *(_DWORD *)(*(_QWORD *)k + 32LL) == *((_DWORD *)this + 8) )
      {
        v9 = *(_QWORD *)k;
        break;
      }
    }
    v11 = *(_QWORD *)(*(_QWORD *)(v7[31] + 24) + 880LL);
    if ( v7[27] != v11 )
    {
      v7[27] = v11;
      if ( (unsigned __int64)((v7[23] - v8) >> 3) > 1 )
      {
        while ( v8 != v7[23] )
        {
          if ( *(_QWORD *)v8 != v9
            && (v15 = *(_QWORD *)(*(_QWORD *)v8 + 16LL)) != 0
            && (unsigned __int64)(v11 - v15) >= 0xA )
          {
            v16 = v8;
            v8 = *detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::erase(
                    v7 + 22,
                    &v17,
                    &v16);
          }
          else
          {
            v8 += 8LL;
          }
        }
      }
    }
    if ( v9 && *(_QWORD *)(v9 + 16) == v2 )
    {
      *((_DWORD *)this + 9) = *(_DWORD *)(v9 + 40);
      *((_DWORD *)this + 10) = *(_DWORD *)(v9 + 40);
      *((_QWORD *)this + 2) = v2;
      break;
    }
  }
  result = *((unsigned int *)this + 9);
  *((_DWORD *)this + 12) = result;
  *((_DWORD *)this + 13) = result;
  return result;
}
