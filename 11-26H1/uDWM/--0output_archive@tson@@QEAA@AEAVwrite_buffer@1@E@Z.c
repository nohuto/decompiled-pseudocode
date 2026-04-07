/*
 * XREFs of ??0output_archive@tson@@QEAA@AEAVwrite_buffer@1@E@Z @ 0x1800D2898
 * Callers:
 *     ?serialize_data@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x180089E70 (-serialize_data@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serial.c)
 * Callees:
 *     ??$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z @ 0x18008AE90 (--$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z.c)
 *     memset_0 @ 0x18008EF30 (memset_0.c)
 */

tson::output_archive *__fastcall tson::output_archive::output_archive(
        tson::output_archive *this,
        struct tson::write_buffer *a2,
        char a3)
{
  unsigned __int64 v5; // rax
  char v7; // [rsp+30h] [rbp+8h] BYREF
  char v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = a3;
  *(_QWORD *)this = 0LL;
  *((_BYTE *)this + 8) = 0;
  *((_WORD *)this + 5) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_BYTE *)this + 24) = 0;
  memset_0((char *)this + 28, 0, 0x64uLL);
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 34) = 0;
  *((_QWORD *)this + 18) = a2;
  v7 = 0x80;
  tson::write_buffer::push_back<unsigned char>(a2, &v7);
  tson::write_buffer::push_back<unsigned char>(*((tson::write_buffer **)this + 18), &v8);
  v5 = *((_QWORD *)this + 16);
  if ( v5 >= 0x19 )
  {
    *((_BYTE *)this + 24) = 1;
  }
  else
  {
    *((_DWORD *)this + v5 + 7) = 1;
    ++*((_QWORD *)this + 16);
  }
  return this;
}
