/*
 * XREFs of ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800D4B14
 * Callers:
 *     ??$process@V?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@tson@@V?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@2@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@Z @ 0x1800D211C (--$process@V-$nvp@AEAV-$vector_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAD.c)
 *     ??$save_nothrow@AEAU_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@tson@@YAXAEAVoutput_archive@0@AEAV?$nvp@AEAU_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@0@@Z @ 0x1800D2348 (--$save_nothrow@AEAU_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@ts.c)
 *     ??$save_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVoutput_archive@0@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@Z @ 0x1800D23EC (--$save_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVoutput_archive@0@AEAV-$vector_nothrow@Utest_flag@.c)
 *     ??$save_nothrow@VStoredFailureInfo@wil@@@tson@@YAXAEAVoutput_archive@0@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@Z @ 0x1800D2508 (--$save_nothrow@VStoredFailureInfo@wil@@@tson@@YAXAEAVoutput_archive@0@AEAV-$vector_nothrow@VSto.c)
 *     ?serialize@?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1800D57D0 (-serialize@-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udw.c)
 * Callees:
 *     ?push_back@write_buffer@tson@@QEAA_NPEBX_K@Z @ 0x18008A5C0 (-push_back@write_buffer@tson@@QEAA_NPEBX_K@Z.c)
 *     ??$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z @ 0x18008AE90 (--$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z.c)
 *     ?set_position@write_buffer@tson@@QEAAX_K@Z @ 0x1800D58CC (-set_position@write_buffer@tson@@QEAAX_K@Z.c)
 *     ?top@?$stack@W4node_type@output_archive@tson@@@details@tson@@QEAAAEAW4node_type@output_archive@3@XZ @ 0x1800D5C08 (-top@-$stack@W4node_type@output_archive@tson@@@details@tson@@QEAAAEAW4node_type@output_archive@3.c)
 */

void __fastcall tson::output_archive::finishNode(tson::output_archive *this, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  unsigned __int64 v8; // rdx
  tson::write_buffer *v9; // rcx
  void **v10; // rcx
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
    v10 = (void **)*((_QWORD *)this + 18);
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
