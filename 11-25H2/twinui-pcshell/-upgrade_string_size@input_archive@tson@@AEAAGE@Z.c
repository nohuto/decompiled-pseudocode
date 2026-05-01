/*
 * XREFs of ?upgrade_string_size@input_archive@tson@@AEAAGE@Z @ 0x1802D1560
 * Callers:
 *     ??$read_string_two_phase@Ustring_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@AEAUstring_tag@1@@Z @ 0x180185108 (--$read_string_two_phase@Ustring_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@.c)
 *     ??$?RV?$nvp@AEAUansistring_skip_tag@tson@@@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAUansistring_skip_tag@tson@@@1@@Z @ 0x180328E58 (--$-RV-$nvp@AEAUansistring_skip_tag@tson@@@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEA.c)
 *     ??$read_string_buffer@Uansistring_buffer_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@AEAUansistring_buffer_tag@1@@Z @ 0x18032AA74 (--$read_string_buffer@Uansistring_buffer_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@de.c)
 *     ??$read_string_buffer@Ustring_buffer_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@AEAUstring_buffer_tag@1@@Z @ 0x18032AB50 (--$read_string_buffer@Ustring_buffer_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@detail.c)
 *     ??$read_string_two_phase@Uansistring_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@AEAUansistring_tag@1@@Z @ 0x18032AC3C (--$read_string_two_phase@Uansistring_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@detail.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall tson::input_archive::upgrade_string_size(tson::input_archive *this, unsigned __int8 a2)
{
  __int64 v2; // rcx
  unsigned __int8 v3; // r8
  unsigned __int8 *v4; // rax

  if ( (a2 & 0x80u) == 0 )
    return a2;
  v2 = *(_QWORD *)this;
  v3 = a2 & 0x7F;
  v4 = *(unsigned __int8 **)(v2 + 8);
  if ( (unsigned __int64)v4 >= *(_QWORD *)(v2 + 16) )
  {
    *(_BYTE *)(v2 + 24) = 1;
  }
  else
  {
    a2 = *v4;
    *(_QWORD *)(v2 + 8) = v4 + 1;
  }
  return a2 | (v3 << 8);
}
