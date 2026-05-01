/*
 * XREFs of _lambda_224f9cb247002186ab59ad0be817f863_::operator() @ 0x1801BD588
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_224f9cb247002186ab59ad0be817f863___::Run @ 0x1801BD560 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_224f9cb247002186ab59ad0be817f863___--.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_224f9cb247002186ab59ad0be817f863_::operator()(_DWORD **a1)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, __int64 *); // rsi
  __int64 v4; // rcx
  int v5; // eax
  __int64 *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  char v9; // r14
  _DWORD **v10; // rdi
  _DWORD **v11; // rsi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  int v16; // eax
  const char *v17; // r9
  _DWORD *v19; // rdx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v26; // [rsp+40h] [rbp+8h] BYREF
  __int64 v27; // [rsp+48h] [rbp+10h] BYREF

  try
  {
    v27 = 0LL;
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)*a1 + 10) + 32LL))(*((_QWORD *)*a1 + 10));
    v3 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 48LL);
    v4 = v27;
    v27 = 0LL;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    v5 = v3(v2, &v27);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x78,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v5,
        v24);
    v26 = 0LL;
    v6 = (__int64 *)*((_QWORD *)*a1 + 8);
    v7 = *v6;
    v26 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v7 + 88))(v6, &v26);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x7B,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v8,
        v24);
    v9 = 0;
    v10 = a1 + 1;
    v11 = a1 + 1;
    if ( (*a1[1] & 1) != ((*a1)[24] & 1) )
    {
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 152LL))(v26);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x81,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
          (const char *)(unsigned int)v12,
          v24);
      v11 = a1 + 1;
    }
    v13 = **v10 & 2;
    if ( ((**v10 & 2) != 0) != (((*a1)[24] >> 1) & 1) )
    {
      LOBYTE(v13) = (_DWORD)v13 != 0;
      v21 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 56LL))(v26, v13);
      if ( v21 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x86,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
          (const char *)(unsigned int)v21,
          v24);
      v9 = 1;
      v10 = v11;
    }
    v14 = **v10 & 4;
    if ( ((**v10 & 4) != 0) != (((*a1)[24] >> 2) & 1) )
    {
      LOBYTE(v14) = (_DWORD)v14 != 0;
      v22 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 136LL))(v26, v14);
      if ( v22 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x8C,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
          (const char *)(unsigned int)v22,
          v24);
    }
    v15 = **v10 & 8;
    if ( ((**v10 & 8) != 0) == (((*a1)[24] >> 3) & 1) )
    {
      if ( !v9 )
      {
LABEL_13:
        v16 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 56LL))(v27, v15);
        if ( v16 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x9B,
            (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
            (const char *)(unsigned int)v16,
            v24);
        (*a1)[24] = **v10;
        if ( v26 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        if ( v27 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
        return 0LL;
      }
    }
    else
    {
      LOBYTE(v15) = (_DWORD)v15 != 0;
      v23 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 104LL))(v26, v15);
      if ( v23 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x91,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
          (const char *)(unsigned int)v23,
          v24);
      v10 = a1 + 1;
    }
    v19 = *v10;
    LOBYTE(v19) = (*(_BYTE *)*v10 & 0xA) == 10;
    v20 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v26 + 88LL))(v26, v19);
    if ( v20 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x98,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v20,
        v24);
    goto LABEL_13;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x9F,
                           (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
                           v17);
  }
  return 0LL;
}
