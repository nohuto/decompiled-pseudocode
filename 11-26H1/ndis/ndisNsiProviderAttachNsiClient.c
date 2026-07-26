/*
 * XREFs of ndisNsiProviderAttachNsiClient @ 0x140147BA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 */

__int64 __fastcall ndisNsiProviderAttachNsiClient(
        __int64 a1,
        char a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        _QWORD *a7)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xAu,
      (struct _GUID *)&WPP_012aeb269b5b38b010d0502f73c9d515_Traceguids,
      a2,
      a4);
  ndisNsiSavedClientNpi = a4;
  *a6 = 0LL;
  *a7 = &unk_1400F6FC0;
  qword_14011F688 = a5;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xBu,
      (struct _GUID *)&WPP_012aeb269b5b38b010d0502f73c9d515_Traceguids,
      a2,
      a4);
  return 0LL;
}
