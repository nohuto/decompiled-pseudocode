/*
 * XREFs of ?GetProcessNameByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18003FE0C
 * Callers:
 *     ?GetGameEntryFromPID@CQueryKnownGameList@@UEAAJKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003F300 (-GetGameEntryFromPID@CQueryKnownGameList@@UEAAJKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021F0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002294 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z @ 0x18003FB28 (-GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CQueryKnownGameList::GetProcessNameByPID(struct _RTL_CRITICAL_SECTION *this, DWORD a2, char **a3)
{
  ULONG_PTR v7; // rbx
  struct _RTL_CRITICAL_SECTION *v8; // rsi
  ULONG_PTR SpinCount; // rdi
  unsigned int v10; // edi
  unsigned __int64 v11; // rax
  char *v12; // rax
  char *v13; // rsi
  const struct std::nothrow_t *v14; // rdx
  char *v15; // rax
  char *v16; // rdi
  int ProcessImageInfoByPID; // r14d
  unsigned __int64 v18; // rax
  const struct std::nothrow_t *v19; // rdx
  const struct std::nothrow_t *v20; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  unsigned int v22; // [rsp+80h] [rbp+40h] BYREF
  ULONG_PTR v23; // [rsp+88h] [rbp+48h]

  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x365,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  v7 = 0LL;
  v23 = 0LL;
  v8 = this + 19;
  EnterCriticalSection(this + 19);
  SpinCount = this[18].SpinCount;
  if ( SpinCount )
  {
    (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)SpinCount + 8LL))(SpinCount);
    v7 = SpinCount;
    v23 = SpinCount;
  }
  if ( v8 )
    LeaveCriticalSection(v8);
  if ( v7 )
  {
    v22 = 0;
    v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _QWORD, unsigned int *))(*(_QWORD *)v7 + 24LL))(
            v7,
            a2,
            0LL,
            &v22);
    if ( (v10 & 0x80000000) != 0 )
    {
      (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)v7 + 16LL))(v7);
      return v10;
    }
    v11 = 2LL * v22;
    if ( !is_mul_ok(v22, 2uLL) )
      v11 = -1LL;
    v12 = (char *)operator new[](v11, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v12;
    if ( !v12 )
    {
      v10 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x375,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x8007000ELL);
      (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)v7 + 16LL))(v7);
      return v10;
    }
    v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, char *, unsigned int *))(*(_QWORD *)v7 + 24LL))(
            v7,
            a2,
            v12,
            &v22);
    if ( (v10 & 0x80000000) != 0 )
    {
      operator delete(v13, v14);
      (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)v7 + 16LL))(v7);
      return v10;
    }
    goto LABEL_29;
  }
  v22 = 260;
  v15 = (char *)operator new[](0x208uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v15;
  v16 = v15;
  if ( !v15 )
  {
    v10 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x382,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8007000ELL);
    return v10;
  }
  ProcessImageInfoByPID = Common::GetProcessImageInfoByPID(a2, v15, (unsigned __int16 *)&v22, 0LL, 0LL);
  if ( ProcessImageInfoByPID == -2147024774 )
  {
    v18 = 2LL * v22;
    if ( !is_mul_ok(v22, 2uLL) )
      v18 = -1LL;
    v16 = (char *)operator new[](v18, (const struct std::nothrow_t *)&std::nothrow);
    operator delete(v13, v19);
    if ( !v16 )
    {
      v10 = ProcessImageInfoByPID - 108;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x388,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)(unsigned int)(ProcessImageInfoByPID - 108));
      return v10;
    }
    ProcessImageInfoByPID = Common::GetProcessImageInfoByPID(a2, v16, (unsigned __int16 *)&v22, 0LL, 0LL);
    v13 = v16;
  }
  if ( ProcessImageInfoByPID >= 0 )
  {
LABEL_29:
    *a3 = v13;
    if ( v7 )
      (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)v7 + 16LL))(v7);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x38C,
    (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
    (const char *)(unsigned int)ProcessImageInfoByPID);
  if ( v13 )
    operator delete(v16, v20);
  return (unsigned int)ProcessImageInfoByPID;
}
