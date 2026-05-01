/*
 * XREFs of ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAVStoredFailureInfo@wil@@@Z @ 0x1800DEA88
 * Callers:
 *     ?serialize_data@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x1802804C8 (-serialize_data@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4seriali.c)
 *     ??$process@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@output_archive@tson@@AEAAXAEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@Z @ 0x1802808D8 (--$process@AEAV-$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@output_archive@tson@@AEAAXAEAV-$.c)
 *     ?serialize_data@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x180280978 (-serialize_data@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serial.c)
 * Callees:
 *     ??$?RAEAUstring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUstring_tag@1@@Z @ 0x1800DE9F4 (--$-RAEAUstring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUstring_tag@1@@Z.c)
 *     ??$process@V?$nvp@AEAG@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAG@1@@Z @ 0x1800DEA2C (--$process@V-$nvp@AEAG@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAG@1@@Z.c)
 *     ??$process@V?$nvp@AEAUansistring_tag@tson@@@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAUansistring_tag@tson@@@1@@Z @ 0x1800DED20 (--$process@V-$nvp@AEAUansistring_tag@tson@@@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAUans.c)
 *     ??$process@V?$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAI@1@@Z @ 0x1800DF098 (--$process@V-$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAI@1@@Z.c)
 *     ??$process@V?$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x1800DF130 (--$process@V-$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 */

void __fastcall tson::save_nothrow(tson *this, struct tson::output_archive *a2, struct wil::StoredFailureInfo *a3)
{
  __int64 v3; // r8
  __int64 v5; // rax
  __int64 v6; // rcx
  __int128 v7; // xmm0
  __int64 v8; // r8
  __int64 v9; // rcx
  __int128 v10; // xmm0
  __int64 v11; // r8
  __int128 v12; // xmm0
  __int64 v13; // rcx
  __int128 v14; // xmm0
  __int64 v15; // r8
  __int64 v16; // rcx
  __int128 v17; // [rsp+20h] [rbp-E0h] BYREF
  int *v18; // [rsp+30h] [rbp-D0h]
  const char *v19; // [rsp+38h] [rbp-C8h] BYREF
  char v20; // [rsp+40h] [rbp-C0h]
  __int128 *v21; // [rsp+48h] [rbp-B8h]
  const char *v22; // [rsp+50h] [rbp-B0h] BYREF
  char v23; // [rsp+58h] [rbp-A8h]
  __int16 *v24; // [rsp+60h] [rbp-A0h]
  const char *v25; // [rsp+68h] [rbp-98h] BYREF
  char v26; // [rsp+70h] [rbp-90h]
  __int128 *v27; // [rsp+78h] [rbp-88h]
  const char *v28; // [rsp+80h] [rbp-80h] BYREF
  char v29; // [rsp+88h] [rbp-78h]
  int *v30; // [rsp+90h] [rbp-70h]
  const char *v31; // [rsp+98h] [rbp-68h] BYREF
  char v32; // [rsp+A0h] [rbp-60h]
  __int128 *v33; // [rsp+A8h] [rbp-58h]
  __int128 v34; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v35; // [rsp+C0h] [rbp-40h]
  __int128 v36; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v37; // [rsp+D8h] [rbp-28h]
  __int128 v38; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v39; // [rsp+F0h] [rbp-10h]
  __int128 v40; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v41; // [rsp+108h] [rbp+8h]
  __int16 v42; // [rsp+120h] [rbp+20h] BYREF
  int v43; // [rsp+128h] [rbp+28h] BYREF
  int v44; // [rsp+130h] [rbp+30h] BYREF

  v3 = *((_QWORD *)a2 + 7);
  v44 = *((_DWORD *)a2 + 2);
  v42 = *((_WORD *)a2 + 32);
  v43 = *(_DWORD *)a2;
  v5 = -1LL;
  *(_QWORD *)&v17 = v3;
  if ( v3 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( *(_BYTE *)(v3 + v6) );
    *((_QWORD *)&v17 + 1) = v6;
  }
  else
  {
    v17 = 0uLL;
  }
  v7 = v17;
  v8 = *((_QWORD *)a2 + 16);
  v18 = 0LL;
  v39 = 0LL;
  *(_QWORD *)&v17 = v8;
  v38 = v7;
  if ( v8 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( *(_BYTE *)(v8 + v9) );
    *((_QWORD *)&v17 + 1) = v9;
  }
  else
  {
    v17 = 0uLL;
  }
  v10 = v17;
  v11 = *((_QWORD *)a2 + 3);
  v18 = 0LL;
  v37 = 0LL;
  *(_QWORD *)&v17 = v11;
  v36 = v10;
  if ( v11 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( *(_WORD *)(v11 + 2 * v16) );
    *((_QWORD *)&v17 + 1) = v16;
  }
  else
  {
    v17 = 0uLL;
  }
  v12 = v17;
  v18 = 0LL;
  v13 = *((_QWORD *)a2 + 9);
  v41 = 0LL;
  *(_QWORD *)&v17 = v13;
  v40 = v12;
  if ( v13 )
  {
    do
      ++v5;
    while ( *(_BYTE *)(v13 + v5) );
    *((_QWORD *)&v17 + 1) = v5;
  }
  else
  {
    v17 = 0uLL;
  }
  v14 = v17;
  v31 = "context";
  v33 = &v34;
  v28 = "type";
  v30 = &v43;
  v25 = "module";
  v27 = &v36;
  v22 = "line";
  v24 = &v42;
  v19 = "file";
  v21 = &v38;
  *(_QWORD *)&v17 = "hr";
  v18 = &v44;
  v34 = v14;
  v32 = 7;
  v35 = 0LL;
  v29 = 4;
  v26 = 6;
  v23 = 4;
  v20 = 4;
  BYTE8(v17) = 2;
  tson::output_archive::process<tson::nvp<long &>>(this, &v17);
  tson::output_archive::process<tson::nvp<tson::ansistring_tag &>>(this, &v19);
  tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)this, (__int64 *)&v22, v15);
  tson::output_archive::process<tson::nvp<tson::ansistring_tag &>>(this, &v25);
  tson::output_archive::process<tson::nvp<unsigned int &>>(this, &v28);
  *((_BYTE *)this + 8) = 7;
  *(_QWORD *)this = "message";
  tson::output_archive::operator()<tson::string_tag &>((__int64)this, &v40);
  tson::output_archive::process<tson::nvp<tson::ansistring_tag &>>(this, &v31);
}
