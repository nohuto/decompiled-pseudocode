/*
 * XREFs of ?uflow@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAAHXZ @ 0x1801FB610
 * Callers:
 *     <none>
 * Callees:
 *     ?_Reset_back@?$basic_filebuf@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x1802C2E5C (-_Reset_back@-$basic_filebuf@DU-$char_traits@D@std@@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1803101A0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180315204 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?push_back@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXD@Z @ 0x1803155B0 (-push_back@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXD@Z.c)
 *     memmove_0 @ 0x1806CCBD4 (memmove_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::filebuf::uflow(__int64 a1)
{
  unsigned __int64 v2; // rbx
  int v4; // eax
  unsigned int v5; // esi
  int v6; // eax
  __int64 v7; // rdx
  void **v8; // rdx
  void **v9; // r8
  int v10; // eax
  int v11; // eax
  void **v12; // rcx
  unsigned __int64 v13; // rdx
  void **v14; // rcx
  unsigned __int64 v15; // rbx
  void **v16; // rax
  unsigned int v17; // ebx
  void **v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rbx
  unsigned __int8 v21; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v22[7]; // [rsp+41h] [rbp-3Fh] BYREF
  __int64 v23; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int8 *v24; // [rsp+50h] [rbp-30h] BYREF
  void *v25[2]; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 v26; // [rsp+68h] [rbp-18h]
  unsigned __int64 v27; // [rsp+70h] [rbp-10h]

  if ( std::streambuf::gptr(a1) )
  {
    v2 = std::streambuf::egptr(a1);
    if ( std::streambuf::gptr(a1) < v2 )
      return *(unsigned __int8 *)std::streambuf::_Gninc(a1);
  }
  if ( !*(_QWORD *)(a1 + 128) )
    return 0xFFFFFFFFLL;
  std::filebuf::_Reset_back(a1);
  if ( *(_QWORD *)(a1 + 104) )
  {
    std::string::string(v25);
    v5 = -1;
    while ( 1 )
    {
      v23 = 0LL;
      v6 = _o_fgetc(*(_QWORD *)(a1 + 128));
      if ( v6 == -1 )
        goto LABEL_36;
      LOBYTE(v7) = v6;
      std::string::push_back(v25, v7);
      v21 = 0;
      v24 = 0LL;
      v8 = v25;
      if ( v27 > 0xF )
        v8 = (void **)v25[0];
      v9 = v25;
      if ( v27 > 0xF )
        v9 = (void **)v25[0];
      v10 = std::codecvt<char,char,_Mbstatet>::in(
              *(_QWORD *)(a1 + 104),
              a1 + 116,
              v9,
              (char *)v8 + v26,
              &v23,
              &v21,
              v22,
              &v24);
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
          break;
      }
      if ( v24 != &v21 )
      {
        v18 = v25;
        if ( v27 > 0xF )
          v18 = (void **)v25[0];
        v19 = v23;
        v20 = (__int64)v18 + v26 - v23;
        if ( v20 > 0 )
        {
          while ( 1 )
          {
            _o_ungetc((unsigned int)*(char *)(--v20 + v19));
            if ( v20 <= 0 )
              break;
            v19 = v23;
          }
        }
        v17 = v21;
LABEL_29:
        std::string::_Tidy_deallocate(v25);
        return v17;
      }
      v12 = v25;
      if ( v27 > 0xF )
        v12 = (void **)v25[0];
      v13 = v26;
      if ( v26 >= v23 - (__int64)v12 )
        v13 = v23 - (_QWORD)v12;
      v14 = v25;
      if ( v27 > 0xF )
        v14 = (void **)v25[0];
      v15 = v26 - v13;
      memmove_0(v14, (char *)v14 + v13, v26 - v13 + 1);
      v26 = v15;
    }
    if ( v11 == 2 )
    {
      v16 = v25;
      if ( v27 > 0xF )
        v16 = (void **)v25[0];
      v17 = *(char *)v16;
      goto LABEL_29;
    }
LABEL_36:
    std::string::_Tidy_deallocate(v25);
  }
  else
  {
    v4 = _o_fgetc(*(_QWORD *)(a1 + 128));
    v5 = -1;
    if ( v4 != -1 )
      return (unsigned __int8)v4;
  }
  return v5;
}
