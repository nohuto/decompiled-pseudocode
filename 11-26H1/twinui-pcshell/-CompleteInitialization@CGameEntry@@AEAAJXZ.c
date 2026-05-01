/*
 * XREFs of ?CompleteInitialization@CGameEntry@@AEAAJXZ @ 0x18003DBC8
 * Callers:
 *     ?GetNextEntry@CEnumerateEntries@@UEAAJPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003D460 (-GetNextEntry@CEnumerateEntries@@UEAAJPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 *     ?RuntimeClassInitialize@CGameEntry@@QEAAJPEAUIGameEntry@KnownGameList@@@Z @ 0x18021E0CC (-RuntimeClassInitialize@CGameEntry@@QEAAJPEAUIGameEntry@KnownGameList@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802CE0B0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CGameEntry::CompleteInitialization(CGameEntry *this)
{
  unsigned int v2; // ecx
  unsigned int v3; // ebx
  unsigned int v4; // esi
  __int64 v5; // rdx
  unsigned int v6; // edi
  wil::details::in1diag3 *v7; // r15
  wil::details::in1diag3 *v8; // r12
  unsigned int v9; // esi
  unsigned int *v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int16 *v14; // r8
  __int64 v15; // r9
  unsigned __int16 *v16; // r8
  unsigned int v17; // ecx
  unsigned __int16 *v18; // rdx
  unsigned __int64 v19; // r8
  unsigned __int16 *v20; // r9
  unsigned int v21; // edx
  int v22; // ecx
  unsigned int v23; // edx
  unsigned __int64 v24; // rax
  void *v25; // rax
  const struct std::nothrow_t *v26; // rdx
  void *v27; // rcx
  __int64 v28; // rcx
  unsigned int j; // r9d
  __int64 v30; // r8
  unsigned int v31; // edx
  unsigned int v32; // edx
  _DWORD *v33; // r10
  wil::details::in1diag3 *v34; // r12
  unsigned int v35; // esi
  wil::details::in1diag3 *v36; // r15
  unsigned int v37; // edi
  unsigned int v38; // edx
  unsigned int v39; // ecx
  unsigned int v40; // ecx
  __int64 v41; // rdx
  __int64 v42; // r8
  unsigned int v43; // edx
  __int64 v44; // r8
  unsigned int v45; // edi
  unsigned __int64 v46; // rax
  void *v47; // rax
  const struct std::nothrow_t *v48; // rdx
  void *v49; // rcx
  __int64 v50; // r8
  unsigned int i; // r10d
  wil::details::in1diag3 *v52; // r12
  unsigned int v53; // esi
  wil::details::in1diag3 *v54; // r15
  unsigned int v55; // edi
  unsigned int v56; // ecx
  unsigned int v57; // ecx
  _DWORD *v58; // r8
  wil::details::in1diag3 *v59; // r12
  unsigned int v60; // esi
  wil::details::in1diag3 *v61; // r15
  unsigned int v62; // edi
  unsigned int v63; // ecx
  unsigned int v64; // ecx
  __int64 v65; // r9
  __int64 v66; // rax
  unsigned int v67; // ecx
  __int64 v68; // r9
  unsigned int v69; // edi
  unsigned int v70; // ecx
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  int savedregs; // [rsp+20h] [rbp+0h]
  int savedregsa; // [rsp+20h] [rbp+0h]
  int savedregsb; // [rsp+20h] [rbp+0h]
  int savedregsc; // [rsp+20h] [rbp+0h]
  int savedregsd; // [rsp+20h] [rbp+0h]
  int savedregse; // [rsp+20h] [rbp+0h]
  int savedregsf; // [rsp+20h] [rbp+0h]
  int savedregsg; // [rsp+20h] [rbp+0h]
  int savedregsh; // [rsp+20h] [rbp+0h]
  int savedregsi; // [rsp+20h] [rbp+0h]
  int savedregsj; // [rsp+20h] [rbp+0h]
  int savedregsk; // [rsp+20h] [rbp+0h]
  int savedregsl; // [rsp+20h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]

  v2 = *((_DWORD *)this + 8);
  if ( v2 < 4 )
  {
    v3 = -2147483637;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x59F,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8000000BLL,
      savedregs);
    v4 = 1457;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8000000BLL,
      savedregsa);
    v5 = 1334LL;
    goto LABEL_7;
  }
  v11 = (unsigned int *)*((_QWORD *)this + 2);
  v12 = v2 - 4;
  v13 = *v11;
  v14 = (unsigned __int16 *)(v11 + 1);
  *((_DWORD *)this + 9) = v13;
  *((_QWORD *)this + 2) = v11 + 1;
  *((_DWORD *)this + 8) = v12;
  if ( (v12 & 3) != 0 )
  {
    v72 = 4 - (unsigned int)(v12 & 3);
    if ( (unsigned int)v72 > (unsigned int)v12 )
    {
      v3 = -2147483637;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x59F,
        (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x8000000BLL,
        savedregs);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x593,
        (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x8000000BLL,
        savedregsk);
      v4 = 1461;
      goto LABEL_3;
    }
    v12 = (unsigned int)v12 & 0xFFFFFFFC;
    v14 = (unsigned __int16 *)((char *)v14 + v72);
    *((_DWORD *)this + 8) = v12;
    *((_QWORD *)this + 2) = v14;
  }
  if ( v13 > v12 + 4 )
  {
    v3 = -2147483637;
    v5 = 1338LL;
    goto LABEL_7;
  }
  if ( (unsigned int)v13 < 4 )
  {
    *((_DWORD *)this + 8) = -1;
    v5 = 1342LL;
    v3 = -2147024362;
    goto LABEL_7;
  }
  *((_DWORD *)this + 8) = v13 - 4;
  if ( (unsigned int)(v13 - 4) < 2 )
  {
    v3 = -2147483637;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x59F,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8000000BLL,
      savedregs);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5A6,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8000000BLL,
      savedregsc);
    v5 = 1346LL;
    goto LABEL_7;
  }
  v15 = *v14;
  v16 = v14 + 1;
  *((_WORD *)this + 24) = v15;
  *((_QWORD *)this + 2) = v16;
  *((_DWORD *)this + 8) = v13 - 6;
  if ( (unsigned int)v15 > (int)v13 - 6 )
  {
    v3 = -2147483637;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x59F,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8000000BLL,
      savedregs);
    v5 = 1348LL;
    goto LABEL_7;
  }
  v17 = v13 - 6 - v15;
  *((_QWORD *)this + 5) = v16;
  v18 = (unsigned __int16 *)((char *)v16 + v15);
  *((_DWORD *)this + 8) = v17;
  *((_QWORD *)this + 2) = (char *)v16 + v15;
  if ( (v17 & 3) != 0 )
  {
    v73 = 4 - (v17 & 3);
    if ( (unsigned int)v73 > v17 )
    {
      v3 = -2147483637;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x59F,
        (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x8000000BLL,
        savedregs);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x593,
        (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x8000000BLL,
        savedregsl);
      v5 = 1352LL;
      goto LABEL_7;
    }
    v17 &= 0xFFFFFFFC;
    v18 = (unsigned __int16 *)((char *)v18 + v73);
    *((_DWORD *)this + 8) = v17;
    *((_QWORD *)this + 2) = v18;
  }
  if ( v17 < 2 )
  {
    v3 = -2147483637;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x59F,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8000000BLL,
      savedregs);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5A6,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8000000BLL,
      savedregsd);
    v5 = 1354LL;
    goto LABEL_7;
  }
  v19 = *v18;
  v20 = v18 + 1;
  v21 = v17 - 2;
  *((_WORD *)this + 25) = v19;
  *((_QWORD *)this + 2) = v20;
  *((_DWORD *)this + 8) = v17 - 2;
  if ( 12 * (int)v19 > v17 - 2 )
  {
    v3 = -2147024809;
    v5 = 1356LL;
    goto LABEL_7;
  }
  if ( v21 < 2 )
  {
    v3 = -2147483637;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x59F,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8000000BLL,
      savedregs);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5A6,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8000000BLL,
      savedregse);
    v5 = 1358LL;
    goto LABEL_7;
  }
  v22 = *v20;
  *((_QWORD *)this + 2) = v20 + 1;
  v23 = v21 - 2;
  *((_WORD *)this + 26) = v22;
  *((_DWORD *)this + 8) = v23;
  if ( 4 * v22 > v23 )
  {
    v3 = -2147024809;
    v5 = 1360LL;
    goto LABEL_7;
  }
  if ( (_WORD)v19 )
  {
    v46 = 16 * v19;
    if ( !is_mul_ok(v19, 0x10uLL) )
      v46 = -1LL;
    v47 = operator new[](v46, (const struct std::nothrow_t *)&std::nothrow);
    v49 = (void *)*((_QWORD *)this + 7);
    *((_QWORD *)this + 7) = v47;
    if ( v49 )
      operator delete(v49, v48);
    v50 = *((_QWORD *)this + 7);
    if ( !v50 )
    {
      v3 = -2147024882;
      v5 = 1366LL;
      goto LABEL_7;
    }
    for ( i = 0; ; ++i )
    {
      if ( i >= *((unsigned __int16 *)this + 25) )
        goto LABEL_26;
      if ( *((_DWORD *)this + 8) < 4u )
        break;
      *(_DWORD *)(v50 + 16LL * i) = **((_DWORD **)this + 2);
      v56 = *((_DWORD *)this + 8);
      if ( v56 < 4 )
      {
        v55 = 1417;
        goto LABEL_64;
      }
      *((_QWORD *)this + 2) += 4LL;
      v57 = v56 - 4;
      v58 = (_DWORD *)*((_QWORD *)this + 2);
      *((_DWORD *)this + 8) = v57;
      if ( (v57 & 3) != 0 )
      {
        v76 = 4 - (v57 & 3);
        if ( (unsigned int)v76 > v57 )
        {
          v55 = 1427;
LABEL_64:
          v54 = retaddr;
          v3 = -2147483637;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x59F,
            (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
            (const char *)0x8000000BLL,
            savedregs);
          v52 = retaddr;
          v53 = 1461;
LABEL_65:
          wil::details::in1diag3::Return_Hr(
            v54,
            (void *)v55,
            (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
            (const char *)0x8000000BLL,
            savedregs);
          wil::details::in1diag3::Return_Hr(
            v52,
            (void *)v53,
            (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
            (const char *)0x8000000BLL,
            savedregsh);
          v5 = 1370LL;
          goto LABEL_7;
        }
        v57 &= 0xFFFFFFFC;
        v58 = (_DWORD *)((char *)v58 + v76);
        *((_DWORD *)this + 8) = v57;
        *((_QWORD *)this + 2) = v58;
      }
      if ( v57 < 4 )
      {
        v59 = retaddr;
        v60 = 1457;
        v61 = retaddr;
        v3 = -2147483637;
        v62 = 1439;
        goto LABEL_72;
      }
      *(_DWORD *)(*((_QWORD *)this + 7) + 16LL * i + 4) = *v58;
      v63 = *((_DWORD *)this + 8);
      if ( v63 < 4 )
      {
        v62 = 1417;
        goto LABEL_71;
      }
      *((_QWORD *)this + 2) += 4LL;
      v64 = v63 - 4;
      v65 = *((_QWORD *)this + 2);
      *((_DWORD *)this + 8) = v64;
      if ( (v64 & 3) != 0 )
      {
        v77 = 4 - (v64 & 3);
        if ( (unsigned int)v77 > v64 )
        {
          v62 = 1427;
LABEL_71:
          v61 = retaddr;
          v3 = -2147483637;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x59F,
            (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
            (const char *)0x8000000BLL,
            savedregs);
          v59 = retaddr;
          v60 = 1461;
LABEL_72:
          wil::details::in1diag3::Return_Hr(
            v61,
            (void *)v62,
            (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
            (const char *)0x8000000BLL,
            savedregs);
          wil::details::in1diag3::Return_Hr(
            v59,
            (void *)v60,
            (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
            (const char *)0x8000000BLL,
            savedregsi);
          v5 = 1372LL;
          goto LABEL_7;
        }
        v64 &= 0xFFFFFFFC;
        v65 += v77;
        *((_DWORD *)this + 8) = v64;
        *((_QWORD *)this + 2) = v65;
      }
      v66 = *((_QWORD *)this + 7);
      if ( *(_DWORD *)(v66 + 16LL * i + 4) > v64 )
      {
        v3 = -2147483637;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x59F,
          (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
          (const char *)0x8000000BLL,
          savedregs);
        v5 = 1374LL;
        goto LABEL_7;
      }
      *(_QWORD *)(v66 + 16LL * i + 8) = v65;
      v50 = *((_QWORD *)this + 7);
      v67 = *((_DWORD *)this + 8);
      v68 = *(unsigned int *)(v50 + 16LL * i + 4);
      if ( (unsigned int)v68 > v67 )
      {
        v69 = 1417;
LABEL_79:
        v3 = -2147483637;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x59F,
          (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
          (const char *)0x8000000BLL,
          savedregs);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v69,
          (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
          (const char *)0x8000000BLL,
          savedregsj);
        v5 = 1378LL;
        goto LABEL_7;
      }
      *((_QWORD *)this + 2) += v68;
      v70 = v67 - v68;
      *((_DWORD *)this + 8) = v70;
      if ( (v70 & 3) != 0 )
      {
        v78 = 4 - (v70 & 3);
        if ( (unsigned int)v78 > v70 )
        {
          v69 = 1427;
          goto LABEL_79;
        }
        *((_QWORD *)this + 2) += v78;
        *((_DWORD *)this + 8) = v70 & 0xFFFFFFFC;
      }
    }
    v52 = retaddr;
    v53 = 1457;
    v54 = retaddr;
    v3 = -2147483637;
    v55 = 1439;
    goto LABEL_65;
  }
LABEL_26:
  if ( !*((_WORD *)this + 26) )
    return 0LL;
  v24 = 16LL * *((unsigned __int16 *)this + 26);
  if ( !is_mul_ok(*((unsigned __int16 *)this + 26), 0x10uLL) )
    v24 = -1LL;
  v25 = operator new[](v24, (const struct std::nothrow_t *)&std::nothrow);
  v27 = (void *)*((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = v25;
  if ( v27 )
    operator delete(v27, v26);
  v28 = *((_QWORD *)this + 8);
  if ( !v28 )
  {
    v3 = -2147024882;
    v5 = 1386LL;
    goto LABEL_7;
  }
  for ( j = 0; ; ++j )
  {
    if ( j >= *((unsigned __int16 *)this + 26) )
      return 0LL;
    v30 = 2LL * j;
    *(_DWORD *)(v28 + 8 * v30 + 4) = 0;
    *(_QWORD *)(*((_QWORD *)this + 8) + 8 * v30 + 8) = 0LL;
    if ( *((_DWORD *)this + 8) < 4u )
    {
      v8 = retaddr;
      v9 = 1457;
      v7 = retaddr;
      v3 = -2147483637;
      v6 = 1439;
      goto LABEL_6;
    }
    *(_DWORD *)(*((_QWORD *)this + 8) + 16LL * j) = **((_DWORD **)this + 2);
    v31 = *((_DWORD *)this + 8);
    if ( v31 < 4 )
    {
      v6 = 1417;
      goto LABEL_5;
    }
    *((_QWORD *)this + 2) += 4LL;
    v32 = v31 - 4;
    v33 = (_DWORD *)*((_QWORD *)this + 2);
    *((_DWORD *)this + 8) = v32;
    if ( (v32 & 3) != 0 )
    {
      v71 = 4 - (v32 & 3);
      if ( (unsigned int)v71 <= v32 )
      {
        v32 &= 0xFFFFFFFC;
        v33 = (_DWORD *)((char *)v33 + v71);
        *((_DWORD *)this + 8) = v32;
        *((_QWORD *)this + 2) = v33;
        goto LABEL_39;
      }
      v6 = 1427;
LABEL_5:
      v7 = retaddr;
      v3 = -2147483637;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x59F,
        (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x8000000BLL,
        savedregs);
      v8 = retaddr;
      v9 = 1461;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        v7,
        (void *)v6,
        (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x8000000BLL,
        savedregs);
      wil::details::in1diag3::Return_Hr(
        v8,
        (void *)v9,
        (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x8000000BLL,
        savedregsb);
      v5 = 1393LL;
      goto LABEL_7;
    }
LABEL_39:
    v28 = *((_QWORD *)this + 8);
    if ( (*(_DWORD *)(v28 + 16LL * j) & 0x10000000) == 0 )
    {
      if ( v32 < 4 )
      {
        v34 = retaddr;
        v35 = 1457;
        v36 = retaddr;
        v3 = -2147483637;
        v37 = 1439;
LABEL_46:
        wil::details::in1diag3::Return_Hr(
          v36,
          (void *)v37,
          (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
          (const char *)0x8000000BLL,
          savedregs);
        wil::details::in1diag3::Return_Hr(
          v34,
          (void *)v35,
          (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
          (const char *)0x8000000BLL,
          savedregsf);
        v5 = 1399LL;
        goto LABEL_7;
      }
      *(_DWORD *)(v28 + 16LL * j + 4) = *v33;
      v39 = *((_DWORD *)this + 8);
      if ( v39 < 4 )
      {
        v37 = 1417;
LABEL_45:
        v36 = retaddr;
        v3 = -2147483637;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x59F,
          (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
          (const char *)0x8000000BLL,
          savedregs);
        v34 = retaddr;
        v35 = 1461;
        goto LABEL_46;
      }
      *((_QWORD *)this + 2) += 4LL;
      v40 = v39 - 4;
      v41 = *((_QWORD *)this + 2);
      *((_DWORD *)this + 8) = v40;
      if ( (v40 & 3) != 0 )
      {
        v74 = 4 - (v40 & 3);
        if ( (unsigned int)v74 > v40 )
        {
          v37 = 1427;
          goto LABEL_45;
        }
        v40 &= 0xFFFFFFFC;
        v41 += v74;
        *((_DWORD *)this + 8) = v40;
        *((_QWORD *)this + 2) = v41;
      }
      v42 = *((_QWORD *)this + 8);
      if ( *(_DWORD *)(v42 + 16LL * j + 4) > v40 )
      {
        v3 = -2147483637;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x59F,
          (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
          (const char *)0x8000000BLL,
          savedregs);
        v5 = 1401LL;
        goto LABEL_7;
      }
      *(_QWORD *)(v42 + 16LL * j + 8) = v41;
      v28 = *((_QWORD *)this + 8);
      v43 = *((_DWORD *)this + 8);
      v44 = *(unsigned int *)(v28 + 16LL * j + 4);
      if ( (unsigned int)v44 > v43 )
      {
        v45 = 1417;
        goto LABEL_53;
      }
      *((_QWORD *)this + 2) += v44;
      v38 = v43 - v44;
      *((_DWORD *)this + 8) = v38;
      if ( (v38 & 3) != 0 )
        break;
    }
LABEL_43:
    ;
  }
  v75 = 4 - (v38 & 3);
  if ( (unsigned int)v75 <= v38 )
  {
    *((_QWORD *)this + 2) += v75;
    *((_DWORD *)this + 8) = v38 & 0xFFFFFFFC;
    goto LABEL_43;
  }
  v45 = 1427;
LABEL_53:
  v3 = -2147483637;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x59F,
    (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
    (const char *)0x8000000BLL,
    savedregs);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v45,
    (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
    (const char *)0x8000000BLL,
    savedregsg);
  v5 = 1405LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
    (const char *)v3,
    savedregs);
  return v3;
}
