/*
 * XREFs of ?GetNextEntry@CEnumerateEntries@@UEAAJPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003F4B0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000222C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CGameEntry@@QEAA@XZ @ 0x18003D270 (--0CGameEntry@@QEAA@XZ.c)
 *     ?CompleteInitialization@CGameEntry@@AEAAJXZ @ 0x18003D55C (-CompleteInitialization@CGameEntry@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CEnumerateEntries::GetNextEntry(CEnumerateEntries *this, struct KnownGameList::IGameEntry **a2)
{
  struct KnownGameList::IGameEntry *v5; // rbx
  CGameEntry *v6; // rax
  unsigned int v7; // esi
  CGameEntry *v8; // r14
  int v9; // edx
  __int64 v10; // rcx
  int v11; // eax
  int v12; // eax
  unsigned int v13; // eax
  __int64 v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v16; // [rsp+48h] [rbp+10h] BYREF
  CGameEntry *v17; // [rsp+50h] [rbp+18h]

  v16 = 0;
  if ( !a2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5FA,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  *a2 = 0LL;
  if ( !*((_DWORD *)this + 6) )
    return 1LL;
  v5 = 0LL;
  v17 = 0LL;
  v6 = (CGameEntry *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v6 )
  {
    v7 = -2147024882;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x603,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)v7);
    if ( v5 )
      (*(void (__fastcall **)(struct KnownGameList::IGameEntry *))(*(_QWORD *)v5 + 16LL))(v5);
    return v7;
  }
  v8 = CGameEntry::CGameEntry(v6);
  v9 = *((_DWORD *)this + 6);
  v10 = *((_QWORD *)this + 2);
  *((_QWORD *)v8 + 2) = v10;
  *((_QWORD *)v8 + 3) = v10;
  *((_DWORD *)v8 + 8) = v9;
  v11 = CGameEntry::CompleteInitialization(v8);
  v7 = v11;
  if ( v11 >= 0 )
  {
    (*(void (__fastcall **)(CGameEntry *))(*(_QWORD *)v8 + 8LL))(v8);
    v5 = v8;
    v17 = v8;
    (*(void (__fastcall **)(CGameEntry *))(*(_QWORD *)v8 + 16LL))(v8);
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4B0,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)v11);
    (*(void (__fastcall **)(CGameEntry *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( (v7 & 0x80000000) != 0 )
    goto LABEL_11;
  v12 = (*(__int64 (__fastcall **)(struct KnownGameList::IGameEntry *, unsigned int *))(*(_QWORD *)v5 + 80LL))(v5, &v16);
  v7 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x605,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)v12);
    (*(void (__fastcall **)(struct KnownGameList::IGameEntry *))(*(_QWORD *)v5 + 16LL))(v5);
    return v7;
  }
  v13 = *((_DWORD *)this + 6);
  v14 = v16;
  if ( v16 <= v13 )
  {
    *((_DWORD *)this + 6) = v13 - v16;
    *((_QWORD *)this + 2) += v14;
    *a2 = v5;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x607,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8007000DLL);
    (*(void (__fastcall **)(struct KnownGameList::IGameEntry *))(*(_QWORD *)v5 + 16LL))(v5);
    return 2147942413LL;
  }
}
