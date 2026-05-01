/*
 * XREFs of ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x1803338DC
 * Callers:
 *     ?serialize_data@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x18028B494 (-serialize_data@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4seriali.c)
 *     ?serialize_data@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x18028BB7C (-serialize_data@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serial.c)
 *     ??$save_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVoutput_archive@0@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@Z @ 0x18028C07C (--$save_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVoutput_archive@0@AEAV-$vector_nothrow@Utest_flag@.c)
 * Callees:
 *     ??$?RAEA_N@output_archive@tson@@QEAAAEAV01@AEA_N@Z @ 0x1800DD6C4 (--$-RAEA_N@output_archive@tson@@QEAAAEAV01@AEA_N@Z.c)
 *     ?push_back@write_buffer@tson@@QEAA_NPEBX_K@Z @ 0x1800DE278 (-push_back@write_buffer@tson@@QEAA_NPEBX_K@Z.c)
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800DE53C (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 *     ??$process@V?$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x1800DE8C8 (--$process@V-$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 *     ??$?RV?$nvp@Uansistring_tag@tson@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@Uansistring_tag@tson@@@1@@Z @ 0x1800DEAD0 (--$-RV-$nvp@Uansistring_tag@tson@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@Uansistrin.c)
 *     ??$process@AEAUansistring_tag@tson@@@output_archive@tson@@AEAAXAEAUansistring_tag@1@@Z @ 0x1800DEB00 (--$process@AEAUansistring_tag@tson@@@output_archive@tson@@AEAAXAEAUansistring_tag@1@@Z.c)
 *     ??$process@V?$nvp@AEAG@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAG@1@@Z @ 0x1800DF4A8 (--$process@V-$nvp@AEAG@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAG@1@@Z.c)
 *     ??$?RAEAUstring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUstring_tag@1@@Z @ 0x1800DF504 (--$-RAEAUstring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUstring_tag@1@@Z.c)
 *     ??$?RV?$nvp@AEAE@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAE@1@@Z @ 0x1800DF53C (--$-RV-$nvp@AEAE@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAE@1@@Z.c)
 *     ?make_string_tag@tson@@YA?AUansistring_tag@1@PEBD@Z @ 0x180188F14 (-make_string_tag@tson@@YA-AUansistring_tag@1@PEBD@Z.c)
 *     ?make_string_tag@tson@@YA?AUstring_tag@1@PEBG@Z @ 0x180219434 (-make_string_tag@tson@@YA-AUstring_tag@1@PEBG@Z.c)
 *     ??$process@V?$nvp@AEA_K@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_K@1@@Z @ 0x1802C1304 (--$process@V-$nvp@AEA_K@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_K@1@@Z.c)
 *     ??$?RV?$nvp@AEAD@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAD@1@@Z @ 0x180328BFC (--$-RV-$nvp@AEAD@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAD@1@@Z.c)
 *     ??$?RV?$nvp@AEAK@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAK@1@@Z @ 0x180328D50 (--$-RV-$nvp@AEAK@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAK@1@@Z.c)
 *     ??$?RV?$nvp@AEAN@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAN@1@@Z @ 0x180328DEC (--$-RV-$nvp@AEAN@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAN@1@@Z.c)
 *     ??$process@V?$nvp@AEA_J@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_J@1@@Z @ 0x18032A270 (--$process@V-$nvp@AEA_J@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_J@1@@Z.c)
 */

void __fastcall tson::save_nothrow(tson *this, struct tson::output_archive *a2, struct tip2::test_flag *a3)
{
  unsigned __int16 *v3; // rbx
  __int64 string_tag; // rax
  __m128i v7; // xmm0
  __int64 v8; // xmm1_8
  __int64 v9; // r8
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  bool v16; // zf
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  __int64 v21; // rax
  __m128i v22; // xmm0
  __int64 v23; // xmm1_8
  __m128i *v24; // rax
  __int64 v25; // xmm1_8
  const char *v26; // [rsp+20h] [rbp-29h] BYREF
  char v27; // [rsp+28h] [rbp-21h]
  char *v28; // [rsp+30h] [rbp-19h]
  const char *v29; // [rsp+38h] [rbp-11h] BYREF
  char v30; // [rsp+40h] [rbp-9h]
  __m128i v31; // [rsp+48h] [rbp-1h] BYREF
  __int64 v32; // [rsp+58h] [rbp+Fh]
  const char *v33; // [rsp+60h] [rbp+17h] BYREF
  char v34; // [rsp+68h] [rbp+1Fh]
  char v35[7]; // [rsp+69h] [rbp+20h] BYREF
  struct tson::output_archive *v36; // [rsp+70h] [rbp+27h]
  _BYTE v37[24]; // [rsp+78h] [rbp+2Fh] BYREF
  __int16 v38; // [rsp+B0h] [rbp+67h] BYREF

  v27 = 4;
  v3 = (unsigned __int16 *)((char *)a2 + 16);
  v26 = "type";
  v28 = (char *)a2 + 16;
  string_tag = tson::make_string_tag((__int64)v37, *((_QWORD *)a2 + 1));
  v30 = 4;
  v29 = "name";
  v34 = 6;
  v7 = *(__m128i *)string_tag;
  v36 = a2;
  v8 = *(_QWORD *)(string_tag + 16);
  v31 = v7;
  v33 = "reason";
  v32 = v8;
  tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)this, (__int64 *)&v33);
  *(_QWORD *)this = "name";
  *((_BYTE *)this + 8) = 4;
  tson::output_archive::process<tson::ansistring_tag &>((__int64)this, &v31);
  tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)this, (__int64 *)&v26);
  v10 = *v3;
  if ( v10 > 0x12 )
  {
    v17 = v10 - 19;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( v19 )
        {
          v20 = v19 - 9;
          if ( v20 )
          {
            if ( v20 == 1 )
            {
              v21 = tson::make_string_tag((__int64)v37, *((_QWORD *)a2 + 3));
              v30 = 5;
              v29 = "value";
              v22 = *(__m128i *)v21;
              v23 = *(_QWORD *)(v21 + 16);
              *(_QWORD *)this = "value";
              v31 = v22;
              *((_BYTE *)this + 8) = 5;
              v32 = v23;
              tson::output_archive::operator()<tson::string_tag &>((__int64)this, (__int128 *)v31.m128i_i8);
            }
          }
          else
          {
            v24 = (__m128i *)tson::make_string_tag((__int64)v37, *((_QWORD *)a2 + 3));
            v30 = 5;
            v29 = "value";
            v25 = v24[1].m128i_i64[0];
            v31 = *v24;
            v32 = v25;
            tson::output_archive::operator()<tson::nvp<tson::ansistring_tag>>((__int64)this, (__int64)&v29);
          }
        }
        else
        {
          v27 = 5;
          v26 = "value";
          v28 = (char *)a2 + 24;
          tson::output_archive::process<tson::nvp<unsigned __int64 &>>((__int64)this, (__int64 *)&v26);
        }
      }
      else
      {
        v27 = 5;
        v26 = "value";
        v28 = (char *)a2 + 24;
        tson::output_archive::process<tson::nvp<__int64 &>>((__int64)this, (__int64 *)&v26);
      }
    }
    else
    {
      v27 = 5;
      v26 = "value";
      v28 = (char *)a2 + 24;
      tson::output_archive::operator()<tson::nvp<unsigned long &>>(this, (__int64)&v26, v9);
    }
  }
  else if ( v10 == 18 )
  {
    v27 = 5;
    v26 = "value";
    v28 = (char *)a2 + 24;
    tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)this, (__int64 *)&v26);
  }
  else
  {
    v11 = v10 - 2;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = v12 - 2;
        if ( v13 )
        {
          v14 = v13 - 6;
          if ( v14 )
          {
            v15 = v14 - 5;
            if ( v15 )
            {
              if ( v15 == 1 )
              {
                v27 = 5;
                v26 = "value";
                v28 = (char *)a2 + 24;
                tson::output_archive::operator()<tson::nvp<unsigned char &>>(this, (__int64)&v26);
              }
            }
            else
            {
              v27 = 5;
              v26 = "value";
              v28 = (char *)a2 + 24;
              tson::output_archive::operator()<tson::nvp<char &>>((__int64)this, (__int64 *)&v26);
            }
          }
          else
          {
            v16 = *((_WORD *)a2 + 12) == 0;
            v33 = "value";
            *(_QWORD *)this = "value";
            v35[0] = !v16;
            v34 = 5;
            *((_BYTE *)this + 8) = 5;
            tson::output_archive::operator()<bool &>((__int64)this, v35);
          }
        }
        else
        {
          v27 = 5;
          v26 = "value";
          v28 = (char *)a2 + 24;
          tson::output_archive::operator()<tson::nvp<double &>>((__int64)this, (__int64)&v26);
        }
      }
      else
      {
        v27 = 5;
        v26 = "value";
        v28 = (char *)a2 + 24;
        tson::output_archive::process<tson::nvp<long &>>((__int64)this, (__int64 *)&v26);
      }
    }
    else
    {
      *((_BYTE *)this + 8) = 5;
      *(_QWORD *)this = "value";
      v38 = *((_WORD *)a2 + 12);
      if ( tson::output_archive::write_type((__int64)this, v38 == 0, 13) )
        tson::write_buffer::push_back(*((void ***)this + 18), &v38, 2uLL);
    }
  }
}
