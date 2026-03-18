/*
 * XREFs of HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax @ 0x140030684
 * Callers:
 *     HUBDSM_CheckingIfEnumRetryReachedMaximumOnRenumWithAddress0Ownership @ 0x1400208B0 (HUBDSM_CheckingIfEnumRetryReachedMaximumOnRenumWithAddress0Ownership.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x140007470 (WPP_RECORDER_SF_qd.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x140008774 (McTemplateK0p_EtwWriteTransfer.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1400341F4 (HUBMISC_VerifierDbgBreak.c)
 *     memset @ 0x140046BC0 (memset.c)
 */

__int64 __fastcall HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // r10
  unsigned int v4; // edx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rdx
  const char *v8; // rcx
  void *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v13; // [rsp+30h] [rbp-18h]
  int v14; // [rsp+30h] [rbp-18h]

  ++*(_DWORD *)(a1 + 32);
  v2 = 4061;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x200u);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 32);
  v5 = (*(_DWORD *)(v3 + 1336) & 0x80u) != 0 ? 10 : 3;
  if ( v4 <= (unsigned int)v5 )
  {
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1644), 0xFFFFDFFF);
    v9 = *(void **)(a1 + 2496);
    *(_DWORD *)(a1 + 2440) = 0;
    if ( v9 )
      ExFreePoolWithTag(v9, 0x64334855u);
    memset((void *)(a1 + 2472), 0, 0x68uLL);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = *(_DWORD *)(a1 + 32);
      WPP_RECORDER_SF_qd(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x11u,
        (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids,
        a1,
        v14);
    }
    if ( Microsoft_Windows_USB_USBHUB3EnableBits < 0 )
      McTemplateK0p_EtwWriteTransfer(
        v10,
        &USBHUB3_ETW_EVENT_DEVICE_ENUMERATION_RETRY,
        (const GUID *)(a1 + 1524),
        *(_QWORD *)(a1 + 24));
    v11 = *(_QWORD *)(a1 + 8);
    if ( (*(_DWORD *)(*(_QWORD *)v11 + 2608LL) & 0x2000) != 0 )
    {
      v7 = v11 + 272;
      v8 = "HubHwVerifierDeviceEnumerationRetry";
      goto LABEL_16;
    }
  }
  else
  {
    v2 = 4089;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = v4;
      WPP_RECORDER_SF_qd(
        *(_QWORD *)(v3 + 1432),
        2u,
        5u,
        0x10u,
        (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids,
        a1,
        v13);
    }
    if ( Microsoft_Windows_USB_USBHUB3EnableBits < 0 )
      McTemplateK0p_EtwWriteTransfer(
        v5,
        &USBHUB3_ETW_EVENT_DEVICE_ENUMERATION_MAXIMUM_RETRY_COUNT_REACHED,
        (const GUID *)(a1 + 1524),
        *(_QWORD *)(a1 + 24));
    v6 = *(_QWORD *)(a1 + 8);
    if ( (*(_DWORD *)(*(_QWORD *)v6 + 2608LL) & 0x1000) != 0 )
    {
      v7 = v6 + 272;
      v8 = "HubHwVerifierDeviceFailedEnumeration";
LABEL_16:
      HUBMISC_VerifierDbgBreak(v8, v7);
    }
  }
  return v2;
}
