/*
 * XREFs of ??$_Find_hint@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_hint_result@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@PEAX@std@@@1@QEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@PEAX@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800F8F34
 * Callers:
 *     ??$_Emplace_hint@AEBU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@@2@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@PEAX@1@QEAU21@AEBU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@1@@Z @ 0x1800F8D00 (--$_Emplace_hint@AEBU-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@W4.c)
 * Callees:
 *     ??$_Find_lower_bound@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@PEAX@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18007CE50 (--$_Find_lower_bound@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@_ea_18007CE50.c)
 *     wmemcmp @ 0x18009DD6C (wmemcmp.c)
 *     ??$_Lower_bound_duplicate@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@@2@$0A@@std@@@std@@IEBA_NQEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@PEAX@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800F92B0 (--$_Lower_bound_duplicate@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Tree.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<std::wstring,enum AEC_LOOPBACK_SELECTION_MODE,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,enum AEC_LOOPBACK_SELECTION_MODE>>,0>>::_Find_hint<std::wstring>(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        _QWORD *a4)
{
  __int64 v4; // rbx
  const wchar_t *v8; // rdx
  unsigned __int64 v9; // r14
  const wchar_t *v10; // rcx
  unsigned __int64 v11; // rbp
  size_t v12; // r8
  int v13; // eax
  __int64 v14; // rcx
  const wchar_t *v15; // rdx
  unsigned __int64 v16; // rbp
  const wchar_t *v17; // rcx
  unsigned __int64 v18; // rbx
  size_t v19; // r8
  int v20; // eax
  size_t *v22; // r13
  unsigned __int64 v23; // r12
  _QWORD *v24; // r15
  const wchar_t *v25; // rcx
  size_t *v26; // rbx
  size_t v27; // r8
  int v28; // eax
  const wchar_t *v29; // rcx
  size_t v30; // rbp
  const wchar_t *v31; // rdx
  size_t v32; // rbx
  size_t v33; // r8
  int v34; // eax
  __int64 *v35; // rbx
  __int64 *v36; // rax
  __int64 **v37; // rcx
  __int64 *v38; // rcx
  const wchar_t *v39; // rdx
  unsigned __int64 v40; // r15
  const wchar_t *v41; // rcx
  unsigned __int64 v42; // rbp
  size_t v43; // r8
  int v44; // eax
  bool v45; // zf
  __int64 *v46; // rax
  __int64 *i; // rbx
  __int64 *j; // rax
  const wchar_t *v49; // rcx
  size_t v50; // r15
  const wchar_t *v51; // rdx
  size_t v52; // rbp
  size_t v53; // r8
  int v54; // eax
  __int64 v55; // rbx
  __int64 v56; // rcx
  __int128 v57; // [rsp+20h] [rbp-48h] BYREF
  __int64 v58; // [rsp+30h] [rbp-38h]

  v4 = qword_1801D6620;
  if ( *((_BYTE *)a3 + 25) )
  {
    if ( *(_BYTE *)(*(_QWORD *)(qword_1801D6620 + 8) + 25LL) )
      goto LABEL_13;
    v8 = (const wchar_t *)a4;
    v9 = a4[2];
    v10 = (const wchar_t *)(*(_QWORD *)(qword_1801D6620 + 16) + 32LL);
    if ( a4[3] > 7uLL )
      v8 = (const wchar_t *)*a4;
    v11 = *(_QWORD *)(*(_QWORD *)(qword_1801D6620 + 16) + 48LL);
    if ( *(_QWORD *)(*(_QWORD *)(qword_1801D6620 + 16) + 56LL) > 7uLL )
      v10 = *(const wchar_t **)v10;
    v12 = a4[2];
    if ( v9 >= v11 )
      v12 = *(_QWORD *)(*(_QWORD *)(qword_1801D6620 + 16) + 48LL);
    v13 = wmemcmp(v10, v8, v12);
    if ( v13 )
    {
      if ( v13 < 0 )
        goto LABEL_13;
      goto LABEL_95;
    }
    if ( v11 < v9 )
    {
LABEL_13:
      *(_QWORD *)a2 = *(_QWORD *)(v4 + 16);
      *(_QWORD *)(a2 + 8) = 0LL;
LABEL_24:
      *(_BYTE *)(a2 + 16) = 0;
      goto LABEL_25;
    }
LABEL_95:
    std::_Tree<std::_Tmap_traits<std::wstring,enum AEC_LOOPBACK_SELECTION_MODE,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,enum AEC_LOOPBACK_SELECTION_MODE>>,0>>::_Find_lower_bound<std::wstring>(
      v14,
      &v57,
      (__int64)a4);
    v55 = v58;
    if ( !(unsigned __int8)std::_Tree<std::_Tmap_traits<std::wstring,enum AEC_LOOPBACK_SELECTION_MODE,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,enum AEC_LOOPBACK_SELECTION_MODE>>,0>>::_Lower_bound_duplicate<std::wstring>(
                             v56,
                             v58,
                             a4) )
    {
      *(_OWORD *)a2 = v57;
      goto LABEL_24;
    }
    *(_QWORD *)a2 = v55;
    *(_QWORD *)(a2 + 8) = 2LL;
LABEL_54:
    *(_BYTE *)(a2 + 16) = 1;
    goto LABEL_25;
  }
  v15 = (const wchar_t *)(a3 + 4);
  v16 = a3[6];
  if ( a3 == *(__int64 **)qword_1801D6620 )
  {
    if ( (unsigned __int64)a3[7] > 7 )
      v15 = *(const wchar_t **)v15;
    v17 = (const wchar_t *)a4;
    v18 = a4[2];
    if ( a4[3] > 7uLL )
      v17 = (const wchar_t *)*a4;
    v19 = a3[6];
    if ( v16 >= v18 )
      v19 = a4[2];
    v20 = wmemcmp(v17, v15, v19);
    if ( v20 )
    {
      if ( v20 >= 0 )
        goto LABEL_95;
    }
    else if ( v18 >= v16 )
    {
      goto LABEL_95;
    }
LABEL_23:
    *(_QWORD *)(a2 + 8) = 1LL;
    *(_QWORD *)a2 = a3;
    goto LABEL_24;
  }
  if ( (unsigned __int64)a3[7] > 7 )
    v15 = *(const wchar_t **)v15;
  v22 = a4 + 2;
  v23 = a4[2];
  v24 = a4 + 3;
  v25 = (const wchar_t *)a4;
  if ( a4[3] > 7uLL )
    v25 = (const wchar_t *)*a4;
  v26 = a4 + 2;
  v27 = a3[6];
  if ( v16 >= v23 )
    v27 = a4[2];
  v28 = wmemcmp(v25, v15, v27);
  if ( v28 )
  {
    if ( v28 < 0 )
      goto LABEL_71;
  }
  else if ( v23 < v16 )
  {
LABEL_71:
    v46 = a3;
    if ( *((_BYTE *)a3 + 25) )
    {
      i = (__int64 *)a3[2];
    }
    else
    {
      i = (__int64 *)*a3;
      if ( *(_BYTE *)(*a3 + 25) )
      {
        for ( i = (__int64 *)a3[1]; !*((_BYTE *)i + 25) && v46 == (__int64 *)*i; i = (__int64 *)i[1] )
          v46 = i;
        if ( *((_BYTE *)v46 + 25) )
          i = v46;
      }
      else
      {
        for ( j = (__int64 *)i[2]; !*((_BYTE *)j + 25); j = (__int64 *)j[2] )
          i = j;
      }
    }
    v49 = (const wchar_t *)(i + 4);
    v50 = *v22;
    v51 = (const wchar_t *)a4;
    if ( a4[3] > 7uLL )
      v51 = (const wchar_t *)*a4;
    v52 = i[6];
    if ( (unsigned __int64)i[7] > 7 )
      v49 = *(const wchar_t **)v49;
    v53 = *v22;
    if ( v50 >= v52 )
      v53 = i[6];
    v54 = wmemcmp(v49, v51, v53);
    if ( v54 )
    {
      if ( v54 >= 0 )
        goto LABEL_95;
    }
    else if ( v52 >= v50 )
    {
      goto LABEL_95;
    }
    if ( *(_BYTE *)(i[2] + 25) )
    {
      *(_QWORD *)a2 = i;
      *(_QWORD *)(a2 + 8) = 0LL;
      goto LABEL_24;
    }
    goto LABEL_23;
  }
  v29 = (const wchar_t *)(a3 + 4);
  v30 = *v26;
  v31 = (const wchar_t *)a4;
  if ( *v24 > 7uLL )
    v31 = (const wchar_t *)*a4;
  v32 = a3[6];
  if ( (unsigned __int64)a3[7] > 7 )
    v29 = *(const wchar_t **)v29;
  v33 = v30;
  if ( v30 >= v32 )
    v33 = a3[6];
  v34 = wmemcmp(v29, v31, v33);
  if ( v34 )
  {
    if ( v34 < 0 )
      goto LABEL_46;
LABEL_53:
    *(_QWORD *)a2 = a3;
    *(_QWORD *)(a2 + 8) = 0LL;
    goto LABEL_54;
  }
  if ( v32 >= v30 )
    goto LABEL_53;
LABEL_46:
  v35 = (__int64 *)a3[2];
  if ( *((_BYTE *)v35 + 25) )
  {
    v35 = (__int64 *)a3[1];
    if ( *((_BYTE *)v35 + 25) )
      goto LABEL_68;
    v36 = a3;
    do
    {
      v37 = (__int64 **)v35;
      if ( v36 != (__int64 *)v35[2] )
        break;
      v35 = (__int64 *)v35[1];
      v36 = (__int64 *)v37;
    }
    while ( !*((_BYTE *)v35 + 25) );
  }
  else
  {
    v38 = (__int64 *)*v35;
    if ( !*(_BYTE *)(*v35 + 25) )
    {
      do
      {
        v35 = v38;
        v38 = (__int64 *)*v38;
      }
      while ( !*((_BYTE *)v38 + 25) );
    }
  }
  if ( !*((_BYTE *)v35 + 25) )
  {
    v39 = (const wchar_t *)(v35 + 4);
    v40 = v35[6];
    if ( (unsigned __int64)v35[7] > 7 )
      v39 = *(const wchar_t **)v39;
    v41 = (const wchar_t *)a4;
    v42 = a4[2];
    if ( a4[3] > 7uLL )
      v41 = (const wchar_t *)*a4;
    v43 = v35[6];
    if ( v40 >= v42 )
      v43 = a4[2];
    v44 = wmemcmp(v41, v39, v43);
    if ( v44 )
    {
      if ( v44 >= 0 )
        goto LABEL_95;
    }
    else if ( v42 >= v40 )
    {
      goto LABEL_95;
    }
  }
LABEL_68:
  v45 = *(_BYTE *)(a3[2] + 25) == 0;
  *(_BYTE *)(a2 + 16) = 0;
  if ( v45 )
  {
    *(_QWORD *)a2 = v35;
    *(_QWORD *)(a2 + 8) = 1LL;
  }
  else
  {
    *(_QWORD *)a2 = a3;
    *(_QWORD *)(a2 + 8) = 0LL;
  }
LABEL_25:
  *(_DWORD *)(a2 + 17) = 0;
  *(_WORD *)(a2 + 21) = 0;
  *(_BYTE *)(a2 + 23) = 0;
  return a2;
}
