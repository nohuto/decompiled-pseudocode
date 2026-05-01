/*
 * XREFs of ?UnregisterForViewEvents@UwpWindowEventDispatcher@@UEAAJUEventRegistrationToken@@@Z @ 0x180037140
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WindowEventDispatcher_UnregisteringForWindowEvents@ViewManagerInteropTraceLogging@@SAXXZ @ 0x1801C33EC (-WindowEventDispatcher_UnregisteringForWindowEvents@ViewManagerInteropTraceLogging@@SAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall UwpWindowEventDispatcher::UnregisterForViewEvents(
        RTL_SRWLOCK *this,
        struct EventRegistrationToken a2)
{
  __int64 v4; // r12
  std::_Ref_count_base *v5; // r13
  __int64 v6; // r14
  _QWORD *Ptr; // rdx
  __int64 v8; // rax
  std::_Ref_count_base *v9; // rcx
  __int64 *v10; // r14
  __int64 *v11; // r15
  __int64 v12; // rax
  __int64 v13; // rdx
  std::_Ref_count_base *v14; // rcx
  std::_Ref_count_base *v15; // rcx
  _QWORD *v16; // r14
  _QWORD *v17; // rax
  const char *v18; // r9
  __int64 v19; // r15
  unsigned int v20; // edi
  PVOID v22; // r15
  unsigned int *v23; // rax
  int v24; // eax
  int v25[2]; // [rsp+20h] [rbp-78h]
  char v26[8]; // [rsp+40h] [rbp-58h] BYREF
  std::_Ref_count_base *v27; // [rsp+48h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  int v29; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v30; // [rsp+B0h] [rbp+18h]
  __int64 *i; // [rsp+B8h] [rbp+20h]

  ViewManagerInteropTraceLogging::WindowEventDispatcher_UnregisteringForWindowEvents();
  AcquireSRWLockExclusive(this + 61);
  v4 = ((char *)this[56].Ptr - (char *)this[55].Ptr) >> 4;
  v5 = (std::_Ref_count_base *)_mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  v30 = 0LL;
  while ( v4 )
  {
    v6 = 2 * v4;
    Ptr = this[55].Ptr;
    if ( *(_QWORD *)(Ptr[2 * v4 - 2] + 32LL) == a2.value )
    {
      v8 = Ptr[v6 - 1];
      if ( v8 )
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      v30 = Ptr[v6 - 2];
      v9 = v5;
      v5 = (std::_Ref_count_base *)Ptr[v6 - 1];
      if ( v9 )
        std::_Ref_count_base::_Decref(v9);
      v10 = (__int64 *)((char *)this[55].Ptr + v6 * 8);
      v11 = v10 - 2;
      for ( i = (__int64 *)this[56].Ptr; v10 != i; v10 += 2 )
      {
        v12 = *v10;
        v13 = v10[1];
        *v10 = 0LL;
        v10[1] = 0LL;
        *v11 = v12;
        v14 = (std::_Ref_count_base *)v11[1];
        v11[1] = v13;
        if ( v14 )
          std::_Ref_count_base::_Decref(v14);
        v11 += 2;
      }
      v15 = (std::_Ref_count_base *)*((_QWORD *)this[56].Ptr - 1);
      if ( v15 )
        std::_Ref_count_base::_Decref(v15);
      this[56].Ptr = (char *)this[56].Ptr - 16;
      v16 = this[48].Ptr;
      v17 = this[49].Ptr;
      *(_QWORD *)v25 = v17;
      while ( v16 != v17 )
      {
        try
        {
          v19 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v16 + 264LL))(*v16, v26)
                          + 32LL);
          if ( v27 )
            std::_Ref_count_base::_Decref(v27);
          if ( v19 == a2.value )
          {
            v22 = this[40].Ptr;
            i = *(__int64 **)(*(_QWORD *)v22 + 64LL);
            v23 = (unsigned int *)(*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)*v16 + 288LL))(*v16, &v29);
            v24 = ((__int64 (__fastcall *)(PVOID, _QWORD, _QWORD))i)(v22, *v23, 0LL);
            if ( v24 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x22D,
                (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                (const char *)(unsigned int)v24,
                v25[0]);
          }
          ++v16;
          v17 = *(_QWORD **)v25;
        }
        catch ( ... )
        {
          return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                                 retaddr,
                                 (void *)0x234,
                                 (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                                 v18);
        }
      }
    }
    --v4;
  }
  v20 = v30 == 0 ? 0x80070490 : 0;
  if ( this != (RTL_SRWLOCK *)-488LL )
    ReleaseSRWLockExclusive(this + 61);
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  return v20;
}
