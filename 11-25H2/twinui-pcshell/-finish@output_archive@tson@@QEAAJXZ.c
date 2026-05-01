/*
 * XREFs of ?finish@output_archive@tson@@QEAAJXZ @ 0x1801977B8
 * Callers:
 *     ?serialize_data@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x180674510 (-serialize_data@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4seriali.c)
 * Callees:
 *     ?finish@write_buffer@tson@@QEAAJXZ @ 0x1801977F8 (-finish@write_buffer@tson@@QEAAJXZ.c)
 */

__int64 __fastcall tson::output_archive::finish(tson::write_buffer **this)
{
  __int64 result; // rax
  int v2; // eax
  unsigned int v3; // r9d

  result = *((unsigned int *)this + 34);
  if ( (int)result >= 0 )
  {
    if ( *((_BYTE *)this + 24) )
    {
      return 2147483659LL;
    }
    else
    {
      v2 = tson::write_buffer::finish(this[18]);
      if ( v2 < 0 )
        return (unsigned int)v2;
      return v3;
    }
  }
  return result;
}
