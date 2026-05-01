/*
 * XREFs of ?CompleteInitialization@CGameEntry@@AEAAJXZ @ 0x180033F40
 * Callers:
 *     ?GetNextEntry@CEnumerateEntries@@UEAAJPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x180033CB0 (-GetNextEntry@CEnumerateEntries@@UEAAJPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 *     ?RuntimeClassInitialize@CGameEntry@@QEAAJPEAUIGameEntry@KnownGameList@@@Z @ 0x18022CD14 (-RuntimeClassInitialize@CGameEntry@@QEAAJPEAUIGameEntry@KnownGameList@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D5A88 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CGameEntry::CompleteInitialization(CGameEntry *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  int v8; // ecx
  unsigned int v9; // ecx
  char v10; // dl
  int v11; // edx
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  bool v14; // cf
  unsigned __int16 v15; // cx
  __int64 v16; // rcx
  __int64 v17; // rdx
  int v18; // eax
  unsigned int v19; // eax
  int v20; // edx
  _WORD *v21; // rdi
  unsigned __int16 v22; // cx
  _WORD *v23; // rsi
  unsigned __int16 v24; // cx
  unsigned __int64 v25; // rax
  void *v26; // rax
  const struct std::nothrow_t *v27; // rdx
  void *v28; // rcx
  unsigned int j; // r8d
  __int64 v30; // rdx
  int v31; // ecx
  unsigned int v32; // ecx
  __int64 v33; // r9
  __int64 v34; // rdx
  int v35; // eax
  unsigned int v36; // eax
  int v37; // edx
  __int64 v38; // rdx
  int v39; // ecx
  unsigned int v40; // ecx
  __int64 v41; // rdx
  __int64 v42; // rdx
  unsigned __int64 v43; // rax
  void *v44; // rax
  const struct std::nothrow_t *v45; // rdx
  void *v46; // rcx
  unsigned int i; // r8d
  __int64 v48; // rdx
  __int64 v49; // rdx
  int v50; // ecx
  unsigned int v51; // ecx
  __int64 v52; // rdx
  __int64 v53; // rdx
  int v54; // ecx
  unsigned int v55; // ecx
  __int64 v56; // r9
  __int64 v57; // rdx
  int v58; // ecx
  unsigned int v59; // ecx
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  int savedregs; // [rsp+20h] [rbp+0h]
  int savedregsa; // [rsp+20h] [rbp+0h]
  int savedregsb; // [rsp+20h] [rbp+0h]
  int savedregsc; // [rsp+20h] [rbp+0h]
  int savedregsd; // [rsp+20h] [rbp+0h]
  int savedregsn; // [rsp+20h] [rbp+0h]
  int savedregse; // [rsp+20h] [rbp+0h]
  int savedregso; // [rsp+20h] [rbp+0h]
  int savedregsp; // [rsp+20h] [rbp+0h]
  int savedregsf; // [rsp+20h] [rbp+0h]
  int savedregsg; // [rsp+20h] [rbp+0h]
  int savedregsh; // [rsp+20h] [rbp+0h]
  int savedregsi; // [rsp+20h] [rbp+0h]
  int savedregsj; // [rsp+20h] [rbp+0h]
  int savedregsk; // [rsp+20h] [rbp+0h]
  int savedregsl; // [rsp+20h] [rbp+0h]
  int savedregsm; // [rsp+20h] [rbp+0h]
  int savedregsq; // [rsp+20h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]

  if ( *((_DWORD *)this + 8) < 4u )
  {
    v2 = -2147483637;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x59F,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8000000BLL,
      savedregs);
    v3 = 1457LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8000000BLL,
      savedregsa);
    v4 = 1334LL;
    goto LABEL_7;
  }
  v8 = **((_DWORD **)this + 2);
  *((_QWORD *)this + 2) += 4LL;
  *((_DWORD *)this + 9) = v8;
  v9 = *((_DWORD *)this + 8) - 4;
  v10 = *((_BYTE *)this + 32) - 4;
  *((_DWORD *)this + 8) = v9;
  v11 = v10 & 3;
  if ( v11 )
  {
    v61 = (unsigned int)(4 - v11);
    if ( (unsigned int)v61 > v9 )
    {
      v2 = -2147483637;
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
        savedregsq);
      v3 = 1461LL;
      goto LABEL_3;
    }
    *((_DWORD *)this + 8) &= 0xFFFFFFFC;
    *((_QWORD *)this + 2) += v61;
  }
  v12 = *((unsigned int *)this + 9);
  if ( v12 > (unsigned __int64)*((unsigned int *)this + 8) + 4 )
  {
    v2 = -2147483637;
    v4 = 1338LL;
    goto LABEL_7;
  }
  if ( (unsigned int)v12 < 4 )
  {
    *((_DWORD *)this + 8) = -1;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x53E,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80070216LL,
      savedregs);
    return 2147942934LL;
  }
  *((_DWORD *)this + 8) = v12 - 4;
  if ( (unsigned int)(v12 - 4) < 2 )
  {
    v2 = -2147483637;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x59F,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8000000BLL,
      savedregs);
    v13 = 1446LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8000000BLL,
      savedregsd);
    v4 = 1346LL;
    goto LABEL_7;
  }
  v14 = *((_DWORD *)this + 8) < 2u;
  v15 = **((_WORD **)this + 2);
  *((_WORD *)this + 24) = v15;
  if ( v14 )
  {
    v2 = -2147483637;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x59F,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8000000BLL,
      savedregs);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x589,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8000000BLL,
      savedregsn);
    v13 = 1450LL;
    goto LABEL_15;
  }
  *((_QWORD *)this + 2) += 2LL;
  *((_DWORD *)this + 8) -= 2;
  if ( (unsigned int)v15 > *((_DWORD *)this + 8) )
  {
    v2 = -2147483637;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x59F,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8000000BLL,
      savedregs);
    v4 = 1348LL;
    goto LABEL_7;
  }
  v16 = *((unsigned __int16 *)this + 24);
  *((_QWORD *)this + 5) = *((_QWORD *)this + 2);
  if ( (unsigned int)v16 > *((_DWORD *)this + 8) )
  {
    v2 = -2147483637;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x59F,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8000000BLL,
      savedregs);
    v17 = 1417LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8000000BLL,
      savedregse);
    v4 = 1352LL;
    goto LABEL_7;
  }
  v18 = *((_DWORD *)this + 8);
  *((_QWORD *)this + 2) += v16;
  v19 = v18 - v16;
  *((_DWORD *)this + 8) = v19;
  v20 = v19 & 3;
  if ( (v19 & 3) != 0 )
  {
    if ( 4 - v20 > v19 )
    {
      v2 = -2147483637;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x59F,
        (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x8000000BLL,
        savedregs);
      v17 = 1427LL;
      goto LABEL_21;
    }
    *((_DWORD *)this + 8) &= 0xFFFFFFFC;
    *((_QWORD *)this + 2) += (unsigned int)(4 - v20);
  }
  if ( *((_DWORD *)this + 8) < 2u )
  {
    v2 = -2147483637;
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
      savedregso);
    v4 = 1354LL;
    goto LABEL_7;
  }
  v21 = (_WORD *)((char *)this + 50);
  v22 = **((_WORD **)this + 2);
  *((_QWORD *)this + 2) += 2LL;
  *((_DWORD *)this + 8) -= 2;
  *((_WORD *)this + 25) = v22;
  if ( 12 * (unsigned int)v22 > *((_DWORD *)this + 8) )
  {
    v2 = -2147024809;
    v4 = 1356LL;
    goto LABEL_7;
  }
  if ( *((_DWORD *)this + 8) < 2u )
  {
    v2 = -2147483637;
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
      savedregsp);
    v4 = 1358LL;
    goto LABEL_7;
  }
  v23 = (_WORD *)((char *)this + 52);
  v24 = **((_WORD **)this + 2);
  *((_QWORD *)this + 2) += 2LL;
  *((_DWORD *)this + 8) -= 2;
  *((_WORD *)this + 26) = v24;
  if ( 4 * (unsigned int)v24 > *((_DWORD *)this + 8) )
  {
    v2 = -2147024809;
    v4 = 1360LL;
    goto LABEL_7;
  }
  if ( *v21 )
  {
    v43 = 16LL * (unsigned __int16)*v21;
    if ( !is_mul_ok((unsigned __int16)*v21, 0x10uLL) )
      v43 = -1LL;
    v44 = operator new[](v43, (const struct std::nothrow_t *)&std::nothrow);
    v46 = (void *)*((_QWORD *)this + 7);
    *((_QWORD *)this + 7) = v44;
    if ( v46 )
      operator delete(v46, v45);
    if ( !*((_QWORD *)this + 7) )
    {
      v2 = -2147024882;
      v4 = 1366LL;
      goto LABEL_7;
    }
    for ( i = 0; ; ++i )
    {
      if ( i >= (unsigned __int16)*v21 )
        goto LABEL_32;
      if ( *((_DWORD *)this + 8) < 4u )
        break;
      *(_DWORD *)(*((_QWORD *)this + 7) + 16LL * i) = **((_DWORD **)this + 2);
      if ( *((_DWORD *)this + 8) < 4u )
      {
        v2 = -2147483637;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x59F,
          (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
          (const char *)0x8000000BLL,
          savedregs);
        v49 = 1417LL;
        goto LABEL_70;
      }
      v50 = *((_DWORD *)this + 8);
      *((_QWORD *)this + 2) += 4LL;
      v51 = v50 - 4;
      *((_DWORD *)this + 8) = v51;
      if ( (v51 & 3) != 0 )
      {
        v63 = 4 - (v51 & 3);
        if ( (unsigned int)v63 > v51 )
        {
          v2 = -2147483637;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x59F,
            (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
            (const char *)0x8000000BLL,
            savedregs);
          v49 = 1427LL;
LABEL_70:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v49,
            (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
            (const char *)0x8000000BLL,
            savedregsj);
          v48 = 1461LL;
LABEL_71:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v48,
            (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
            (const char *)0x8000000BLL,
            savedregsi);
          v4 = 1370LL;
          goto LABEL_7;
        }
        *((_DWORD *)this + 8) &= 0xFFFFFFFC;
        *((_QWORD *)this + 2) += v63;
      }
      if ( *((_DWORD *)this + 8) < 4u )
      {
        v2 = -2147483637;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x59F,
          (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
          (const char *)0x8000000BLL,
          savedregs);
        v52 = 1457LL;
        goto LABEL_78;
      }
      *(_DWORD *)(*((_QWORD *)this + 7) + 16LL * i + 4) = **((_DWORD **)this + 2);
      if ( *((_DWORD *)this + 8) < 4u )
      {
        v2 = -2147483637;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x59F,
          (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
          (const char *)0x8000000BLL,
          savedregs);
        v53 = 1417LL;
        goto LABEL_77;
      }
      v54 = *((_DWORD *)this + 8);
      *((_QWORD *)this + 2) += 4LL;
      v55 = v54 - 4;
      *((_DWORD *)this + 8) = v55;
      if ( (v55 & 3) != 0 )
      {
        v64 = 4 - (v55 & 3);
        if ( (unsigned int)v64 > v55 )
        {
          v2 = -2147483637;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x59F,
            (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
            (const char *)0x8000000BLL,
            savedregs);
          v53 = 1427LL;
LABEL_77:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v53,
            (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
            (const char *)0x8000000BLL,
            savedregsl);
          v52 = 1461LL;
LABEL_78:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v52,
            (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
            (const char *)0x8000000BLL,
            savedregsk);
          v4 = 1372LL;
          goto LABEL_7;
        }
        *((_DWORD *)this + 8) &= 0xFFFFFFFC;
        *((_QWORD *)this + 2) += v64;
      }
      if ( *(_DWORD *)(*((_QWORD *)this + 7) + 16LL * i + 4) > *((_DWORD *)this + 8) )
      {
        v2 = -2147483637;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x59F,
          (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
          (const char *)0x8000000BLL,
          savedregs);
        v4 = 1374LL;
        goto LABEL_7;
      }
      *(_QWORD *)(*((_QWORD *)this + 7) + 16LL * i + 8) = *((_QWORD *)this + 2);
      v56 = *(unsigned int *)(*((_QWORD *)this + 7) + 16LL * i + 4);
      if ( (unsigned int)v56 > *((_DWORD *)this + 8) )
      {
        v2 = -2147483637;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x59F,
          (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
          (const char *)0x8000000BLL,
          savedregs);
        v57 = 1417LL;
LABEL_85:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v57,
          (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
          (const char *)0x8000000BLL,
          savedregsm);
        v4 = 1378LL;
        goto LABEL_7;
      }
      v58 = *((_DWORD *)this + 8);
      *((_QWORD *)this + 2) += v56;
      v59 = v58 - v56;
      *((_DWORD *)this + 8) = v59;
      if ( (v59 & 3) != 0 )
      {
        v65 = 4 - (v59 & 3);
        if ( (unsigned int)v65 > v59 )
        {
          v2 = -2147483637;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x59F,
            (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
            (const char *)0x8000000BLL,
            savedregs);
          v57 = 1427LL;
          goto LABEL_85;
        }
        *((_DWORD *)this + 8) &= 0xFFFFFFFC;
        *((_QWORD *)this + 2) += v65;
      }
    }
    v2 = -2147483637;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x59F,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8000000BLL,
      savedregs);
    v48 = 1457LL;
    goto LABEL_71;
  }
LABEL_32:
  if ( !*v23 )
    return 0LL;
  v25 = 16LL * (unsigned __int16)*v23;
  if ( !is_mul_ok((unsigned __int16)*v23, 0x10uLL) )
    v25 = -1LL;
  v26 = operator new[](v25, (const struct std::nothrow_t *)&std::nothrow);
  v28 = (void *)*((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = v26;
  if ( v28 )
    operator delete(v28, v27);
  if ( !*((_QWORD *)this + 8) )
  {
    v2 = -2147024882;
    v4 = 1386LL;
    goto LABEL_7;
  }
  for ( j = 0; ; ++j )
  {
    if ( j >= *((unsigned __int16 *)this + 26) )
      return 0LL;
    v30 = 2LL * j;
    *(_DWORD *)(*((_QWORD *)this + 8) + 8 * v30 + 4) = 0;
    *(_QWORD *)(*((_QWORD *)this + 8) + 8 * v30 + 8) = 0LL;
    if ( *((_DWORD *)this + 8) < 4u )
    {
      v2 = -2147483637;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x59F,
        (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x8000000BLL,
        savedregs);
      v6 = 1457LL;
      goto LABEL_6;
    }
    *(_DWORD *)(*((_QWORD *)this + 8) + 16LL * j) = **((_DWORD **)this + 2);
    if ( *((_DWORD *)this + 8) < 4u )
    {
      v2 = -2147483637;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x59F,
        (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x8000000BLL,
        savedregs);
      v5 = 1417LL;
      goto LABEL_5;
    }
    v31 = *((_DWORD *)this + 8);
    *((_QWORD *)this + 2) += 4LL;
    v32 = v31 - 4;
    *((_DWORD *)this + 8) = v32;
    if ( (v32 & 3) != 0 )
    {
      v60 = 4 - (v32 & 3);
      if ( (unsigned int)v60 <= v32 )
      {
        *((_DWORD *)this + 8) &= 0xFFFFFFFC;
        *((_QWORD *)this + 2) += v60;
        goto LABEL_45;
      }
      v2 = -2147483637;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x59F,
        (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x8000000BLL,
        savedregs);
      v5 = 1427LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x8000000BLL,
        savedregsb);
      v6 = 1461LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x8000000BLL,
        savedregsc);
      v4 = 1393LL;
      goto LABEL_7;
    }
LABEL_45:
    v33 = *((_QWORD *)this + 8);
    if ( (*(_DWORD *)(v33 + 16LL * j) & 0x10000000) == 0 )
    {
      if ( *((_DWORD *)this + 8) < 4u )
      {
        v2 = -2147483637;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x59F,
          (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
          (const char *)0x8000000BLL,
          savedregs);
        v34 = 1457LL;
LABEL_52:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v34,
          (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
          (const char *)0x8000000BLL,
          savedregsf);
        v4 = 1399LL;
        goto LABEL_7;
      }
      *(_DWORD *)(v33 + 16LL * j + 4) = **((_DWORD **)this + 2);
      if ( *((_DWORD *)this + 8) < 4u )
      {
        v2 = -2147483637;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x59F,
          (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
          (const char *)0x8000000BLL,
          savedregs);
        v38 = 1417LL;
LABEL_51:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v38,
          (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
          (const char *)0x8000000BLL,
          savedregsg);
        v34 = 1461LL;
        goto LABEL_52;
      }
      v39 = *((_DWORD *)this + 8);
      *((_QWORD *)this + 2) += 4LL;
      v40 = v39 - 4;
      *((_DWORD *)this + 8) = v40;
      if ( (v40 & 3) != 0 )
      {
        v62 = 4 - (v40 & 3);
        if ( (unsigned int)v62 > v40 )
        {
          v2 = -2147483637;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x59F,
            (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
            (const char *)0x8000000BLL,
            savedregs);
          v38 = 1427LL;
          goto LABEL_51;
        }
        *((_DWORD *)this + 8) &= 0xFFFFFFFC;
        *((_QWORD *)this + 2) += v62;
      }
      if ( *(_DWORD *)(*((_QWORD *)this + 8) + 16LL * j + 4) > *((_DWORD *)this + 8) )
      {
        v2 = -2147483637;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x59F,
          (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
          (const char *)0x8000000BLL,
          savedregs);
        v4 = 1401LL;
        goto LABEL_7;
      }
      *(_QWORD *)(*((_QWORD *)this + 8) + 16LL * j + 8) = *((_QWORD *)this + 2);
      v41 = *(unsigned int *)(*((_QWORD *)this + 8) + 16LL * j + 4);
      if ( (unsigned int)v41 > *((_DWORD *)this + 8) )
      {
        v2 = -2147483637;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x59F,
          (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
          (const char *)0x8000000BLL,
          savedregs);
        v42 = 1417LL;
        goto LABEL_59;
      }
      v35 = *((_DWORD *)this + 8);
      *((_QWORD *)this + 2) += v41;
      v36 = v35 - v41;
      *((_DWORD *)this + 8) = v36;
      v37 = v36 & 3;
      if ( (v36 & 3) != 0 )
        break;
    }
LABEL_49:
    ;
  }
  if ( 4 - v37 <= v36 )
  {
    *((_DWORD *)this + 8) &= 0xFFFFFFFC;
    *((_QWORD *)this + 2) += (unsigned int)(4 - v37);
    goto LABEL_49;
  }
  v2 = -2147483637;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x59F,
    (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
    (const char *)0x8000000BLL,
    savedregs);
  v42 = 1427LL;
LABEL_59:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v42,
    (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
    (const char *)0x8000000BLL,
    savedregsh);
  v4 = 1405LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
    (const char *)v2,
    savedregs);
  return v2;
}
