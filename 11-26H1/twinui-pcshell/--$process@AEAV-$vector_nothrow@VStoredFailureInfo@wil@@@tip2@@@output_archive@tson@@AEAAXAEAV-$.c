/*
 * XREFs of ??$process@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@output_archive@tson@@AEAAXAEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@Z @ 0x1802808D8
 * Callers:
 *     ??$?RV?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@tson@@V?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@1@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@Z @ 0x180280828 (--$-RV-$nvp@AEAV-$vector_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEADP6AXPE.c)
 * Callees:
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAVStoredFailureInfo@wil@@@Z @ 0x1800DEA88 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAVStoredFailureInfo@wil@@@Z.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800E00F0 (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800E0448 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ?top@?$stack@W4node_type@output_archive@tson@@@details@tson@@QEAAAEAW4node_type@output_archive@3@XZ @ 0x180146064 (-top@-$stack@W4node_type@output_archive@tson@@@details@tson@@QEAAAEAW4node_type@output_archive@3.c)
 */

void __fastcall tson::output_archive::process<tip2::vector_nothrow<wil::StoredFailureInfo> &>(tson *this, __int64 a2)
{
  unsigned __int64 v4; // r8
  struct tson::output_archive *v5; // rdi
  __int64 v6; // rsi
  struct wil::StoredFailureInfo *v7; // r8

  tson::output_archive::startNode(this);
  *(_DWORD *)tson::details::stack<enum tson::output_archive::node_type>::top((__int64)this + 24) = 2;
  if ( v4 > 0xFFFF && *((int *)this + 34) >= 0 )
    *((_DWORD *)this + 34) = -2147483637;
  *((_WORD *)this + 5) = v4;
  v5 = *(struct tson::output_archive **)a2;
  v6 = *(_QWORD *)a2 + 168LL * *(_QWORD *)(a2 + 16);
  while ( v5 != (struct tson::output_archive *)v6 )
  {
    tson::output_archive::startNode(this);
    tson::save_nothrow(this, v5, v7);
    tson::output_archive::finishNode(this);
    v5 = (struct tson::output_archive *)((char *)v5 + 168);
  }
  tson::output_archive::finishNode(this);
}
