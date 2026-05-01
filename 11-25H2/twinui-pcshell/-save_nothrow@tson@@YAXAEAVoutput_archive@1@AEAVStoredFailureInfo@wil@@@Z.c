/*
 * XREFs of ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAVStoredFailureInfo@wil@@@Z @ 0x1800DFC38
 * Callers:
 *     ?serialize_data@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x18028B494 (-serialize_data@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4seriali.c)
 *     ?serialize_data@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x18028BB7C (-serialize_data@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serial.c)
 *     ??$save_nothrow@VStoredFailureInfo@wil@@@tson@@YAXAEAVoutput_archive@0@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@Z @ 0x18028BFE8 (--$save_nothrow@VStoredFailureInfo@wil@@@tson@@YAXAEAVoutput_archive@0@AEAV-$vector_nothrow@VSto.c)
 * Callees:
 *     ??$process@V?$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x1800DE8C8 (--$process@V-$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 *     ??$process@V?$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAI@1@@Z @ 0x1800DE920 (--$process@V-$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAI@1@@Z.c)
 *     ??$process@AEAUansistring_tag@tson@@@output_archive@tson@@AEAAXAEAUansistring_tag@1@@Z @ 0x1800DEB00 (--$process@AEAUansistring_tag@tson@@@output_archive@tson@@AEAAXAEAUansistring_tag@1@@Z.c)
 *     ??$process@V?$nvp@AEAG@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAG@1@@Z @ 0x1800DF4A8 (--$process@V-$nvp@AEAG@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAG@1@@Z.c)
 *     ??$?RAEAUstring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUstring_tag@1@@Z @ 0x1800DF504 (--$-RAEAUstring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUstring_tag@1@@Z.c)
 */

void __fastcall tson::save_nothrow(tson *this, struct tson::output_archive *a2, struct wil::StoredFailureInfo *a3)
{
  __int64 v3; // r8
  __int64 v5; // rax
  __int64 v6; // rcx
  __m128i v7; // xmm0
  __int64 v8; // r8
  __int64 v9; // rcx
  __m128i v10; // xmm0
  __int64 v11; // r8
  __int128 v12; // xmm0
  __int64 v13; // rcx
  __m128i v14; // xmm0
  __int64 v15; // rcx
  __int128 v16; // [rsp+20h] [rbp-59h] BYREF
  int *v17; // [rsp+30h] [rbp-49h]
  const char *v18; // [rsp+38h] [rbp-41h] BYREF
  char v19; // [rsp+40h] [rbp-39h]
  __int16 *v20; // [rsp+48h] [rbp-31h]
  const char *v21; // [rsp+50h] [rbp-29h] BYREF
  char v22; // [rsp+58h] [rbp-21h]
  int *v23; // [rsp+60h] [rbp-19h]
  __m128i v24; // [rsp+68h] [rbp-11h] BYREF
  __int64 v25; // [rsp+78h] [rbp-1h]
  __m128i v26; // [rsp+80h] [rbp+7h] BYREF
  __int64 v27; // [rsp+90h] [rbp+17h]
  __int128 v28; // [rsp+98h] [rbp+1Fh] BYREF
  __int64 v29; // [rsp+A8h] [rbp+2Fh]
  __m128i v30; // [rsp+B0h] [rbp+37h] BYREF
  __int64 v31; // [rsp+C0h] [rbp+47h]
  __int16 v32; // [rsp+E0h] [rbp+67h] BYREF
  int v33; // [rsp+E8h] [rbp+6Fh] BYREF
  int v34; // [rsp+F0h] [rbp+77h] BYREF

  v3 = *((_QWORD *)a2 + 7);
  v34 = *((_DWORD *)a2 + 2);
  v32 = *((_WORD *)a2 + 32);
  v33 = *(_DWORD *)a2;
  v5 = -1LL;
  *(_QWORD *)&v16 = v3;
  if ( v3 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( *(_BYTE *)(v3 + v6) );
    *((_QWORD *)&v16 + 1) = v6;
  }
  else
  {
    v16 = 0uLL;
  }
  v7 = (__m128i)v16;
  v8 = *((_QWORD *)a2 + 16);
  v17 = 0LL;
  v25 = 0LL;
  *(_QWORD *)&v16 = v8;
  v24 = v7;
  if ( v8 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( *(_BYTE *)(v8 + v9) );
    *((_QWORD *)&v16 + 1) = v9;
  }
  else
  {
    v16 = 0uLL;
  }
  v10 = (__m128i)v16;
  v11 = *((_QWORD *)a2 + 3);
  v17 = 0LL;
  v27 = 0LL;
  *(_QWORD *)&v16 = v11;
  v26 = v10;
  if ( v11 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( *(_WORD *)(v11 + 2 * v15) );
    *((_QWORD *)&v16 + 1) = v15;
  }
  else
  {
    v16 = 0uLL;
  }
  v12 = v16;
  v17 = 0LL;
  v13 = *((_QWORD *)a2 + 9);
  v29 = 0LL;
  *(_QWORD *)&v16 = v13;
  v28 = v12;
  if ( v13 )
  {
    do
      ++v5;
    while ( *(_BYTE *)(v13 + v5) );
    *((_QWORD *)&v16 + 1) = v5;
  }
  else
  {
    v16 = 0uLL;
  }
  v14 = (__m128i)v16;
  v21 = "type";
  v23 = &v33;
  v18 = "line";
  v20 = &v32;
  *(_QWORD *)&v16 = "hr";
  v17 = &v34;
  v30 = v14;
  v22 = 4;
  v31 = 0LL;
  v19 = 4;
  BYTE8(v16) = 2;
  tson::output_archive::process<tson::nvp<long &>>((__int64)this, (__int64 *)&v16);
  *((_BYTE *)this + 8) = 4;
  *(_QWORD *)this = "file";
  tson::output_archive::process<tson::ansistring_tag &>((__int64)this, &v24);
  tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)this, (__int64 *)&v18);
  *((_BYTE *)this + 8) = 6;
  *(_QWORD *)this = "module";
  tson::output_archive::process<tson::ansistring_tag &>((__int64)this, &v26);
  tson::output_archive::process<tson::nvp<unsigned int &>>((__int64)this, (__int64 *)&v21);
  *((_BYTE *)this + 8) = 7;
  *(_QWORD *)this = "message";
  tson::output_archive::operator()<tson::string_tag &>((__int64)this, &v28);
  *((_BYTE *)this + 8) = 7;
  *(_QWORD *)this = "context";
  tson::output_archive::process<tson::ansistring_tag &>((__int64)this, &v30);
}
