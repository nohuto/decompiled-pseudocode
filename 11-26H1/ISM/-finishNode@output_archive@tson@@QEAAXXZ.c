/*
 * XREFs of ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800A3E10
 * Callers:
 *     ??$?RV?$nvp@AEAU_tip_ISMSessionMonitorCreationTipTest@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAU_tip_ISMSessionMonitorCreationTipTest@@@1@@Z @ 0x1800A24B4 (--$-RV-$nvp@AEAU_tip_ISMSessionMonitorCreationTipTest@@@tson@@@output_archive@tson@@QEAAAEAV01@$.c)
 *     ??$?RV?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@tson@@V?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@1@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@Z @ 0x1800A2550 (--$-RV-$nvp@AEAV-$vector_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEADP6AXPE.c)
 *     ??$process@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@Z @ 0x1800A2A24 (--$process@V-$nvp@AEAV-$vector_nothrow@Utest_flag@tip2@@@tip2@@@tson@@@output_archive@tson@@AEAA.c)
 *     ??$process@V?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@tson@@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@Z @ 0x1800A2AB0 (--$process@V-$nvp@AEAV-$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@tson@@V-$nvp@AEAV-$vector.c)
 *     ?serialize@?$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1800A4870 (-serialize@-$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@EEAAXAEAVoutp.c)
 *     ??$?RV?$nvp@AEAU?$test_data_metrics@Vtest_data_basic@tip2@@@details@tip2@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAU?$test_data_metrics@Vtest_data_basic@tip2@@@details@tip2@@@1@@Z @ 0x18010860C (--$-RV-$nvp@AEAU-$test_data_metrics@Vtest_data_basic@tip2@@@details@tip2@@@tson@@@output_archive.c)
 *     ??$?RV?$nvp@AEAVtest_data_basic@tip2@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAVtest_data_basic@tip2@@@1@@Z @ 0x1801086B4 (--$-RV-$nvp@AEAVtest_data_basic@tip2@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAVte.c)
 * Callees:
 *     ??$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z @ 0x1800A2BCC (--$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z.c)
 *     ?push_back@write_buffer@tson@@QEAA_NPEBX_K@Z @ 0x1800A4030 (-push_back@write_buffer@tson@@QEAA_NPEBX_K@Z.c)
 *     ?set_position@write_buffer@tson@@QEAAX_K@Z @ 0x1800A4AF0 (-set_position@write_buffer@tson@@QEAAX_K@Z.c)
 *     ?top@?$stack@W4node_type@output_archive@tson@@@details@tson@@QEAAAEAW4node_type@output_archive@3@XZ @ 0x1800A4D24 (-top@-$stack@W4node_type@output_archive@tson@@@details@tson@@QEAAAEAW4node_type@output_archive@3.c)
 */

void __fastcall tson::output_archive::finishNode(tson::output_archive *this, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  unsigned __int64 v8; // rdx
  tson::write_buffer *v9; // rcx
  tson::write_buffer *v10; // rcx
  unsigned __int64 v11; // rdx
  tson::write_buffer *v12; // rcx
  __int64 v13; // rax
  char v14; // [rsp+30h] [rbp+10h] BYREF

  v5 = *(_DWORD *)tson::details::stack<enum tson::output_archive::node_type>::top((char *)this + 24, a2, a3, a4);
  if ( !v5 )
  {
    v11 = *((_QWORD *)this + 2);
    v12 = (tson::write_buffer *)*((_QWORD *)this + 18);
    if ( v11 )
    {
      tson::write_buffer::set_position(v12, v11);
      *((_QWORD *)this + 2) = 0LL;
      v14 = 8;
      goto LABEL_14;
    }
    v14 = 1;
    tson::write_buffer::push_back<unsigned char>(v12, &v14);
LABEL_13:
    v14 = 2;
    goto LABEL_14;
  }
  v6 = v5 - 1;
  if ( !v6 )
    goto LABEL_13;
  v7 = v6 - 1;
  if ( !v7 )
  {
    v8 = *((_QWORD *)this + 2);
    v9 = (tson::write_buffer *)*((_QWORD *)this + 18);
    if ( v8 )
    {
      tson::write_buffer::set_position(v9, v8);
      *((_QWORD *)this + 2) = 0LL;
      v14 = 7;
LABEL_14:
      tson::write_buffer::push_back<unsigned char>(*((tson::write_buffer **)this + 18), &v14);
      goto LABEL_15;
    }
    v14 = 3;
    tson::write_buffer::push_back<unsigned char>(v9, &v14);
    v10 = (tson::write_buffer *)*((_QWORD *)this + 18);
    *((_WORD *)this + 5) = 0;
    tson::write_buffer::push_back(v10, (char *)this + 10, 2uLL);
LABEL_9:
    v14 = 4;
    goto LABEL_14;
  }
  if ( v7 == 1 )
    goto LABEL_9;
LABEL_15:
  v13 = *((_QWORD *)this + 16);
  if ( v13 )
    *((_QWORD *)this + 16) = v13 - 1;
  else
    *((_BYTE *)this + 24) = 1;
}
