/*
 * XREFs of ?GetProcessArgsByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18003F6A0
 * Callers:
 *     ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003E034 (-GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021F0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002294 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetProcessArgsByPID@Common@@YAJKPEAGPEAK@Z @ 0x18003F8E4 (-GetProcessArgsByPID@Common@@YAJKPEAGPEAK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CQueryKnownGameList::GetProcessArgsByPID(
        struct _RTL_CRITICAL_SECTION *this,
        DWORD a2,
        const unsigned __int16 **a3)
{
  ULONG_PTR v7; // rbx
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  ULONG_PTR SpinCount; // r14
  unsigned int v10; // edi
  unsigned __int64 v11; // rax
  void *v12; // rax
  void *v13; // rdi
  const struct std::nothrow_t *v14; // rdx
  int v15; // ebp
  void *v16; // rax
  unsigned int *v17; // r9
  int ProcessArgsByPID; // eax
  const struct std::nothrow_t *v19; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v21; // [rsp+70h] [rbp+18h] BYREF
  ULONG_PTR v22; // [rsp+78h] [rbp+20h]

  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x396,
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
    v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _QWORD, unsigned int *))(*(_QWORD *)v7 + 32LL))(
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
    v12 = operator new[](v11, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v12;
    if ( !v12 )
    {
      v10 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3A6,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x8007000ELL);
      (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)v7 + 16LL))(v7);
      return v10;
    }
    v15 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, void *, unsigned int *))(*(_QWORD *)v7 + 32LL))(
            v7,
            a2,
            v12,
            &v21);
    if ( v15 < 0 )
    {
      operator delete(v13, v14);
      (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)v7 + 16LL))(v7);
      return (unsigned int)v15;
    }
  }
  else
  {
    v21 = 4096;
    v16 = operator new[](0x2000uLL, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v16;
    if ( !v16 )
    {
      v10 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3B2,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x8007000ELL);
      return v10;
    }
    ProcessArgsByPID = Common::GetProcessArgsByPID(a2, (unsigned int)v16, (unsigned __int16 *)&v21, v17);
    v15 = ProcessArgsByPID;
    if ( ProcessArgsByPID < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3B5,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)(unsigned int)ProcessArgsByPID);
      operator delete(v13, v19);
      return (unsigned int)v15;
    }
  }
  *a3 = (const unsigned __int16 *)v13;
  if ( v7 )
    (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)v7 + 16LL))(v7);
  return 0LL;
}
