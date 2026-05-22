/*
 * XREFs of ?tson_size_to_marker@tson@@YAI_K@Z @ 0x1800A4D44
 * Callers:
 *     ?finish@output_archive@tson@@QEAAJXZ @ 0x1800A3D54 (-finish@output_archive@tson@@QEAAJXZ.c)
 * Callees:
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1800A1000 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

__int64 __fastcall tson::tson_size_to_marker(tson *this)
{
  if ( (unsigned __int64)this > 0xFFFFFF )
    wil::details::in1diag3::FailFastImmediate_Unexpected(this);
  return (unsigned __int8)this & 0x3F | (16 * (_DWORD)this) & 0x3F0000 | (4 * (_WORD)this) & 0x3F00 | ((_DWORD)this << 6) & 0x3F000000 | 0x80408040;
}
