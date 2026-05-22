/*
 * XREFs of ?GetCursor@DWMCursorBroker@@UEAAJKK_NPEAPEAUICursor@@@Z @ 0x18000FAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180010150 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@UCursorId@@PEAVDWMCursor@@V?$_Uhash_compare@UCursorId@@UCursorIdHash@@U?$equal_to@UCursorId@@@std@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@std@@@std@@@2@AEBUCursorId@@@Z @ 0x1801CCB08 (-find@-$_Hash@V-$_Umap_traits@UCursorId@@PEAVDWMCursor@@V-$_Uhash_compare@UCursorId@@UCursorIdHa.c)
 *     ?find@?$_Hash@V?$_Umap_traits@UDWMPointerMapping@@UCursorId@@V?$_Uhash_compare@UDWMPointerMapping@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@2@AEBUDWMPointerMapping@@@Z @ 0x1801CCB64 (-find@-$_Hash@V-$_Umap_traits@UDWMPointerMapping@@UCursorId@@V-$_Uhash_compare@UDWMPointerMappin.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMCursorBroker::GetCursor(
        DWMCursorBroker *this,
        unsigned int a2,
        unsigned int a3,
        char a4,
        struct ICursor **a5)
{
  struct ICursor **v9; // rdi
  int v10; // eax
  unsigned int v11; // ebx
  struct ICursor *v13; // rbx
  __int64 v14; // r9
  __int64 v15; // rdx
  _QWORD v16[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v16[1] = &DWMCursorBroker::s_lock;
  std::_Mutex_base::lock((std::_Mutex_base *)&DWMCursorBroker::s_lock);
  v9 = a5;
  *a5 = 0LL;
  if ( a2 == -1 )
  {
    (*(void (__fastcall **)(DWMCursorBroker *, struct ICursor **))(*(_QWORD *)this + 40LL))(this, v9);
    goto LABEL_6;
  }
  a5 = (struct ICursor **)__PAIR64__(a3, a2);
  std::_Hash<std::_Umap_traits<DWMPointerMapping,CursorId,std::_Uhash_compare<DWMPointerMapping,DWMMappingHash,std::equal_to<DWMPointerMapping>>,std::allocator<std::pair<DWMPointerMapping const,CursorId>>,0>>::find(
    (char *)this + 112,
    v16,
    &a5);
  if ( v16[0] != *((_QWORD *)this + 15) )
  {
    a5 = *(struct ICursor ***)(v16[0] + 24LL);
    std::_Hash<std::_Umap_traits<CursorId,DWMCursor *,std::_Uhash_compare<CursorId,CursorIdHash,std::equal_to<CursorId>>,std::allocator<std::pair<CursorId const,DWMCursor *>>,0>>::find(
      (char *)this + 48,
      v16,
      &a5);
    if ( v16[0] != *((_QWORD *)this + 7) )
    {
      v13 = *(struct ICursor **)(v16[0] + 24LL);
      (*(void (__fastcall **)(struct ICursor *))(*(_QWORD *)v13 + 8LL))(v13);
      *v9 = v13;
      goto LABEL_6;
    }
  }
  if ( !a4 )
  {
    v11 = -2147467259;
    v14 = 2147500037LL;
    v15 = 756LL;
    goto LABEL_11;
  }
  v10 = (*(__int64 (__fastcall **)(DWMCursorBroker *, struct ICursor **))(*(_QWORD *)this + 40LL))(this, v9);
  v11 = v10;
  if ( v10 < 0 )
  {
    v14 = (unsigned int)v10;
    v15 = 759LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)v14,
      v16[0]);
    goto LABEL_7;
  }
LABEL_6:
  v11 = 0;
LABEL_7:
  _Mtx_unlock((_Mtx_t)&DWMCursorBroker::s_lock);
  return v11;
}
