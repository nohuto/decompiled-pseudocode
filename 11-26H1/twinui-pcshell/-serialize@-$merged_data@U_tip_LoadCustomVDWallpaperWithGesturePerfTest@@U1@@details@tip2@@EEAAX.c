/*
 * XREFs of ?serialize@?$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x180563DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x1800DF434 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800E00F0 (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800E0448 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 */

void __fastcall tip2::details::merged_data<_tip_LoadCustomVDWallpaperWithGesturePerfTest,_tip_LoadCustomVDWallpaperWithGesturePerfTest>::serialize(
        __int64 a1,
        tson::output_archive *a2,
        char a3)
{
  _BYTE *v3; // rdi
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx

  v3 = (char *)a2 + 8;
  if ( (a3 & 2) != 0 )
  {
    *v3 = 7;
    *(_QWORD *)a2 = "metrics";
    tson::output_archive::startNode(a2);
    *(_DWORD *)(a1 + 184) = 0;
    tson::output_archive::finishNode(a2);
  }
  if ( (a3 & 1) != 0 )
  {
    *v3 = 4;
    *(_QWORD *)a2 = "test";
    tson::output_archive::startNode(a2);
    *v3 = 15;
    *(_QWORD *)a2 = "thumbnailSource";
    v8 = a1 + 272;
    if ( !a1 )
      v8 = 16LL;
    tson::output_archive::saveValue(a2, *(unsigned int *)v8, v7);
    *v3 = 9;
    *(_QWORD *)a2 = "inputType";
    v10 = a1 + 276;
    if ( !a1 )
      v10 = 20LL;
    tson::output_archive::saveValue(a2, *(unsigned int *)v10, v9);
    tson::output_archive::finishNode(a2);
  }
}
