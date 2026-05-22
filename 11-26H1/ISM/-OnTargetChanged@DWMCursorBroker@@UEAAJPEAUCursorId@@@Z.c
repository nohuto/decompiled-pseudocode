/*
 * XREFs of ?OnTargetChanged@DWMCursorBroker@@UEAAJPEAUCursorId@@@Z @ 0x1801CC3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180010150 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?SendAndVerifyEndpoints@DWMCursorBroker@@AEAAJPEAUCursorMessage@@@Z @ 0x180078E6C (-SendAndVerifyEndpoints@DWMCursorBroker@@AEAAJPEAUCursorMessage@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCursorDefaultState@@YAJW4InputType@@PEAUCursorState@@@Z @ 0x1800993AC (-GetCursorDefaultState@@YAJW4InputType@@PEAUCursorState@@@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     ?find@?$_Hash@V?$_Umap_traits@UCursorId@@PEAVDWMCursor@@V?$_Uhash_compare@UCursorId@@UCursorIdHash@@U?$equal_to@UCursorId@@@std@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@std@@@std@@@2@AEBUCursorId@@@Z @ 0x1801CCB08 (-find@-$_Hash@V-$_Umap_traits@UCursorId@@PEAVDWMCursor@@V-$_Uhash_compare@UCursorId@@UCursorIdHa.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMCursorBroker::OnTargetChanged(DWMCursorBroker *this, struct CursorId *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rdi
  int CursorDefaultState; // eax
  char v9; // al
  _BYTE v11[16]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v12[4]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v13; // [rsp+34h] [rbp-54h]
  int v14; // [rsp+40h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v16; // [rsp+90h] [rbp+8h] BYREF
  void *v17; // [rsp+A0h] [rbp+18h]

  v17 = &DWMCursorBroker::s_lock;
  std::_Mutex_base::lock((std::_Mutex_base *)&DWMCursorBroker::s_lock);
  memset_0(v12, 0, 0x40uLL);
  std::_Hash<std::_Umap_traits<CursorId,DWMCursor *,std::_Uhash_compare<CursorId,CursorIdHash,std::equal_to<CursorId>>,std::allocator<std::pair<CursorId const,DWMCursor *>>,0>>::find(
    (char *)this + 48,
    &v16,
    a2);
  if ( v16 == *((_QWORD *)this + 7) )
  {
    v4 = -2147467259;
    v5 = 2147500037LL;
    v6 = 198LL;
  }
  else
  {
    v7 = *(_QWORD *)(v16 + 24);
    CursorDefaultState = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 72LL))(v7);
    v4 = CursorDefaultState;
    if ( CursorDefaultState >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 56LL))(v7);
      CursorDefaultState = GetCursorDefaultState(v9, (__int64)v11);
      v4 = CursorDefaultState;
      if ( CursorDefaultState >= 0 )
      {
        v12[0] = 6;
        v13 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 48LL))(v7, &v16);
        v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 56LL))(v7);
        CursorDefaultState = DWMCursorBroker::SendAndVerifyEndpoints(this, (struct CursorMessage *)v12);
        v4 = CursorDefaultState;
        if ( CursorDefaultState >= 0 )
        {
          *(_QWORD *)a2 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 48LL))(v7, &v16);
          v4 = 0;
          goto LABEL_12;
        }
        v6 = 214LL;
      }
      else
      {
        v6 = 204LL;
      }
    }
    else
    {
      v6 = 202LL;
    }
    v5 = (unsigned int)CursorDefaultState;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
    (const char *)v5);
LABEL_12:
  _Mtx_unlock((_Mtx_t)&DWMCursorBroker::s_lock);
  return v4;
}
