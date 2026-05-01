/*
 * XREFs of ?reserve@write_buffer@tson@@AEAA_N_K@Z @ 0x1800DDE84
 * Callers:
 *     ?saveValue@output_archive@tson@@QEAAX_N@Z @ 0x1800DD26C (-saveValue@output_archive@tson@@QEAAX_N@Z.c)
 *     ??$?RAEA_N@output_archive@tson@@QEAAAEAV01@AEA_N@Z @ 0x1800DD6C4 (--$-RAEA_N@output_archive@tson@@QEAAAEAV01@AEA_N@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DDAAC (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800DDF6C (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ?push_back@write_buffer@tson@@QEAA_NPEBX_K@Z @ 0x1800DE278 (-push_back@write_buffer@tson@@QEAA_NPEBX_K@Z.c)
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800DE2F0 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 *     ??$process@V?$nvp@AEAW4FullActivationTestSource@@@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4FullActivationTestSource@@@1@@Z @ 0x1800DE420 (--$process@V-$nvp@AEAW4FullActivationTestSource@@@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@A.c)
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x1800DE4B8 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800DE53C (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 *     ??$process@V?$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAI@1@@Z @ 0x1800DE920 (--$process@V-$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAI@1@@Z.c)
 *     ??$write_string@Uansistring_tag@tson@@@output_archive@tson@@AEAAXW4archive_marker@details@1@Uansistring_tag@1@@Z @ 0x1800DE9B8 (--$write_string@Uansistring_tag@tson@@@output_archive@tson@@AEAAXW4archive_marker@details@1@Uans.c)
 *     ??$process@AEAUansistring_tag@tson@@@output_archive@tson@@AEAAXAEAUansistring_tag@1@@Z @ 0x1800DEB00 (--$process@AEAUansistring_tag@tson@@@output_archive@tson@@AEAAXAEAUansistring_tag@1@@Z.c)
 *     ??$write_string@Ustring_tag@tson@@@output_archive@tson@@AEAAXW4archive_marker@details@1@Ustring_tag@1@@Z @ 0x1800DEC24 (--$write_string@Ustring_tag@tson@@@output_archive@tson@@AEAAXW4archive_marker@details@1@Ustring_.c)
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800DF23C (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ??$push_back@W4archive_marker@details@tson@@@write_buffer@tson@@QEAA_NAEBW4archive_marker@details@1@@Z @ 0x18016DEB4 (--$push_back@W4archive_marker@details@tson@@@write_buffer@tson@@QEAA_NAEBW4archive_marker@detail.c)
 *     ??0output_archive@tson@@QEAA@AEAVwrite_buffer@1@E@Z @ 0x18018365C (--0output_archive@tson@@QEAA@AEAVwrite_buffer@1@E@Z.c)
 *     ?serialize_data@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x18028BB7C (-serialize_data@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serial.c)
 *     ??$?RV?$nvp@AEAD@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAD@1@@Z @ 0x180328BFC (--$-RV-$nvp@AEAD@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAD@1@@Z.c)
 * Callees:
 *     memcpy_s_3 @ 0x1802E09D8 (memcpy_s_3.c)
 */

bool __fastcall tson::write_buffer::reserve(tson::write_buffer *this, unsigned __int64 a2)
{
  rsize_t v3; // rbp
  char *v4; // rax
  char *v5; // rsi
  const void *v6; // r8
  rsize_t v7; // r14
  void *v8; // r15
  DWORD LastError; // ebx
  bool result; // al

  if ( *((_QWORD *)this + 260) - *((_QWORD *)this + 258) > a2 )
    a2 = *((_QWORD *)this + 260) - *((_QWORD *)this + 258);
  v3 = 2 * a2;
  v4 = (char *)CoTaskMemAlloc(2 * a2);
  v5 = v4;
  if ( v4 )
  {
    v6 = (const void *)*((_QWORD *)this + 258);
    v7 = *((_QWORD *)this + 259) - (_QWORD)v6;
    memcpy_s_3(v4, v3, v6, v7);
    v8 = *(void **)this;
    if ( *(_QWORD *)this )
    {
      LastError = GetLastError();
      CoTaskMemFree(v8);
      SetLastError(LastError);
    }
    *(_QWORD *)this = v5;
    *((_QWORD *)this + 259) = &v5[v7];
    *((_QWORD *)this + 260) = &v5[v3];
    result = 1;
    *((_QWORD *)this + 258) = v5;
  }
  else
  {
    *((_BYTE *)this + 8) = 1;
    return 0;
  }
  return result;
}
