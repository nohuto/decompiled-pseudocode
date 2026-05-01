/*
 * XREFs of ?GetProcessNameByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x1800EFF70
 * Callers:
 *     ?GetGameEntryFromPID@CQueryKnownGameList@@UEAAJKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x1800EF400 (-GetGameEntryFromPID@CQueryKnownGameList@@UEAAJKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z @ 0x1800F0254 (-GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z.c)
 *     ??1?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@std@@@std@@QEAA@XZ @ 0x180197950 (--1-$unique_ptr@$$BY0A@GU-$default_delete@$$BY0A@G@std@@@std@@QEAA@XZ.c)
 *     ??$?RG$0A@@?$default_delete@$$BY0A@G@std@@QEBAXPEAG@Z @ 0x180197970 (--$-RG$0A@@-$default_delete@$$BY0A@G@std@@QEBAXPEAG@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D5A88 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CQueryKnownGameList::GetProcessNameByPID(
        struct _RTL_CRITICAL_SECTION *this,
        DWORD a2,
        const unsigned __int16 **a3)
{
  __int64 v7; // rbx
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  __int64 SpinCount; // rsi
  unsigned int v10; // edi
  unsigned __int64 v11; // rax
  unsigned __int16 *v12; // rax
  const unsigned __int16 *v13; // rdi
  int ProcessImageInfoByPID; // esi
  wchar_t *v15; // rax
  wchar_t *v16; // r12
  wchar_t *v17; // rdi
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  unsigned int *v20; // [rsp+28h] [rbp-28h]
  unsigned int *v21; // [rsp+28h] [rbp-28h]
  unsigned __int16 v22[2]; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int16 *v23; // [rsp+38h] [rbp-18h] BYREF
  __int64 v24; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]

  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x365,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  v7 = 0LL;
  v24 = 0LL;
  v8 = this + 19;
  EnterCriticalSection(this + 19);
  SpinCount = this[18].SpinCount;
  if ( SpinCount )
  {
    v23 = (unsigned __int16 *)SpinCount;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v23);
    v7 = SpinCount;
    v24 = SpinCount;
  }
  if ( v8 )
    LeaveCriticalSection(v8);
  if ( v7 )
  {
    *(_DWORD *)v22 = 0;
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, unsigned __int16 *))(*(_QWORD *)v7 + 24LL))(
            v7,
            a2,
            0LL,
            v22);
    if ( (v10 & 0x80000000) != 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      return v10;
    }
    v11 = 2LL * *(unsigned int *)v22;
    if ( !is_mul_ok(*(unsigned int *)v22, 2uLL) )
      v11 = -1LL;
    v12 = (unsigned __int16 *)operator new[](v11, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v12;
    v23 = v12;
    if ( !v12 )
    {
      v10 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x375,
        (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x8007000ELL);
      std::unique_ptr<unsigned short [0]>::~unique_ptr<unsigned short [0]>(&v23);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      return v10;
    }
    ProcessImageInfoByPID = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int16 *, unsigned __int16 *))(*(_QWORD *)v7 + 24LL))(
                              v7,
                              a2,
                              v12,
                              v22);
    if ( ProcessImageInfoByPID < 0 )
    {
      std::unique_ptr<unsigned short [0]>::~unique_ptr<unsigned short [0]>(&v23);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      return (unsigned int)ProcessImageInfoByPID;
    }
    v23 = 0LL;
    *a3 = v13;
    std::unique_ptr<unsigned short [0]>::~unique_ptr<unsigned short [0]>(&v23);
  }
  else
  {
    *(_DWORD *)v22 = 260;
    v15 = (wchar_t *)operator new[](0x208uLL, (const struct std::nothrow_t *)&std::nothrow);
    v16 = v15;
    v17 = v15;
    v23 = v15;
    if ( !v15 )
    {
      v10 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x382,
        (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x8007000ELL);
      std::unique_ptr<unsigned short [0]>::~unique_ptr<unsigned short [0]>(&v23);
      return v10;
    }
    ProcessImageInfoByPID = Common::GetProcessImageInfoByPID(a2, v15, v22, 0LL, 0LL, v20);
    if ( ProcessImageInfoByPID == -2147024774 )
    {
      v18 = 2LL * *(unsigned int *)v22;
      if ( !is_mul_ok(*(unsigned int *)v22, 2uLL) )
        v18 = -1LL;
      v17 = (wchar_t *)operator new[](v18, (const struct std::nothrow_t *)&std::nothrow);
      v23 = v17;
      std::default_delete<unsigned short [0]>::operator()<unsigned short,0>(v19, v16);
      if ( !v17 )
      {
        v10 = ProcessImageInfoByPID - 108;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x388,
          (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
          (const char *)(unsigned int)(ProcessImageInfoByPID - 108));
        std::unique_ptr<unsigned short [0]>::~unique_ptr<unsigned short [0]>(&v23);
        return v10;
      }
      ProcessImageInfoByPID = Common::GetProcessImageInfoByPID(a2, v17, v22, 0LL, 0LL, v21);
    }
    if ( ProcessImageInfoByPID < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x38C,
        (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)(unsigned int)ProcessImageInfoByPID);
      std::unique_ptr<unsigned short [0]>::~unique_ptr<unsigned short [0]>(&v23);
      return (unsigned int)ProcessImageInfoByPID;
    }
    *a3 = v17;
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return 0LL;
}
