/*
 * XREFs of ??$process@V?$nvp@AEAW4SnapControlType@SnapComponent@Shell@Internal@Windows@winrt@@@tson@@V?$nvp@AEA_N@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4SnapControlType@SnapComponent@Shell@Internal@Windows@winrt@@@1@$$QEAV?$nvp@AEA_N@1@@Z @ 0x18059C644
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V?$nvp@AEAW4SnapControlType@SnapComponent@Shell@Internal@Windows@winrt@@@2@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0$$QEAV?$nvp@AEAW4SnapControlType@SnapComponent@Shell@Internal@Windows@winrt@@@1@0@Z @ 0x18059CA94 (--$process@V-$nvp@AEA_N@tson@@V12@V-$nvp@AEAW4SnapControlType@SnapComponent@Shell@Internal@Windo.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1801770A8 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1801771BC (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x180330CD4 (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 */

char __fastcall tson::input_archive::process<tson::nvp<enum winrt::Windows::Internal::Shell::SnapComponent::SnapControlType &>,tson::nvp<bool &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 *a3)
{
  char v3; // r9
  int v4; // esi
  _DWORD *v7; // r14
  __int64 v8; // rax
  _BYTE *v9; // rdi
  __int64 v10; // rdx
  char *v11; // rax
  char v12; // cl
  int v14; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_BYTE *)(a2 + 8);
  v4 = 0;
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v3;
  v7 = *(_DWORD **)(a2 + 16);
  v14 = 0;
  if ( tson::input_archive::search(this) )
  {
    tson::input_archive::consume_expected_marker(this, 18, -2147023267);
    tson::read_buffer::consume_n(*(tson::read_buffer **)this, &v14, 4uLL);
    v4 = v14;
  }
  *v7 = v4;
  v8 = *a3;
  *((_BYTE *)this + 24) = *((_BYTE *)a3 + 8);
  *((_QWORD *)this + 2) = v8;
  v9 = (_BYTE *)a3[2];
  if ( !tson::input_archive::search(this) )
  {
    LOBYTE(v11) = 0;
    goto LABEL_8;
  }
  tson::input_archive::consume_expected_marker(this, 10, -2147023267);
  v10 = *(_QWORD *)this;
  v11 = *(char **)(*(_QWORD *)this + 8LL);
  if ( (unsigned __int64)v11 < *(_QWORD *)(*(_QWORD *)this + 16LL) )
  {
    v12 = *v11;
    *(_QWORD *)(v10 + 8) = v11 + 1;
    LOBYTE(v11) = v12 != 0;
LABEL_8:
    *v9 = (_BYTE)v11;
    return (char)v11;
  }
  *(_BYTE *)(v10 + 24) = 1;
  return (char)v11;
}
