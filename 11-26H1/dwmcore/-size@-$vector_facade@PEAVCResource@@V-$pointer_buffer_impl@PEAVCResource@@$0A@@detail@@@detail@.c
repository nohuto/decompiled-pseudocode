/*
 * XREFs of ?size@?$vector_facade@PEAVCResource@@V?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@@QEBA_KXZ @ 0x18001F480
 * Callers:
 *     ?clear_region@?$vector_facade@PEAVCGdiSpriteBitmap@@V?$pointer_buffer_impl@PEAVCGdiSpriteBitmap@@$0A@@detail@@@detail@@IEAAX_K0@Z @ 0x18001F564 (-clear_region@-$vector_facade@PEAVCGdiSpriteBitmap@@V-$pointer_buffer_impl@PEAVCGdiSpriteBitmap@.c)
 *     ?ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ @ 0x18001FD44 (-ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ.c)
 *     ?clear_region@?$vector_facade@PEAVCResource@@V?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@@IEAAX_K0@Z @ 0x18001FE70 (-clear_region@-$vector_facade@PEAVCResource@@V-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@.c)
 *     ?erase@?$vector_facade@PEAVCResource@@V?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCResource@@@2@V?$basic_iterator@QEAVCResource@@@2@@Z @ 0x180022F8C (-erase@-$vector_facade@PEAVCResource@@V-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail.c)
 *     ?reserve_region@?$vector_facade@PEAVCResource@@V?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@@IEAAPEAPEAVCResource@@_K0@Z @ 0x180024AB0 (-reserve_region@-$vector_facade@PEAVCResource@@V-$pointer_buffer_impl@PEAVCResource@@$0A@@detail.c)
 *     ??1?$vector_facade@PEAVCResource@@V?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@@QEAA@XZ @ 0x1800AD3A4 (--1-$vector_facade@PEAVCResource@@V-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@@QE.c)
 *     ?DiscardGdiSpriteBitmaps@CWindowNode@@AEAAXXZ @ 0x1800DF8E4 (-DiscardGdiSpriteBitmaps@CWindowNode@@AEAAXXZ.c)
 *     ?reserve_region@?$vector_facade@PEAVCGdiSpriteBitmap@@V?$pointer_buffer_impl@PEAVCGdiSpriteBitmap@@$0A@@detail@@@detail@@IEAAPEAPEAVCGdiSpriteBitmap@@_K0@Z @ 0x1800DF9D4 (-reserve_region@-$vector_facade@PEAVCGdiSpriteBitmap@@V-$pointer_buffer_impl@PEAVCGdiSpriteBitma.c)
 *     ??1?$vector_facade@PEAVCGdiSpriteBitmap@@V?$pointer_buffer_impl@PEAVCGdiSpriteBitmap@@$0A@@detail@@@detail@@QEAA@XZ @ 0x1801AA684 (--1-$vector_facade@PEAVCGdiSpriteBitmap@@V-$pointer_buffer_impl@PEAVCGdiSpriteBitmap@@$0A@@detai.c)
 *     ?SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z @ 0x1802693C4 (-SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall detail::vector_facade<CResource *,detail::pointer_buffer_impl<CResource *,0>>::size(__int64 *a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // rax
  unsigned __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // r8
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *a1;
  v2 = 0LL;
  v3 = *a1 & 3;
  if ( v3 )
  {
    if ( (*(_DWORD *)a1 & 3) == 1LL )
    {
      v4 = v1 & 0xFFFFFFFFFFFFFFFCuLL;
LABEL_14:
      v2 = *(_QWORD *)((v1 & 0xFFFFFFFFFFFFFFFCuLL) - 16);
      goto LABEL_15;
    }
    if ( (*(_DWORD *)a1 & 3) == 2LL )
    {
      v4 = 0LL;
      goto LABEL_5;
    }
    if ( (*(_DWORD *)a1 & 3) != 3LL )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
  }
  v4 = (unsigned __int64)a1;
  if ( !v3 )
  {
    v2 = 1LL;
LABEL_18:
    v7 = (unsigned __int64)a1;
    return (__int64)(v4 + 8 * v2 - v7) >> 3;
  }
  if ( v3 == 1 )
    goto LABEL_14;
  if ( (unsigned __int64)(v3 - 2) >= 2 )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_5:
  v5 = v3 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( !v6 )
    {
      v7 = 0LL;
      return (__int64)(v4 + 8 * v2 - v7) >> 3;
    }
    if ( v6 != 1 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
    goto LABEL_18;
  }
LABEL_15:
  v7 = v1 & 0xFFFFFFFFFFFFFFFCuLL;
  return (__int64)(v4 + 8 * v2 - v7) >> 3;
}
