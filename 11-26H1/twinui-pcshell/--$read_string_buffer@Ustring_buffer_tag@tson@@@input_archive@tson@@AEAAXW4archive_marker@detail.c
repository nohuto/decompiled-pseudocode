/*
 * XREFs of ??$read_string_buffer@Ustring_buffer_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@AEAUstring_buffer_tag@1@@Z @ 0x180327B60
 * Callers:
 *     ??$process@V?$nvp@AEAUansistring_buffer_tag@tson@@@tson@@V?$nvp@AEAG@2@V12@V?$nvp@AEAI@2@V?$nvp@AEAUstring_buffer_tag@tson@@@2@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAUansistring_buffer_tag@tson@@@1@$$QEAV?$nvp@AEAG@1@0$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAUstring_buffer_tag@tson@@@1@0@Z @ 0x180326D34 (--$process@V-$nvp@AEAUansistring_buffer_tag@tson@@@tson@@V-$nvp@AEAG@2@V12@V-$nvp@AEAI@2@V-$nvp@.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1801770A8 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1801771BC (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ??$consume@E@read_buffer@tson@@QEAA_NAEAE@Z @ 0x1802C1E90 (--$consume@E@read_buffer@tson@@QEAA_NAEAE@Z.c)
 *     ?upgrade_string_size@input_archive@tson@@AEAAGE@Z @ 0x1802C8500 (-upgrade_string_size@input_archive@tson@@AEAAGE@Z.c)
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x180330CD4 (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 */

char __fastcall tson::input_archive::read_string_buffer<tson::string_buffer_tag>(
        tson::input_archive *this,
        unsigned __int8 a2,
        __int64 a3)
{
  _WORD *v5; // rax
  __int64 v6; // rcx
  unsigned __int16 v7; // ax
  unsigned __int64 v8; // rdi
  unsigned __int16 v9; // ax
  tson::read_buffer *v10; // rcx
  _WORD *v11; // rdx
  __int64 v12; // r15
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rdi
  __int64 v15; // rcx
  _WORD *v16; // rdx
  unsigned __int8 v18; // [rsp+48h] [rbp+10h] BYREF

  v18 = a2;
  LOBYTE(v5) = tson::input_archive::search(this);
  if ( (_BYTE)v5 )
  {
    tson::input_archive::consume_expected_marker(this, 24, -2147023267);
    v6 = *(_QWORD *)this;
    v18 = 0;
    tson::read_buffer::consume<unsigned char>(v6, &v18);
    if ( v18 > 1u )
    {
      v7 = tson::input_archive::upgrade_string_size(this, v18);
      v8 = *(_QWORD *)(a3 + 8);
      v9 = v7 - 1;
      v10 = *(tson::read_buffer **)this;
      v11 = *(_WORD **)a3;
      v12 = v9;
      if ( v9 >= v8 )
      {
        v14 = v8 - 1;
        tson::read_buffer::consume_n(v10, v11, 2 * v14);
        *(_WORD *)(2 * v14 + *(_QWORD *)a3) = 0;
        v15 = *(_QWORD *)this;
        v5 = *(_WORD **)(*(_QWORD *)this + 8LL);
        v16 = &v5[v12 - v14];
        if ( (unsigned __int64)v16 > *(_QWORD *)(*(_QWORD *)this + 16LL) )
          *(_BYTE *)(v15 + 24) = 1;
        else
          *(_QWORD *)(v15 + 8) = v16;
      }
      else
      {
        v13 = 2LL * v9;
        tson::read_buffer::consume_n(v10, v11, v13);
        v5 = *(_WORD **)a3;
        *(_WORD *)(v13 + *(_QWORD *)a3) = 0;
      }
    }
    else
    {
      v5 = *(_WORD **)a3;
      **(_WORD **)a3 = 0;
    }
  }
  return (char)v5;
}
