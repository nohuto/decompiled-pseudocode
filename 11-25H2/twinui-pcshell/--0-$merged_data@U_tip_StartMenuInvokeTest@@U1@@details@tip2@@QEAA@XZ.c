/*
 * XREFs of ??0?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@QEAA@XZ @ 0x180289EC0
 * Callers:
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180289D10 (-ensure_data@-$tip_test@V-$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@AEBAA.c)
 * Callees:
 *     ??0test_state@tip2@@QEAA@XZ @ 0x18028A558 (--0test_state@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>(
        __int64 a1)
{
  __int64 result; // rax
  __int128 v3; // [rsp+20h] [rbp-30h]

  *(_QWORD *)&v3 = 0x8730001EB27C5LL;
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *(_QWORD *)(a1 + 8) = a1;
  *((_QWORD *)&v3 + 1) = "StartMenuInvokeTest";
  tip2::test_state::test_state((tip2::test_state *)(a1 + 16));
  *(_DWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_OWORD *)(a1 + 24) = v3;
  *(_OWORD *)(a1 + 40) = 0x1002uLL;
  *(_OWORD *)(a1 + 56) = 0uLL;
  InitializeCriticalSection((LPCRITICAL_SECTION)(a1 + 200));
  *(_DWORD *)(a1 + 308) = -1;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_DWORD *)(a1 + 272) = 0;
  *(_BYTE *)(a1 + 276) = 0;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_WORD *)(a1 + 304) = 0;
  *(_DWORD *)(a1 + 312) = 0;
  *(_QWORD *)a1 = &tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>::`vftable';
  *(_QWORD *)(a1 + 256) = a1 + 16;
  result = a1;
  *(_DWORD *)(a1 + 320) = 1;
  return result;
}
