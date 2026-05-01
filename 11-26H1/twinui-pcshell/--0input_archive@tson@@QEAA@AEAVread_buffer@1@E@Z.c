/*
 * XREFs of ??0input_archive@tson@@QEAA@AEAVread_buffer@1@E@Z @ 0x180177284
 * Callers:
 *     ?deserialize_data@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXAEBUTestInfo@TestInfo_ODR_guard@@@Z @ 0x180283CC0 (-deserialize_data@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXAEBUTestInfo@TestInfo_ODR_guard@@.c)
 *     ?deserialize_data@?$shared_data@$00$00$00@details@tip2@@AEAAXAEBUTestInfo@TestInfo_ODR_guard@@@Z @ 0x1803BB9D8 (-deserialize_data@-$shared_data@$00$00$00@details@tip2@@AEAAXAEBUTestInfo@TestInfo_ODR_guard@@@Z.c)
 * Callees:
 *     ?advance@read_buffer@tson@@QEAAPEAEXZ @ 0x180177344 (-advance@read_buffer@tson@@QEAAPEAEXZ.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 */

tson::input_archive *__fastcall tson::input_archive::input_archive(
        tson::input_archive *this,
        struct tson::read_buffer *a2,
        char a3)
{
  unsigned __int8 *v5; // rax
  unsigned __int8 *v6; // rax
  int v7; // r8d
  unsigned __int64 v8; // rax

  *(_QWORD *)this = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_WORD *)this + 12) = 0;
  *((_BYTE *)this + 32) = 0;
  memset_0((char *)this + 36, 0, 0x64uLL);
  *((_QWORD *)this + 17) = 0LL;
  v5 = tson::read_buffer::advance(*(tson::read_buffer **)this);
  if ( v5 && *v5 != 0x80 && *((int *)this + 2) >= 0 )
    *((_DWORD *)this + 2) = -2147024119;
  v6 = tson::read_buffer::advance(*(tson::read_buffer **)this);
  if ( v6 && a3 != *v6 && *((int *)this + 2) >= 0 )
    *((_DWORD *)this + 2) = v7;
  v8 = *((_QWORD *)this + 17);
  if ( v8 >= 0x19 )
  {
    *((_BYTE *)this + 32) = 1;
  }
  else
  {
    *((_DWORD *)this + v8 + 9) = 0;
    ++*((_QWORD *)this + 17);
  }
  return this;
}
