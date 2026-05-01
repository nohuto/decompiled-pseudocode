/*
 * XREFs of ??$process@V?$nvp@AEAW4ThumbnailSource@@@tson@@V?$nvp@AEAW4InputType@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4ThumbnailSource@@@1@$$QEAV?$nvp@AEAW4InputType@@@1@@Z @ 0x180538094
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x18053FAA0 (-deserialize@-$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip2@@EEA.c)
 *     ??$load_nothrow@AEAU_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@tson@@YAXAEAVinput_archive@0@AEAV?$nvp@AEAU_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@0@@Z @ 0x18068AF98 (--$load_nothrow@AEAU_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1801852D0 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1801853E4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x180331D14 (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 */

char __fastcall tson::input_archive::process<tson::nvp<enum ThumbnailSource &>,tson::nvp<enum InputType &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 *a3)
{
  char v3; // r9
  int v4; // edi
  int v7; // ebp
  _DWORD *v8; // r14
  __int64 v9; // rax
  _DWORD *v10; // rsi
  char result; // al
  int v12; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_BYTE *)(a2 + 8);
  v4 = 0;
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v3;
  v7 = 0;
  v8 = *(_DWORD **)(a2 + 16);
  v12 = 0;
  if ( tson::input_archive::search(this) )
  {
    tson::input_archive::consume_expected_marker(this, 18, -2147023267);
    tson::read_buffer::consume_n(*(tson::read_buffer **)this, &v12, 4uLL);
    v7 = v12;
  }
  *v8 = v7;
  v9 = *a3;
  *((_BYTE *)this + 24) = *((_BYTE *)a3 + 8);
  *((_QWORD *)this + 2) = v9;
  v10 = (_DWORD *)a3[2];
  v12 = 0;
  result = tson::input_archive::search(this);
  if ( result )
  {
    tson::input_archive::consume_expected_marker(this, 18, -2147023267);
    result = tson::read_buffer::consume_n(*(tson::read_buffer **)this, &v12, 4uLL);
    v4 = v12;
  }
  *v10 = v4;
  return result;
}
