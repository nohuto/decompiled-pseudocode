/*
 * XREFs of ??$process@V?$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x1800D2008
 * Callers:
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x1800D5174 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z.c)
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAVStoredFailureInfo@wil@@@Z @ 0x1800D552C (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAVStoredFailureInfo@wil@@@Z.c)
 * Callees:
 *     ?push_back@write_buffer@tson@@QEAA_NPEBX_K@Z @ 0x18008A5C0 (-push_back@write_buffer@tson@@QEAA_NPEBX_K@Z.c)
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800D5D5C (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 */

char __fastcall tson::output_archive::process<tson::nvp<long &>>(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  char result; // al
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = *a2;
  *(_BYTE *)(a1 + 8) = *((_BYTE *)a2 + 8);
  LOBYTE(a3) = 17;
  *(_QWORD *)a1 = v4;
  v7 = *(_DWORD *)a2[2];
  v5 = v7;
  LOBYTE(v5) = v7 == 0;
  result = tson::output_archive::write_type(a1, v5, a3);
  if ( result )
    return tson::write_buffer::push_back(*(void ***)(a1 + 144), &v7, 4uLL);
  return result;
}
