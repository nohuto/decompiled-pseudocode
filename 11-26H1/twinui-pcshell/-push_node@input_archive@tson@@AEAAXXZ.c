/*
 * XREFs of ?push_node@input_archive@tson@@AEAAXXZ @ 0x1801771FC
 * Callers:
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x180177078 (-startNode@input_archive@tson@@QEAAXXZ.c)
 *     ?deserialize_data@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXAEBUTestInfo@TestInfo_ODR_guard@@@Z @ 0x180283CC0 (-deserialize_data@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXAEBUTestInfo@TestInfo_ODR_guard@@.c)
 * Callees:
 *     ?advance@read_buffer@tson@@QEAAPEAEXZ @ 0x180177344 (-advance@read_buffer@tson@@QEAAPEAEXZ.c)
 */

void __fastcall tson::input_archive::push_node(tson::read_buffer **this)
{
  tson::read_buffer *v1; // rcx
  _BYTE *v2; // rax
  unsigned __int8 *v3; // rax
  __int64 v4; // r8
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax

  v1 = *this;
  v2 = (_BYTE *)*((_QWORD *)v1 + 1);
  if ( (unsigned __int64)v2 < *((_QWORD *)v1 + 2) && *v2 == 3 )
  {
    tson::read_buffer::advance(v1);
    v6 = *(_QWORD *)(v4 + 136);
    if ( v6 < 0x19 )
    {
      *(_DWORD *)(v4 + 4 * v6 + 36) = 1;
      goto LABEL_7;
    }
  }
  else
  {
    v3 = tson::read_buffer::advance(v1);
    if ( v3 && *v3 != 1 && *(int *)(v4 + 8) >= 0 )
      *(_DWORD *)(v4 + 8) = -2147023267;
    v5 = *(_QWORD *)(v4 + 136);
    if ( v5 < 0x19 )
    {
      *(_DWORD *)(v4 + 4 * v5 + 36) = 0;
LABEL_7:
      ++*(_QWORD *)(v4 + 136);
      return;
    }
  }
  *(_BYTE *)(v4 + 32) = 1;
}
