/*
 * XREFs of ??$make_shared@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBG@std@@YA?AV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEAPEBG@Z @ 0x180018D14
 * Callers:
 *     ?QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBG_KKH@Z @ 0x180017F08 (-QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBG_KKH@Z.c)
 *     ?OnAppClosed@CPlaybackManager@@QEAAJPEBG_KK@Z @ 0x1800183E8 (-OnAppClosed@CPlaybackManager@@QEAAJPEBG_KK@Z.c)
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x180018508 (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackma.c)
 *     ?SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z @ 0x180018B40 (-SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z.c)
 *     PbmReportApplicationState @ 0x18002B400 (PbmReportApplicationState.c)
 *     PbmAllowMediaPlaybackForApp @ 0x1800419C0 (PbmAllowMediaPlaybackForApp.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18000E6B0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18002EC28 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     memcpy_0 @ 0x180030A10 (memcpy_0.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x18003B144 (-_Xlen_string@std@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<std::wstring,unsigned short const * &>(_QWORD *a1, const void **a2)
{
  HANDLE ProcessHeap; // rax
  char *v5; // rax
  char *v6; // rsi
  _QWORD *v7; // r15
  _WORD *v8; // r12
  unsigned __int64 v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // rcx
  char *v12; // rdi
  size_t v13; // rbx
  size_t v15; // rbx

  ProcessHeap = GetProcessHeap();
  v5 = (char *)HeapAlloc(ProcessHeap, 0, 0x30uLL);
  v6 = v5;
  if ( v5 )
  {
    *(_OWORD *)v5 = 0LL;
    *((_DWORD *)v5 + 2) = 1;
    *((_DWORD *)v5 + 3) = 1;
    *(_QWORD *)v5 = &std::_Ref_count_obj2<std::wstring>::`vftable';
    v7 = v5 + 16;
    v8 = *a2;
    *((_OWORD *)v5 + 1) = 0LL;
    *((_QWORD *)v5 + 4) = 0LL;
    *((_QWORD *)v5 + 5) = 0LL;
    v9 = -1LL;
    do
      ++v9;
    while ( v8[v9] );
    v10 = 0x7FFFFFFFFFFFFFFELL;
    if ( v9 > 0x7FFFFFFFFFFFFFFELL )
      std::_Xlen_string();
    if ( v9 <= 7 )
    {
      *((_QWORD *)v5 + 4) = v9;
      *((_QWORD *)v5 + 5) = 7LL;
      v15 = 2 * v9;
      memcpy_0(v5 + 16, v8, v15);
      *(_WORD *)((char *)v7 + v15) = 0;
    }
    else
    {
      if ( (v9 | 7) > 0x7FFFFFFFFFFFFFFELL )
      {
        v11 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else
      {
        v10 = v9 | 7;
        if ( (v9 | 7) < 0xA )
          v10 = 10LL;
        v11 = v10 + 1;
        if ( (unsigned __int64)(v10 + 1) > 0x7FFFFFFFFFFFFFFFLL )
          std::_Throw_bad_array_new_length();
      }
      v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(2 * v11);
      *v7 = v12;
      *((_QWORD *)v6 + 4) = v9;
      *((_QWORD *)v6 + 5) = v10;
      v13 = 2 * v9;
      memcpy_0(v12, v8, v13);
      *(_WORD *)&v12[v13] = 0;
    }
  }
  else
  {
    v6 = 0LL;
  }
  *a1 = v6 + 16;
  a1[1] = v6;
  return a1;
}
