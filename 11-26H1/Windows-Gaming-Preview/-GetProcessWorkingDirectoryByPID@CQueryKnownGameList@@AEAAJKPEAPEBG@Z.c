/*
 * XREFs of ?GetProcessWorkingDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x1800403C0
 * Callers:
 *     ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003E034 (-GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021F0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002294 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetProcessWorkingDirectoryByPID@Common@@YAJK_NPEAGPEAK@Z @ 0x180040684 (-GetProcessWorkingDirectoryByPID@Common@@YAJK_NPEAGPEAK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CQueryKnownGameList::GetProcessWorkingDirectoryByPID(
        struct _RTL_CRITICAL_SECTION *this,
        DWORD a2,
        const unsigned __int16 **a3)
{
  ULONG_PTR v7; // rbx
  struct _RTL_CRITICAL_SECTION *v8; // rsi
  ULONG_PTR SpinCount; // rdi
  unsigned int v10; // edi
  unsigned __int64 v11; // rax
  void *v12; // rax
  void *v13; // rsi
  const struct std::nothrow_t *v14; // rdx
  void *v15; // rax
  unsigned int v16; // edx
  void *v17; // rdi
  int ProcessWorkingDirectoryByPID; // r14d
  unsigned __int64 v19; // rax
  const struct std::nothrow_t *v20; // rdx
  unsigned int v21; // edx
  const struct std::nothrow_t *v22; // rdx
  unsigned int *v23; // [rsp+20h] [rbp-20h]
  unsigned int *v24; // [rsp+20h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  unsigned int v26; // [rsp+80h] [rbp+40h] BYREF
  ULONG_PTR v27; // [rsp+88h] [rbp+48h]

  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3BF,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  v7 = 0LL;
  v27 = 0LL;
  v8 = this + 19;
  EnterCriticalSection(this + 19);
  SpinCount = this[18].SpinCount;
  if ( SpinCount )
  {
    (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)SpinCount + 8LL))(SpinCount);
    v7 = SpinCount;
    v27 = SpinCount;
  }
  if ( v8 )
    LeaveCriticalSection(v8);
  if ( v7 )
  {
    v26 = 0;
    v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _QWORD, unsigned int *))(*(_QWORD *)v7 + 40LL))(
            v7,
            a2,
            0LL,
            &v26);
    if ( (v10 & 0x80000000) != 0 )
    {
      (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)v7 + 16LL))(v7);
      return v10;
    }
    v11 = 2LL * v26;
    if ( !is_mul_ok(v26, 2uLL) )
      v11 = -1LL;
    v12 = operator new[](v11, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v12;
    if ( !v12 )
    {
      v10 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3CF,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x8007000ELL);
      (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)v7 + 16LL))(v7);
      return v10;
    }
    v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, void *, unsigned int *))(*(_QWORD *)v7 + 40LL))(
            v7,
            a2,
            v12,
            &v26);
    if ( (v10 & 0x80000000) != 0 )
    {
      operator delete(v13, v14);
      (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)v7 + 16LL))(v7);
      return v10;
    }
    goto LABEL_29;
  }
  v26 = 260;
  v15 = operator new[](0x208uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v15;
  v17 = v15;
  if ( !v15 )
  {
    v10 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3DC,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8007000ELL);
    return v10;
  }
  ProcessWorkingDirectoryByPID = Common::GetProcessWorkingDirectoryByPID(
                                   a2,
                                   v16,
                                   (bool)v15,
                                   (unsigned __int16 *)&v26,
                                   v23);
  if ( ProcessWorkingDirectoryByPID == -2147024774 )
  {
    v19 = 2LL * v26;
    if ( !is_mul_ok(v26, 2uLL) )
      v19 = -1LL;
    v17 = operator new[](v19, (const struct std::nothrow_t *)&std::nothrow);
    operator delete(v13, v20);
    if ( !v17 )
    {
      v10 = ProcessWorkingDirectoryByPID - 108;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3E4,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)(unsigned int)(ProcessWorkingDirectoryByPID - 108));
      return v10;
    }
    ProcessWorkingDirectoryByPID = Common::GetProcessWorkingDirectoryByPID(
                                     a2,
                                     v21,
                                     (bool)v17,
                                     (unsigned __int16 *)&v26,
                                     v24);
    v13 = v17;
  }
  if ( ProcessWorkingDirectoryByPID >= 0 )
  {
LABEL_29:
    *a3 = (const unsigned __int16 *)v13;
    if ( v7 )
      (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)v7 + 16LL))(v7);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3EA,
    (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
    (const char *)(unsigned int)ProcessWorkingDirectoryByPID);
  if ( v13 )
    operator delete(v17, v22);
  return (unsigned int)ProcessWorkingDirectoryByPID;
}
