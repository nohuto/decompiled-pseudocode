/*
 * XREFs of ??$save_nothrow@VStoredFailureInfo@wil@@@tson@@YAXAEAVoutput_archive@0@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@Z @ 0x1800D4FD4
 * Callers:
 *     ??$process@V?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@tson@@V?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@2@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@Z @ 0x1800D4BE8 (--$process@V-$nvp@AEAV-$vector_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAD.c)
 * Callees:
 *     ??$?RUsize_tag@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAUsize_tag@1@@Z @ 0x1800D44E0 (--$-RUsize_tag@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAUsize_tag@1@@Z.c)
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800D7A04 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAVStoredFailureInfo@wil@@@Z @ 0x1800D84D0 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAVStoredFailureInfo@wil@@@Z.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800D88AC (-startNode@output_archive@tson@@QEAAXXZ.c)
 */

void __fastcall tson::save_nothrow<wil::StoredFailureInfo>(tson::output_archive *this, __int64 a2)
{
  __int64 v3; // r10
  struct tson::output_archive *v4; // rbx
  __int64 v5; // rsi
  struct wil::StoredFailureInfo *v6; // r8
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = *(_QWORD *)(a2 + 16);
  tson::output_archive::operator()<tson::size_tag>((__int64)this, &v7);
  v4 = *(struct tson::output_archive **)v3;
  v5 = *(_QWORD *)v3 + 168LL * *(_QWORD *)(v3 + 16);
  while ( v4 != (struct tson::output_archive *)v5 )
  {
    tson::output_archive::startNode(this);
    tson::save_nothrow(this, v4, v6);
    tson::output_archive::finishNode(this);
    v4 = (struct tson::output_archive *)((char *)v4 + 168);
  }
}
