/*
 * XREFs of ?GetSmtcProcesses@CApplication@@QEAAJPEAV?$forward_list@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAI@Z @ 0x1800153A0
 * Callers:
 *     ?SetNotificationData@@YAJAEBV?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@PEAE_K@Z @ 0x180015194 (-SetNotificationData@@YAJAEBV-$vector@PEAVCApplication@@V-$allocator@PEAVCApplication@@@std@@@st.c)
 *     ?GetNotificationDataSize@@YAJAEBV?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@PEA_K@Z @ 0x18002DF94 (-GetNotificationDataSize@@YAJAEBV-$vector@PEAVCApplication@@V-$allocator@PEAVCApplication@@@std@.c)
 * Callees:
 *     ?clear@?$forward_list@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x18001681C (-clear@-$forward_list@V-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$.c)
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x18001EA10 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ??$emplace_front@AEAPEAVCProcess@@@?$forward_list@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@AEAPEAVCProcess@@@Z @ 0x1800375EC (--$emplace_front@AEAPEAVCProcess@@@-$forward_list@V-$com_ptr_t@VCProcess@@Uerr_returncode_policy.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::GetSmtcProcesses(__int64 a1, __int64 a2, _DWORD *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  __int64 v7; // rcx
  const char *v8; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+50h] [rbp+18h]

  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v13 = v6;
  if ( a2 )
    std::forward_list<wil::com_ptr_t<CProcess,wil::err_returncode_policy>>::clear(a2);
  if ( a3 )
    *a3 = 0;
  v11 = *(_QWORD *)(a1 + 72);
  try
  {
    while ( v11 )
    {
      v7 = *(_QWORD *)ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v7, &v11);
      v12 = v7;
      if ( !*(_DWORD *)(v7 + 416) && *(_DWORD *)(v7 + 496) )
      {
        if ( a2 )
          std::forward_list<wil::com_ptr_t<CProcess,wil::err_returncode_policy>>::emplace_front<CProcess * &>(a2, &v12);
        if ( a3 )
          ++*a3;
      }
    }
    if ( v6 )
      LeaveCriticalSection(v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x854,
                           (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
                           v8);
  }
  return result;
}
