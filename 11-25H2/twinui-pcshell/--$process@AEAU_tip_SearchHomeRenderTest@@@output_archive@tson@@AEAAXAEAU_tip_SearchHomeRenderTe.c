/*
 * XREFs of ??$process@AEAU_tip_SearchHomeRenderTest@@@output_archive@tson@@AEAAXAEAU_tip_SearchHomeRenderTest@@@Z @ 0x1803A0650
 * Callers:
 *     ?serialize@?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1803B4500 (-serialize@-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@t.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DDAAC (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800DDF6C (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ??$process@V?$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAI@1@@Z @ 0x1800DE920 (--$process@V-$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAI@1@@Z.c)
 */

void __fastcall tson::output_archive::process<_tip_SearchHomeRenderTest &>(tson::output_archive *this, __int64 a2)
{
  const char *v4; // [rsp+20h] [rbp-50h] BYREF
  char v5; // [rsp+28h] [rbp-48h]
  __int64 v6; // [rsp+30h] [rbp-40h]
  const char *v7; // [rsp+38h] [rbp-38h] BYREF
  char v8; // [rsp+40h] [rbp-30h]
  __int64 v9; // [rsp+48h] [rbp-28h]
  const char *v10; // [rsp+50h] [rbp-20h] BYREF
  char v11; // [rsp+58h] [rbp-18h]
  __int64 v12; // [rsp+60h] [rbp-10h]

  tson::output_archive::startNode(this);
  v11 = 15;
  v10 = "transition_type";
  v8 = 6;
  v12 = a2 + 20;
  v5 = 29;
  v7 = "hidden";
  v9 = a2 + 17;
  v4 = "activated_again_before_render";
  v6 = a2 + 16;
  tson::output_archive::process<tson::nvp<bool &>>((__int64)this, (__int64)&v4);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)this, (__int64)&v7);
  tson::output_archive::process<tson::nvp<unsigned int &>>((__int64)this, (__int64 *)&v10);
  tson::output_archive::finishNode(this);
}
