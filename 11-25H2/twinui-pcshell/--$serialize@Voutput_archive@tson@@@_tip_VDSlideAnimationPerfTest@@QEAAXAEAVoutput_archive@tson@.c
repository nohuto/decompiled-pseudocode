/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_VDSlideAnimationPerfTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x18052DCD4
 * Callers:
 *     ?serialize@?$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x180535360 (-serialize@-$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@EEAAXAEAVoutput_archi.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DDAAC (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800DE2F0 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x1800DE4B8 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@000@Z @ 0x1802D0940 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@000@Z.c)
 */

char __fastcall _tip_VDSlideAnimationPerfTest::serialize<tson::output_archive>(__int64 a1, tson::output_archive *a2)
{
  __int64 v4; // r8
  __int64 v5; // r8
  const char *v7; // [rsp+30h] [rbp-D0h] BYREF
  char v8; // [rsp+38h] [rbp-C8h]
  __int64 v9; // [rsp+40h] [rbp-C0h]
  const char *v10; // [rsp+48h] [rbp-B8h] BYREF
  char v11; // [rsp+50h] [rbp-B0h]
  __int64 v12; // [rsp+58h] [rbp-A8h]
  const char *v13; // [rsp+60h] [rbp-A0h] BYREF
  char v14; // [rsp+68h] [rbp-98h]
  __int64 v15; // [rsp+70h] [rbp-90h]
  const char *v16; // [rsp+78h] [rbp-88h] BYREF
  char v17; // [rsp+80h] [rbp-80h]
  __int64 v18; // [rsp+88h] [rbp-78h]
  const char *v19; // [rsp+90h] [rbp-70h] BYREF
  char v20; // [rsp+98h] [rbp-68h]
  __int64 v21; // [rsp+A0h] [rbp-60h]
  const char *v22; // [rsp+A8h] [rbp-58h] BYREF
  char v23; // [rsp+B0h] [rbp-50h]
  __int64 v24; // [rsp+B8h] [rbp-48h]
  const char *v25; // [rsp+C0h] [rbp-40h] BYREF
  char v26; // [rsp+C8h] [rbp-38h]
  __int64 v27; // [rsp+D0h] [rbp-30h]
  const char *v28; // [rsp+D8h] [rbp-28h] BYREF
  char v29; // [rsp+E0h] [rbp-20h]
  __int64 v30; // [rsp+E8h] [rbp-18h]
  const char *v31; // [rsp+F0h] [rbp-10h] BYREF
  char v32; // [rsp+F8h] [rbp-8h]
  __int64 v33; // [rsp+100h] [rbp+0h]
  const char *v34; // [rsp+108h] [rbp+8h] BYREF
  char v35; // [rsp+110h] [rbp+10h]
  __int64 v36; // [rsp+118h] [rbp+18h]

  v26 = 31;
  v25 = "failedToMakeBackgroundThumbnail";
  v29 = 15;
  v27 = a1 + 25;
  v32 = 18;
  v28 = "focusNotChanged";
  v35 = 35;
  v30 = a1 + 24;
  v31 = "animationNotNeeded";
  v33 = a1 + 22;
  v34 = "isReadyForRemoteSwitchWithAnimation";
  v36 = a1 + 23;
  v22 = "failedToAnimate";
  v24 = a1 + 21;
  v19 = "failedToCommitAnimation";
  v21 = a1 + 20;
  v16 = "failedToSwitchDesktop";
  v18 = a1 + 19;
  v13 = "failedToCreateAdjacentDesktop";
  v15 = a1 + 18;
  v10 = "failedToAddWindowIntoCollection";
  v12 = a1 + 17;
  v7 = "failedToInitializeHotkeyWindow";
  v9 = a1 + 16;
  v23 = 15;
  v20 = 23;
  v17 = 21;
  v14 = 29;
  v11 = 31;
  v8 = 30;
  tson::output_archive::process<tson::nvp<bool &>>((__int64)a2, (__int64)&v7);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)a2, (__int64)&v10);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)a2, (__int64)&v13);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)a2, (__int64)&v16);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)a2, (__int64)&v19);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)a2, (__int64)&v22);
  *((_BYTE *)a2 + 8) = 27;
  *(_QWORD *)a2 = "DCompThumbnailAnimationType";
  tson::save_nothrow((__int64)a2, (const void **)(a1 + 32), v4);
  *((_BYTE *)a2 + 8) = 10;
  *(_QWORD *)a2 = "switchType";
  tson::output_archive::saveValue(a2, *(unsigned int *)(a1 + 64), v5);
  return tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           (__int64)a2,
           (__int64)&v34,
           (__int64)&v31,
           (__int64)&v28,
           (__int64)&v25);
}
