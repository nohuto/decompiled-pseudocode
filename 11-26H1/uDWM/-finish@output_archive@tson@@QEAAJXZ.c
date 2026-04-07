/*
 * XREFs of ?finish@output_archive@tson@@QEAAJXZ @ 0x1800D4A60
 * Callers:
 *     ?serialize_data@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x180089E70 (-serialize_data@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serial.c)
 * Callees:
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18009310C (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

__int64 __fastcall tson::output_archive::finish(tson::output_archive *this)
{
  __int64 result; // rax
  __int64 v2; // rax
  _DWORD *v3; // r8
  unsigned __int64 v4; // rdx

  result = *((unsigned int *)this + 34);
  if ( (int)result >= 0 )
  {
    if ( *((_BYTE *)this + 24) )
    {
      return 2147483659LL;
    }
    else
    {
      v2 = *((_QWORD *)this + 18);
      if ( *(_BYTE *)(v2 + 8) )
      {
        *(_QWORD *)(v2 + 2064) = 0LL;
        *(_QWORD *)(v2 + 2072) = 0LL;
        *(_QWORD *)(v2 + 2080) = 0LL;
        return 2147942414LL;
      }
      else
      {
        v3 = *(_DWORD **)(v2 + 2064);
        v4 = (unsigned int)*(_QWORD *)(v2 + 2072) - (unsigned int)v3;
        if ( v4 > 0xFFFFFF )
          wil::details::in1diag3::_FailFastImmediate_Unexpected(this);
        *v3 = v4 & 0x3F | (16 * v4) & 0x3F0000 | (4 * (_WORD)v4) & 0x3F00 | ((_DWORD)v4 << 6) & 0x3F000000 | 0x80408040;
        return 0LL;
      }
    }
  }
  return result;
}
