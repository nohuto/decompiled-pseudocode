/*
 * XREFs of ?deserialize@?$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x18053FAA0
 * Callers:
 *     <none>
 * Callees:
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x1801852A0 (-startNode@input_archive@tson@@QEAAXXZ.c)
 *     ??$process@V?$nvp@AEAW4ThumbnailSource@@@tson@@V?$nvp@AEAW4InputType@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4ThumbnailSource@@@1@$$QEAV?$nvp@AEAW4InputType@@@1@@Z @ 0x180538094 (--$process@V-$nvp@AEAW4ThumbnailSource@@@tson@@V-$nvp@AEAW4InputType@@@2@@input_archive@tson@@AE.c)
 */

void __fastcall tip2::details::merged_data<_tip_LoadCustomVDWallpaperWithGesturePerfTest,_tip_LoadCustomVDWallpaperWithGesturePerfTest>::deserialize(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  const char *v6; // [rsp+20h] [rbp-38h] BYREF
  char v7; // [rsp+28h] [rbp-30h]
  __int64 v8; // [rsp+30h] [rbp-28h]
  const char *v9; // [rsp+38h] [rbp-20h] BYREF
  char v10; // [rsp+40h] [rbp-18h]
  __int64 v11; // [rsp+48h] [rbp-10h]

  *(_BYTE *)(a2 + 24) = 4;
  *(_QWORD *)(a2 + 16) = "test";
  tson::input_archive::startNode((tson::input_archive *)a2);
  v7 = 9;
  v6 = "inputType";
  v10 = 15;
  v4 = a1 + 268;
  if ( !a1 )
    v4 = 20LL;
  v8 = v4;
  v9 = "thumbnailSource";
  v5 = a1 + 264;
  if ( !a1 )
    v5 = 16LL;
  v11 = v5;
  tson::input_archive::process<tson::nvp<enum ThumbnailSource &>,tson::nvp<enum InputType &>>(
    (tson::input_archive *)a2,
    (__int64)&v9,
    (__int64 *)&v6);
  tson::input_archive::finishNode((tson::input_archive *)a2);
}
