/*
 * XREFs of ?search@input_archive@tson@@AEAA_NXZ @ 0x1800A4778
 * Callers:
 *     ??$process@V?$nvp@AEAJ@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x1800A28AC (--$process@V-$nvp@AEAJ@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800A2B58 (--$process@V-$nvp@AEA_N@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x1800A4C60 (-startNode@input_archive@tson@@QEAAXXZ.c)
 *     ??$?RV?$nvp@AEAD@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAD@1@@Z @ 0x180108400 (--$-RV-$nvp@AEAD@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAD@1@@Z.c)
 *     ??$?RV?$nvp@AEAE@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAE@1@@Z @ 0x180108474 (--$-RV-$nvp@AEAE@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAE@1@@Z.c)
 *     ??$?RV?$nvp@AEAF@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAF@1@@Z @ 0x1801084D4 (--$-RV-$nvp@AEAF@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAF@1@@Z.c)
 *     ??$?RV?$nvp@AEAK@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAK@1@@Z @ 0x18010853C (--$-RV-$nvp@AEAK@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAK@1@@Z.c)
 *     ??$?RV?$nvp@AEAN@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAN@1@@Z @ 0x1801085A4 (--$-RV-$nvp@AEAN@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAN@1@@Z.c)
 *     ??$?RV?$nvp@AEA_J@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_J@1@@Z @ 0x180108710 (--$-RV-$nvp@AEA_J@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEA_J@1@@Z.c)
 *     ??$?RV?$nvp@AEA_K@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_K@1@@Z @ 0x180108778 (--$-RV-$nvp@AEA_K@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEA_K@1@@Z.c)
 *     ??$process@V?$nvp@AEAG@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAG@1@@Z @ 0x180108F18 (--$process@V-$nvp@AEAG@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEAG@1@@Z.c)
 *     ??$read_string_buffer@Uansistring_buffer_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@AEAUansistring_buffer_tag@1@@Z @ 0x180109114 (--$read_string_buffer@Uansistring_buffer_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@de.c)
 *     ??$read_string_two_phase@Uansistring_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@AEAUansistring_tag@1@@Z @ 0x1801091F0 (--$read_string_two_phase@Uansistring_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@detail.c)
 *     ??$read_string_two_phase@Ustring_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@AEAUstring_tag@1@@Z @ 0x180109294 (--$read_string_two_phase@Ustring_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@.c)
 * Callees:
 *     memcmp_0 @ 0x18009CC56 (memcmp_0.c)
 *     ?advance@read_buffer@tson@@QEAAPEAEXZ @ 0x1800A33FC (-advance@read_buffer@tson@@QEAAPEAEXZ.c)
 */

char __fastcall tson::input_archive::search(tson::input_archive *this)
{
  const char *v1; // r9
  char *v2; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned __int8 *v6; // rax
  unsigned __int8 v7; // al
  _BYTE *v8; // rdx
  _BYTE *v9; // rcx

  v1 = (const char *)*((_QWORD *)this + 2);
  v2 = (char *)this + 32;
  *((_QWORD *)this + 2) = 0LL;
  *((_BYTE *)this + 25) = 0;
  v4 = *((_QWORD *)this + 17);
  if ( v4 )
    v2 = &v2[4 * v4 - 4];
  else
    *v2 = 1;
  if ( *((_DWORD *)v2 + 1) == 1 )
    return 1;
  v5 = *(_QWORD *)this;
  v6 = *(unsigned __int8 **)(*(_QWORD *)this + 8LL);
  if ( (unsigned __int64)v6 >= *(_QWORD *)(*(_QWORD *)this + 16LL) )
    v7 = 0;
  else
    v7 = *v6;
  if ( v7 != 6 )
  {
    if ( (unsigned int)v7 - 7 >= 2 )
    {
      if ( !v1 )
      {
        v1 = "-";
        *((_BYTE *)this + 24) = 1;
      }
      v8 = *(_BYTE **)(v5 + 8);
      v9 = &v8[*((unsigned __int8 *)this + 24) + 2];
      if ( (unsigned __int64)v9 > *(_QWORD *)(v5 + 16) )
      {
        *(_BYTE *)(v5 + 24) = 1;
      }
      else
      {
        *(_QWORD *)(v5 + 8) = v9;
        if ( v8 )
        {
          if ( *v8 != 5 && *((int *)this + 2) >= 0 )
            *((_DWORD *)this + 2) = -2147023267;
          if ( (v8[1] != *((_BYTE *)this + 24) || memcmp_0(v1, v8 + 2, *((unsigned __int8 *)this + 24)))
            && *((int *)this + 2) >= 0 )
          {
            *((_DWORD *)this + 2) = -2147023092;
          }
        }
      }
      return 1;
    }
    *((_BYTE *)this + 25) = 1;
  }
  tson::read_buffer::advance((tson::read_buffer *)v5);
  return 0;
}
