/*
 * XREFs of ?GETCLIENTWNDINFOOFFSET@@YAHPEBUtagWND@@@Z @ 0x140302274
 * Callers:
 *     GETCLIENTWNDINFO @ 0x140263574 (GETCLIENTWNDINFO.c)
 * Callees:
 *     Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline @ 0x1401D90A0 (Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?UserModeSupportsPartitionedExtraBytes@NonClient@Scrollbar@@YA_NXZ @ 0x1401D90DC (-UserModeSupportsPartitionedExtraBytes@NonClient@Scrollbar@@YA_NXZ.c)
 */

__int64 __fastcall GETCLIENTWNDINFOOFFSET(const struct tagWND *a1)
{
  Scrollbar::NonClient *v2; // rcx

  if ( (unsigned int)Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline()
    && Scrollbar::NonClient::UserModeSupportsPartitionedExtraBytes(v2) )
  {
    return (*(_DWORD *)(*((_QWORD *)a1 + 5) + 200LL) + 7) & 0xFFFFFFF8;
  }
  else
  {
    return (unsigned int)(*(_DWORD *)(*((_QWORD *)a1 + 5) + 200LL) - 48);
  }
}
