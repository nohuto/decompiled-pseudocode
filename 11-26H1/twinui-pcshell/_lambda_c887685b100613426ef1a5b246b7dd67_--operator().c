/*
 * XREFs of _lambda_c887685b100613426ef1a5b246b7dd67_::operator() @ 0x180209174
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_c887685b100613426ef1a5b246b7dd67___::Run @ 0x180209150 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_c887685b100613426ef1a5b246b7dd67___--.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_c887685b100613426ef1a5b246b7dd67_::operator()(_BYTE **a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, _QWORD **); // rsi
  _QWORD *v5; // rcx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax
  const char *v13; // r9
  int v15; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  _QWORD *v17; // [rsp+30h] [rbp+8h] BYREF

  v17 = 0LL;
  v2 = *((_QWORD *)*a1 + 10);
  try
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
    v4 = *(__int64 (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v3 + 48LL);
    v5 = v17;
    v17 = 0LL;
    if ( v5 )
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*v5 + 16LL))(v5, *v5);
    v6 = v4(v3, &v17);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x4A,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v6,
        v15);
    v7 = *(_DWORD *)a1[1];
    if ( v7 )
    {
      if ( (v7 & 1) == 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x52,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
          (const char *)0x80070057LL,
          v15);
      v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)*a1 + 8) + 64LL))(*((_QWORD *)*a1 + 8));
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x54,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
          (const char *)(unsigned int)v9,
          v15);
      if ( (*a1[1] & 2) != 0 )
      {
        v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)*a1 + 10) + 24LL))(*((_QWORD *)*a1 + 10));
        v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 96LL))(v10, *((_QWORD *)*a1 + 8));
        if ( v11 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x58,
            (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
            (const char *)(unsigned int)v11,
            v15);
      }
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)*a1 + 8) + 64LL))(*((_QWORD *)*a1 + 8), 0LL);
      if ( v8 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x4E,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
          (const char *)(unsigned int)v8,
          v15);
    }
    v12 = (*(__int64 (__fastcall **)(_QWORD *))(*v17 + 56LL))(v17);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5C,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v12,
        v15);
    *((_DWORD *)*a1 + 23) = *(_DWORD *)a1[1];
    if ( v17 )
      (*(void (__fastcall **)(_QWORD *))(*v17 + 16LL))(v17);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x60,
                           (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
                           v13);
  }
  return 0LL;
}
