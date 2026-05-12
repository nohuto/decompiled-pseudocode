/*
 * XREFs of RaidAdapterPowerDownDeviceCompletion @ 0x14004B660
 * Callers:
 *     <none>
 * Callees:
 *     GetRaidAdapter @ 0x140010A8C (GetRaidAdapter.c)
 *     WPP_SF_qqD @ 0x14005BAF8 (WPP_SF_qqD.c)
 *     WPP_SF_qq @ 0x14006F514 (WPP_SF_qq.c)
 *     McTemplateK0qpd_EtwWriteTransfer @ 0x14007E3EC (McTemplateK0qpd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterPowerDownDeviceCompletion(__int64 a1, __int64 a2)
{
  PEX_RUNDOWN_REF_CACHE_AWARE *RaidAdapter; // rax
  PEX_RUNDOWN_REF_CACHE_AWARE *v4; // rdi
  int v5; // edx
  int v6; // ecx
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF

  RaidAdapter = (PEX_RUNDOWN_REF_CACHE_AWARE *)GetRaidAdapter(a1);
  v4 = RaidAdapter;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(
      WPP_GLOBAL_Control->AttachedDevice,
      25LL,
      &WPP_1c5ab61e0b3334897529fa80e10aa52d_Traceguids,
      RaidAdapter,
      a2);
  }
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  if ( StorEtwLoggingEnabled )
  {
    v8 = 0LL;
    IoGetActivityIdIrp(a2, &v8);
    if ( (byte_140173442 & 0x10) != 0 )
      McTemplateK0qpd_EtwWriteTransfer(v6, v5, (unsigned int)&v8, *((_DWORD *)v4 + 14), a2, *(_DWORD *)(a2 + 48));
  }
  ExReleaseRundownProtectionCacheAware(v4[42]);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      26LL,
      &WPP_1c5ab61e0b3334897529fa80e10aa52d_Traceguids,
      v4,
      a2,
      *(_DWORD *)(a2 + 48));
  }
  return 0LL;
}
