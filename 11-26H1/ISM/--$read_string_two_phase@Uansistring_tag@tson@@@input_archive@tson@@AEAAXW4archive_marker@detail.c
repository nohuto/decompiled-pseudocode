/*
 * XREFs of ??$read_string_two_phase@Uansistring_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@AEAUansistring_tag@1@@Z @ 0x1801091F0
 * Callers:
 *     ??$read_cotaskmem_string@Uansistring_tag@tson@@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@input_archive@tson@@AEAAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180108FC4 (--$read_cotaskmem_string@Uansistring_tag@tson@@V-$unique_any_t@V-$unique_storage@U-$resource_pol.c)
 * Callees:
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1800A1000 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1800A365C (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x1800A3698 (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1800A4778 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ??$consume@E@read_buffer@tson@@QEAA_NAEAE@Z @ 0x180108D60 (--$consume@E@read_buffer@tson@@QEAA_NAEAE@Z.c)
 *     ?upgrade_string_size@input_archive@tson@@AEAAGE@Z @ 0x18010B34C (-upgrade_string_size@input_archive@tson@@AEAAGE@Z.c)
 */

char __fastcall tson::input_archive::read_string_two_phase<tson::ansistring_tag>(
        tson::input_archive *this,
        unsigned __int8 a2,
        __int64 a3)
{
  void *v5; // rax
  __int64 v6; // rcx
  void *v7; // rdx
  __int64 v8; // r8
  unsigned __int8 v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  if ( *(_BYTE *)(a3 + 16) )
  {
    v7 = *(void **)a3;
    if ( !*(_QWORD *)a3 || (v8 = *(_QWORD *)(a3 + 8)) == 0 )
      wil::details::in1diag3::FailFastImmediate_Unexpected(this);
    tson::read_buffer::consume_n(*(tson::read_buffer **)this, v7, v8 - 1);
    v5 = *(void **)a3;
    *(_BYTE *)(*(_QWORD *)(a3 + 8) + *(_QWORD *)a3 - 1LL) = 0;
  }
  else
  {
    *(_BYTE *)(a3 + 16) = 1;
    LOBYTE(v5) = tson::input_archive::search(this);
    if ( (_BYTE)v5 )
    {
      tson::input_archive::consume_expected_marker((tson::read_buffer **)this);
      v6 = *(_QWORD *)this;
      v10 = 0;
      tson::read_buffer::consume<unsigned char>(v6, &v10);
      LOWORD(v5) = tson::input_archive::upgrade_string_size(this, v10);
      *(_QWORD *)(a3 + 8) = (unsigned __int16)v5;
    }
  }
  return (char)v5;
}
