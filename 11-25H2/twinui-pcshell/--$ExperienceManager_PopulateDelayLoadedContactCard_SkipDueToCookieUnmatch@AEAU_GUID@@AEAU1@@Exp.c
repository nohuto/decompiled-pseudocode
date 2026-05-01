/*
 * XREFs of ??$ExperienceManager_PopulateDelayLoadedContactCard_SkipDueToCookieUnmatch@AEAU_GUID@@AEAU1@@ExperienceManager_PopulateDelayLoadedContactCard@QuickConnectTelemetry@@QEAAXAEAU_GUID@@0@Z @ 0x18038842C
 * Callers:
 *     ?PopulateDelayLoadedContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@PEAUIContact@Contacts@ApplicationModel@Windows@@@Z @ 0x18038BC10 (-PopulateDelayLoadedContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@PEAUIContact@Contac.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18008EEEC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?Provider@QuickConnectLoggingProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18038BD14 (-Provider@QuickConnectLoggingProvider@@SAPEBU_tlgProvider_t@@XZ.c)
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
  int v16; // [rsp+78h] [rbp-30h]
  int v17; // [rsp+7Ch] [rbp-2Ch]
  __int128 *v18; // [rsp+80h] [rbp-28h]
  int v19; // [rsp+88h] [rbp-20h]
  int v20; // [rsp+8Ch] [rbp-1Ch]

  v6 = QuickConnectLoggingProvider::Provider();
  if ( *(_DWORD *)v6 > 5u )
  {
    LOBYTE(v6) = tlgKeywordOn((__int64)v6, 0x200000000000LL);
    if ( (_BYTE)v6 )
    {
      v8 = *a3;
      v9 = *(_QWORD *)(a1 + 272);
      v10 = *a2;
      v20 = 0;
      v17 = 0;
      v18 = &v12;
      v19 = 16;
      v15 = &v13;
      v16 = 16;
      v12 = v8;
      v13 = v10;
      LOBYTE(v6) = tlgWriteTransfer_EventWriteTransfer(v7, byte_1807C3882, (const GUID *)(v9 + 8), 0LL, 4u, &v14);
    }
  }
  return (char)v6;
}
