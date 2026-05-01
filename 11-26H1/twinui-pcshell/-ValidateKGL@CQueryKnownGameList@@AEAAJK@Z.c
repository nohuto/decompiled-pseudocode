/*
 * XREFs of ?ValidateKGL@CQueryKnownGameList@@AEAAJK@Z @ 0x18003D8FC
 * Callers:
 *     ?RuntimeClassInitialize@CQueryKnownGameList@@QEAAJPEBG@Z @ 0x18003CED8 (-RuntimeClassInitialize@CQueryKnownGameList@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CQueryKnownGameList::ValidateKGL(CQueryKnownGameList *this, unsigned int a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  unsigned int v7; // ecx
  unsigned int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // r13d
  unsigned int i; // r14d
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // ebx
  unsigned int v15; // r15d
  struct localeinfo_struct *locale; // r12
  int v17; // ebx
  wint_t v18; // ax
  __int64 v19; // [rsp+20h] [rbp-48h]
  __int128 v20; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( !*((_DWORD *)this + 10) )
  {
    v4 = -2147024809;
    v5 = 808LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)v4,
      v19);
    return (unsigned int)v4;
  }
  v7 = *((_DWORD *)this + 11);
  if ( v7 >= a2 )
  {
    v4 = -2147024809;
    v5 = 809LL;
    goto LABEL_5;
  }
  v8 = *((_DWORD *)this + 12);
  if ( v8 >= a2 )
  {
    v4 = -2147024809;
    v5 = 810LL;
    goto LABEL_5;
  }
  if ( *((_DWORD *)this + 9) == 5 )
  {
    if ( *((_DWORD *)this + 13) != 16 )
    {
      v4 = -2147024809;
      v5 = 814LL;
      goto LABEL_5;
    }
    goto LABEL_13;
  }
  if ( *((_DWORD *)this + 13) < 0x10u )
  {
    v4 = -2147024809;
    v5 = 819LL;
    goto LABEL_5;
  }
  if ( *((_DWORD *)this + 9) >= 2u )
  {
LABEL_13:
    if ( *((_DWORD *)this + 15) > 2u )
    {
      v4 = -2147024809;
      v5 = 825LL;
      goto LABEL_5;
    }
  }
  if ( *((_DWORD *)this + 9) >= 3u && (!*((_WORD *)this + 33) || *((_WORD *)this + 33) > 9u) )
  {
    v4 = -2147024809;
    v5 = 831LL;
    goto LABEL_5;
  }
  v9 = v8 + v7;
  if ( v9 < v8 )
  {
    v5 = 834LL;
LABEL_4:
    v4 = -2147024362;
    goto LABEL_5;
  }
  if ( v9 >= a2 )
  {
    v4 = -2147024809;
    v5 = 835LL;
    goto LABEL_5;
  }
  v10 = v8 / *((_DWORD *)this + 13);
  if ( v8 % *((_DWORD *)this + 13) )
  {
    v4 = -2147024809;
    v5 = 836LL;
    goto LABEL_5;
  }
  for ( i = 0; i < v10; ++i )
  {
    v12 = *(_QWORD *)this;
    v20 = 0LL;
    v4 = (*(__int64 (__fastcall **)(CQueryKnownGameList *, _QWORD, __int128 *))(v12 + 88))(this, i, &v20);
    if ( v4 < 0 )
    {
      v5 = 847LL;
      goto LABEL_5;
    }
    if ( DWORD2(v20) >= a2 )
    {
      v4 = -2147024809;
      v5 = 849LL;
      goto LABEL_5;
    }
    if ( HIDWORD(v20) >= a2 )
    {
      v4 = -2147024809;
      v5 = 850LL;
      goto LABEL_5;
    }
    if ( (unsigned int)(HIDWORD(v20) + DWORD2(v20)) < DWORD2(v20) )
    {
      v5 = 851LL;
      goto LABEL_4;
    }
    if ( HIDWORD(v20) + DWORD2(v20) > a2 )
    {
      v4 = -2147024809;
      v5 = 852LL;
      goto LABEL_5;
    }
    if ( i )
    {
      v13 = v20;
      if ( !(_WORD)v20 )
        goto LABEL_42;
      v14 = 0;
      v15 = 0;
      locale = _create_locale(0, "C");
      while ( v15 < 4 )
      {
        v17 = _towlower_l(*((_WORD *)&v19 + v15), locale);
        v18 = _towlower_l(*((_WORD *)&v20 + v15++), locale);
        v14 = v17 - v18;
        if ( v14 )
          goto LABEL_40;
      }
      if ( v15 != 4 )
        v14 = 1;
LABEL_40:
      _free_locale(locale);
      if ( v14 >= 0 )
      {
        v4 = -2147024809;
        v5 = 859LL;
        goto LABEL_5;
      }
    }
    v13 = v20;
LABEL_42:
    v19 = v13;
  }
  return 0LL;
}
