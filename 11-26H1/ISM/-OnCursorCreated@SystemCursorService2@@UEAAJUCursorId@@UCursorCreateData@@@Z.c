/*
 * XREFs of ?OnCursorCreated@SystemCursorService2@@UEAAJUCursorId@@UCursorCreateData@@@Z @ 0x1800FBE40
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Erase@K@?$_Hash@V?$_Umap_traits@KPEAUIRawInputProvider@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@$0A@@std@@@std@@AEAA_KAEBK@Z @ 0x180032568 (--$_Erase@K@-$_Hash@V-$_Umap_traits@KPEAUIRawInputProvider@@V-$_Uhash_compare@KU-$hash@K@std@@U-.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F7EC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@W4InputType@@UtagPOINT@@V?$_Uhash_compare@W4InputType@@U?$hash@W4InputType@@@std@@U?$equal_to@W4InputType@@@3@@std@@V?$allocator@U?$pair@$$CBW4InputType@@UtagPOINT@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4InputType@@UtagPOINT@@@std@@@std@@@std@@@2@AEBW4InputType@@@Z @ 0x1800CD1C0 (-find@-$_Hash@V-$_Umap_traits@W4InputType@@UtagPOINT@@V-$_Uhash_compare@W4InputType@@U-$hash@W4I.c)
 *     ??$_Try_emplace@AEBW4InputType@@$$V@?$_Hash@V?$_Umap_traits@W4InputType@@UtagPOINT@@V?$_Uhash_compare@W4InputType@@U?$hash@W4InputType@@@std@@U?$equal_to@W4InputType@@@3@@std@@V?$allocator@U?$pair@$$CBW4InputType@@UtagPOINT@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBW4InputType@@UtagPOINT@@@std@@PEAX@std@@_N@1@AEBW4InputType@@@Z @ 0x1800F7B90 (--$_Try_emplace@AEBW4InputType@@$$V@-$_Hash@V-$_Umap_traits@W4InputType@@UtagPOINT@@V-$_Uhash_co.c)
 *     ??A?$unordered_map@_K_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@QEAAAEA_K$$QEA_K@Z @ 0x1800FABE4 (--A-$unordered_map@_K_KU-$hash@_K@std@@U-$equal_to@_K@2@V-$allocator@U-$pair@$$CB_K_K@std@@@2@@s.c)
 *     ?EnumerateCursorsForShell@SystemCursorService2@@AEAAJXZ @ 0x1800FBA74 (-EnumerateCursorsForShell@SystemCursorService2@@AEAAJXZ.c)
 *     ?InputTypeToCursorDeviceTypeId@SystemCursorService2@@CA?AW4CursorDeviceTypeId@@W4InputType@@@Z @ 0x1800FBDF0 (-InputTypeToCursorDeviceTypeId@SystemCursorService2@@CA-AW4CursorDeviceTypeId@@W4InputType@@@Z.c)
 *     ?SetRasterizationScale@SystemCursor2@@QEAAJI@Z @ 0x1800FCCF8 (-SetRasterizationScale@SystemCursor2@@QEAAJI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SystemCursorService2::OnCursorCreated(SystemCursorService2 *a1, __int64 a2, int *a3)
{
  int v3; // r15d
  unsigned int v6; // edi
  int v7; // eax
  __int64 ***v8; // r9
  __int64 **i; // rbx
  __int64 *v10; // rsi
  __int64 v11; // rsi
  unsigned int v12; // esi
  int v13; // eax
  unsigned int v14; // edi
  __int64 *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rax
  _QWORD *v22; // rcx
  unsigned int v23; // esi
  unsigned int v24; // edi
  int v25; // eax
  unsigned int v26; // ebx
  _BYTE v27[56]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v29; // [rsp+60h] [rbp+8h] BYREF
  __int64 v30; // [rsp+68h] [rbp+10h]
  __int64 *v31; // [rsp+70h] [rbp+18h] BYREF

  v30 = a2;
  v3 = *a3;
  v6 = a2;
  v7 = SystemCursorService2::InputTypeToCursorDeviceTypeId(*a3);
  v8 = (__int64 ***)*((_QWORD *)a1 + 8);
  for ( i = *v8; i != (__int64 **)v8; i = (__int64 **)*i )
  {
    v10 = i[3];
    if ( *((_DWORD *)v10 + 4) == v7 )
    {
      v11 = *v10;
      v29 = v6;
      *(_QWORD *)std::unordered_map<unsigned __int64,unsigned __int64>::operator[](
                   (_QWORD *)a1 + 23,
                   (unsigned __int8 *)&v29) = v11;
      v12 = a3[1];
      v13 = SystemCursor2::SetRasterizationScale((SystemCursor2 *)i[3], v12);
      v14 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xEB,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice2.cpp",
          (const char *)(unsigned int)v13);
        return v14;
      }
      v16 = i[3];
      v17 = HIDWORD(v30);
      LODWORD(v29) = v3;
      *((_DWORD *)v16 + 5) = v12;
      i[3][23] = v17;
      v18 = *((_QWORD *)a1 + 2);
      if ( *std::_Hash<std::_Umap_traits<enum InputType,tagPOINT,std::_Uhash_compare<enum InputType,std::hash<enum InputType>,std::equal_to<enum InputType>>,std::allocator<std::pair<enum InputType const,tagPOINT>>,0>>::find(
              (_QWORD *)(v18 + 96),
              &v31,
              (const unsigned __int8 *)&v29) == *(__int64 **)(v18 + 104) )
      {
        v19 = 2147549183LL;
        v20 = 252LL;
        goto LABEL_11;
      }
      v21 = std::_Hash<std::_Umap_traits<enum InputType,tagPOINT,std::_Uhash_compare<enum InputType,std::hash<enum InputType>,std::equal_to<enum InputType>>,std::allocator<std::pair<enum InputType const,tagPOINT>>,0>>::_Try_emplace<enum InputType const &,>(
              (float *)(v18 + 96),
              (__int64)v27,
              (unsigned __int8 *)&v29);
      v22 = (_QWORD *)(v18 + 96);
      v23 = *(_DWORD *)(*(_QWORD *)v21 + 20LL);
      v24 = *(_DWORD *)(*(_QWORD *)v21 + 24LL);
      std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::_Erase<unsigned long>(
        v22,
        (unsigned __int8 *)&v29);
      v25 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)i[3][21] + 16LL))(i[3][21], v23, v24);
      v26 = v25;
      if ( v25 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x29E,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice2.cpp",
          (const char *)(unsigned int)v25);
        v19 = v26;
        v20 = 246LL;
LABEL_11:
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)v20,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice2.cpp",
          (const char *)v19);
      }
      SystemCursorService2::EnumerateCursorsForShell(a1);
      return 0LL;
    }
  }
  return 0LL;
}
