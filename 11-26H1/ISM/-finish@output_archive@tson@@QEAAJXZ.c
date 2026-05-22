/*
 * XREFs of ?finish@output_archive@tson@@QEAAJXZ @ 0x1800A3D54
 * Callers:
 *     ?serialize_data@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x1800A496C (-serialize_data@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serial.c)
 *     ?serialize_data@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x18010AFE0 (-serialize_data@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4seriali.c)
 * Callees:
 *     ?tson_size_to_marker@tson@@YAI_K@Z @ 0x1800A4D44 (-tson_size_to_marker@tson@@YAI_K@Z.c)
 */

__int64 __fastcall tson::output_archive::finish(tson::output_archive *this)
{
  __int64 result; // rax
  __int64 v2; // rcx
  unsigned int v3; // eax
  unsigned int *v4; // r8

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
        result = 2147942414LL;
        *(_QWORD *)(v2 + 2072) = 0LL;
        *(_QWORD *)(v2 + 2080) = 0LL;
      }
      else
      {
        v3 = tson::tson_size_to_marker((tson *)(*(_DWORD *)(v2 + 2072) - (unsigned int)*(_QWORD *)(v2 + 2064)), 0LL);
        *v4 = v3;
        return 0LL;
      }
    }
  }
  return result;
}
