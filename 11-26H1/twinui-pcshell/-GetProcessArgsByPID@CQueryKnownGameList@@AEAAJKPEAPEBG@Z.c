/*
 * XREFs of ?GetProcessArgsByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18067C520
 * Callers:
 *     ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x1801105E4 (-GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18016FC90 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18017FA08 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??1?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@std@@@std@@QEAA@XZ @ 0x18018E854 (--1-$unique_ptr@$$BY0A@GU-$default_delete@$$BY0A@G@std@@@std@@QEAA@XZ.c)
 *     ??4?$ComPtr@UIQueryHelper@KnownGameList@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1802C1880 (--4-$ComPtr@UIQueryHelper@KnownGameList@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802CE0B0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?GetProcessArgsByPID@Common@@YAJKPEAGPEAK@Z @ 0x18067C75C (-GetProcessArgsByPID@Common@@YAJKPEAGPEAK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CQueryKnownGameList::GetProcessArgsByPID(
        struct _RTL_CRITICAL_SECTION *this,
        DWORD a2,
        const unsigned __int16 **a3)
{
  __int64 v7; // rbx
  unsigned int v8; // edi
  unsigned __int64 v9; // rax
  struct _RTL_CRITICAL_SECTION *v10; // rax
  const unsigned __int16 *v11; // rdi
  int v12; // esi
  struct _RTL_CRITICAL_SECTION *v13; // rax
  unsigned int *v14; // r9
  const unsigned __int16 *v15; // rdi
  int ProcessArgsByPID; // eax
  unsigned __int16 v17[2]; // [rsp+30h] [rbp-20h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+38h] [rbp-18h] BYREF
  __int64 v19; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]

  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x396,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  v19 = 0LL;
  wil::EnterCriticalSection(&v18, this + 19);
  Microsoft::WRL::ComPtr<KnownGameList::IQueryHelper>::operator=(&v19, (__int64 *)&this[18].SpinCount);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v18);
  v7 = v19;
  if ( v19 )
  {
    *(_DWORD *)v17 = 0;
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, unsigned __int16 *))(*(_QWORD *)v19 + 32LL))(
           v19,
           a2,
           0LL,
           v17);
    if ( (v8 & 0x80000000) != 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      return v8;
    }
    v9 = 2LL * *(unsigned int *)v17;
    if ( !is_mul_ok(*(unsigned int *)v17, 2uLL) )
      v9 = -1LL;
    v10 = (struct _RTL_CRITICAL_SECTION *)operator new[](v9, (const struct std::nothrow_t *)&std::nothrow);
    v11 = (const unsigned __int16 *)v10;
    v18 = v10;
    if ( !v10 )
    {
      v8 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3A6,
        (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x8007000ELL);
      std::unique_ptr<unsigned short [0]>::~unique_ptr<unsigned short [0]>(&v18);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      return v8;
    }
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct _RTL_CRITICAL_SECTION *, unsigned __int16 *))(*(_QWORD *)v7 + 32LL))(
            v7,
            a2,
            v10,
            v17);
    if ( v12 < 0 )
    {
      std::unique_ptr<unsigned short [0]>::~unique_ptr<unsigned short [0]>(&v18);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      return (unsigned int)v12;
    }
    v18 = 0LL;
    *a3 = v11;
  }
  else
  {
    *(_DWORD *)v17 = 4096;
    v13 = (struct _RTL_CRITICAL_SECTION *)operator new[](0x2000uLL, (const struct std::nothrow_t *)&std::nothrow);
    v15 = (const unsigned __int16 *)v13;
    v18 = v13;
    if ( !v13 )
    {
      v8 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3B2,
        (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x8007000ELL);
      std::unique_ptr<unsigned short [0]>::~unique_ptr<unsigned short [0]>(&v18);
      return v8;
    }
    ProcessArgsByPID = Common::GetProcessArgsByPID(a2, (unsigned __int16 *)v13, v17, v14);
    v12 = ProcessArgsByPID;
    if ( ProcessArgsByPID < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3B5,
        (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)(unsigned int)ProcessArgsByPID);
      std::unique_ptr<unsigned short [0]>::~unique_ptr<unsigned short [0]>(&v18);
      return (unsigned int)v12;
    }
    v18 = 0LL;
    *a3 = v15;
  }
  std::unique_ptr<unsigned short [0]>::~unique_ptr<unsigned short [0]>(&v18);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return 0LL;
}
