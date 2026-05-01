/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@PEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@V?$_Uhash_compare@PEAUHWINEVENTHOOK__@@U?$hash@PEAUHWINEVENTHOOK__@@@std@@U?$equal_to@PEAUHWINEVENTHOOK__@@@3@@std@@V?$allocator@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x1803521A4
 * Callers:
 *     ??$emplace@AEAPEAUHWINEVENTHOOK__@@AEAPEAVGamingOverlayExperienceManager@@@?$_Hash@V?$_Umap_traits@PEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@V?$_Uhash_compare@PEAUHWINEVENTHOOK__@@U?$hash@PEAUHWINEVENTHOOK__@@@std@@U?$equal_to@PEAUHWINEVENTHOOK__@@@3@@std@@V?$allocator@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@@std@@@std@@@std@@_N@1@AEAPEAUHWINEVENTHOOK__@@AEAPEAVGamingOverlayExperienceManager@@@Z @ 0x18033F64C (--$emplace@AEAPEAUHWINEVENTHOOK__@@AEAPEAVGamingOverlayExperienceManager@@@-$_Hash@V-$_Umap_trai.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800F2E60 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@@std@@@std@@@2@@Z @ 0x1800FE074 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_1800FE074.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@PEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@V?$_Uhash_compare@PEAUHWINEVENTHOOK__@@U?$hash@PEAUHWINEVENTHOOK__@@@std@@U?$equal_to@PEAUHWINEVENTHOOK__@@@3@@std@@V?$allocator@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x180341B54 (--1_Clear_guard@-$_Hash@V-$_Umap_traits@PEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@.c)
 */

unsigned __int64 __fastcall std::_Hash<std::_Umap_traits<HWINEVENTHOOK__ *,GamingOverlayExperienceManager *,std::_Uhash_compare<HWINEVENTHOOK__ *,std::hash<HWINEVENTHOOK__ *>,std::equal_to<HWINEVENTHOOK__ *>>,std::allocator<std::pair<HWINEVENTHOOK__ * const,GamingOverlayExperienceManager *>>,0>>::_Forced_rehash(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rcx
  __int64 v3; // rdi
  unsigned __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 **v6; // rcx
  __int64 v7; // rsi
  const unsigned __int8 *v8; // r11
  const unsigned __int8 *v9; // rbx
  __int64 appended; // rax
  __int64 ***v11; // rdx
  __int64 v12; // r11
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 *v15; // rax
  __int64 *v16; // r10
  const unsigned __int8 **v17; // rdx
  _QWORD *v18; // rax
  __int64 **v19; // r10
  __int64 *v20; // r8
  const unsigned __int8 **v21; // rdx
  _QWORD *v22; // rax
  const unsigned __int8 **v23; // rdx
  __int64 *v24; // rax
  __int64 v26; // [rsp+20h] [rbp-18h] BYREF

  LODWORD(v26) = 0;
  _BitScanReverse64(&v2, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v2 )
    std::_Xlength_error("invalid hash bucket count");
  LODWORD(v26) = 0;
  v3 = qword_18089DA68;
  _BitScanReverse64(&v4, (a2 - 1) | 1);
  v5 = 1LL << ((unsigned __int8)v4 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<HWINEVENTHOOK__ * const,GamingOverlayExperienceManager *>>>>>>::_Assign_grow(
    (__int64)&qword_18089DA78,
    2 * v5,
    qword_18089DA68);
  v7 = v5 - 1;
  qword_18089DA98 = v5;
  qword_18089DA90 = v5 - 1;
  v8 = *(const unsigned __int8 **)qword_18089DA68;
  v9 = *(const unsigned __int8 **)qword_18089DA68;
  while ( v8 != (const unsigned __int8 *)v3 )
  {
    v9 = *(const unsigned __int8 **)v9;
    appended = std::_Fnv1a_append_bytes((__int64)v6, v8 + 16, 8uLL);
    v13 = qword_18089DA78;
    v14 = 2 * (v7 & appended);
    if ( *(_QWORD *)(qword_18089DA78 + 16 * (v7 & appended)) == v3 )
    {
      *(_QWORD *)(qword_18089DA78 + 16 * (v7 & appended)) = v12;
LABEL_7:
      *(_QWORD *)(v13 + 8 * v14 + 8) = v12;
      goto LABEL_15;
    }
    v15 = *(__int64 **)(qword_18089DA78 + 16 * (v7 & appended) + 8);
    v6 = *v11;
    if ( *v11 == (__int64 **)v15[2] )
    {
      v16 = (__int64 *)*v15;
      if ( *v15 != v12 )
      {
        v17 = *(const unsigned __int8 ***)(v12 + 8);
        *v17 = v9;
        v6 = (__int64 **)*((_QWORD *)v9 + 1);
        *v6 = v16;
        v18 = (_QWORD *)v16[1];
        *v18 = v12;
        v16[1] = (__int64)v6;
        *((_QWORD *)v9 + 1) = v17;
        *(_QWORD *)(v12 + 8) = v18;
      }
      goto LABEL_7;
    }
    while ( 1 )
    {
      v19 = (__int64 **)(v15 + 1);
      if ( *(__int64 **)(qword_18089DA78 + 8 * v14) == v15 )
        break;
      v15 = *v19;
      if ( v6 == (__int64 **)(*v19)[2] )
      {
        v20 = (__int64 *)*v15;
        v21 = *(const unsigned __int8 ***)(v12 + 8);
        *v21 = v9;
        v6 = (__int64 **)*((_QWORD *)v9 + 1);
        *v6 = v20;
        v22 = (_QWORD *)v20[1];
        *v22 = v12;
        v20[1] = (__int64)v6;
        *((_QWORD *)v9 + 1) = v21;
        *(_QWORD *)(v12 + 8) = v22;
        goto LABEL_15;
      }
    }
    v23 = *(const unsigned __int8 ***)(v12 + 8);
    *v23 = v9;
    v6 = (__int64 **)*((_QWORD *)v9 + 1);
    *v6 = v15;
    v24 = *v19;
    *v24 = v12;
    *v19 = (__int64 *)v6;
    *((_QWORD *)v9 + 1) = v23;
    *(_QWORD *)(v12 + 8) = v24;
    *(_QWORD *)(v13 + 8 * v14) = v12;
LABEL_15:
    v7 = qword_18089DA90;
    v8 = v9;
  }
  v26 = 0LL;
  return std::_Hash<std::_Umap_traits<HWINEVENTHOOK__ *,GamingOverlayExperienceManager *,std::_Uhash_compare<HWINEVENTHOOK__ *,std::hash<HWINEVENTHOOK__ *>,std::equal_to<HWINEVENTHOOK__ *>>,std::allocator<std::pair<HWINEVENTHOOK__ * const,GamingOverlayExperienceManager *>>,0>>::_Clear_guard::~_Clear_guard(&v26);
}
