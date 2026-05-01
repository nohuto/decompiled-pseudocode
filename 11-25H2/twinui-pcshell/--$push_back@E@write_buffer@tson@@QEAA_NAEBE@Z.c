/*
 * XREFs of ??$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z @ 0x1800DF0E4
 * Callers:
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800DE2F0 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 *     ??$write_string@Uansistring_tag@tson@@@output_archive@tson@@AEAAXW4archive_marker@details@1@Uansistring_tag@1@@Z @ 0x1800DE9B8 (--$write_string@Uansistring_tag@tson@@@output_archive@tson@@AEAAXW4archive_marker@details@1@Uans.c)
 *     ??$process@AEAUansistring_tag@tson@@@output_archive@tson@@AEAAXAEAUansistring_tag@1@@Z @ 0x1800DEB00 (--$process@AEAUansistring_tag@tson@@@output_archive@tson@@AEAAXAEAUansistring_tag@1@@Z.c)
 *     ??$write_string@Ustring_tag@tson@@@output_archive@tson@@AEAAXW4archive_marker@details@1@Ustring_tag@1@@Z @ 0x1800DEC24 (--$write_string@Ustring_tag@tson@@@output_archive@tson@@AEAAXW4archive_marker@details@1@Ustring_.c)
 *     ?saveValue@output_archive@tson@@QEAAXE@Z @ 0x1800DF200 (-saveValue@output_archive@tson@@QEAAXE@Z.c)
 *     ?serialize_data@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x18028BB7C (-serialize_data@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serial.c)
 * Callees:
 *     memcpy_s_3 @ 0x1802E09D8 (memcpy_s_3.c)
 */

char __fastcall tson::write_buffer::push_back<unsigned char>(__int64 a1, char *a2)
{
  char *v2; // r8
  unsigned __int64 v4; // rcx
  char result; // al
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  rsize_t v9; // rbp
  char *v10; // rax
  char *v11; // rsi
  const void *v12; // r8
  rsize_t v13; // r14
  void *v14; // r12
  DWORD LastError; // ebx

  v2 = *(char **)(a1 + 2072);
  v4 = *(_QWORD *)(a1 + 2080);
  if ( (unsigned __int64)v2 < v4 )
  {
LABEL_2:
    result = 1;
    *v2 = *a2;
    ++*(_QWORD *)(a1 + 2072);
    return result;
  }
  v7 = v4 - *(_QWORD *)(a1 + 2064);
  v8 = 1LL;
  if ( v7 > 1 )
    v8 = v7;
  v9 = 2 * v8;
  v10 = (char *)CoTaskMemAlloc(2 * v8);
  v11 = v10;
  if ( v10 )
  {
    v12 = *(const void **)(a1 + 2064);
    v13 = *(_QWORD *)(a1 + 2072) - (_QWORD)v12;
    memcpy_s_3(v10, v9, v12, v13);
    v14 = *(void **)a1;
    if ( *(_QWORD *)a1 )
    {
      LastError = GetLastError();
      CoTaskMemFree(v14);
      SetLastError(LastError);
    }
    *(_QWORD *)a1 = v11;
    v2 = &v11[v13];
    *(_QWORD *)(a1 + 2072) = &v11[v13];
    *(_QWORD *)(a1 + 2080) = &v11[v9];
    *(_QWORD *)(a1 + 2064) = v11;
    goto LABEL_2;
  }
  *(_BYTE *)(a1 + 8) = 1;
  return 0;
}
