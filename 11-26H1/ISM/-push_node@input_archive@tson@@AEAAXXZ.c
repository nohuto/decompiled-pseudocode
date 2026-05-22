/*
 * XREFs of ?push_node@input_archive@tson@@AEAAXXZ @ 0x1800A40A4
 * Callers:
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x1800A4C60 (-startNode@input_archive@tson@@QEAAXXZ.c)
 * Callees:
 *     ?advance@read_buffer@tson@@QEAAPEAEXZ @ 0x1800A33FC (-advance@read_buffer@tson@@QEAAPEAEXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1800A365C (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 */

void __fastcall tson::input_archive::push_node(tson::read_buffer **this)
{
  tson::read_buffer *v2; // rcx
  char *v3; // rax
  char v4; // al
  __int64 v5; // r11
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r8

  v2 = *this;
  v3 = (char *)*((_QWORD *)v2 + 1);
  if ( (unsigned __int64)v3 >= *((_QWORD *)v2 + 2) )
    v4 = 0;
  else
    v4 = *v3;
  if ( v4 == 3 )
  {
    tson::read_buffer::advance(v2);
    v6 = *(_QWORD *)(v5 + 136);
    if ( v6 < 0x19 )
    {
      *(_DWORD *)(v5 + 4 * v6 + 36) = 1;
LABEL_9:
      ++*(_QWORD *)(v5 + 136);
      return;
    }
  }
  else
  {
    tson::input_archive::consume_expected_marker(this);
    v7 = *(_QWORD *)(v5 + 136);
    if ( v7 < 0x19 )
    {
      *(_DWORD *)(v5 + 4 * v7 + 36) = 0;
      goto LABEL_9;
    }
  }
  *(_BYTE *)(v5 + 32) = 1;
}
