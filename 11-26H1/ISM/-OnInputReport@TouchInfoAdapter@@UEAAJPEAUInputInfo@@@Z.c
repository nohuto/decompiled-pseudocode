/*
 * XREFs of ?OnInputReport@TouchInfoAdapter@@UEAAJPEAUInputInfo@@@Z @ 0x1801CAB30
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800D8D08 (-find@-$_Hash@V-$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V-$_Uhash_compare@KU-$hash@K@std@.c)
 *     ??$_Insert_or_assign@KAEAG@?$unordered_map@KGU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKG@std@@@2@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKG@std@@@std@@@std@@@std@@_N@1@$$QEAKAEAG@Z @ 0x1801CA6D8 (--$_Insert_or_assign@KAEAG@-$unordered_map@KGU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@U-$pair.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKG@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@KGV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKG@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKG@std@@@std@@@std@@@1@V21@@Z @ 0x1801CA87C (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBKG@std@@@std@@@std@@@s.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TouchInfoAdapter::OnInputReport(TouchInfoAdapter *this, struct InputInfo *a2)
{
  unsigned int v4; // r14d
  void *v5; // rax
  const char *v6; // r9
  bool v7; // cc
  char v8; // r10
  unsigned int v9; // r11d
  __int16 v10; // di
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // r12
  int v14; // esi
  int v15; // esi
  __int64 v16; // r8
  __int16 v17; // r10
  unsigned int i; // ecx
  __int64 v19; // rdx
  __int16 v20; // ax
  int v21; // ecx
  int v22; // eax
  __int16 v23; // ax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rsi
  __int16 v27; // dx
  __int128 v28; // xmm1
  __int64 v29; // rcx
  __int128 v30; // xmm0
  __int16 v31; // ax
  _QWORD *v32; // rax
  __int64 v33; // r8
  int v34; // r9d
  char v35; // si
  unsigned __int16 v36; // dx
  __int64 v38; // r9
  __int64 v39; // rax
  __int16 v40; // cx
  __int64 v41; // rcx
  unsigned __int8 v42; // r10
  unsigned int v43; // r9d
  unsigned int k; // r8d
  __int64 v45; // rdx
  unsigned __int16 v46; // dx
  int v47; // eax
  unsigned __int8 v48; // r10
  unsigned int v49; // r9d
  unsigned int j; // r8d
  __int64 v51; // rdx
  __int16 v52; // ax
  int v53; // eax
  __int16 v54; // dx
  unsigned __int16 v55; // dx
  _OWORD *v56; // rcx
  __int16 *v57; // rax
  __int128 v58; // xmm1
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  __int128 v62; // xmm1
  __int128 v63; // xmm0
  __int128 v64; // xmm1
  __int128 v65; // xmm1
  __int128 v66; // xmm0
  __int128 v67; // xmm1
  __int64 v68; // rax
  int v69; // [rsp+20h] [rbp-E0h]
  unsigned int v70; // [rsp+24h] [rbp-DCh]
  unsigned int v71; // [rsp+24h] [rbp-DCh]
  int v72; // [rsp+28h] [rbp-D8h] BYREF
  int v73; // [rsp+2Ch] [rbp-D4h]
  int v74; // [rsp+30h] [rbp-D0h]
  __int64 v75; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v76[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v77; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v78; // [rsp+52h] [rbp-AEh] BYREF
  int v79; // [rsp+54h] [rbp-ACh]
  int v80; // [rsp+60h] [rbp-A0h]
  char v81; // [rsp+65h] [rbp-9Bh]
  char v82; // [rsp+66h] [rbp-9Ah]
  unsigned __int8 v83; // [rsp+67h] [rbp-99h]
  _BYTE v84[568]; // [rsp+68h] [rbp-98h]
  __int128 v85; // [rsp+2A0h] [rbp+1A0h] BYREF
  int v86; // [rsp+2B0h] [rbp+1B0h]
  wil::details::in1diag3 *retaddr; // [rsp+2F8h] [rbp+1F8h]

  if ( (*(_DWORD *)a2 & 0x100003B) == 0 )
    return 0LL;
  v4 = 0;
  v77 = 0;
  v5 = memset_0(&v78, 0, 0x246uLL);
  v7 = *((_DWORD *)a2 + 79) <= 0xAu;
  LOBYTE(v5) = 0;
  v73 = (int)v5;
  v8 = 0;
  LOWORD(v69) = 0;
  v9 = 0;
  BYTE2(v69) = 0;
  v70 = 0;
  if ( !v7 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x80,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\adapters\\touchinfo\\lib\\touchinfoadapter.cpp",
      v6);
  v10 = 1;
  v11 = 0LL;
  v12 = 4LL;
  while ( 1 )
  {
    v74 = v11;
    if ( (unsigned int)v11 >= *((_DWORD *)a2 + 79) )
      break;
    v13 = 18 * v11;
    v14 = *((_DWORD *)a2 + 36 * v11 + 83);
    if ( (v14 & 0x10) == 0 && (*(_BYTE *)a2 & 2) != 0 )
    {
      v14 &= ~4u;
      *((_DWORD *)a2 + 36 * v11 + 83) = v14;
    }
    if ( (v14 & 2) != 0 && !*((_BYTE *)this + 32) )
    {
      LOWORD(v4) = 8;
      BYTE1(v69) = v8 + 1;
    }
    v15 = v14 & 4;
    if ( v15 )
      ++BYTE2(v69);
    v72 = *((_DWORD *)a2 + 36 * v11 + 81);
    std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::find(
      (_QWORD *)this + 5,
      &v75,
      (const unsigned __int8 *)&v72);
    v16 = v75;
    if ( v75 == *((_QWORD *)this + 6) )
    {
      if ( v15 )
      {
        LOWORD(v4) = v4 | 1;
      }
      else if ( *((_BYTE *)this + 32) )
      {
        goto LABEL_43;
      }
      LOWORD(v72) = *((_WORD *)this + 54);
      *((_WORD *)this + 54) = v72 + 1;
      LODWORD(v75) = *((_DWORD *)a2 + 2 * v13 + 81);
      std::unordered_map<unsigned long,unsigned short>::_Insert_or_assign<unsigned long,unsigned short &>(
        (float *)this + 10,
        (__int64)&v85,
        (unsigned __int8 *)&v75,
        &v72);
      v16 = v85;
      v17 = v72;
      v75 = v85;
    }
    else
    {
      v17 = *(_WORD *)(v75 + 20);
      if ( !*((_BYTE *)this + 696) )
        goto LABEL_25;
      for ( i = 0; ; ++i )
      {
        if ( i >= *((unsigned __int8 *)this + 135) )
          goto LABEL_25;
        v19 = 56LL * i;
        if ( v17 == *(_WORD *)((char *)this + v19 + 136) )
          break;
      }
      v20 = *(_WORD *)((char *)this + v19 + 138);
      if ( *((_BYTE *)this + 32) )
      {
        if ( (v20 & 4) != 0 )
          goto LABEL_25;
      }
      else if ( (v20 & 8) == 0 )
      {
LABEL_25:
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xBF,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\adapters\\touchinfo\\lib\\touchinfoadapter.cpp",
          (const char *)0x8000FFFFLL,
          v69);
      }
      v21 = *((_DWORD *)a2 + 2 * v13 + 83);
      if ( (v21 & 4) != 0 )
      {
        if ( (v20 & 3) != 0 )
          LOWORD(v4) = v4 | 2;
        else
          LOWORD(v4) = v4 | 1;
      }
      else if ( (v20 & 1) != 0 || (v20 & 2) != 0 )
      {
        LOWORD(v4) = v4 | 4;
      }
      v22 = (unsigned __int8)v73;
      if ( (v21 & 0x8000) != 0 )
        v22 = 1;
      *(_WORD *)((char *)this + v19 + 154) = 1;
      v73 = v22;
      v23 = v4 | 0x2000;
      if ( (v21 & 0x8000) == 0 )
        v23 = v4;
      LOWORD(v4) = v23;
    }
    v24 = 56LL * v70;
    v9 = ++v70;
    *(_WORD *)&v84[v24 + 4] = *((_WORD *)a2 + 4 * v13 + 184);
    *(_WORD *)&v84[v24 + 6] = *((_WORD *)a2 + 4 * v13 + 186);
    *(_WORD *)&v84[v24 + 8] = *((_WORD *)a2 + 4 * v13 + 176);
    *(_WORD *)&v84[v24 + 10] = *((_WORD *)a2 + 4 * v13 + 178);
    v25 = *((_DWORD *)a2 + 2 * v13 + 83);
    *(_WORD *)&v84[v24] = v17;
    *(_WORD *)&v84[v24 + 2] = v4;
    if ( (v25 & 2) == 0 || *((_BYTE *)this + 32) && (v25 & 4) == 0 )
    {
      std::_Hash<std::_Umap_traits<unsigned long,unsigned short,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned short>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,unsigned short>>>>,0>(
        (_QWORD *)this + 5,
        v76,
        v16);
LABEL_43:
      v9 = v70;
    }
    v8 = BYTE1(v69);
    v11 = (unsigned int)(v74 + 1);
    v4 = 0;
  }
  if ( *((_BYTE *)this + 696) && *((_BYTE *)this + 135) )
  {
    do
    {
      v26 = 56LL * v4;
      v27 = *(_WORD *)((char *)this + v26 + 138);
      if ( ((v27 & 1) != 0 || (v27 & 0xA) != 0) && *(_WORD *)((char *)this + v26 + 154) != 1 )
      {
        v28 = *(_OWORD *)((char *)this + v26 + 152);
        v29 = 56LL * v9;
        *(_OWORD *)&v84[v29] = *(_OWORD *)((char *)this + v26 + 136);
        v30 = *(_OWORD *)((char *)this + v26 + 168);
        *(_OWORD *)&v84[v29 + 16] = v28;
        *(_QWORD *)&v28 = *(_QWORD *)((char *)this + v26 + 184);
        *(_OWORD *)&v84[v29 + 32] = v30;
        *(_QWORD *)&v84[v29 + 48] = v28;
        if ( (v27 & 1) != 0 || (v27 & 2) != 0 )
          v31 = 4;
        else
          v31 = 0;
        *(_WORD *)&v84[56 * v9 + 2] = v31;
        v32 = (_QWORD *)*((_QWORD *)this + 6);
        v71 = v9 + 1;
        while ( 1 )
        {
          v32 = (_QWORD *)*v32;
          if ( v32 == *((_QWORD **)this + 6) )
            break;
          if ( *((_WORD *)v32 + 10) == *(_WORD *)((char *)this + v26 + 136) )
            v32 = std::_Hash<std::_Umap_traits<unsigned long,unsigned short,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned short>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,unsigned short>>>>,0>(
                    (_QWORD *)this + 5,
                    v76,
                    (__int64)v32);
        }
        v9 = v71;
      }
      ++v4;
    }
    while ( v4 < *((unsigned __int8 *)this + 135) );
    v8 = BYTE1(v69);
  }
  v33 = 0LL;
  v34 = *((_DWORD *)this + 26);
  v79 = *((_DWORD *)a2 + 2);
  v80 = v34;
  v78 = 0;
  v81 = v8;
  v82 = BYTE2(v69);
  v83 = v9;
  v77 = 56 * v9 + 24;
  if ( *((_BYTE *)this + 696) )
  {
    if ( *((_BYTE *)this + 32) || (v36 = 256, (*((_WORD *)this + 57) & 0x100) == 0) )
    {
      v36 = 0;
      if ( !BYTE2(v69) )
      {
        v78 = 4;
        if ( v8 )
        {
          (*(void (__fastcall **)(_QWORD, __int16 *, _QWORD))(**((_QWORD **)this + 3) + 24LL))(
            *((_QWORD *)this + 3),
            &v77,
            0LL);
          v48 = v83;
          v49 = 0;
          for ( j = 0; j < v48; ++j )
          {
            v51 = 56LL * v49;
            v52 = *(_WORD *)&v84[56 * j + 2];
            if ( (v52 & 8) != 0 )
            {
              *(_WORD *)&v84[56 * v49++ + 2] = v52 & 0xFFFB;
              *(_WORD *)&v84[v51] = *(_WORD *)&v84[56 * j];
              *(_WORD *)&v84[v51 + 4] = *(_WORD *)&v84[56 * j + 4];
              *(_WORD *)&v84[v51 + 6] = *(_WORD *)&v84[56 * j + 6];
              *(_WORD *)&v84[v51 + 8] = *(_WORD *)&v84[56 * j + 8];
              *(_WORD *)&v84[v51 + 10] = *(_WORD *)&v84[56 * j + 10];
              v48 = v83;
            }
          }
          v53 = *((_DWORD *)this + 26) + 1;
          v54 = v78 & 0xFFFB;
          *((_DWORD *)this + 26) = v53;
          v36 = v54 | 0x101;
          v80 = v53;
          v33 = v36;
          v78 = v36;
          v83 = v49;
          v77 = 56 * v49 + 24;
        }
        else
        {
          *((_BYTE *)this + 696) = 0;
          *((_DWORD *)this + 26) = v34 + 1;
          v33 = 4LL;
          *((_WORD *)this + 54) = 0;
          v36 = 4;
        }
      }
    }
    else
    {
      if ( BYTE2(v69) )
      {
        v86 = 0;
        v38 = 0LL;
        v85 = 0LL;
        if ( (_BYTE)v9 )
        {
          do
          {
            v39 = (unsigned int)v38;
            v38 = (unsigned int)(v38 + 1);
            v40 = *(_WORD *)&v84[56 * v39 + 2];
            *((_WORD *)&v85 + v39) = v40;
            *(_WORD *)&v84[56 * v39 + 2] = v40 & 0xFFFE;
          }
          while ( (unsigned int)v38 < v83 );
          v33 = v78;
        }
        v41 = *((_QWORD *)this + 3);
        LOWORD(v33) = v33 | 0x104;
        v82 = 0;
        v78 = v33;
        (*(void (__fastcall **)(__int64, __int16 *, __int64, __int64))(*(_QWORD *)v41 + 24LL))(v41, &v77, v33, v38);
        v42 = v83;
        v43 = 0;
        for ( k = 0; k < v42; ++k )
        {
          v45 = 56LL * v43;
          if ( (v84[56 * k + 2] & 8) != 0 )
          {
            ++v43;
            *(_WORD *)&v84[v45 + 2] = *((_WORD *)&v85 + k);
            *(_WORD *)&v84[v45] = *(_WORD *)&v84[56 * k];
            *(_WORD *)&v84[v45 + 4] = *(_WORD *)&v84[56 * k + 4];
            *(_WORD *)&v84[v45 + 6] = *(_WORD *)&v84[56 * k + 6];
            *(_WORD *)&v84[v45 + 8] = *(_WORD *)&v84[56 * k + 8];
            *(_WORD *)&v84[v45 + 10] = *(_WORD *)&v84[56 * k + 10];
            v42 = v83;
          }
        }
        v46 = v78;
        v47 = *((_DWORD *)this + 26) + 1;
        *((_DWORD *)this + 26) = v47;
        v80 = v47;
        v82 = BYTE2(v69);
        v36 = v46 & 0xFEFA | 1;
        v83 = v43;
        v77 = 56 * v43 + 24;
      }
      else if ( !v8 )
      {
        *((_BYTE *)this + 696) = 0;
        *((_DWORD *)this + 26) = v34 + 1;
        v36 = 260;
        *((_WORD *)this + 54) = 0;
      }
      v33 = v36;
      v78 = v36;
    }
    v35 = 0;
    goto LABEL_94;
  }
  *((_BYTE *)this + 696) = 1;
  if ( BYTE2(v69) )
  {
    v33 = 1LL;
    v78 = 1;
    goto LABEL_66;
  }
  if ( v8 )
  {
    v33 = 257LL;
    v78 = 257;
    v10 = 257;
LABEL_66:
    v35 = 0;
LABEL_69:
    v36 = v10;
LABEL_94:
    if ( (_BYTE)v73 )
    {
      v55 = v36 | 0x8000;
      v33 = v55;
      v78 = v55;
    }
    if ( (*(_BYTE *)a2 & 0x20) != 0 )
    {
      LOWORD(v33) = v33 | 0x1000;
      v78 = v33;
    }
    if ( !v35 )
    {
      v56 = (_OWORD *)((char *)this + 112);
      v57 = &v77;
      do
      {
        v58 = *((_OWORD *)v57 + 1);
        *v56 = *(_OWORD *)v57;
        v59 = *((_OWORD *)v57 + 2);
        v56[1] = v58;
        v60 = *((_OWORD *)v57 + 3);
        v56[2] = v59;
        v61 = *((_OWORD *)v57 + 4);
        v56[3] = v60;
        v62 = *((_OWORD *)v57 + 5);
        v56[4] = v61;
        v63 = *((_OWORD *)v57 + 6);
        v56[5] = v62;
        v64 = *((_OWORD *)v57 + 7);
        v57 += 64;
        v56[6] = v63;
        v56 += 8;
        *(v56 - 1) = v64;
        --v12;
      }
      while ( v12 );
      v65 = *((_OWORD *)v57 + 1);
      *v56 = *(_OWORD *)v57;
      v66 = *((_OWORD *)v57 + 2);
      v56[1] = v65;
      v67 = *((_OWORD *)v57 + 3);
      v68 = *((_QWORD *)v57 + 8);
      v56[2] = v66;
      v56[3] = v67;
      *((_QWORD *)v56 + 8) = v68;
      (*(void (__fastcall **)(_QWORD, __int16 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
        *((_QWORD *)this + 3),
        &v77,
        v33);
    }
    return 0LL;
  }
  else
  {
    if ( *((_BYTE *)this + 32) )
    {
      v35 = 1;
      *((_BYTE *)this + 696) = 0;
      v10 = 0;
      goto LABEL_69;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\adapters\\touchinfo\\lib\\touchinfoadapter.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
}
