/*
 * XREFs of ?ValidateKGL@CQueryKnownGameList@@AEAAJK@Z @ 0x180042008
 * Callers:
 *     ?RuntimeClassInitialize@CQueryKnownGameList@@QEAAJPEBG@Z @ 0x18004188C (-RuntimeClassInitialize@CQueryKnownGameList@@QEAAJPEBG@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180001D20 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StrCmpInsensitive@KnownGameList@@YAHPEBGK0K@Z @ 0x180041E48 (-StrCmpInsensitive@KnownGameList@@YAHPEBGK0K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CQueryKnownGameList::ValidateKGL(CQueryKnownGameList *this, unsigned int a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  unsigned int v6; // edx
  unsigned int v7; // ecx
  unsigned int v8; // r14d
  unsigned int v9; // esi
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // ebp
  __int64 v13; // rax
  __int64 v15; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v16[4]; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( *((_DWORD *)this + 10) )
  {
    v6 = *((_DWORD *)this + 11);
    if ( v6 >= a2 )
    {
      v4 = -2147024809;
      v5 = 809LL;
      goto LABEL_43;
    }
    v7 = *((_DWORD *)this + 12);
    if ( v7 >= a2 )
    {
      v4 = -2147024809;
      v5 = 810LL;
      goto LABEL_43;
    }
    if ( *((_DWORD *)this + 9) == 5 )
    {
      if ( *((_DWORD *)this + 13) != 16 )
      {
        v4 = -2147024809;
        v5 = 814LL;
        goto LABEL_43;
      }
    }
    else
    {
      if ( *((_DWORD *)this + 13) < 0x10u )
      {
        v4 = -2147024809;
        v5 = 819LL;
        goto LABEL_43;
      }
      if ( *((_DWORD *)this + 9) < 2u )
        goto LABEL_15;
    }
    if ( *((_DWORD *)this + 15) > 2u )
    {
      v4 = -2147024809;
      v5 = 825LL;
      goto LABEL_43;
    }
LABEL_15:
    if ( *((_DWORD *)this + 9) >= 3u && (unsigned __int16)(*((_WORD *)this + 33) - 1) > 8u )
    {
      v4 = -2147024809;
      v5 = 831LL;
      goto LABEL_43;
    }
    if ( v6 + v7 < v7 )
    {
      v5 = 834LL;
LABEL_42:
      v4 = -2147024362;
      goto LABEL_43;
    }
    if ( v6 + v7 >= a2 )
    {
      v4 = -2147024809;
      v5 = 835LL;
      goto LABEL_43;
    }
    v8 = v7 / *((_DWORD *)this + 13);
    if ( v7 % *((_DWORD *)this + 13) )
    {
      v4 = -2147024809;
      v5 = 836LL;
      goto LABEL_43;
    }
    v9 = 0;
    if ( !v8 )
      return 0LL;
    while ( 1 )
    {
      v10 = *(_QWORD *)this;
      *(_OWORD *)v16 = 0LL;
      v11 = (*(__int64 (__fastcall **)(CQueryKnownGameList *, _QWORD, unsigned int *))(v10 + 88))(this, v9, v16);
      v12 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x34F,
          (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
          (const char *)(unsigned int)v11);
        return v12;
      }
      if ( v16[2] >= a2 )
      {
        v4 = -2147024809;
        v5 = 849LL;
        goto LABEL_43;
      }
      if ( v16[3] >= a2 )
      {
        v4 = -2147024809;
        v5 = 850LL;
        goto LABEL_43;
      }
      if ( v16[3] + v16[2] < v16[2] )
      {
        v5 = 851LL;
        goto LABEL_42;
      }
      if ( v16[3] + v16[2] > a2 )
      {
        v4 = -2147024809;
        v5 = 852LL;
        goto LABEL_43;
      }
      if ( !v9 )
        goto LABEL_32;
      v13 = *(_QWORD *)v16;
      if ( LOWORD(v16[0]) )
        break;
LABEL_33:
      ++v9;
      v15 = v13;
      if ( v9 >= v8 )
        return 0LL;
    }
    if ( (int)KnownGameList::StrCmpInsensitive(
                (KnownGameList *)&v15,
                (const unsigned __int16 *)4,
                (__int64)v16,
                (const unsigned __int16 *)4) >= 0 )
    {
      v4 = -2147024809;
      v5 = 859LL;
      goto LABEL_43;
    }
LABEL_32:
    v13 = *(_QWORD *)v16;
    goto LABEL_33;
  }
  v4 = -2147024809;
  v5 = 808LL;
LABEL_43:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
    (const char *)v4);
  return v4;
}
