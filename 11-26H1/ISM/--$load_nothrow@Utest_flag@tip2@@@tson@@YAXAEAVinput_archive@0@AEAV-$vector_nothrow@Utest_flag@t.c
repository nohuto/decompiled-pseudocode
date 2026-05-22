/*
 * XREFs of ??$load_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@Z @ 0x180108DC0
 * Callers:
 *     ??$process@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@Z @ 0x180108F7C (--$process@V-$nvp@AEAV-$vector_nothrow@Utest_flag@tip2@@@tip2@@@tson@@@input_archive@tson@@AEAAX.c)
 * Callees:
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?clear@?$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAAXXZ @ 0x1800A3420 (-clear@-$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAAXXZ.c)
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x1800A3698 (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 *     ?finishNode@input_archive@tson@@QEAAXXZ @ 0x1800A3DC0 (-finishNode@input_archive@tson@@QEAAXXZ.c)
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x1800A4C60 (-startNode@input_archive@tson@@QEAAXXZ.c)
 *     ??0test_flag@tip2@@QEAA@$$QEAU01@@Z @ 0x180109758 (--0test_flag@tip2@@QEAA@$$QEAU01@@Z.c)
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x18010A814 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAUtest_flag@tip2@@@Z.c)
 *     ?reserve@?$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAA_N_K@Z @ 0x18010AC5C (-reserve@-$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAA_N_K@Z.c)
 */

void __fastcall tson::load_nothrow<tip2::test_flag>(tson *this, _QWORD *a2)
{
  __int64 v4; // rbx
  char *v5; // rax
  __int64 v6; // rcx
  tson::read_buffer *v7; // rcx
  struct tip2::test_flag *v8; // r8
  unsigned __int64 v9; // rdx
  __int64 v10; // rdx
  _WORD v11[8]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v12[16]; // [rsp+30h] [rbp-98h] BYREF
  PROPVARIANT pvar[2]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v14; // [rsp+50h] [rbp-78h]
  _BYTE v15[72]; // [rsp+58h] [rbp-70h] BYREF

  v4 = 0LL;
  if ( !*((_BYTE *)this + 25) )
  {
    v5 = (char *)this + 32;
    v6 = *((_QWORD *)this + 17);
    if ( v6 )
      v5 = &v5[4 * v6 - 4];
    else
      *v5 = 1;
    if ( *((_DWORD *)v5 + 1) != 1 && *((int *)this + 2) >= 0 )
      *((_DWORD *)this + 2) = -2147023267;
    v7 = *(tson::read_buffer **)this;
    v11[0] = 0;
    tson::read_buffer::consume_n(v7, v11, 2uLL);
    v4 = v11[0];
  }
  tip2::vector_nothrow<tip2::test_flag>::clear(a2);
  while ( v4 )
  {
    --v4;
    memset_0(v12, 0, 0x68uLL);
    v14 = 0LL;
    *(_OWORD *)pvar = 0LL;
    memset_0(v15, 0, 0x40uLL);
    tson::input_archive::startNode(this);
    tson::load_nothrow(this, (struct tson::input_archive *)v12, v8);
    tson::input_archive::finishNode(this);
    v9 = a2[1];
    if ( a2[2] < v9
      || (!v9 ? (v10 = 10LL) : (v10 = 2 * v9), (unsigned __int8)tip2::vector_nothrow<tip2::test_flag>::reserve(a2, v10)) )
    {
      tip2::test_flag::test_flag(*a2 + 104LL * a2[2]++, v12);
    }
    PropVariantClear(pvar);
  }
}
