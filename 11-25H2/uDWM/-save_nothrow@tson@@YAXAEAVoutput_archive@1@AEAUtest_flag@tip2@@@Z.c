/*
 * XREFs of ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x1800D8118
 * Callers:
 *     ??$save_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVoutput_archive@0@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@Z @ 0x1800D4EB8 (--$save_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVoutput_archive@0@AEAV-$vector_nothrow@Utest_flag@.c)
 * Callees:
 *     ?reserve@write_buffer@tson@@AEAA_N_K@Z @ 0x1800796F4 (-reserve@write_buffer@tson@@AEAA_N_K@Z.c)
 *     ?push_back@write_buffer@tson@@QEAA_NPEBX_K@Z @ 0x1800975E4 (-push_back@write_buffer@tson@@QEAA_NPEBX_K@Z.c)
 *     ??$?RAEAUansistring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUansistring_tag@1@@Z @ 0x1800D43A4 (--$-RAEAUansistring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUansistring_tag@1@@Z.c)
 *     ??$?RAEAUstring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUstring_tag@1@@Z @ 0x1800D4404 (--$-RAEAUstring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUstring_tag@1@@Z.c)
 *     ??$?RAEA_N@output_archive@tson@@QEAAAEAV01@AEA_N@Z @ 0x1800D4464 (--$-RAEA_N@output_archive@tson@@QEAAAEAV01@AEA_N@Z.c)
 *     ??$?RV?$nvp@AEAE@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAE@1@@Z @ 0x1800D452C (--$-RV-$nvp@AEAE@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAE@1@@Z.c)
 *     ??$?RV?$nvp@Uansistring_tag@tson@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@Uansistring_tag@tson@@@1@@Z @ 0x1800D4580 (--$-RV-$nvp@Uansistring_tag@tson@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@Uansistrin.c)
 *     ??$process@V?$nvp@AEAG@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAG@1@@Z @ 0x1800D4A78 (--$process@V-$nvp@AEAG@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAG@1@@Z.c)
 *     ??$process@V?$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x1800D4AD4 (--$process@V-$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 *     ?make_string_tag@tson@@YA?AUansistring_tag@1@PEBD@Z @ 0x1800D7C48 (-make_string_tag@tson@@YA-AUansistring_tag@1@PEBD@Z.c)
 *     ?make_string_tag@tson@@YA?AUstring_tag@1@PEBG@Z @ 0x1800D7C80 (-make_string_tag@tson@@YA-AUstring_tag@1@PEBG@Z.c)
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x1800D80D4 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800D8CC8 (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 */

void __fastcall tson::save_nothrow(tson *this, struct tson::output_archive *a2, struct tip2::test_flag *a3)
{
  unsigned __int16 *v3; // rbx
  __int64 string_tag; // rax
  __m128i v7; // xmm0
  __int64 v8; // xmm1_8
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  char v20; // r14
  tson::write_buffer *v21; // rdi
  bool v22; // zf
  rsize_t v23; // r8
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  __int64 v28; // rax
  __m128i v29; // xmm0
  __int64 v30; // xmm1_8
  __int64 v31; // r8
  __m128i *v32; // rax
  __int64 v33; // xmm1_8
  __int64 v34; // r8
  const char *v35; // [rsp+20h] [rbp-29h] BYREF
  char v36; // [rsp+28h] [rbp-21h]
  char *v37; // [rsp+30h] [rbp-19h]
  __m128i v38; // [rsp+38h] [rbp-11h] BYREF
  __m128i v39; // [rsp+48h] [rbp-1h] BYREF
  __int64 v40; // [rsp+58h] [rbp+Fh]
  const char *v41; // [rsp+60h] [rbp+17h] BYREF
  char v42; // [rsp+68h] [rbp+1Fh]
  char v43[7]; // [rsp+69h] [rbp+20h] BYREF
  struct tson::output_archive *v44; // [rsp+70h] [rbp+27h]
  _BYTE v45[24]; // [rsp+78h] [rbp+2Fh] BYREF
  double v46; // [rsp+B0h] [rbp+67h] BYREF

  v36 = 4;
  v3 = (unsigned __int16 *)((char *)a2 + 16);
  v35 = "type";
  v37 = (char *)a2 + 16;
  string_tag = tson::make_string_tag((__int64)v45, *((_QWORD *)a2 + 1));
  v38.m128i_i8[8] = 4;
  v38.m128i_i64[0] = (__int64)"name";
  v42 = 6;
  v7 = *(__m128i *)string_tag;
  v44 = a2;
  v8 = *(_QWORD *)(string_tag + 16);
  v39 = v7;
  v41 = "reason";
  v40 = v8;
  tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)this, (__int64 *)&v41, v9);
  *(_QWORD *)this = "name";
  *((_BYTE *)this + 8) = 4;
  tson::output_archive::operator()<tson::ansistring_tag &>(this, &v39, v10);
  tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)this, (__int64 *)&v35, v11);
  v14 = *v3;
  if ( v14 <= 0x12 )
  {
    if ( v14 == 18 )
    {
      v36 = 5;
      v35 = "value";
      v37 = (char *)a2 + 24;
      tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)this, (__int64 *)&v35, v13);
      return;
    }
    v15 = v14 - 2;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( !v16 )
      {
        v36 = 5;
        v35 = "value";
        v37 = (char *)a2 + 24;
        tson::output_archive::process<tson::nvp<long &>>((__int64)this, (__int64 *)&v35, v13);
        return;
      }
      v17 = v16 - 2;
      if ( v17 )
      {
        v18 = v17 - 6;
        if ( v18 )
        {
          v19 = v18 - 5;
          if ( v19 )
          {
            if ( v19 == 1 )
            {
              v36 = 5;
              v35 = "value";
              v37 = (char *)a2 + 24;
              tson::output_archive::operator()<tson::nvp<unsigned char &>>((__int64)this, (__int64 *)&v35, v13);
            }
          }
          else
          {
            *((_BYTE *)this + 8) = 5;
            *(_QWORD *)this = "value";
            LOBYTE(v13) = 11;
            v20 = *((_BYTE *)a2 + 24);
            LOBYTE(v12) = v20 == 0;
            if ( (unsigned __int8)tson::output_archive::write_type(this, v12, v13) )
            {
              v21 = (tson::write_buffer *)*((_QWORD *)this + 18);
              if ( *((_QWORD *)v21 + 259) < *((_QWORD *)v21 + 260) || tson::write_buffer::reserve(v21, 1uLL) )
                *(_BYTE *)(*((_QWORD *)v21 + 259))++ = v20;
            }
          }
        }
        else
        {
          v42 = 5;
          v41 = "value";
          v22 = *((_WORD *)a2 + 12) == 0;
          *(_QWORD *)this = "value";
          v43[0] = !v22;
          *((_BYTE *)this + 8) = 5;
          tson::output_archive::operator()<bool &>((__int64)this, v43, v13);
        }
        return;
      }
      *((_BYTE *)this + 8) = 5;
      *(_QWORD *)this = "value";
      LOBYTE(v13) = 21;
      v46 = *((double *)a2 + 3);
      LOBYTE(v12) = v46 == 0.0;
      if ( !(unsigned __int8)tson::output_archive::write_type(this, v12, v13) )
        return;
      v23 = 8LL;
    }
    else
    {
      *((_BYTE *)this + 8) = 5;
      *(_QWORD *)this = "value";
      LOBYTE(v13) = 13;
      LOWORD(v46) = *((_WORD *)a2 + 12);
      LOBYTE(v12) = LOWORD(v46) == 0;
      if ( !(unsigned __int8)tson::output_archive::write_type(this, v12, v13) )
        return;
      v23 = 2LL;
    }
LABEL_20:
    tson::write_buffer::push_back(*((void ***)this + 18), &v46, v23);
    return;
  }
  v24 = v14 - 19;
  if ( !v24 )
  {
    *((_BYTE *)this + 8) = 5;
    *(_QWORD *)this = "value";
    tson::output_archive::saveValue((void ***)this, *((unsigned int *)a2 + 6), v13);
    return;
  }
  v25 = v24 - 1;
  if ( !v25 )
  {
    LOBYTE(v13) = 19;
    goto LABEL_31;
  }
  v26 = v25 - 1;
  if ( !v26 )
  {
    LOBYTE(v13) = 20;
LABEL_31:
    *((_BYTE *)this + 8) = 5;
    *(_QWORD *)this = "value";
    v46 = *((double *)a2 + 3);
    LOBYTE(v12) = *(_QWORD *)&v46 == 0LL;
    if ( !(unsigned __int8)tson::output_archive::write_type(this, v12, v13) )
      return;
    v23 = 8LL;
    goto LABEL_20;
  }
  v27 = v26 - 9;
  if ( v27 )
  {
    if ( v27 == 1 )
    {
      v28 = tson::make_string_tag((__int64)v45, *((_QWORD *)a2 + 3));
      v38.m128i_i8[8] = 5;
      v38.m128i_i64[0] = (__int64)"value";
      v29 = *(__m128i *)v28;
      v30 = *(_QWORD *)(v28 + 16);
      *(_QWORD *)this = "value";
      v39 = v29;
      *((_BYTE *)this + 8) = 5;
      v40 = v30;
      tson::output_archive::operator()<tson::string_tag &>(this, &v39, v31);
    }
  }
  else
  {
    v32 = (__m128i *)tson::make_string_tag((__int64)v45, *((_QWORD *)a2 + 3));
    v38.m128i_i8[8] = 5;
    v38.m128i_i64[0] = (__int64)"value";
    v33 = v32[1].m128i_i64[0];
    v39 = *v32;
    v40 = v33;
    tson::output_archive::operator()<tson::nvp<tson::ansistring_tag>>(this, &v38, v34);
  }
}
