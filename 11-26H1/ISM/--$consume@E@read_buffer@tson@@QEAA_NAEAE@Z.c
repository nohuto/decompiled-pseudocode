/*
 * XREFs of ??$consume@E@read_buffer@tson@@QEAA_NAEAE@Z @ 0x180108D60
 * Callers:
 *     ??$?RV?$nvp@AEAE@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAE@1@@Z @ 0x180108474 (--$-RV-$nvp@AEAE@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAE@1@@Z.c)
 *     ??$read_string_buffer@Uansistring_buffer_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@AEAUansistring_buffer_tag@1@@Z @ 0x180109114 (--$read_string_buffer@Uansistring_buffer_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@de.c)
 *     ??$read_string_two_phase@Uansistring_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@AEAUansistring_tag@1@@Z @ 0x1801091F0 (--$read_string_two_phase@Uansistring_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@detail.c)
 *     ??$read_string_two_phase@Ustring_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@AEAUstring_tag@1@@Z @ 0x180109294 (--$read_string_two_phase@Ustring_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@.c)
 *     ?upgrade_string_size@input_archive@tson@@AEAAGE@Z @ 0x18010B34C (-upgrade_string_size@input_archive@tson@@AEAAGE@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall tson::read_buffer::consume<unsigned char>(__int64 a1, _BYTE *a2)
{
  char *v2; // rax
  char v3; // r8
  char result; // al

  v2 = *(char **)(a1 + 8);
  if ( (unsigned __int64)v2 >= *(_QWORD *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 24) = 1;
    return 0;
  }
  else
  {
    v3 = *v2;
    *(_QWORD *)(a1 + 8) = v2 + 1;
    result = 1;
    *a2 = v3;
  }
  return result;
}
