/*
 * XREFs of ??$ExperienceManager_PopulateDelayLoadedContactCard_SkipDueToCookieUnmatch@AEAU_GUID@@AEAU1@@ExperienceManager_PopulateDelayLoadedContactCard@QuickConnectTelemetry@@QEAAXAEAU_GUID@@0@Z @ 0x18038F540
 * Callers:
 *     ?PopulateDelayLoadedContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@PEAUIContact@Contacts@ApplicationModel@Windows@@@Z @ 0x180392DA0 (-PopulateDelayLoadedContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@PEAUIContact@Contac.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18007E240 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?Provider@QuickConnectLoggingProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x180392EA4 (-Provider@QuickConnectLoggingProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall QuickConnectTelemetry::ExperienceManager_PopulateDelayLoadedContactCard::ExperienceManager_PopulateDelayLoadedContactCard_SkipDueToCookieUnmatch<_GUID &,_GUID &>(
        __int64 a1,
        __int128 *a2,
        __int128 *a3)
{
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // rcx
  __int128 v8; // xmm0
  __int64 v9; // r8
  __int128 v10; // xmm1
  __int128 v12; // [rsp+30h] [rbp-78h] BYREF
  __int128 v13; // [rsp+40h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+50h] [rbp-58h] BYREF
  __int128 *v15; // [rsp+70h] [rbp-38h]
  __int64 v16; // [rsp+78h] [rbp-30h]
  __int128 *v17; // [rsp+80h] [rbp-28h]
  __int64 v18; // [rsp+88h] [rbp-20h]

  v6 = QuickConnectLoggingProvider::Provider();
  if ( *(_DWORD *)v6 > 5u )
  {
    LOBYTE(v6) = tlgKeywordOn((__int64)v6, 0x200000000000LL);
    if ( (_BYTE)v6 )
    {
      v8 = *a3;
      v9 = *(_QWORD *)(a1 + 272);
      v10 = *a2;
      v17 = &v12;
      v18 = 16LL;
      v15 = &v13;
      v16 = 16LL;
      v12 = v8;
      v13 = v10;
      LOBYTE(v6) = tlgWriteTransfer_EventWriteTransfer(v7, byte_1807F6DB5, (const GUID *)(v9 + 8), 0LL, 4u, &v14);
    }
  }
  return (char)v6;
}
