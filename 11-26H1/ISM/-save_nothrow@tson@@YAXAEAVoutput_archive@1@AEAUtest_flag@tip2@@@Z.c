/*
 * XREFs of ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x1800A4270
 * Callers:
 *     ??$process@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@Z @ 0x1800A2A24 (--$process@V-$nvp@AEAV-$vector_nothrow@Utest_flag@tip2@@@tip2@@@tson@@@output_archive@tson@@AEAA.c)
 * Callees:
 *     ??$?RAEAUansistring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUansistring_tag@1@@Z @ 0x1800A21E0 (--$-RAEAUansistring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUansistring_tag@1@@Z.c)
 *     ??$?RAEAUstring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUstring_tag@1@@Z @ 0x1800A2240 (--$-RAEAUstring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUstring_tag@1@@Z.c)
 *     ??$?RAEA_N@output_archive@tson@@QEAAAEAV01@AEA_N@Z @ 0x1800A22A0 (--$-RAEA_N@output_archive@tson@@QEAAAEAV01@AEA_N@Z.c)
 *     ??$?RV?$nvp@AEAD@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAD@1@@Z @ 0x1800A2368 (--$-RV-$nvp@AEAD@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAD@1@@Z.c)
 *     ??$?RV?$nvp@AEAE@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAE@1@@Z @ 0x1800A23F4 (--$-RV-$nvp@AEAE@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAE@1@@Z.c)
 *     ??$?RV?$nvp@AEAN@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAN@1@@Z @ 0x1800A2448 (--$-RV-$nvp@AEAN@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAN@1@@Z.c)
 *     ??$?RV?$nvp@Uansistring_tag@tson@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@Uansistring_tag@tson@@@1@@Z @ 0x1800A25C8 (--$-RV-$nvp@Uansistring_tag@tson@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@Uansistrin.c)
 *     ??$process@V?$nvp@AEAG@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAG@1@@Z @ 0x1800A2850 (--$process@V-$nvp@AEAG@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAG@1@@Z.c)
 *     ??$process@V?$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x1800A2910 (--$process@V-$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 *     ?make_string_tag@tson@@YA?AUansistring_tag@1@PEBD@Z @ 0x1800A3F58 (-make_string_tag@tson@@YA-AUansistring_tag@1@PEBD@Z.c)
 *     ?make_string_tag@tson@@YA?AUstring_tag@1@PEBG@Z @ 0x1800A3F90 (-make_string_tag@tson@@YA-AUstring_tag@1@PEBG@Z.c)
 *     ?push_back@write_buffer@tson@@QEAA_NPEBX_K@Z @ 0x1800A4030 (-push_back@write_buffer@tson@@QEAA_NPEBX_K@Z.c)
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800A4F80 (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 */

void __fastcall tson::save_nothrow(tson *this, struct tson::output_archive *a2, struct tip2::test_flag *a3)
{
  unsigned __int16 *v3; // rdi
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
  bool v20; // zf
  rsize_t v21; // r8
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  __int64 v26; // rax
  __m128i v27; // xmm0
  __int64 v28; // xmm1_8
  __int64 v29; // r8
  __m128i *v30; // rax
  __int64 v31; // xmm1_8
  __int64 v32; // r8
  const char *v33; // [rsp+20h] [rbp-29h] BYREF
  char v34; // [rsp+28h] [rbp-21h]
  char *v35; // [rsp+30h] [rbp-19h]
  __m128i v36; // [rsp+38h] [rbp-11h] BYREF
  __m128i v37; // [rsp+48h] [rbp-1h] BYREF
  __int64 v38; // [rsp+58h] [rbp+Fh]
  const char *v39; // [rsp+60h] [rbp+17h] BYREF
  char v40; // [rsp+68h] [rbp+1Fh]
  char v41[7]; // [rsp+69h] [rbp+20h] BYREF
  struct tson::output_archive *v42; // [rsp+70h] [rbp+27h]
  _BYTE v43[24]; // [rsp+78h] [rbp+2Fh] BYREF
  __int64 v44; // [rsp+B0h] [rbp+67h] BYREF

  v34 = 4;
  v3 = (unsigned __int16 *)((char *)a2 + 16);
  v33 = "type";
  v35 = (char *)a2 + 16;
  string_tag = tson::make_string_tag((__int64)v43, *((_QWORD *)a2 + 1));
  v36.m128i_i8[8] = 4;
  v36.m128i_i64[0] = (__int64)"name";
  v40 = 6;
  v7 = *(__m128i *)string_tag;
  v42 = a2;
  v8 = *(_QWORD *)(string_tag + 16);
  v37 = v7;
  v39 = "reason";
  v38 = v8;
  tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)this, (__int64 *)&v39, v9);
  *(_QWORD *)this = "name";
  *((_BYTE *)this + 8) = 4;
  tson::output_archive::operator()<tson::ansistring_tag &>(this, &v37, v10);
  tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)this, (__int64 *)&v33, v11);
  v14 = *v3;
  if ( v14 <= 0x12 )
  {
    if ( v14 == 18 )
    {
      v34 = 5;
      v33 = "value";
      v35 = (char *)a2 + 24;
      tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)this, (__int64 *)&v33, v13);
      return;
    }
    v15 = v14 - 2;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
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
                v34 = 5;
                v33 = "value";
                v35 = (char *)(v3 + 4);
                tson::output_archive::operator()<tson::nvp<unsigned char &>>((__int64)this, (__int64 *)&v33, v13);
              }
            }
            else
            {
              v34 = 5;
              v33 = "value";
              v35 = (char *)a2 + 24;
              tson::output_archive::operator()<tson::nvp<char &>>((__int64)this, (__int64 *)&v33, v13);
            }
          }
          else
          {
            v40 = 5;
            v39 = "value";
            v20 = *((_WORD *)a2 + 12) == 0;
            *(_QWORD *)this = "value";
            v41[0] = !v20;
            *((_BYTE *)this + 8) = 5;
            tson::output_archive::operator()<bool &>((__int64)this, v41, v13);
          }
        }
        else
        {
          v34 = 5;
          v33 = "value";
          v35 = (char *)a2 + 24;
          tson::output_archive::operator()<tson::nvp<double &>>((__int64)this, (__int64)&v33, v13);
        }
      }
      else
      {
        v34 = 5;
        v33 = "value";
        v35 = (char *)a2 + 24;
        tson::output_archive::process<tson::nvp<long &>>((__int64)this, (__int64 *)&v33, v13);
      }
      return;
    }
    *((_BYTE *)this + 8) = 5;
    *(_QWORD *)this = "value";
    LOBYTE(v13) = 13;
    LOWORD(v44) = *((_WORD *)a2 + 12);
    LOBYTE(v12) = (_WORD)v44 == 0;
    if ( !(unsigned __int8)tson::output_archive::write_type(this, v12, v13) )
      return;
    v21 = 2LL;
LABEL_30:
    tson::write_buffer::push_back(*((void ***)this + 18), &v44, v21);
    return;
  }
  v22 = v14 - 19;
  if ( !v22 )
  {
    *((_BYTE *)this + 8) = 5;
    *(_QWORD *)this = "value";
    LOBYTE(v13) = 18;
    LODWORD(v44) = *((_DWORD *)a2 + 6);
    LOBYTE(v12) = (_DWORD)v44 == 0;
    if ( !(unsigned __int8)tson::output_archive::write_type(this, v12, v13) )
      return;
    v21 = 4LL;
    goto LABEL_30;
  }
  v23 = v22 - 1;
  if ( !v23 )
  {
    LOBYTE(v13) = 19;
    goto LABEL_25;
  }
  v24 = v23 - 1;
  if ( !v24 )
  {
    LOBYTE(v13) = 20;
LABEL_25:
    *((_BYTE *)this + 8) = 5;
    *(_QWORD *)this = "value";
    v44 = *((_QWORD *)a2 + 3);
    LOBYTE(v12) = v44 == 0;
    if ( !(unsigned __int8)tson::output_archive::write_type(this, v12, v13) )
      return;
    v21 = 8LL;
    goto LABEL_30;
  }
  v25 = v24 - 9;
  if ( v25 )
  {
    if ( v25 == 1 )
    {
      v26 = tson::make_string_tag((__int64)v43, *((_QWORD *)a2 + 3));
      v36.m128i_i8[8] = 5;
      v36.m128i_i64[0] = (__int64)"value";
      v27 = *(__m128i *)v26;
      v28 = *(_QWORD *)(v26 + 16);
      *(_QWORD *)this = "value";
      v37 = v27;
      *((_BYTE *)this + 8) = 5;
      v38 = v28;
      tson::output_archive::operator()<tson::string_tag &>(this, &v37, v29);
    }
  }
  else
  {
    v30 = (__m128i *)tson::make_string_tag((__int64)v43, *((_QWORD *)a2 + 3));
    v36.m128i_i8[8] = 5;
    v36.m128i_i64[0] = (__int64)"value";
    v31 = v30[1].m128i_i64[0];
    v37 = *v30;
    v38 = v31;
    tson::output_archive::operator()<tson::nvp<tson::ansistring_tag>>(this, &v36, v32);
  }
}
