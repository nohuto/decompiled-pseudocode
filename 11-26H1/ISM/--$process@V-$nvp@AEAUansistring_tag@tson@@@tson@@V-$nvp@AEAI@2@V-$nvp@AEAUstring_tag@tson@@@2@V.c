/*
 * XREFs of ??$process@V?$nvp@AEAUansistring_tag@tson@@@tson@@V?$nvp@AEAI@2@V?$nvp@AEAUstring_tag@tson@@@2@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAUansistring_tag@tson@@@1@$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAUstring_tag@tson@@@1@0@Z @ 0x1800A2968
 * Callers:
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAVStoredFailureInfo@wil@@@Z @ 0x1800A45CC (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAVStoredFailureInfo@wil@@@Z.c)
 * Callees:
 *     ??$?RAEAUansistring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUansistring_tag@1@@Z @ 0x1800A21E0 (--$-RAEAUansistring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUansistring_tag@1@@Z.c)
 *     ??$?RAEAUstring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUstring_tag@1@@Z @ 0x1800A2240 (--$-RAEAUstring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUstring_tag@1@@Z.c)
 *     ?push_back@write_buffer@tson@@QEAA_NPEBX_K@Z @ 0x1800A4030 (-push_back@write_buffer@tson@@QEAA_NPEBX_K@Z.c)
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800A4F80 (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 */

tson::output_archive *__fastcall tson::output_archive::process<tson::nvp<tson::ansistring_tag &>,tson::nvp<unsigned int &>,tson::nvp<tson::string_tag &>,tson::nvp<tson::ansistring_tag &>>(
        tson::output_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 *a5)
{
  char v5; // r10
  __int64 v9; // r8
  __int64 v10; // rax
  int *v11; // rax
  bool v12; // zf
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r8
  int v20; // [rsp+30h] [rbp+8h] BYREF

  v5 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v5;
  tson::output_archive::operator()<tson::ansistring_tag &>(this, *(__m128i **)(a2 + 16), a3);
  LOBYTE(v9) = 16;
  v10 = *(_QWORD *)a3;
  *((_BYTE *)this + 8) = *(_BYTE *)(a3 + 8);
  *(_QWORD *)this = v10;
  v11 = *(int **)(a3 + 16);
  v12 = *v11 == 0;
  v20 = *v11;
  LOBYTE(v13) = v12;
  if ( (unsigned __int8)tson::output_archive::write_type(this, v13, v9) )
    tson::write_buffer::push_back(*((tson::write_buffer **)this + 18), &v20, 4uLL);
  v15 = *a4;
  *((_BYTE *)this + 8) = *((_BYTE *)a4 + 8);
  *(_QWORD *)this = v15;
  tson::output_archive::operator()<tson::string_tag &>(this, (__m128i *)a4[2], v14);
  v16 = (__int64)a5;
  v17 = *a5;
  *((_BYTE *)this + 8) = *((_BYTE *)a5 + 8);
  *(_QWORD *)this = v17;
  return tson::output_archive::operator()<tson::ansistring_tag &>(this, *(__m128i **)(v16 + 16), v18);
}
