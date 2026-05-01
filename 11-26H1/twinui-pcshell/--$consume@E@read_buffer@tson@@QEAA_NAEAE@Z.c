/*
 * XREFs of ??$consume@E@read_buffer@tson@@QEAA_NAEAE@Z @ 0x1802C1E90
 * Callers:
 *     ??$?RV?$nvp@AEAE@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAE@1@@Z @ 0x180325540 (--$-RV-$nvp@AEAE@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAE@1@@Z.c)
 *     ??$?RV?$nvp@AEAUansistring_skip_tag@tson@@@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAUansistring_skip_tag@tson@@@1@@Z @ 0x180325710 (--$-RV-$nvp@AEAUansistring_skip_tag@tson@@@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEA.c)
 *     ??$read_string_buffer@Uansistring_buffer_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@AEAUansistring_buffer_tag@1@@Z @ 0x180327A84 (--$read_string_buffer@Uansistring_buffer_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@de.c)
 *     ??$read_string_buffer@Ustring_buffer_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@AEAUstring_buffer_tag@1@@Z @ 0x180327B60 (--$read_string_buffer@Ustring_buffer_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@detail.c)
 *     ??$read_string_two_phase@Uansistring_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@AEAUansistring_tag@1@@Z @ 0x180327C4C (--$read_string_two_phase@Uansistring_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@detail.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAW4SwitcherType@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAW4SwitcherType@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@1@@Z @ 0x180491020 (--$process@V-$nvp@AEA_N@tson@@V-$nvp@AEAW4SwitcherType@Tip@Switcher@Experiences@ComposableShell@.c)
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
