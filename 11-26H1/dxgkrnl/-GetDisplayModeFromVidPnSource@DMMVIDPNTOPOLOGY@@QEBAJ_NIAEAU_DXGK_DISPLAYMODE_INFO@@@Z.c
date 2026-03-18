/*
 * XREFs of ?GetDisplayModeFromVidPnSource@DMMVIDPNTOPOLOGY@@QEBAJ_NIAEAU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x140361F78
 * Callers:
 *     ?DmmInitializeAdapter@@YAJQEAX@Z @ 0x14025A990 (-DmmInitializeAdapter@@YAJQEAX@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402D4EF8 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ?GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJ_NAEAU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x140362038 (-GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJ_NAEAU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::GetDisplayModeFromVidPnSource(
        DMMVIDPNTOPOLOGY *this,
        bool a2,
        unsigned int a3,
        struct _DXGK_DISPLAYMODE_INFO *a4)
{
  char *v5; // r11
  DMMVIDPNPRESENTPATH *v6; // rcx
  DMMVIDPNTOPOLOGY *v7; // r10
  int v8; // ebx
  DMMVIDPNTOPOLOGY *v9; // rax
  __int64 result; // rax

  v5 = 0LL;
  v6 = 0LL;
  v7 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)this + 3);
  v8 = 32;
  if ( v7 != (DMMVIDPNTOPOLOGY *)((char *)this + 24) )
    v5 = (char *)v7 - 8;
  if ( v5 )
  {
    do
    {
      if ( *(_DWORD *)(*((_QWORD *)v5 + 11) + 24LL) == a3 && *((_DWORD *)v5 + 26) < v8 )
      {
        v6 = (DMMVIDPNPRESENTPATH *)v5;
        v8 = *((_DWORD *)v5 + 26);
      }
      v9 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v5 + 1);
      v5 = (char *)v9 - 8;
      if ( v9 == (DMMVIDPNTOPOLOGY *)((char *)this + 24) )
        v5 = 0LL;
    }
    while ( v5 );
    if ( v6 )
      return DMMVIDPNPRESENTPATH::GetDisplayModeFromPath(v6, a2, a4);
  }
  WdLogSingleEntry3(2LL, a3, this, -1071774919LL);
  result = 3223192377LL;
  WdLogGlobalForLineNumber = 1813;
  return result;
}
