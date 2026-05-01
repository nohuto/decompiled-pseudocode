/*
 * XREFs of ?GetProcessWorkingDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18067CC14
 * Callers:
 *     ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x1801105E4 (-GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18016FC90 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18017FA08 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??1?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@std@@@std@@QEAA@XZ @ 0x18018E854 (--1-$unique_ptr@$$BY0A@GU-$default_delete@$$BY0A@G@std@@@std@@QEAA@XZ.c)
 *     ??$?RG$0A@@?$default_delete@$$BY0A@G@std@@QEBAXPEAG@Z @ 0x18018E874 (--$-RG$0A@@-$default_delete@$$BY0A@G@std@@QEBAXPEAG@Z.c)
 *     ??4?$ComPtr@UIQueryHelper@KnownGameList@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1802C1880 (--4-$ComPtr@UIQueryHelper@KnownGameList@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802CE0B0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?GetProcessWorkingDirectoryByPID@Common@@YAJK_NPEAGPEAK@Z @ 0x180315F0C (-GetProcessWorkingDirectoryByPID@Common@@YAJK_NPEAGPEAK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CQueryKnownGameList::GetProcessWorkingDirectoryByPID(
        struct _RTL_CRITICAL_SECTION *this,
        DWORD a2,
        const unsigned __int16 **a3)
{
  __int64 v7; // rbx
  unsigned int v8; // edi
  unsigned __int64 v9; // rax
  struct _RTL_CRITICAL_SECTION *v10; // rax
  const unsigned __int16 *v11; // rdi
  int ProcessWorkingDirectoryByPID; // esi
  struct _RTL_CRITICAL_SECTION *v13; // rax
  struct _RTL_CRITICAL_SECTION *v14; // rdi
  unsigned __int64 v15; // rax
  struct _RTL_CRITICAL_SECTION *v16; // r12
  __int64 v17; // rcx
  unsigned __int16 v18[2]; // [rsp+30h] [rbp-20h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+38h] [rbp-18h] BYREF
  __int64 v20; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]

  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3BF,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  v20 = 0LL;
  wil::EnterCriticalSection(&v19, this + 19);
  Microsoft::WRL::ComPtr<KnownGameList::IQueryHelper>::operator=(&v20, (__int64 *)&this[18].SpinCount);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v19);
  v7 = v20;
  if ( v20 )
  {
    *(_DWORD *)v18 = 0;
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, unsigned __int16 *))(*(_QWORD *)v20 + 40LL))(
           v20,
           a2,
           0LL,
           v18);
    if ( (v8 & 0x80000000) != 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      return v8;
    }
    v9 = 2LL * *(unsigned int *)v18;
    if ( !is_mul_ok(*(unsigned int *)v18, 2uLL) )
      v9 = -1LL;
    v10 = (struct _RTL_CRITICAL_SECTION *)operator new[](v9, (const struct std::nothrow_t *)&std::nothrow);
    v11 = (const unsigned __int16 *)v10;
    v19 = v10;
    if ( !v10 )
    {
      v8 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3CF,
        (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x8007000ELL);
      std::unique_ptr<unsigned short [0]>::~unique_ptr<unsigned short [0]>(&v19);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      return v8;
    }
    ProcessWorkingDirectoryByPID = (*(__int64 (__fastcall **)(__int64, _QWORD, struct _RTL_CRITICAL_SECTION *, unsigned __int16 *))(*(_QWORD *)v7 + 40LL))(
                                     v7,
                                     a2,
                                     v10,
                                     v18);
    if ( ProcessWorkingDirectoryByPID < 0 )
    {
      std::unique_ptr<unsigned short [0]>::~unique_ptr<unsigned short [0]>(&v19);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      return (unsigned int)ProcessWorkingDirectoryByPID;
    }
    v19 = 0LL;
    *a3 = v11;
  }
  else
  {
    *(_DWORD *)v18 = 260;
    v13 = (struct _RTL_CRITICAL_SECTION *)operator new[](0x208uLL, (const struct std::nothrow_t *)&std::nothrow);
    v14 = v13;
    v19 = v13;
    if ( !v13 )
    {
      v8 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3DC,
        (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x8007000ELL);
      std::unique_ptr<unsigned short [0]>::~unique_ptr<unsigned short [0]>(&v19);
      return v8;
    }
    ProcessWorkingDirectoryByPID = Common::GetProcessWorkingDirectoryByPID(a2, 1, (char *)v13, v18);
    if ( ProcessWorkingDirectoryByPID == -2147024774 )
    {
      v15 = 2LL * *(unsigned int *)v18;
      if ( !is_mul_ok(*(unsigned int *)v18, 2uLL) )
        v15 = -1LL;
      v16 = (struct _RTL_CRITICAL_SECTION *)operator new[](v15, (const struct std::nothrow_t *)&std::nothrow);
      v19 = v16;
      std::default_delete<unsigned short [0]>::operator()<unsigned short,0>(v17, v14);
      if ( !v16 )
      {
        v8 = ProcessWorkingDirectoryByPID - 108;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3E4,
          (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
          (const char *)(unsigned int)(ProcessWorkingDirectoryByPID - 108));
        std::unique_ptr<unsigned short [0]>::~unique_ptr<unsigned short [0]>(&v19);
        return v8;
      }
      ProcessWorkingDirectoryByPID = Common::GetProcessWorkingDirectoryByPID(a2, 1, (char *)v16, v18);
      v14 = v16;
    }
    if ( ProcessWorkingDirectoryByPID < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3EA,
        (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)(unsigned int)ProcessWorkingDirectoryByPID);
      std::unique_ptr<unsigned short [0]>::~unique_ptr<unsigned short [0]>(&v19);
      return (unsigned int)ProcessWorkingDirectoryByPID;
    }
    v19 = 0LL;
    *a3 = (const unsigned __int16 *)v14;
  }
  std::unique_ptr<unsigned short [0]>::~unique_ptr<unsigned short [0]>(&v19);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return 0LL;
}
