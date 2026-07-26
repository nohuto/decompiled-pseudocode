/*
 * XREFs of ndisNsiRegisterChangeNotification @ 0x140147C80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 */

__int64 __fastcall ndisNsiRegisterChangeNotification(char a1)
{
  char v3[4]; // [rsp+30h] [rbp-18h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      20,
      (struct _GUID *)&WPP_012aeb269b5b38b010d0502f73c9d515_Traceguids,
      a1);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v3 = 0;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x16u,
        0x15u,
        (struct _GUID *)&WPP_012aeb269b5b38b010d0502f73c9d515_Traceguids,
        a1,
        *(_DWORD *)v3);
    }
  }
  return 0LL;
}
