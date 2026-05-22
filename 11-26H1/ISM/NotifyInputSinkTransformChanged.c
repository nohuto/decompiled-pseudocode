/*
 * XREFs of NotifyInputSinkTransformChanged @ 0x1800519E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     atexit @ 0x18009A4BC (atexit.c)
 *     _Init_thread_footer @ 0x18009AF8C (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18009AFF4 (_Init_thread_header.c)
 *     ??$emplace_back@AEA_KAEBUtagINPUT_TRANSFORM@@@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@QEAAAEAVNotificationData@@AEA_KAEBUtagINPUT_TRANSFORM@@@Z @ 0x1800A5304 (--$emplace_back@AEA_KAEBUtagINPUT_TRANSFORM@@@-$vector@VNotificationData@@V-$allocator@VNotifica.c)
 *     ??0?$unordered_map@_K_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@QEAA@XZ @ 0x1800A5438 (--0-$unordered_map@_K_KU-$hash@_K@std@@U-$equal_to@_K@2@V-$allocator@U-$pair@$$CB_K_K@std@@@2@@s.c)
 *     ?find@?$_Hash@V?$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x1800A5528 (-find@-$_Hash@V-$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V-$_Uhash_co.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall NotifyInputSinkTransformChanged(__int64 a1, _OWORD *a2)
{
  unsigned int v4; // eax
  __int64 v5; // rax
  int v7; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  if ( dword_180254E40 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 32LL) )
  {
    Init_thread_header(&dword_180254E40);
    if ( dword_180254E40 == -1 )
    {
      SRWLock.Ptr = 0LL;
      std::unordered_map<unsigned __int64,unsigned __int64>::unordered_map<unsigned __int64,unsigned __int64>(&unk_180254DD8);
      qword_180254E18 = 0LL;
      xmmword_180254E20 = 0LL;
      qword_180254E30 = 0LL;
      byte_180254E38 = 0;
      atexit(InputSinkDataCache::GetInstance_::_2_::_dynamic_atexit_destructor_for__instance__);
      Init_thread_footer(&dword_180254E40);
    }
  }
  v4 = 0;
  v10 = 0LL;
  if ( a1 )
  {
    NtQueryCompositionInputSinkLuid(a1, &v10);
    v4 = v10;
  }
  v11 = __PAIR64__(HIDWORD(v10), v4);
  v10 = __PAIR64__(HIDWORD(v10), v4);
  AcquireSRWLockExclusive(&SRWLock);
  std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::find(
    &unk_180254DD8,
    &v11,
    &v10);
  if ( v11 != qword_180254DE0 )
  {
    v5 = qword_180254E18;
    if ( qword_180254E18 == (_QWORD)xmmword_180254E20 )
      goto LABEL_14;
    do
    {
      if ( *(_DWORD *)v5 == 2 && *(_QWORD *)(v5 + 8) == v10 )
        break;
      v5 += 96LL;
    }
    while ( v5 != (_QWORD)xmmword_180254E20 );
    if ( v5 == (_QWORD)xmmword_180254E20 )
    {
LABEL_14:
      std::vector<NotificationData>::emplace_back<unsigned __int64 &,tagINPUT_TRANSFORM const &>(
        &qword_180254E18,
        &v10,
        a2);
    }
    else
    {
      *(_OWORD *)(v5 + 32) = *a2;
      *(_OWORD *)(v5 + 48) = a2[1];
      *(_OWORD *)(v5 + 64) = a2[2];
      *(_OWORD *)(v5 + 80) = a2[3];
    }
    if ( qword_180254E30 && !byte_180254E38 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)qword_180254E30 + 80LL))(
             qword_180254E30,
             1000000LL,
             0LL);
      if ( v7 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x8C,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\inputsinkdatacache\\lib\\"
                        "inputsinkdatacache.cpp",
          (const char *)(unsigned int)v7,
          v8);
      byte_180254E38 = 1;
    }
  }
  ReleaseSRWLockExclusive(&SRWLock);
  return 1LL;
}
