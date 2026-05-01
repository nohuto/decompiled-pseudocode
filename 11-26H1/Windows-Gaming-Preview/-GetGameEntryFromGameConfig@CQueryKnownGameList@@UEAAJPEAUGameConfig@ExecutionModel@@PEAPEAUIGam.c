/*
 * XREFs of ?GetGameEntryFromGameConfig@CQueryKnownGameList@@UEAAJPEAUGameConfig@ExecutionModel@@PEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003EC20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180001D20 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021F0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002294 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCGameEntry@@UIGameEntry@KnownGameList@@PEAU23@@Details@WRL@Microsoft@@YAJPEAPEAUIGameEntry@KnownGameList@@$$QEAPEAU34@@Z @ 0x18003D0EC (--$MakeAndInitialize@VCGameEntry@@UIGameEntry@KnownGameList@@PEAU23@@Details@WRL@Microsoft@@YAJP.c)
 *     ?CreateEnumerateEntriesInstance@KnownGameList@@YAJPEAPEAUIEnumerateEntries@1@PEAEK@Z @ 0x18003D95C (-CreateEnumerateEntriesInstance@KnownGameList@@YAJPEAPEAUIEnumerateEntries@1@PEAEK@Z.c)
 *     ?GetTOCIndexByIdentifier@CQueryKnownGameList@@AEAAJPEBGPEAK@Z @ 0x180040CAC (-GetTOCIndexByIdentifier@CQueryKnownGameList@@AEAAJPEBGPEAK@Z.c)
 *     ?StrCmpInsensitive@KnownGameList@@YAHPEBGK0K@Z @ 0x180041E48 (-StrCmpInsensitive@KnownGameList@@YAHPEBGK0K@Z.c)
 *     ?StrStrInsensitive@KnownGameList@@YAPEBGPEBGK0@Z @ 0x180041F18 (-StrStrInsensitive@KnownGameList@@YAPEBGPEBGK0@Z.c)
 *     _alloca_probe @ 0x180043310 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CQueryKnownGameList::GetGameEntryFromGameConfig(
        CQueryKnownGameList *this,
        struct ExecutionModel::GameConfig *a2,
        struct KnownGameList::IGameEntry **a3)
{
  KnownGameList *v6; // rax
  __int64 v7; // r12
  int TOCIndexByIdentifier; // eax
  unsigned int v9; // ebx
  struct KnownGameList::IEnumerateEntries **v11; // rsi
  struct KnownGameList::IEnumerateEntries **v12; // rbx
  int v13; // eax
  unsigned int v14; // edi
  struct KnownGameList::IEnumerateEntries **v15; // rax
  __int64 v16; // rdx
  int v17; // eax
  const struct std::nothrow_t *v18; // rdx
  int EnumerateEntriesInstance; // eax
  __int64 v20; // rcx
  unsigned int v21; // r15d
  __int64 v22; // rdi
  __int64 (__fastcall *v23)(__int64, KnownGameList **); // rsi
  KnownGameList *v24; // rcx
  int v25; // eax
  const struct std::nothrow_t *v26; // rdx
  unsigned int v27; // esi
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  const unsigned __int16 *v32; // r9
  unsigned int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // r8
  unsigned int v36; // eax
  unsigned int v37; // eax
  __int64 v38; // r8
  int v39; // eax
  __int64 v40; // rcx
  KnownGameList *v41; // rcx
  __int64 v42; // rcx
  const struct std::nothrow_t *v43; // rdx
  KnownGameList *v44; // rcx
  __int64 v45; // rcx
  KnownGameList *v46; // rcx
  __int64 v47; // rcx
  KnownGameList *v48; // rcx
  __int64 v49; // rcx
  KnownGameList *v50; // rcx
  __int64 v51; // rcx
  KnownGameList *v52; // rcx
  __int64 v53; // rcx
  KnownGameList *v54; // rcx
  __int64 v55; // rcx
  KnownGameList *v56; // rcx
  __int64 v57; // rcx
  _DWORD *v58; // [rsp+20h] [rbp-E0h]
  KnownGameList *v59; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v60; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v61; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v62[3]; // [rsp+44h] [rbp-BCh] BYREF
  KnownGameList *v63; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v64; // [rsp+58h] [rbp-A8h] BYREF
  int v65; // [rsp+5Ch] [rbp-A4h] BYREF
  KnownGameList *v66; // [rsp+60h] [rbp-A0h] BYREF
  struct KnownGameList::IEnumerateEntries **v67; // [rsp+68h] [rbp-98h]
  _BYTE v68[4096]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+10B8h] [rbp+FB8h]

  *a3 = 0LL;
  v6 = (KnownGameList *)*((_QWORD *)a2 + 3);
  v63 = v6;
  v7 = -1LL;
  do
    ++v7;
  while ( *((_WORD *)v6 + v7) );
  v61 = 0;
  TOCIndexByIdentifier = CQueryKnownGameList::GetTOCIndexByIdentifier(this, (const unsigned __int16 *)v6, &v61);
  v9 = TOCIndexByIdentifier;
  if ( TOCIndexByIdentifier < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x185,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)TOCIndexByIdentifier);
    return v9;
  }
  v11 = (struct KnownGameList::IEnumerateEntries **)v68;
  v12 = 0LL;
  v67 = 0LL;
  v62[0] = 4096;
  v13 = (*(__int64 (__fastcall **)(CQueryKnownGameList *, _QWORD, _BYTE *, _DWORD *))(*(_QWORD *)this + 96LL))(
          this,
          v61,
          v68,
          v62);
  v14 = v13;
  if ( v13 )
  {
    if ( v13 != -2147024774 )
    {
      if ( v13 >= 0 )
        return v14;
      v16 = 398LL;
      goto LABEL_14;
    }
    v15 = (struct KnownGameList::IEnumerateEntries **)operator new[](
                                                        v62[0],
                                                        (const struct std::nothrow_t *)&std::nothrow);
    v11 = v15;
    v12 = v15;
    v67 = v15;
    if ( !v15 )
    {
      v14 = -2147024882;
      v16 = 403LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)v14);
      return v14;
    }
    v17 = (*(__int64 (__fastcall **)(CQueryKnownGameList *, _QWORD, struct KnownGameList::IEnumerateEntries **, _DWORD *))(*(_QWORD *)this + 96LL))(
            this,
            v61,
            v15,
            v62);
    v14 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x197,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)(unsigned int)v17);
      goto LABEL_11;
    }
  }
  v60 = 0LL;
  EnumerateEntriesInstance = KnownGameList::CreateEnumerateEntriesInstance(
                               (KnownGameList *)&v60,
                               v11,
                               (unsigned __int8 *)v62[0]);
  v14 = EnumerateEntriesInstance;
  if ( EnumerateEntriesInstance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19D,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)EnumerateEntriesInstance);
    v20 = v60;
    if ( v60 )
    {
      v60 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    goto LABEL_19;
  }
  v59 = 0LL;
  v21 = (unsigned int)v63;
  do
  {
LABEL_22:
    v22 = v60;
    v23 = *(__int64 (__fastcall **)(__int64, KnownGameList **))(*(_QWORD *)v60 + 24LL);
    v24 = v59;
    if ( v59 )
    {
      v59 = 0LL;
      (*(void (__fastcall **)(KnownGameList *))(*(_QWORD *)v24 + 16LL))(v24);
    }
    v25 = v23(v22, &v59);
    v27 = 0;
    if ( v25 )
    {
      if ( v25 == 1 )
      {
LABEL_97:
        v56 = v59;
        if ( v59 )
        {
          v59 = 0LL;
          (*(void (__fastcall **)(KnownGameList *))(*(_QWORD *)v56 + 16LL))(v56);
        }
        v57 = v60;
        if ( v60 )
        {
          v60 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
        }
LABEL_101:
        if ( v12 )
          operator delete(v12, v26);
        return 2147943568LL;
      }
LABEL_89:
      if ( *a3 )
      {
        v54 = v59;
        if ( v59 )
        {
          v59 = 0LL;
          (*(void (__fastcall **)(KnownGameList *))(*(_QWORD *)v54 + 16LL))(v54);
        }
        v55 = v60;
        if ( v60 )
        {
          v60 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
        }
        if ( v12 )
          operator delete(v12, v26);
        return 0LL;
      }
      goto LABEL_97;
    }
    v66 = 0LL;
    v64 = 0;
    v28 = (*(__int64 (__fastcall **)(KnownGameList *, KnownGameList **, unsigned int *))(*(_QWORD *)v59 + 24LL))(
            v59,
            &v66,
            &v64);
    v14 = v28;
    if ( v28 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A8,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)(unsigned int)v28);
      v52 = v59;
      if ( v59 )
      {
        v59 = 0LL;
        (*(void (__fastcall **)(KnownGameList *))(*(_QWORD *)v52 + 16LL))(v52);
      }
      v53 = v60;
      if ( v60 )
      {
        v60 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
      }
      goto LABEL_19;
    }
    v29 = KnownGameList::StrCmpInsensitive(
            v66,
            (const unsigned __int16 *)v64,
            v21,
            (const unsigned __int16 *)(unsigned int)v7,
            (unsigned int)v58);
    if ( v29 > 0 )
    {
      v50 = v59;
      if ( v59 )
      {
        v59 = 0LL;
        (*(void (__fastcall **)(KnownGameList *))(*(_QWORD *)v50 + 16LL))(v50);
      }
      v51 = v60;
      if ( v60 )
      {
        v60 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
      }
      goto LABEL_101;
    }
  }
  while ( v29 );
  LOWORD(v61) = 0;
  v30 = (*(__int64 (__fastcall **)(KnownGameList *, unsigned int *))(*(_QWORD *)v59 + 40LL))(v59, &v61);
  v14 = v30;
  if ( v30 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B7,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)v30);
    v48 = v59;
    if ( v59 )
    {
      v59 = 0LL;
      (*(void (__fastcall **)(KnownGameList *))(*(_QWORD *)v48 + 16LL))(v48);
    }
    v49 = v60;
    if ( v60 )
    {
      v60 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
    }
    goto LABEL_19;
  }
  if ( !(_WORD)v61 )
  {
LABEL_52:
    *(_QWORD *)&v62[1] = 0LL;
    v63 = v59;
    v39 = Microsoft::WRL::Details::MakeAndInitialize<CGameEntry,KnownGameList::IGameEntry,KnownGameList::IGameEntry *>(
            &v62[1],
            &v63);
    v14 = v39;
    if ( v39 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x206,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)(unsigned int)v39);
      v40 = *(_QWORD *)&v62[1];
      if ( *(_QWORD *)&v62[1] )
      {
        *(_QWORD *)&v62[1] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
      }
      v41 = v59;
      if ( v59 )
      {
        v59 = 0LL;
        (*(void (__fastcall **)(KnownGameList *))(*(_QWORD *)v41 + 16LL))(v41);
      }
      v42 = v60;
      if ( v60 )
      {
        v60 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
      }
      goto LABEL_19;
    }
    *a3 = *(struct KnownGameList::IGameEntry **)&v62[1];
    goto LABEL_89;
  }
  while ( 1 )
  {
    v65 = 0;
    v63 = 0LL;
    v62[1] = 0;
    v58 = &v62[1];
    v31 = (*(__int64 (__fastcall **)(KnownGameList *, _QWORD, int *, KnownGameList **))(*(_QWORD *)v59 + 56LL))(
            v59,
            v27,
            &v65,
            &v63);
    v14 = v31;
    if ( v31 < 0 )
      break;
    if ( v65 )
    {
      if ( v65 == 1 )
      {
        v36 = 0;
        if ( !*((_DWORD *)a2 + 4) )
          goto LABEL_22;
        v34 = *((_QWORD *)a2 + 1);
        while ( 1 )
        {
          v35 = 2LL * v36;
          if ( *(_DWORD *)(v34 + 16LL * v36) == 1 )
            break;
          if ( ++v36 >= *((_DWORD *)a2 + 4) )
            goto LABEL_22;
        }
      }
      else
      {
        if ( v65 != 2 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1EA,
            (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
            (const char *)0x8000FFFFLL);
          v44 = v59;
          if ( v59 )
          {
            v59 = 0LL;
            (*(void (__fastcall **)(KnownGameList *))(*(_QWORD *)v44 + 16LL))(v44);
          }
          v45 = v60;
          if ( v60 )
          {
            v60 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
          }
          if ( v12 )
            operator delete(v12, v43);
          return 2147549183LL;
        }
        v37 = 0;
        if ( !*((_DWORD *)a2 + 4) )
          goto LABEL_22;
        v34 = *((_QWORD *)a2 + 1);
        while ( 1 )
        {
          v35 = 2LL * v37;
          if ( *(_DWORD *)(v34 + 16LL * v37) == 2 )
            break;
          if ( ++v37 >= *((_DWORD *)a2 + 4) )
            goto LABEL_22;
        }
      }
    }
    else
    {
      v33 = 0;
      if ( !*((_DWORD *)a2 + 4) )
        goto LABEL_22;
      v34 = *((_QWORD *)a2 + 1);
      while ( 1 )
      {
        v35 = 2LL * v33;
        if ( !*(_DWORD *)(v34 + 16LL * v33) )
          break;
        if ( ++v33 >= *((_DWORD *)a2 + 4) )
          goto LABEL_22;
      }
    }
    v38 = *(_QWORD *)(v34 + 8 * v35 + 8);
    if ( !v38 || !KnownGameList::StrStrInsensitive(v63, (const unsigned __int16 *)v62[1], v38, v32) )
      goto LABEL_22;
    if ( ++v27 >= (unsigned __int16)v61 )
      goto LABEL_52;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1C3,
    (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
    (const char *)(unsigned int)v31);
  v46 = v59;
  if ( v59 )
  {
    v59 = 0LL;
    (*(void (__fastcall **)(KnownGameList *))(*(_QWORD *)v46 + 16LL))(v46);
  }
  v47 = v60;
  if ( v60 )
  {
    v60 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
  }
LABEL_19:
  if ( v12 )
LABEL_11:
    operator delete(v12, v18);
  return v14;
}
