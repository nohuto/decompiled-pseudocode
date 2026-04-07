/*
 * XREFs of ?OnGraphicsDeviceLost@CWindowList@@QEAAXXZ @ 0x1800E6608
 * Callers:
 *     ?OnGraphicsDeviceLost@CDesktopManager@@SAXXZ @ 0x1800AD444 (-OnGraphicsDeviceLost@CDesktopManager@@SAXXZ.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@PEAX@std@@@std@@@?$_List_node@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180094F30 (--$_Free_non_head@V-$allocator@U-$_List_node@V-$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std.c)
 *     ?OnGraphicsDeviceLost@CWindowData@@QEAAXXZ @ 0x1800E21E0 (-OnGraphicsDeviceLost@CWindowData@@QEAAXXZ.c)
 */

void __fastcall CWindowList::OnGraphicsDeviceLost(CWindowList *this)
{
  CWindowData *v2; // rdi
  CWindowData *i; // rbx
  char *v4; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  RestartKey = 0LL;
  std::_List_node<std::weak_ptr<CWindowBorder::CCachedBorderBrush>,void *>::_Free_non_head<std::allocator<std::_List_node<std::weak_ptr<CWindowBorder::CCachedBorderBrush>,void *>>>(
    (__int64)this,
    (_QWORD **)CWindowBorder::CCachedBorderBrush::s_cache);
  *(_QWORD *)CWindowBorder::CCachedBorderBrush::s_cache = CWindowBorder::CCachedBorderBrush::s_cache;
  *(_QWORD *)(CWindowBorder::CCachedBorderBrush::s_cache + 8) = CWindowBorder::CCachedBorderBrush::s_cache;
  qword_180119970 = 0LL;
  while ( 1 )
  {
    v4 = (char *)RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 8), &RestartKey);
    if ( !v4 )
      break;
    v2 = (CWindowData *)(v4 + 80);
    for ( i = (CWindowData *)*((_QWORD *)v4 + 10); i != v2; i = *(CWindowData **)i )
      CWindowData::OnGraphicsDeviceLost(i);
  }
}
