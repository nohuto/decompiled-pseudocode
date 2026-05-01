/*
 * XREFs of ?finish@write_buffer@tson@@QEAAJXZ @ 0x18019053C
 * Callers:
 *     ?finish@output_archive@tson@@QEAAJXZ @ 0x1801904FC (-finish@output_archive@tson@@QEAAJXZ.c)
 *     ?serialize_data@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x1802804C8 (-serialize_data@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4seriali.c)
 *     ?serialize_data@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x180280978 (-serialize_data@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serial.c)
 * Callees:
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18027FD64 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

__int64 __fastcall tson::write_buffer::finish(tson::write_buffer *this)
{
  _DWORD *v1; // r8
  unsigned __int64 v2; // rdx

  if ( *((_BYTE *)this + 8) )
  {
    *((_QWORD *)this + 258) = 0LL;
    *((_QWORD *)this + 259) = 0LL;
    *((_QWORD *)this + 260) = 0LL;
    return 2147942414LL;
  }
  else
  {
    v1 = (_DWORD *)*((_QWORD *)this + 258);
    v2 = (unsigned int)*((_QWORD *)this + 259) - (unsigned int)v1;
    if ( v2 > 0xFFFFFF )
      wil::details::in1diag3::FailFastImmediate_Unexpected(this);
    *v1 = v2 & 0x3F | (16 * v2) & 0x3F0000 | (4 * (_WORD)v2) & 0x3F00 | ((_DWORD)v2 << 6) & 0x3F000000 | 0x80408040;
    return 0LL;
  }
}
