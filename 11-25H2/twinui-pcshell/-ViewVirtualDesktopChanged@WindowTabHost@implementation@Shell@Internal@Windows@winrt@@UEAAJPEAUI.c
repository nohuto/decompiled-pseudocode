/*
 * XREFs of ?ViewVirtualDesktopChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@@Z @ 0x180055350
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18005556C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::ViewVirtualDesktopChanged(
        RTL_SRWLOCK *this,
        struct IApplicationView *a2)
{
  unsigned __int64 WindowForView; // rdi
  RTL_SRWLOCK *v5; // rbp
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 i; // r10
  _QWORD *Ptr; // rdx
  __int64 v10; // rcx
  RTL_SRWLOCK *v11; // rax
  RTL_SRWLOCK *v12; // r9
  unsigned __int64 j; // rcx
  __int64 v15; // r8
  RTL_SRWLOCK *v16; // rax
  RTL_SRWLOCK *v17; // rsi
  PVOID v18; // r14
  __int64 *v19; // r15
  _QWORD *v20; // rdi
  _QWORD *k; // rbx
  __int64 v22; // rax
  void *v23; // rcx
  int v24; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void *v26; // [rsp+50h] [rbp+8h] BYREF

  WindowForView = (unsigned int)ApplicationViewHelpers::GetWindowForView(a2, a2);
  v26 = (void *)WindowForView;
  v5 = this + 75;
  AcquireSRWLockShared(this + 75);
  v6 = 0xCBF29CE484222325uLL;
  v7 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
    v7 = 0x100000001B3LL * (*((unsigned __int8 *)&v26 + i) ^ (unsigned __int64)v7);
  Ptr = this[79].Ptr;
  v10 = 2 * (v7 & (__int64)this[82].Ptr);
  v11 = (RTL_SRWLOCK *)Ptr[2 * (v7 & (__int64)this[82].Ptr) + 1];
  v12 = (RTL_SRWLOCK *)this[77].Ptr;
  if ( v11 == v12 )
  {
LABEL_7:
    v11 = 0LL;
  }
  else
  {
    while ( (PVOID)WindowForView != v11[2].Ptr )
    {
      if ( v11 == (RTL_SRWLOCK *)Ptr[v10] )
        goto LABEL_7;
      v11 = (RTL_SRWLOCK *)v11[1].Ptr;
    }
  }
  if ( !v11 )
    v11 = (RTL_SRWLOCK *)this[77].Ptr;
  if ( v11 != v12 )
  {
    for ( j = 0LL; j < 8; ++j )
      v6 = 0x100000001B3LL * (*((unsigned __int8 *)&v26 + j) ^ (unsigned __int64)v6);
    v15 = 2 * ((__int64)this[82].Ptr & v6);
    v16 = (RTL_SRWLOCK *)Ptr[v15 + 1];
    if ( v16 != v12 )
    {
      while ( 1 )
      {
        if ( (PVOID)WindowForView == v16[2].Ptr )
          goto LABEL_20;
        if ( v16 == (RTL_SRWLOCK *)Ptr[v15] )
          break;
        v16 = (RTL_SRWLOCK *)v16[1].Ptr;
      }
    }
    do
    {
      std::_Xout_of_range("invalid unordered_map<K, T> key");
      __debugbreak();
LABEL_20:
      ;
    }
    while ( !v16 );
    v17 = v16 + 3;
    v18 = this[55].Ptr;
    v19 = (__int64 *)this[19].Ptr;
    AcquireSRWLockShared(v16 + 3);
    v20 = v17[4].Ptr;
    for ( k = (_QWORD *)*v20; ; k = (_QWORD *)*k )
    {
      if ( k == v20 )
      {
        if ( v17 )
          ReleaseSRWLockShared(v17);
        goto LABEL_11;
      }
      v22 = *v19;
      v26 = 0LL;
      if ( (*(int (__fastcall **)(__int64 *, _QWORD, void **))(v22 + 48))(v19, *(_QWORD *)(k[4] + 32LL), &v26) < 0 )
        goto LABEL_24;
      v23 = v26;
      if ( v26 )
        break;
LABEL_25:
      if ( v23 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v23 + 16LL))(v23);
    }
    v24 = (*(__int64 (__fastcall **)(PVOID, void *, struct IApplicationView *))(*(_QWORD *)v18 + 152LL))(v18, v26, a2);
    if ( v24 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC9,
        (int)"pcshell\\twinui\\windowtabhost\\lib\\windowdata.cpp",
        (const char *)(unsigned int)v24);
LABEL_24:
    v23 = v26;
    goto LABEL_25;
  }
LABEL_11:
  if ( v5 )
    ReleaseSRWLockShared(v5);
  return 0LL;
}
