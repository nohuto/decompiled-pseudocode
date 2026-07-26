/*
 * XREFs of ?ndisStartNsiProvider@@YAJXZ @ 0x140147D20
 * Callers:
 *     ndisIfInitializePhase2 @ 0x140146FA0 (ndisIfInitializePhase2.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x140023030 (WPP_RECORDER_SF_d.c)
 */

__int64 ndisStartNsiProvider(void)
{
  NTSTATUS v0; // eax
  unsigned int v1; // ebx
  char v3[4]; // [rsp+28h] [rbp-10h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      16,
      (struct _GUID *)&WPP_012aeb269b5b38b010d0502f73c9d515_Traceguids);
  v0 = NmrRegisterProvider(&ProviderCharacteristics, 0LL, &NmrProviderHandle);
  v1 = v0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v3 = v0;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x11u,
      (struct _GUID *)&WPP_012aeb269b5b38b010d0502f73c9d515_Traceguids,
      *(_DWORD *)v3);
  }
  return v1;
}
