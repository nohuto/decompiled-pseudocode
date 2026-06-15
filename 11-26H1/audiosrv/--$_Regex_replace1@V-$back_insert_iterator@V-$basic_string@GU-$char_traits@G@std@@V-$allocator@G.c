/*
 * XREFs of ??$_Regex_replace1@V?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEBGV?$regex_traits@G@2@GU?$char_traits@G@2@V?$allocator@G@2@@std@@YA?AV?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@V10@PEBG1AEBV?$basic_regex@GV?$regex_traits@G@std@@@0@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@W4match_flag_type@regex_constants@0@@Z @ 0x180149498
 * Callers:
 *     ??$regex_replace@V?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@2@V?$regex_traits@G@2@GU?$char_traits@G@2@V?$allocator@G@2@@std@@YA?AV?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@V10@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@0@1AEBV?$basic_regex@GV?$regex_traits@G@std@@@0@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@W4match_flag_type@regex_constants@0@@Z @ 0x180149CD0 (--$regex_replace@V-$back_insert_iterator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Copy_unchecked@PEBGPEBGV?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@YA?AV?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@PEBG0V10@@Z @ 0x180148D7C (--$_Copy_unchecked@PEBGPEBGV-$back_insert_iterator@V-$basic_string@GU-$char_traits@G@std@@V-$all.c)
 *     ??$_Format_default@PEBGV?$allocator@V?$sub_match@PEBG@std@@@std@@PEBGV?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@YA?AV?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEBV?$match_results@PEBGV?$allocator@V?$sub_match@PEBG@std@@@std@@@0@V10@PEBG2W4match_flag_type@regex_constants@0@@Z @ 0x180149000 (--$_Format_default@PEBGV-$allocator@V-$sub_match@PEBG@std@@@std@@PEBGV-$back_insert_iterator@V-$.c)
 *     ??$_Format_sed@PEBGV?$allocator@V?$sub_match@PEBG@std@@@std@@PEBGV?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@YA?AV?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEBV?$match_results@PEBGV?$allocator@V?$sub_match@PEBG@std@@@std@@@0@V10@PEBG2W4match_flag_type@regex_constants@0@@Z @ 0x180149230 (--$_Format_sed@PEBGV-$allocator@V-$sub_match@PEBG@std@@@std@@PEBGV-$back_insert_iterator@V-$basi.c)
 *     ??$_Regex_search2@PEBGV?$allocator@V?$sub_match@PEBG@std@@@std@@GV?$regex_traits@G@2@PEBG@std@@YA_NPEBG0PEAV?$match_results@PEBGV?$allocator@V?$sub_match@PEBG@std@@@std@@@0@AEBV?$basic_regex@GV?$regex_traits@G@std@@@0@W4match_flag_type@regex_constants@0@0@Z @ 0x180149698 (--$_Regex_search2@PEBGV-$allocator@V-$sub_match@PEBG@std@@@std@@GV-$regex_traits@G@2@PEBG@std@@Y.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall std::_Regex_replace1<std::back_insert_iterator<std::wstring>,unsigned short const *,std::regex_traits<unsigned short>,unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>(
        void **a1,
        void **a2,
        __int64 a3,
        unsigned __int16 *a4,
        __int64 a5,
        unsigned __int16 *a6)
{
  unsigned __int16 *v7; // rsi
  void **v9; // r15
  int v10; // r14d
  unsigned __int16 *v11; // rdi
  void ***v12; // rax
  unsigned __int16 *v13; // rdx
  unsigned __int16 *v14; // r9
  void **v15; // r8
  void ***v16; // rax
  _QWORD *v17; // r8
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rcx
  int v21; // eax
  unsigned __int16 *v23; // [rsp+20h] [rbp-81h]
  __int16 v24; // [rsp+28h] [rbp-79h]
  __int64 v25; // [rsp+30h] [rbp-71h] BYREF
  char v26; // [rsp+38h] [rbp-69h]
  __int128 v27; // [rsp+40h] [rbp-61h]
  __int128 v28; // [rsp+50h] [rbp-51h]
  unsigned __int16 *v29; // [rsp+60h] [rbp-41h]
  char v30; // [rsp+68h] [rbp-39h]
  __int128 v31; // [rsp+70h] [rbp-31h]
  char v32; // [rsp+80h] [rbp-21h]
  _QWORD v33[2]; // [rsp+88h] [rbp-19h] BYREF
  char v34; // [rsp+98h] [rbp-9h]
  void **v35; // [rsp+A0h] [rbp-1h] BYREF
  void **v36; // [rsp+A8h] [rbp+7h] BYREF
  void **v37; // [rsp+F0h] [rbp+4Fh] BYREF
  void **v38; // [rsp+100h] [rbp+5Fh] BYREF

  v37 = a1;
  v7 = (unsigned __int16 *)a3;
  v9 = a1;
  v25 = 0LL;
  v26 = 0;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0;
  v31 = 0LL;
  v32 = 0;
  v33[0] = 0LL;
  v33[1] = 0LL;
  v34 = 0;
  v10 = 0;
  if ( (unsigned __int8)std::_Regex_search2<unsigned short const *,std::allocator<std::sub_match<unsigned short const *>>,unsigned short,std::regex_traits<unsigned short>,unsigned short const *>(
                          a3,
                          (_DWORD)a4,
                          (unsigned int)&v25,
                          a5,
                          0,
                          a3) )
  {
    v11 = a6;
    do
    {
      v12 = std::_Copy_unchecked<unsigned short const *,unsigned short const *,std::back_insert_iterator<std::wstring>>(
              &v38,
              *((unsigned __int16 **)&v28 + 1),
              v29,
              a2);
      v13 = v11;
      if ( *((_QWORD *)v11 + 3) > 7uLL )
        v13 = *(unsigned __int16 **)v11;
      v14 = v11;
      if ( *((_QWORD *)v11 + 3) > 7uLL )
        v14 = *(unsigned __int16 **)v11;
      v23 = &v13[*((_QWORD *)v11 + 2)];
      v15 = *v12;
      if ( (v10 & 0x400) != 0 )
        v16 = std::_Format_sed<unsigned short const *,std::allocator<std::sub_match<unsigned short const *>>,unsigned short const *,std::back_insert_iterator<std::wstring>>(
                &v35,
                (__int64)&v25,
                v15,
                v14,
                v23);
      else
        v16 = std::_Format_default<unsigned short const *,std::allocator<std::sub_match<unsigned short const *>>,unsigned short const *,std::back_insert_iterator<std::wstring>>(
                &v36,
                &v25,
                v15,
                v14,
                (void **)v23,
                v24);
      a2 = *v16;
      v17 = (_QWORD *)v27;
      v18 = v33;
      if ( (*((_QWORD *)&v27 + 1) - (_QWORD)v27) / 24LL )
        v18 = (_QWORD *)v27;
      v7 = (unsigned __int16 *)v18[1];
      if ( v7 == a4 )
        break;
      if ( (*((_QWORD *)&v27 + 1) - (_QWORD)v27) / 24LL )
      {
        v19 = (_QWORD *)v27;
      }
      else
      {
        v17 = v33;
        v19 = v33;
      }
      v20 = v19[1];
      if ( *v17 != v20 )
        v10 |= 0x100u;
      v21 = 0x2000;
      if ( *v17 != v20 )
        v21 = 0;
    }
    while ( (unsigned __int8)std::_Regex_search2<unsigned short const *,std::allocator<std::sub_match<unsigned short const *>>,unsigned short,std::regex_traits<unsigned short>,unsigned short const *>(
                               (_DWORD)v7,
                               (_DWORD)a4,
                               (unsigned int)&v25,
                               a5,
                               v10 | (unsigned int)v21,
                               (__int64)v7) );
    v9 = v37;
  }
  *v9 = *std::_Copy_unchecked<unsigned short const *,unsigned short const *,std::back_insert_iterator<std::wstring>>(
           &v37,
           v7,
           a4,
           a2);
  if ( (_QWORD)v27 )
    std::_Deallocate<16>((void *)v27, (struct std::nothrow_t *)(24 * (((_QWORD)v28 - (_QWORD)v27) / 24LL)));
  return v9;
}
