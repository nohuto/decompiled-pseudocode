/*
 * XREFs of ?_Add_equiv@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXPEBG0_J@Z @ 0x18014B8EC
 * Callers:
 *     ?_Do_ex_class@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXW4_Meta_type@2@@Z @ 0x18014D008 (-_Do_ex_class@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXW4_Meta_type@2@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001E210 (--2@YAPEAX_K@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x18005E4A0 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x1800B0C54 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ??$transform_primary@PEAG@?$_Regex_traits@G@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@PEAG0@Z @ 0x180149EB8 (--$transform_primary@PEAG@-$_Regex_traits@G@std@@QEBA-AV-$basic_string@GU-$char_traits@G@std@@V-.c)
 *     ??$transform_primary@PEBG@?$_Regex_traits@G@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@PEBG0@Z @ 0x180149FC0 (--$transform_primary@PEBG@-$_Regex_traits@G@std@@QEBA-AV-$basic_string@GU-$char_traits@G@std@@V-.c)
 *     ?_Char_to_elts@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAXPEBG0_JPEAPEAU?$_Sequence@G@2@@Z @ 0x18014C5AC (-_Char_to_elts@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@AEAAXPEBG0_JPEAPEAU-$_Sequence@G@2@@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_equiv(
        __int64 a1,
        const void *a2,
        __int64 a3,
        int a4)
{
  int v5; // r15d
  int v6; // r14d
  __int64 v8; // rbp
  unsigned int v9; // edi
  unsigned __int64 v10; // rsi
  const wchar_t *v11; // rax
  const wchar_t *v12; // r8
  size_t v13; // rdx
  bool v14; // bl
  int v15; // ecx
  _OWORD *v16; // rdx
  _OWORD *v17; // rax
  __int16 v18; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v19[6]; // [rsp+32h] [rbp-86h] BYREF
  void *v20[4]; // [rsp+38h] [rbp-80h] BYREF
  void *v21[4]; // [rsp+58h] [rbp-60h] BYREF

  v5 = a3;
  v6 = (int)a2;
  v8 = *(_QWORD *)(a1 + 8);
  std::_Regex_traits<unsigned short>::transform_primary<unsigned short const *>(
    *(_QWORD **)(a1 + 24),
    (__int64)v20,
    a2,
    a3);
  v9 = 0;
  v10 = 0LL;
  do
  {
    v18 = v9;
    v11 = (const wchar_t *)std::_Regex_traits<unsigned short>::transform_primary<unsigned short *>(
                             *(_QWORD **)(a1 + 24),
                             v21,
                             &v18,
                             v19);
    v12 = (const wchar_t *)v20;
    if ( v20[3] > (void *)7 )
      v12 = (const wchar_t *)v20[0];
    v13 = *((_QWORD *)v11 + 2);
    if ( *((_QWORD *)v11 + 3) > 7uLL )
      v11 = *(const wchar_t **)v11;
    v14 = std::_Traits_equal<std::char_traits<unsigned short>>(v11, v13, v12, (__int64)v20[2]);
    std::wstring::~wstring(v21);
    if ( v14 )
    {
      v16 = *(_OWORD **)(v8 + 40);
      if ( !v16 )
      {
        v17 = operator new(0x20uLL);
        v16 = v17;
        if ( v17 )
        {
          *v17 = 0LL;
          v17[1] = 0LL;
        }
        else
        {
          v16 = 0LL;
        }
        *(_QWORD *)(v8 + 40) = v16;
      }
      v15 = *((unsigned __int8 *)v16 + (v10 >> 3)) | (1 << (v9 & 7));
      *((_BYTE *)v16 + (v10 >> 3)) = v15;
    }
    ++v9;
    ++v10;
  }
  while ( v9 < 0x100 );
  std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Char_to_elts(
    v15,
    v6,
    v5,
    a4,
    v8 + 72);
  std::wstring::~wstring(v20);
}
