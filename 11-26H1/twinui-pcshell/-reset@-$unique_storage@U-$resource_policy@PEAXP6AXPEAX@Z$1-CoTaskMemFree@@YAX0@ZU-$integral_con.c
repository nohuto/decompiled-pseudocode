/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1802B8924
 * Callers:
 *     ??$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z @ 0x1800DF2B8 (--$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z.c)
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800DF4B8 (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 *     ??$?RAEA_N@output_archive@tson@@QEAAAEAV01@AEA_N@Z @ 0x1800DF860 (--$-RAEA_N@output_archive@tson@@QEAAAEAV01@AEA_N@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DFC8C (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ?reserve@write_buffer@tson@@AEAA_N_K@Z @ 0x1800E003C (-reserve@write_buffer@tson@@AEAA_N_K@Z.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800E00F0 (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ??0output_archive@tson@@QEAA@AEAVwrite_buffer@1@E@Z @ 0x180178434 (--0output_archive@tson@@QEAA@AEAVwrite_buffer@1@E@Z.c)
 *     ?serialize_properties@test_data_dynamic@tip2@@AEAAXAEAVinput_archive@tson@@@Z @ 0x1803BDD90 (-serialize_properties@test_data_dynamic@tip2@@AEAAXAEAVinput_archive@tson@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
        void **a1,
        void *a2)
{
  void *v2; // rsi
  DWORD LastError; // ebx

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    CoTaskMemFree(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
