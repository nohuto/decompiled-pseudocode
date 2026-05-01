/*
 * XREFs of ?UnregisterForViewEvents@UwpWindowEventDispatcher@@UEAAJUEventRegistrationToken@@@Z @ 0x18018B480
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WindowEventDispatcher_UnregisteringForWindowEvents@ViewManagerInteropTraceLogging@@SAXXZ @ 0x18018B6EC (-WindowEventDispatcher_UnregisteringForWindowEvents@ViewManagerInteropTraceLogging@@SAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall UwpWindowEventDispatcher::UnregisterForViewEvents(
        RTL_SRWLOCK *this,
        struct EventRegistrationToken a2)
{
  RTL_SRWLOCK *v4; // rbx
  __int64 v5; // r13
  std::_Ref_count_base *v6; // r12
  __int64 v7; // r14
  _QWORD *Ptr; // rdx
  __int64 v9; // rax
  std::_Ref_count_base *v10; // rcx
  __int64 *v11; // r14
  __int64 *v12; // r15
  __int64 v13; // rax
  __int64 v14; // rdx
  std::_Ref_count_base *v15; // rcx
  std::_Ref_count_base *v16; // rcx
  _QWORD *v17; // r14
  _QWORD *v18; // rax
  const char *v19; // r9
  __int64 v20; // r15
  unsigned int v21; // edi
  PVOID v23; // r15
  unsigned int *v24; // rax
  int v25; // eax
  int v26[2]; // [rsp+20h] [rbp-78h]
  __int64 (__fastcall *v27)(PVOID, _QWORD, _QWORD); // [rsp+20h] [rbp-78h]
  _QWORD *v28; // [rsp+28h] [rbp-70h]
  __int128 v29; // [rsp+30h] [rbp-68h]
  char v30[8]; // [rsp+40h] [rbp-58h] BYREF
  std::_Ref_count_base *v31; // [rsp+48h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  int v33; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v34; // [rsp+B0h] [rbp+18h]
  RTL_SRWLOCK *v35; // [rsp+B8h] [rbp+20h]

  ViewManagerInteropTraceLogging::WindowEventDispatcher_UnregisteringForWindowEvents();
  v29 = 0LL;
  v4 = this + 61;
  AcquireSRWLockExclusive(this + 61);
  v35 = this + 61;
  v5 = ((char *)this[56].Ptr - (char *)this[55].Ptr) >> 4;
  v6 = (std::_Ref_count_base *)_mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  v34 = 0LL;
  while ( v5 )
  {
    v7 = 2 * v5;
    Ptr = this[55].Ptr;
    if ( *(_QWORD *)(Ptr[2 * v5 - 2] + 32LL) == a2.value )
    {
      v9 = Ptr[v7 - 1];
      if ( v9 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
        v6 = (std::_Ref_count_base *)*((_QWORD *)&v29 + 1);
        v4 = v35;
      }
      v34 = Ptr[v7 - 2];
      v10 = v6;
      v6 = (std::_Ref_count_base *)Ptr[v7 - 1];
      *((_QWORD *)&v29 + 1) = v6;
      if ( v10 )
        std::_Ref_count_base::_Decref(v10);
      v11 = (__int64 *)((char *)this[55].Ptr + v7 * 8);
      v12 = v11 - 2;
      for ( *(RTL_SRWLOCK *)v26 = this[56]; v11 != *(__int64 **)v26; v11 += 2 )
      {
        v13 = *v11;
        v14 = v11[1];
        *v11 = 0LL;
        v11[1] = 0LL;
        *v12 = v13;
        v15 = (std::_Ref_count_base *)v12[1];
        v12[1] = v14;
        if ( v15 )
          std::_Ref_count_base::_Decref(v15);
        v12 += 2;
      }
      v16 = (std::_Ref_count_base *)*((_QWORD *)this[56].Ptr - 1);
      if ( v16 )
        std::_Ref_count_base::_Decref(v16);
      this[56].Ptr = (char *)this[56].Ptr - 16;
      v17 = this[48].Ptr;
      v18 = this[49].Ptr;
      v28 = v18;
      while ( v17 != v18 )
      {
        try
        {
          v20 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v17 + 264LL))(*v17, v30)
                          + 32LL);
          if ( v31 )
            std::_Ref_count_base::_Decref(v31);
          if ( v20 == a2.value )
          {
            v23 = this[40].Ptr;
            v27 = *(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD))(*(_QWORD *)v23 + 64LL);
            v24 = (unsigned int *)(*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)*v17 + 288LL))(*v17, &v33);
            v25 = v27(v23, *v24, 0LL);
            if ( v25 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x258,
                (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                (const char *)(unsigned int)v25);
          }
          ++v17;
          v18 = v28;
        }
        catch ( ... )
        {
          return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                                 retaddr,
                                 (void *)0x25F,
                                 (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                                 v19);
        }
      }
    }
    --v5;
  }
  v21 = v34 == 0 ? 0x80070490 : 0;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  return v21;
}
