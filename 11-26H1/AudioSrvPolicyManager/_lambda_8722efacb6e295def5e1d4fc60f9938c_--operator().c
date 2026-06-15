/*
 * XREFs of _lambda_8722efacb6e295def5e1d4fc60f9938c_::operator() @ 0x180005474
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_8722efacb6e295def5e1d4fc60f9938c__void_::_Do_call @ 0x180044F80 (std--_Func_impl_no_alloc__lambda_8722efacb6e295def5e1d4fc60f9938c__void_--_Do_call.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEAK@?$vector@KV?$allocator@K@std@@@std@@AEAAPEAKQEAKAEAK@Z @ 0x180006BA0 (--$_Emplace_reallocate@AEAK@-$vector@KV-$allocator@K@std@@@std@@AEAAPEAKQEAKAEAK@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x18000FDB0 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18001ADA0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
void lambda_8722efacb6e295def5e1d4fc60f9938c_::operator()()
{
  struct _RTL_CRITICAL_SECTION *v0; // rdi
  __int64 v1; // rax
  __int64 *v2; // rbx
  const char *v3; // r9
  unsigned int *v4; // rbx
  unsigned int *v5; // rdi
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = 0LL;
  v7 = 0LL;
  v0 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  EnterCriticalSection(&stru_180068A08);
  v1 = qword_180068A38;
  v2 = *(__int64 **)qword_180068A38;
  while ( v2 != (__int64 *)v1 )
  {
    if ( *((_QWORD *)&v6 + 1) == v7 )
    {
      try
      {
        std::vector<unsigned long>::_Emplace_reallocate<unsigned long &>(&v6, *((_QWORD *)&v6 + 1));
      }
      catch ( ... )
      {
        wil::details::in1diag3::Log_CaughtException(
          retaddr,
          (void *)0x5B3,
          (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          v3);
        goto LABEL_11;
      }
    }
    else
    {
      **((_DWORD **)&v6 + 1) = *(_DWORD *)v2[3];
      *((_QWORD *)&v6 + 1) += 4LL;
    }
    v2 = (__int64 *)*v2;
    v1 = qword_180068A38;
  }
  if ( &stru_180068A08 )
    LeaveCriticalSection(&stru_180068A08);
  if ( v0 )
    LeaveCriticalSection(v0);
LABEL_11:
  v5 = (unsigned int *)*((_QWORD *)&v6 + 1);
  v4 = (unsigned int *)v6;
  if ( (_QWORD)v6 != *((_QWORD *)&v6 + 1) )
  {
    do
      CApplicationManager::ApplyPBMPolicyForAllAppsInSession(g_ApplicationManager, *v4++, 1);
    while ( v4 != v5 );
    v4 = (unsigned int *)v6;
  }
  if ( v4 )
    std::_Deallocate<16>(v4, (v7 - (_QWORD)v4) & 0xFFFFFFFFFFFFFFFCuLL);
}
