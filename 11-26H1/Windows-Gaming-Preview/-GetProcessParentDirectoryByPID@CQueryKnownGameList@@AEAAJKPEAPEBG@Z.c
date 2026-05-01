/*
 * XREFs of ?GetProcessParentDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x1800400E8
 * Callers:
 *     ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003E034 (-GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021F0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002294 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z @ 0x18003FB28 (-GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CQueryKnownGameList::GetProcessParentDirectoryByPID(
        struct _RTL_CRITICAL_SECTION *this,
        DWORD a2,
        unsigned int **a3)
{
  ULONG_PTR v7; // rbx
  struct _RTL_CRITICAL_SECTION *v8; // rsi
  ULONG_PTR SpinCount; // rdi
  unsigned int v10; // edi
  unsigned __int64 v11; // rax
  unsigned int *v12; // rax
  unsigned int *v13; // rsi
  const struct std::nothrow_t *v14; // rdx
  unsigned int *v15; // rdi
  int ProcessImageInfoByPID; // r14d
  unsigned __int64 v17; // rax
  const struct std::nothrow_t *v18; // rdx
  const struct std::nothrow_t *v19; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  unsigned int v21; // [rsp+80h] [rbp+40h] BYREF
  ULONG_PTR v22; // [rsp+88h] [rbp+48h]

  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3F4,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  v7 = 0LL;
  v22 = 0LL;
  v8 = this + 19;
  EnterCriticalSection(this + 19);
  SpinCount = this[18].SpinCount;
  if ( SpinCount )
  {
    (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)SpinCount + 8LL))(SpinCount);
    v7 = SpinCount;
    v22 = SpinCount;
  }
  if ( v8 )
    LeaveCriticalSection(v8);
  if ( v7 )
  {
    v21 = 0;
    v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _QWORD, unsigned int *))(*(_QWORD *)v7 + 48LL))(
            v7,
            a2,
            0LL,
            &v21);
    if ( (v10 & 0x80000000) != 0 )
    {
      (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)v7 + 16LL))(v7);
      return v10;
    }
    v11 = 2LL * v21;
    if ( !is_mul_ok(v21, 2uLL) )
      v11 = -1LL;
    v12 = (unsigned int *)operator new[](v11, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v12;
    if ( !v12 )
    {
      v10 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x404,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x8007000ELL);
      (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)v7 + 16LL))(v7);
      return v10;
    }
    v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, unsigned int *, unsigned int *))(*(_QWORD *)v7 + 48LL))(
            v7,
            a2,
            v12,
            &v21);
    if ( (v10 & 0x80000000) != 0 )
    {
      operator delete(v13, v14);
      (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)v7 + 16LL))(v7);
      return v10;
    }
  }
  else
  {
    v21 = 260;
    v13 = (unsigned int *)operator new[](0x208uLL, (const struct std::nothrow_t *)&std::nothrow);
    v15 = v13;
    if ( !v13 )
    {
      v10 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x411,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x8007000ELL);
      return v10;
    }
    ProcessImageInfoByPID = Common::GetProcessImageInfoByPID(a2, 0LL, 0LL, v13, (unsigned __int16 *)&v21);
    if ( ProcessImageInfoByPID == -2147024774 )
    {
      v17 = 2LL * v21;
      if ( !is_mul_ok(v21, 2uLL) )
        v17 = -1LL;
      v15 = (unsigned int *)operator new[](v17, (const struct std::nothrow_t *)&std::nothrow);
      operator delete(v13, v18);
      if ( !v15 )
      {
        v10 = ProcessImageInfoByPID - 108;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x418,
          (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
          (const char *)(unsigned int)(ProcessImageInfoByPID - 108));
        return v10;
      }
      ProcessImageInfoByPID = Common::GetProcessImageInfoByPID(a2, 0LL, 0LL, v15, (unsigned __int16 *)&v21);
      v13 = v15;
    }
    if ( ProcessImageInfoByPID < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x41C,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)(unsigned int)ProcessImageInfoByPID);
      operator delete(v15, v19);
      return (unsigned int)ProcessImageInfoByPID;
    }
  }
  *a3 = v13;
  if ( v7 )
    (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)v7 + 16LL))(v7);
  return 0LL;
}
